
/* v8::internal::BreakIterator::GetDebugBreakType() */

long __thiscall v8::internal::BreakIterator::GetDebugBreakType(BreakIterator *this)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(this + 0x38) +
          (**(ulong **)this & 0xffffffff00000000 | (ulong)*(uint *)(**(ulong **)this + 0xf));
  bVar1 = *(byte *)(lVar2 + 0x21);
  if (bVar1 < 4) {
    bVar1 = *(byte *)(lVar2 + 0x22);
  }
  lVar2 = 1;
  switch(bVar1) {
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 99:
  case 0x65:
  case 0x66:
    lVar2 = 3;
switchD_00f05e58_caseD_b3:
    return lVar2;
  default:
    return (ulong)(byte)this[0x48] << 1;
  case 0xab:
    return 4;
  case 0xb0:
    return 5;
  case 0xb3:
    goto switchD_00f05e58_caseD_b3;
  }
}

