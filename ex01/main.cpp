#include "Serializer.hpp"

int main() 
{
    Data originalData(42);
    uintptr_t serializedData = Serializer::serialize(&originalData);
    Data* deserializedData = Serializer::deserialize(serializedData);
    
    std::cout << std::endl;
    if (deserializedData == &originalData) {
        std::cout << "Serialization and deserialization worked as expected. Value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
    std::cout << std::endl;

    return 0;
}