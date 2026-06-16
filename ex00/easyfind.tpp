/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafahfou <yafahfou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 00:00:00 by yafahfou          #+#    #+#             */
/*   Updated: 2026/06/16 00:00:00 by yafahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::iterator easyfind(T &arr, int element)
{
    typename T::iterator it = std::find(arr.begin(), arr.end(), element);
    if (it == arr.end())
        throw NotFoundException();
    return it;
}
