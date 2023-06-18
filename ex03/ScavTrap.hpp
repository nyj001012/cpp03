/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:07:40 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 22:04:24 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX01_SCAVTRAP_HPP_
#define CPP03_EX01_SCAVTRAP_HPP_

# include <iostream>
# include "ClapTrap.hpp"

/**
 * @brief ScavTrap class
 * @inherit ClapTrap
 */
class ScavTrap : public virtual ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &object);
  ScavTrap &operator=(const ScavTrap &ref);
  ~ScavTrap(void);
  void attack(const std::string &target);
  void guardGate(void);
};

#endif //CPP03_EX01_SCAVTRAP_HPP_
