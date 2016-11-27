/*
 * Copyright 2016 ewized. All Rights Reserved.
 */

#include "logger.h"

#ifdef LOGGER

#include <iostream>
#include <string>

/** Log a string to somewhere */
void log(std::string message) {
  std::cout << message << std::endl;
}

#endif
