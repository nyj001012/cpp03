/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:11:07 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 10:04:39 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap a("a");
  ClapTrap b("b");

  std::cout << "\033[0;32mClapTrap\033[0m a's name: "
            << a.getName() << std::endl;
  std::cout << "\033[0;32mClapTrap\033[0m b's name: "
            << b.getName() << std::endl;
  a.setAttackDamage(6);
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  b.beRepaired(3);
  a.setAttackDamage(20);
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  b.beRepaired(3);
  return (0);
}
