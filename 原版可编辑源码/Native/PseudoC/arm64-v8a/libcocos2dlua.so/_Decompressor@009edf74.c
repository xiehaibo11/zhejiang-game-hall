
/* universe::Decompressor::~Decompressor() */

void __thiscall universe::Decompressor::~Decompressor(Decompressor *this)

{
                    /* try { // try from 009edf84 to 00aedf97 has its CatchHandler @ 009edfdc */
  ~Decompressor(this);
  operator_delete(this);
  return;
}

