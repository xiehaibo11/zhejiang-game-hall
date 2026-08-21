
/* dragonBones::BinaryDataParser::~BinaryDataParser() */

void __thiscall dragonBones::BinaryDataParser::~BinaryDataParser(BinaryDataParser *this)

{
  JSONDataParser::~JSONDataParser((JSONDataParser *)this);
  operator_delete(this);
  return;
}

