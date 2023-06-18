/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:25:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 10:39:08 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
  std::cout << "\033[0;35mFragTrap\033[0m Default constructor called"
            << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  std::cout << "\033[0;35mFragTrap\033[0m Parameterised constructor called"
            << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object) {
  std::cout << "\033[0;35mFragTrap\033[0m Copy constructor called"
            << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref) {
  std::cout << "\033[0;35mFragTrap\033[0m Assignation operator called"
            << std::endl;
  ClapTrap::operator=(ref);
  return (*this);
}

FragTrap::~FragTrap(void) {
  std::cout << "\033[0;35mFragTrap\033[0m " << this->getName()
            << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  if (this->isUnconscious())
    return ;
  std::cout << "\033[0;35mFragTrap\033[0m " << this->getName()
            << " let's high five!" << std::endl;
}
