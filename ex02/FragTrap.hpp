/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yena <yena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 10:25:04 by yena              #+#    #+#             */
/*   Updated: 2023/06/18 21:02:20 by yena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP03_EX02_FRAGTRAP_HPP_
#define CPP03_EX02_FRAGTRAP_HPP_

# include "ClapTrap.hpp"
# include <iostream>

/**
 * @brief FragTrap class
 * @inherit ClapTrap
 */
class FragTrap : public ClapTrap {
 private:

 public:
  FragTrap(void);
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &object);
  FragTrap &operator=(const FragTrap &ref);
  ~FragTrap(void);
  void highFivesGuys(void);
};

#endif //CPP03_EX02_FRAGTRAP_HPP_
