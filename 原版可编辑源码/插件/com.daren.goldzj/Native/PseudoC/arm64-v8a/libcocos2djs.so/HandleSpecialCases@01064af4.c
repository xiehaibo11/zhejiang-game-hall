
/* v8::internal::NumberParseIntHelper::HandleSpecialCases() */

void __thiscall v8::internal::NumberParseIntHelper::HandleSpecialCases(NumberParseIntHelper *this)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  ushort *puVar6;
  uchar *puVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  ulong local_180 [39];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(this + 0x20);
  bVar1 = (int)uVar2 < 1;
  bVar5 = (uVar2 & uVar2 - 1) != 0;
  if ((uVar2 != 10) && (bVar1 || bVar5)) goto LAB_01064c98;
  puVar7 = *(uchar **)(this + 0x18);
  if (puVar7 == (uchar *)0x0) {
    local_180[0] = **(ulong **)(this + 0x10);
    uVar10 = local_180[0];
    while( true ) {
      uVar3 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7);
      if ((uVar3 & 9) == 0) break;
      if ((uVar3 & 9) == 8) {
        puVar7 = (uchar *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_180);
        goto joined_r0x01064bd4;
      }
      uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
    }
    puVar6 = (ushort *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_180);
    if (bVar1 || bVar5) {
      iVar8 = 0;
      puVar6 = puVar6 + *(int *)(this + 0x24);
      lVar11 = (long)*(int *)(this + 0x28) * 2 + (long)*(int *)(this + 0x24) * -2;
      do {
        if (9 < *puVar6 - 0x30) break;
        if (iVar8 < 0x136) {
          *(char *)((long)local_180 + (long)iVar8) = (char)*puVar6;
          iVar8 = iVar8 + 1;
        }
        lVar11 = lVar11 + -2;
        puVar6 = puVar6 + 1;
      } while (lVar11 != 0);
      goto LAB_01064c74;
    }
    dVar12 = HandlePowerOfTwoCase<unsigned_short_const*>(this,puVar6);
  }
  else {
joined_r0x01064bd4:
    if (bVar1 || bVar5) {
      iVar8 = 0;
      pbVar9 = puVar7 + *(int *)(this + 0x24);
      lVar11 = (long)*(int *)(this + 0x28) - (long)*(int *)(this + 0x24);
      do {
        if (9 < *pbVar9 - 0x30) break;
        if (iVar8 < 0x136) {
          *(byte *)((long)local_180 + (long)iVar8) = *pbVar9;
          iVar8 = iVar8 + 1;
        }
        lVar11 = lVar11 + -1;
        pbVar9 = pbVar9 + 1;
      } while (lVar11 != 0);
LAB_01064c74:
      *(undefined1 *)((long)local_180 + (long)iVar8) = 0;
      dVar12 = (double)Strtod((internal *)local_180,(long)iVar8,0);
    }
    else {
      dVar12 = HandlePowerOfTwoCase<unsigned_char_const*>(this,puVar7);
    }
  }
  *(double *)(this + 0x38) = dVar12;
  *(undefined4 *)(this + 0x34) = 5;
LAB_01064c98:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

