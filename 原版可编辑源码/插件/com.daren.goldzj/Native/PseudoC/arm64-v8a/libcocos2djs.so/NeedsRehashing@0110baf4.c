
/* v8::internal::HeapObject::NeedsRehashing() const */

bool __thiscall v8::internal::HeapObject::NeedsRehashing(HeapObject *this)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  switch(*(undefined2 *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7)) {
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7f:
  case 0x80:
  case 0x92:
  case 0x93:
  case 0x94:
    return true;
  default:
    return false;
  case 0x7c:
  case 0x7d:
    iVar1 = *(int *)(uVar2 + 7);
    break;
  case 0x98:
    if (*(int *)(uVar2 + 3) < 4) {
      return false;
    }
    return 3 < *(int *)(uVar2 + 0xb);
  case 0x9c:
    iVar1 = (int)*(short *)(uVar2 + 5);
  }
  return 1 < iVar1;
}

