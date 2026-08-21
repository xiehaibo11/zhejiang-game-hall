
/* int v8::internal::Scanner::ScanUnlimitedLengthHexNumber<false>(int, int) */

int __thiscall
v8::internal::Scanner::ScanUnlimitedLengthHexNumber<false>(Scanner *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  long *plVar9;
  
  uVar6 = *(int *)(this + 0x20) - 0x30;
  if (9 < uVar6) {
    if (5 < (uVar6 | 0x20) - 0x31) {
      return -1;
    }
    uVar6 = (uVar6 | 0x20) - 0x27;
    if ((int)uVar6 < 0) {
      return -1;
    }
  }
  iVar8 = 0;
  do {
    plVar9 = *(long **)(this + 0x18);
    iVar8 = uVar6 + iVar8 * 0x10;
    if (param_1 < iVar8) {
      if (*(int *)(this + 0x15c) == 0) {
        lVar1 = plVar9[1];
        lVar2 = plVar9[2];
        lVar4 = plVar9[4];
        *(undefined4 *)(this + 0x15c) = 0x150;
        *(ulong *)(this + 0x160) = CONCAT44((int)((ulong)(lVar2 - lVar1) >> 1) + (int)lVar4,param_2)
        ;
      }
      return -1;
    }
    puVar7 = (ushort *)plVar9[2];
    if ((ushort *)plVar9[3] <= puVar7) {
      if ((char)plVar9[6] != '\0') {
LAB_01198648:
        plVar9[2] = (long)(puVar7 + 1);
        *(undefined4 *)(this + 0x20) = 0xffffffff;
        return iVar8;
      }
      uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9);
      puVar7 = (ushort *)plVar9[2];
      if ((uVar5 & 1) == 0) goto LAB_01198648;
    }
    uVar3 = *puVar7;
    plVar9[2] = (long)(puVar7 + 1);
    uVar6 = uVar3 - 0x30;
    *(uint *)(this + 0x20) = (uint)uVar3;
    if (9 < uVar6) {
      if (5 < (uVar6 | 0x20) - 0x31) {
        return iVar8;
      }
      uVar6 = (uVar6 | 0x20) - 0x27;
    }
    if ((int)uVar6 < 0) {
      return iVar8;
    }
  } while( true );
}

