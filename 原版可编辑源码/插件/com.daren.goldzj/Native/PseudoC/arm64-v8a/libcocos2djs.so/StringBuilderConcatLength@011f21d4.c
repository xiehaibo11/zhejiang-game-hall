
/* v8::internal::StringBuilderConcatLength(int, v8::internal::FixedArray, int, bool*) */

int v8::internal::StringBuilderConcatLength(int param_1,ulong param_2,int param_3,char *param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  if (param_3 < 1) {
    return 0;
  }
  iVar3 = 0;
  iVar4 = 0;
  uVar5 = param_2 & 0xffffffff00000000 | 7;
  do {
    uVar6 = *(uint *)(param_2 + 7 + (long)(iVar4 << 2));
    if ((uVar6 & 1) == 0) {
      if ((int)uVar6 < 2) {
        iVar4 = iVar4 + 1;
        if (param_3 <= iVar4) {
          return -1;
        }
        uVar1 = *(uint *)(param_2 + 7 + (long)(iVar4 * 4));
        if ((uVar1 & 1) != 0) {
          return -1;
        }
        if ((int)uVar1 < 0) {
          return -1;
        }
        uVar6 = -((int)uVar6 >> 1);
        uVar1 = (int)uVar1 >> 1;
      }
      else {
        uVar1 = (uint)((int)uVar6 >> 1) >> 0xb;
        uVar6 = uVar6 >> 1 & 0x7ff;
      }
      if (param_1 < (int)uVar1) {
        return -1;
      }
      if ((int)(param_1 - uVar1) < (int)uVar6) {
        return -1;
      }
    }
    else {
      uVar2 = param_2 & 0xffffffff00000000 | (ulong)uVar6;
      if (0x3f < *(ushort *)(uVar5 + *(uint *)(uVar2 - 1))) {
        return -1;
      }
      uVar6 = *(uint *)(uVar2 + 7);
      if ((*param_4 != '\0') && ((*(byte *)(uVar5 + *(uint *)(uVar2 - 1)) >> 3 & 1) == 0)) {
        *param_4 = '\0';
      }
    }
    if (0xffffff0 - iVar3 < (int)uVar6) {
      return 0x7fffffff;
    }
    iVar3 = uVar6 + iVar3;
    iVar4 = iVar4 + 1;
    if (param_3 <= iVar4) {
      return iVar3;
    }
  } while( true );
}

