
/* LuaMinXmlHttpRequest::getByteData(unsigned char*) const */

void __thiscall LuaMinXmlHttpRequest::getByteData(LuaMinXmlHttpRequest *this,uchar *param_1)

{
  LuaMinXmlHttpRequest *__src;
  
  if (((byte)this[0x70] & 1) == 0) {
    __src = this + 0x71;
  }
  else {
    __src = *(LuaMinXmlHttpRequest **)(this + 0x80);
  }
  memcpy(param_1,__src,*(size_t *)(this + 0x88));
  return;
}

