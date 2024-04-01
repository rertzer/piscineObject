/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:34:12 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/01 15:07:58 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>

class	Account
{
	public:
		Account();
		~Account();

		int const &		getId() const;
		int const & 	getValue() const;
		void			credit(int amount);

	private:
		Account(Account const & acc);
		void	operator=(Account const & acc);

		int			id;
		int			value;
		static int	id_counter;
};

std::ostream &	operator<<(std::ostream & os, Account const & account);

#endif
