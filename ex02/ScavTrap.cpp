/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:07:40 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 10:39:18 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
  std::cout << "\033[0;33mScavTrap\033[0m Default constructor called"
            << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "\033[0;33mScavTrap\033[0m Name constructor called"
            << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) {
  std::cout << "\033[0;33mScavTrap\033[0m Copy constructor called"
            << std::endl;
  *this = object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref) {
  std::cout << "\033[0;33mScavTrap\033[0m Assignation operator called"
            << std::endl;
  ClapTrap::operator=(ref);
  return (*this);
}

ScavTrap::~ScavTrap(void) {
  std::cout << "\033[0;33mScavTrap\033[0m " << this->getName()
            << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  std::cout << "\033[0;33mScavTrap\033[0m " << this->getName() << " attacks "
            << target << ", causing " << this->getAttackDamage()
            << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) {
  if (this->isUnconscious())
    return ;
  std::cout << "\033[0;33mScavTrap\033[0m " << this->getName()
            << " activated gate keeper mode" << std::endl;
}
