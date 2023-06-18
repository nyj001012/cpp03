/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:43:32 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 22:16:55 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_trap"), ScavTrap(), FragTrap() {
  std::cout << "\033[0;36mDiamondTrap\033[0m Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
  std::cout << "\033[0;36mDiamondTrap\033[0m Parameterised constructor called" << std::endl;
  this->_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) {
  std::cout << "\033[0;36mDiamondTrap\033[0m Copy constructor called" << std::endl;
  *this = object;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref) {
  std::cout << "\033[0;36mDiamondTrap\033[0m Assignation operator called" << std::endl;
  this->_name = ref._name;
  this->_hit_points = ref._hit_points;
  this->_energy_points = ref._energy_points;
  this->_attack_damage = ref._attack_damage;
  FragTrap::operator=(ref);
  ScavTrap::operator=(ref);
  return (*this);
}

DiamondTrap::~DiamondTrap(void) {
  std::cout << "\033[0;36mDiamondTrap\033[0m " << this->_name << " is destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
  std::cout << "I am \033[0;36m" << this->_name << "\033[0m inherited from "
            << "\033[0;32m" << ClapTrap::_name << "\033[0m" << std::endl;
}

std::string DiamondTrap::getName(void) const {
  return (this->_name);
}

unsigned int DiamondTrap::getHitPoints(void) const {
  return (FragTrap::getHitPoints());
}

unsigned int DiamondTrap::getEnergyPoints(void) const {
  return (FragTrap::getEnergyPoints());
}

unsigned int DiamondTrap::getAttackDamage(void) const {
  return (FragTrap::getAttackDamage());
}

void DiamondTrap::setHitPoints(unsigned int hit_points) {
  FragTrap::setHitPoints(hit_points);
}

void DiamondTrap::setEnergyPoints(unsigned int energy_points) {
  FragTrap::setEnergyPoints(energy_points);
}

void DiamondTrap::setAttackDamage(unsigned int attack_damage) {
  FragTrap::setAttackDamage(attack_damage);
}
