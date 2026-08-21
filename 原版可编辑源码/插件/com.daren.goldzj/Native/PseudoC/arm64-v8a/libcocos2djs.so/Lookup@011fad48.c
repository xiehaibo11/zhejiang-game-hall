
/* v8::internal::RootIndexMap::Lookup(unsigned long, v8::internal::RootIndex*) const */

undefined8 __thiscall
v8::internal::RootIndexMap::Lookup(RootIndexMap *this,ulong param_1,RootIndex *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = **(long **)this;
  uVar1 = (int)(*(long **)this)[1] - 1;
  uVar4 = (ulong)(uVar1 & (uint)param_1);
  lVar5 = lVar3 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x10) != '\0') && (*(ulong *)(lVar3 + uVar4 * 0x18) != param_1)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar3 + uVar4 * 0x18) != param_1);
    lVar5 = lVar3 + uVar4 * 0x18;
  }
  uVar2 = 0;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    uVar2 = 1;
    *(short *)param_2 = (short)*(undefined4 *)(lVar5 + 8);
  }
  return uVar2;
}

