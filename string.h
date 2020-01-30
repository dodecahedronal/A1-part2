// lang::CwC
// this was modified from Jan Vitek's utility String class
#pragma once
#include <string.h>
#include "object.h"

class String : public Object {
public:
  char *str_;
  int size_;

  String() {}

  String(const char *s) {}

  String(const String &s) {}

  ~String() {}

  // equal virtual method that's defined in object.h
  bool equals(Object *o) {}

  String *concat(String *s) {}

  size_t hash() {}

  // toString virtual method that's defined in object.h
  virtual const char *toString() {}
};
