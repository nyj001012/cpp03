/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:22:15 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 09:42:43 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
  std::cout << "\033[0;32mClapTrap\033[0m Default constructor called"
            << std::endl;
  this->_hit_points = 10;
  this->_energy_points = 10;
  this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name) {
  std::cout << "\033[0;32mClapTrap\033[0m Parameterised constructor called"
            << std::endl;
  this->_name = name;
  this->_hit_points = 10;
  this->_energy_points = 10;
  this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &object) {
  std::cout << "\033[0;32mClapTrap\033[0m Copy constructor called"
            << std::endl;
  *this = object;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref) {
  std::cout << "\033[0;32mClapTrap\033[0m Assignation operator called"
            << std::endl;
  this->_name = ref._name;
  this->_hit_points = ref._hit_points;
  this->_energy_points = ref._energy_points;
  this->_attack_damage = ref._attack_damage;
  return (*this);
}

ClapTrap::~ClapTrap(void) {
  std::cout << "\033[0;32mClapTrap\033[0m " << this->_name
            << " is destroyed" << std::endl;
}

std::string ClapTrap::getName(void) const {
  return (this->_name);
}

/**
 * claptrap attacks target.
 * @param target
 */
void ClapTrap::attack(const std::string &target) {
  if (this->isUnconscious()) {
    std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
              << " is dead" << std::endl;
    return;
  }
  std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
            << " attacks " << target.getName()
            << ", causing " << this->_attack_damage
            << " points of damage!" << std::endl;
  target.takeDamage(this->_attack_damage);
  this->_energy_points--;
}

/**
 * take damage from enemy.
 * @param amount
 */
void ClapTrap::takeDamage(unsigned int amount) {
  if (this->isUnconscious()) {
    std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
              << " is dead" << std::endl;
    return;
  }
  std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
            << " takes " << amount
            << " points of damage!" << std::endl;
  this->_hit_points -= amount;
}

/**
 * be repaired.
 * @param amount
 */
void ClapTrap::beRepaired(unsigned int amount) {
  if (this->isUnconscious()) {
    std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
              << " is dead" << std::endl;
    return;
  }
  std::cout << "\033[0;32mClapTrap\033[0m" << this->_name
            << " is repaired " << amount
            << " points of damage!" << std::endl;
  this->_hit_points += amount;
  this->_energy_points--;
}

/**
 * check if the object is unconscious.
 * @return
 */
bool ClapTrap::isUnconscious(void) const {
  if (this->_hit_points <= 0 || this->_energy_points <= 0)
    return (true);
  return (false);
}
