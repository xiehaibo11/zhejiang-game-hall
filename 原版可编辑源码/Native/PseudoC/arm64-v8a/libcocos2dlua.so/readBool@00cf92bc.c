
/* cocosbuilder::CCBReader::readBool() */

bool __thiscall cocosbuilder::CCBReader::readBool(CCBReader *this)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(this + 0x38) + (long)*(int *)(this + 0x40));
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return cVar1 != '\0';
}

