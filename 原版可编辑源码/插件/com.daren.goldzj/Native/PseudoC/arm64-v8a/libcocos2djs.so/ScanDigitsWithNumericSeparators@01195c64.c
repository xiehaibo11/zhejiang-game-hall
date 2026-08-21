
/* v8::internal::Scanner::ScanDigitsWithNumericSeparators(bool (*)(int), bool) */

undefined8 __thiscall
v8::internal::Scanner::ScanDigitsWithNumericSeparators
          (Scanner *this,_func_bool_int *param_1,bool param_2)

{
  LiteralBuffer *this_00;
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if ((!param_2) || (bVar3 = (*param_1)(*(int *)(this + 0x20)), bVar3)) {
    uVar5 = *(uint *)(this + 0x20);
    bVar3 = false;
    do {
      while( true ) {
        bVar4 = (*param_1)(uVar5);
        iVar1 = *(int *)(this + 0x20);
        if (!bVar4) break;
        if (iVar1 == 0x5f) goto LAB_01195d00;
        lVar12 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar12 + 8);
        if (*(char *)(lVar12 + 0x1c) == '\0') {
LAB_01195d3c:
          LiteralBuffer::AddTwoByteChar(this_00,iVar1);
        }
        else {
          if (0xff < iVar1) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_01195d3c;
          }
          iVar7 = *(int *)(lVar12 + 0x18);
          if (*(int *)(lVar12 + 0x10) <= iVar7) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar7 = *(int *)(lVar12 + 0x18);
          }
          *(char *)(*(long *)(lVar12 + 8) + (long)iVar7) = (char)iVar1;
          *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
        }
        plVar10 = *(long **)(this + 0x18);
        plVar11 = plVar10 + 2;
        puVar8 = (ushort *)*plVar11;
        if (puVar8 < (ushort *)plVar10[3]) {
LAB_01195d60:
          uVar5 = (uint)*puVar8;
          bVar3 = false;
        }
        else {
          if ((char)plVar10[6] == '\0') {
            uVar6 = (**(code **)(*plVar10 + 0x28))(plVar10);
            puVar8 = (ushort *)plVar10[2];
            if ((uVar6 & 1) != 0) goto LAB_01195d60;
          }
          bVar3 = false;
          uVar5 = 0xffffffff;
        }
LAB_01195d68:
        *plVar11 = (long)(puVar8 + 1);
        *(uint *)(this + 0x20) = uVar5;
      }
      if (iVar1 != 0x5f) {
        if (!bVar3) {
          return 1;
        }
        if (*(int *)(this + 0x15c) != 0) {
          return 0;
        }
        lVar12 = *(long *)(this + 0x18);
        uVar9 = 0xd6;
        goto LAB_01195e10;
      }
LAB_01195d00:
      plVar10 = *(long **)(this + 0x18);
      plVar11 = plVar10 + 2;
      puVar8 = (ushort *)*plVar11;
      if ((ushort *)plVar10[3] <= puVar8) {
        if ((char)plVar10[6] == '\0') {
          uVar6 = (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar8 = (ushort *)plVar10[2];
          if ((uVar6 & 1) != 0) goto LAB_01195d18;
        }
        bVar3 = true;
        uVar5 = 0xffffffff;
        goto LAB_01195d68;
      }
LAB_01195d18:
      uVar2 = *puVar8;
      uVar5 = (uint)uVar2;
      bVar3 = true;
      *plVar11 = (long)(puVar8 + 1);
      *(uint *)(this + 0x20) = (uint)uVar2;
    } while (uVar2 != 0x5f);
    if (*(int *)(this + 0x15c) == 0) {
      lVar12 = *(long *)(this + 0x18);
      uVar9 = 0xd7;
LAB_01195e10:
      lVar12 = *(long *)(lVar12 + 0x20) +
               ((ulong)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8)) >> 1);
      *(undefined4 *)(this + 0x15c) = uVar9;
      *(ulong *)(this + 0x160) = (ulong)((int)lVar12 - 1) | lVar12 << 0x20;
      return 0;
    }
  }
  return 0;
}

