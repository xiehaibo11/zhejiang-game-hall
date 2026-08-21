
/* cocostudio::stExpCocoNode::GetName(cocostudio::CocoLoader*) */

char * __thiscall cocostudio::stExpCocoNode::GetName(stExpCocoNode *this,CocoLoader *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  
  if ((long)*(short *)this < 0) {
    if (-1 < *(short *)(this + 2)) {
      return (char *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                     (ulong)*(uint *)(this + 0xc));
    }
LAB_00c6ed40:
    pcVar2 = (char *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                     (ulong)*(uint *)(this + 8));
    iVar1 = strcmp(pcVar2,"null");
    if ((iVar1 == 0) && (iVar1 = GetType(this,param_1), iVar1 == 5)) {
      *pcVar2 = '\0';
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (-1 < (long)*(short *)(this + 2)) {
      return (char *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                     (ulong)*(uint *)(*(long *)(param_1 + 0x18) +
                                      (ulong)*(uint *)(*(long *)param_1 + 0x4c) +
                                      (ulong)*(uint *)(lVar3 + (long)*(short *)this * 0xc + 8) +
                                      (long)*(short *)(this + 2) * 8 + 4));
    }
    pcVar2 = (char *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                     (ulong)*(uint *)(this + 8));
    iVar1 = strcmp(pcVar2,"null");
    if ((iVar1 == 0) && (iVar1 = GetType(this,param_1), iVar1 == 5)) {
      *pcVar2 = '\0';
    }
    else if (*pcVar2 != '\0') goto LAB_00c6ed40;
    pcVar2 = (char *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
                     (ulong)*(uint *)(lVar3 + (long)*(short *)this * 0xc + 4));
  }
  return pcVar2;
}

