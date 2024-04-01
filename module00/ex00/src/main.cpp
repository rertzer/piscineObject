/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:25:34 by rertzer           #+#    #+#             */
/*   Updated: 2024/04/01 15:42:07 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"
#include "Account.hpp"

int	main()
{
	Bank	myPrivateBank;

	int	account_id = myPrivateBank.createAccount();
	std::cout << "account id: " << account_id << std::endl;
	account_id = myPrivateBank.createAccount();
	std::cout << "account id: " << account_id << std::endl;
}
