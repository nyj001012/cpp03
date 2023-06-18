/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:11:07 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 10:40:47 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
  FragTrap a("a");
  FragTrap b("b");

  std::cout << "\033[0;32mClapTrap\033[0m a's name: "
            << a.getName() << std::endl;
  std::cout << "\033[0;32mClapTrap\033[0m b's name: "
            << b.getName() << std::endl;
  std::cout << "------------------ ex00 ------------------" << std::endl;
  a.setAttackDamage(6);
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  b.beRepaired(3);
  a.setAttackDamage(20);
  a.attack(b.getName());
  b.takeDamage(a.getAttackDamage());
  b.beRepaired(3);
  std::cout << "------------------ ex02 ------------------" << std::endl;
  b.highFivesGuys();
  a.highFivesGuys();
  return (0);
}
