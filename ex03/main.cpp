/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:11:07 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 22:21:06 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
  std::cout << "------------ constructor a ------------" << std::endl;
  DiamondTrap a("a");
  std::cout << std::endl;
  std::cout << "------------ constructor b ------------" << std::endl;
  DiamondTrap b("b");
  std::cout << std::endl;
  std::cout << "------------ constructor c ------------" << std::endl;
  DiamondTrap c(a);
  std::cout << std::endl;
  std::cout << "------------ constructor d ------------" << std::endl;
  DiamondTrap d;
  d = b;
  std::cout << std::endl;
  std::cout << "---------------- result ---------------" << std::endl;
  std::cout << "\033[0;36mDiamondTrap\033[0m a's name: "
            << a.getName() << std::endl;
  std::cout << "\033[0;36mDiamondTrap\033[0m b's name: "
            << b.getName() << std::endl;
  std::cout << "\033[0;36mDiamondTrap\033[0m c's name: "
            << c.getName() << std::endl;
  std::cout << "\033[0;36mDiamondTrap\033[0m d's name: "
            << d.getName() << std::endl;
  std::cout << std::endl;
  std::cout << "------------------ ex03 ------------------" << std::endl;
  a.whoAmI();
  b.whoAmI();
  c.whoAmI();
  d.whoAmI();
  std::cout << std::endl;
  std::cout << "--------------- destructor ---------------" << std::endl;
  return (0);
}
