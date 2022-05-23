#include <iostream>
#include <string>
#include "Room.h"
#include "Exhibit.h"
#include "Picture.h"
#include "VoluminousExhibit.h"
#include "Sculpture.h"
#include "Technics.h"
#include "HouseholdItem.h"

int main() {

    try
    {
        Picture p ("UK", 1345, 35, 45);

    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() <<std::endl;
    }

    return 0;
}