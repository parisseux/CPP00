/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:48:00 by pchatagn          #+#    #+#             */
/*   Updated: 2025/05/20 14:58:04 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
                av[i][j] = toupper(av[i][j]);
            cout << av[i];
            if (av[i + 1])
                cout << " ";
        }
        cout << "\n";
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    return (0);
}