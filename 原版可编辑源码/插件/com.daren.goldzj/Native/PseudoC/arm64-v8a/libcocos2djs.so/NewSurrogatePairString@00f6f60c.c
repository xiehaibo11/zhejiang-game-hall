
/* v8::internal::Factory::NewSurrogatePairString(unsigned short, unsigned short) */

void __thiscall
v8::internal::Factory::NewSurrogatePairString(Factory *this,ushort param_1,ushort param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)NewRawTwoByteString(this,2,0);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    *(ushort *)(lVar2 + 0xb) = param_1;
    *(ushort *)(lVar2 + 0xd) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

