
/* v8::internal::Translation::StoreJSFrameFunction() */

void __thiscall v8::internal::Translation::StoreJSFrameFunction(Translation *this)

{
  uchar local_8 [4];
  uchar local_4 [4];
  
  local_8[0] = 'H';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_8);
  local_4[0] = '\f';
  ZoneChunkList<unsigned_char>::push_back(*(ZoneChunkList<unsigned_char> **)this,local_4);
  return;
}

