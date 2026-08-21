
/* v8::internal::HeapObject::CanBeRehashed() const */

bool __thiscall v8::internal::HeapObject::CanBeRehashed(HeapObject *this)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  bVar2 = false;
  switch(*(undefined2 *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 7)) {
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7f:
  case 0x80:
  case 0x98:
  case 0x9c:
    return true;
  default:
    goto switchD_0110bbac_caseD_7c;
  case 0x92:
  case 0x93:
    cVar1 = *(char *)(uVar3 + 3);
    break;
  case 0x94:
    cVar1 = *(char *)(uVar3 + 7);
  }
  bVar2 = cVar1 == '\0';
switchD_0110bbac_caseD_7c:
  return bVar2;
}

