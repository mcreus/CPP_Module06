#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cctype>
# include <cstdlib>
# include <cstdio>
# include <sstream>

class ScalarConverter
{
    public:

        static void		convert(std::string const &str);

    private:

        ScalarConverter();
        ScalarConverter(ScalarConverter const &other);
        ~ScalarConverter();
        ScalarConverter	&operator=(ScalarConverter const &);
        static void		convertChar(std::string const &str);
        static void		convertInt(std::string const &str);
        static void		convertFloat(std::string const &str);
        static void 	convertDouble(std::string const &str);
        static int      checkDigit(std::string const &str);
};

#endif