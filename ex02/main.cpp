/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:20:28 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/25 17:33:51 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
        int num = rand() % 100;

        if (num > 50)
                return (new A);
        else if (num > 25)
                return (new B);
        return (new C);
}

void identify(Base *p)
{
        if (dynamic_cast<A*>(p) != NULL)
                std::cout << "A" << std::endl;
        if (dynamic_cast<B*>(p) != NULL)
                std::cout << "B" << std::endl;
        if (dynamic_cast<C*>(p) != NULL)
                std::cout << "C" << std::endl;
        if (p == NULL)
                std::cout << "POINTEUR NULL" << std::endl;
}

void identify(Base &p)
{
        if (dynamic_cast<A*>(&p) != NULL)
                std::cout << "A" << std::endl;
        if (dynamic_cast<B*>(&p) != NULL)
                std::cout << "B" << std::endl;
        if (dynamic_cast<C*>(&p) != NULL)
                std::cout << "C" << std::endl;
}

int main()
{
        srand(time(NULL));
        int i = 0;
        while (i < 10)
        {
                std::cout << "Test :" << i + 1 << std::endl;
                Base *ptr = generate();
                std::cout << "identify_from_pointer: ";
                identify(ptr);
                std::cout << std::endl << "identify_from_reference: ";
                identify(*ptr);
                std::cout << std::endl;
                std::cout << std::endl;
                i++;
        }
        return (0);
}