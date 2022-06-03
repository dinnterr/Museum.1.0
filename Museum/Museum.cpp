#include "Museum.h"

Museum::~Museum() {
    for (auto room: m_rooms){
        delete room;
    }
    for (auto exhibit: m_exhibits){
        delete exhibit;
    }
}

void Museum::addRoom(Room *room) {
    m_rooms.push_back(room);
}

void Museum::removeRoom(int pos) {
    if (pos > m_rooms.size() || pos <= 0)
    {
        throw std::invalid_argument("Wrong number.");
    }
    else
    {
        m_rooms.erase(m_rooms.begin() + pos - 1);
    }
}

void Museum::addExhibit(Exhibit *exhibit) {
    m_exhibits.push_back(exhibit);
}

void Museum::removeExhibit(int pos) {
    if (pos > m_exhibits.size() || pos <= 0)
    {
        throw std::invalid_argument("Wrong number.");
    }
    else
    {
        m_exhibits.erase(m_exhibits.begin() + pos - 1);
    }
}


void Museum::printExhibits() const
{
    int i = 1;
    for (const auto& exhibit : m_exhibits)
    {
        std::cout << i++ << ' ' << std::setprecision(2) << exhibit->Info() << std::endl;
    }
}

void Museum::place(Exhibit *exhibit, Room *room) {
    exhibit->place(room);
}

void Museum::place(Picture *picture, Room *room) {
    picture->place(room);
}

void Museum::place(VoluminousExhibit *v_exhibit, Room *room) {
    v_exhibit->place(room);
}
