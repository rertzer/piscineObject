/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:34:12 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/09 14:18:03 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <exception>

class	Account
{
	public:
		Account();
		~Account();

		int const &		getId() const;
		int const & 	getValue() const;
		void			credit(int amount);

		class	IdException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Error: Invalid Account Id");
				}
		};

	private:
		Account(Account const & acc);
		void	operator=(Account const & acc);

		int			id;
		int			value;
		static int	id_counter;
};

std::ostream &	operator<<(std::ostream & os, Account const & account);

#endif
