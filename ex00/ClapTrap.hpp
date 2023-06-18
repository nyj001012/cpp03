/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:22:15 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 09:37:52 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX00_CLAPTRAP_HPP_
#define CPP03_EX00_CLAPTRAP_HPP_

/**
 * @brief ClapTrap class
 */
class ClapTrap {
 private:
  std::string _name;
  int _hit_points;
  int _energy_points;
  int _attack_damage;

 public:
  ClapTrap(void);
  ClapTrap(const std::string &name);
  ClapTrap(const ClapTrap &object);
  ClapTrap &operator=(const ClapTrap &ref);
  ~ClapTrap(void);
  std::string getName(void) const;
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  bool isDead(void) const;
};

#endif //CPP03_EX00_CLAPTRAP_HPP_
