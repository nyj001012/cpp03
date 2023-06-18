/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:43:32 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 21:34:46 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX03_DIAMONDTRAP_HPP_
#define CPP03_EX03_DIAMONDTRAP_HPP_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/**
 * @brief DiamondTrap class
 * @inherit ScavTrap, FragTrap
 */
class DiamondTrap : public ScavTrap, public FragTrap {
 private:
  std::string _name;

 public:
  DiamondTrap(void);
  DiamondTrap(const std::string &name);
  DiamondTrap(const DiamondTrap &object);
  DiamondTrap &operator=(const DiamondTrap &ref);
  virtual ~DiamondTrap(void);
  void attack(const std::string &target);
  void whoAmI(void);
  std::string getName(void) const;
  unsigned int getHitPoints(void) const;
  unsigned int getEnergyPoints(void) const;
  unsigned int getAttackDamage(void) const;
  void setHitPoints(unsigned int amount);
  void setEnergyPoints(unsigned int amount);
  void setAttackDamage(unsigned int amount);
};

#endif //CPP03_EX03_DIAMONDTRAP_HPP_
