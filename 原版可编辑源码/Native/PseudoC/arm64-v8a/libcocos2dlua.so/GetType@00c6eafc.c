
/* cocostudio::stExpCocoNode::GetType(cocostudio::CocoLoader*) */

uint __thiscall cocostudio::stExpCocoNode::GetType(stExpCocoNode *this,CocoLoader *param_1)

{
  char *__s1;
  short sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  sVar1 = *(short *)(this + 2);
  if ((long)*(short *)this < 0) {
    if (sVar1 < 0) {
      return 4;
    }
    if (1 < (byte)this[4] - 1) {
      return (uint)(byte)this[4];
    }
    lVar4 = *(long *)(param_1 + 0x18);
    uVar3 = *(uint *)(*(long *)param_1 + 0x54);
  }
  else {
    if (sVar1 < 0) {
      return 3;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    iVar2 = (int)*(char *)(lVar4 + (ulong)*(uint *)(*(long *)param_1 + 0x4c) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0x10) + (long)*(short *)this * 0xc +
                                           8) + (long)sVar1 * 8);
    if (1 < iVar2 - 0x4fU) {
      return iVar2 - 0x4e;
    }
    uVar3 = *(uint *)(*(long *)param_1 + 0x54);
  }
  __s1 = (char *)(lVar4 + (ulong)uVar3 + (ulong)*(uint *)(this + 8));
  iVar2 = strcmp(__s1,"null");
  if ((iVar2 == 0) && (iVar2 = GetType(this,param_1), iVar2 == 5)) {
    *__s1 = '\0';
  }
  uVar3 = 1;
  if (*__s1 != '0') {
    uVar3 = 2;
  }
  return uVar3;
}

