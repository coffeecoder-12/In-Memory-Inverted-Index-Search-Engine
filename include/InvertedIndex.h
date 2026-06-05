#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include "Document.h"

class InvertedIndex{
    private:
        std::unordered_map<std::string, std::vector<int>> index;
        std::vector<Document> documents;
    
    public:

};

