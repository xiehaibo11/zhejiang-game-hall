
/* v8::internal::Translation::ArgumentsElements(v8::internal::CreateArgumentsType) */

void __thiscall v8::internal::Translation::ArgumentsElements(Translation *this,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ZoneChunkList<unsigned_char> *this_00;
  uchar local_28 [4];
  byte local_24 [4];
  
  local_28[0] = ' ';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_28);
  this_00 = *(ZoneChunkList<unsigned_char> **)this;
  uVar2 = (param_2 & 0xff) << 1;
  do {
    uVar1 = uVar2 >> 7;
    local_24[0] = uVar1 != 0 | (byte)(uVar2 << 1);
    ZoneChunkList<unsigned_char>::push_back(this_00,local_24);
    uVar2 = uVar1;
  } while (uVar1 != 0);
  return;
}

