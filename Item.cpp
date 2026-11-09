

Item::Item(char id, std::string name) {
    this->id = id;
    this->name = name;
}

char Item::getId() {

}
std::string Item::getName(char id) {
    if(id == "x") {
        return "key";
    } else {
        return "N/A";
    }
    
}