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
        void add_document(int doc_id, const std::string& text);
        std::vector<int> search(const std::string& query);
};

