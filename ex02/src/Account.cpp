#include "Account.hpp"

static int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}


static int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

static int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
   
}