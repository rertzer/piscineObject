/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:06:05 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/01 15:58:51 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
# define BANK_HPP

# include <iostream>
# include <vector>
# include "Account.hpp"

class	Bank
{
	public:
		Bank();
		~Bank();
		int	createAccount();
		int deleteAccount(int id);
		int	creditAccount(int id, int amount);
		int	debitAccount(int id, int amount);
		int giveLoan(int id, int amount);
		int const & getAccountValue(int id) const;
		int	const & getLiquidity() const;
		std::ostream &	getAccountInfo(int id) const;
		std::ostream &	getAllAccountsInfo() const;



	private:
		Bank(Bank const & bk);
		void	operator=(Bank const & bk);
		Account*	getAccount(int id);

		int	liquidity;
		std::vector<Account*> client_accounts;
};

std::ostream &	operator<<(std::ostream & os, Bank const & bank);

#endif
