
/* XMLHttpRequest::setHttpRequestData(char const*, unsigned long) */

void __thiscall XMLHttpRequest::setHttpRequestData(XMLHttpRequest *this,char *param_1,ulong param_2)

{
  ulong uVar1;
  XMLHttpRequest XVar2;
  int iVar3;
  XMLHttpRequest *pXVar4;
  
  if (param_2 != 0) {
    XVar2 = this[0x1c8];
    uVar1 = (ulong)((byte)XVar2 >> 1);
    if (((byte)XVar2 & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x1d0);
    }
    if (uVar1 == 3) {
      pXVar4 = *(XMLHttpRequest **)(this + 0x1d8);
      if (((byte)XVar2 & 1) == 0) {
        pXVar4 = this + 0x1c9;
      }
      iVar3 = memcmp(pXVar4,"put",3);
      if ((iVar3 == 0) || (iVar3 = memcmp(pXVar4,"PUT",3), iVar3 == 0)) {
LAB_008f95c0:
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::assign<char_const*>
                  ((vector<char,std::__ndk1::allocator<char>> *)(*(long *)(this + 0x250) + 0x28),
                   param_1,param_1 + param_2);
        return;
      }
    }
    else if (uVar1 == 4) {
      pXVar4 = *(XMLHttpRequest **)(this + 0x1d8);
      if (((byte)XVar2 & 1) == 0) {
        pXVar4 = this + 0x1c9;
      }
      if ((*(int *)pXVar4 == 0x74736f70) || (*(int *)pXVar4 == 0x54534f50)) goto LAB_008f95c0;
    }
  }
  return;
}

