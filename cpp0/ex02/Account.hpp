// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );//V
	static int	getTotalAmount( void );//V
	static int	getNbDeposits( void );//V
	static int	getNbWithdrawals( void );//V
	static void	displayAccountsInfos( void );//V

	Account( int initial_deposit );//V
	~Account( void );//V

	void	makeDeposit( int deposit );//V
	bool	makeWithdrawal( int withdrawal );//V
	int		checkAmount( void ) const;//V
	void	displayStatus( void ) const;//V


private:

	static int	_nbAccounts;//V
	static int	_totalAmount;//V
	static int	_totalNbDeposits;//V
	static int	_totalNbWithdrawals;//V

	static void	_displayTimestamp( void );//V

	int				_accountIndex;//V
	int				_amount;//V
	int				_nbDeposits;//V
	int				_nbWithdrawals;//V

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
