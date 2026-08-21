
/* tinyobj::MaterialFileReader::~MaterialFileReader() */

void __thiscall tinyobj::MaterialFileReader::~MaterialFileReader(MaterialFileReader *this)

{
  *(undefined ***)this = &PTR__MaterialFileReader_016d3cd8;
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

