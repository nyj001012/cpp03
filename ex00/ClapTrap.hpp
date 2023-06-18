/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:22:15 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 10:01:47 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX00_CLAPTRAP_HPP_
#define CPP03_EX00_CLAPTRAP_HPP_

# include <iostream>

/**
 * @brief ClapTrap class
 */
class ClapTrap {
 private:
  std::string _name;
  unsigned int _hit_points;
  unsigned int _energy_points;
  unsigned int _attack_damage;

 public:
  ClapTrap(void);
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &object);
  ClapTrap &operator=(const ClapTrap &ref);
  ~ClapTrap(void);
  std::string getName(void) const;
  unsigned int getAttackDamage(void) const;
  void setAttackDamage(unsigned int amount);
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool isUnconscious(void) const;
};

#endif //CPP03_EX00_CLAPTRAP_HPP_
