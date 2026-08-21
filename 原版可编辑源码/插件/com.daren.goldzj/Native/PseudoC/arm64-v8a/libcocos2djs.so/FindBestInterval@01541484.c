
/* v8::internal::BoyerMooreLookahead::FindBestInterval(int, int, int*, int*) */

int __thiscall
v8::internal::BoyerMooreLookahead::FindBestInterval
          (BoyerMooreLookahead *this,int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  int iVar12;
  ulong local_80 [2];
  ulong local_70;
  ulong local_68;
  
  iVar2 = *(int *)this;
  if (0 < iVar2) {
    iVar11 = 0;
    iVar12 = iVar11;
    if (0 < iVar2) goto LAB_015414f0;
LAB_01541528:
    if (iVar12 != iVar2) {
      local_80[0] = 0;
      local_80[1] = 0;
      iVar11 = iVar12;
      if (iVar12 < iVar2) {
        local_80[1] = 0;
        local_80[0] = 0;
        lVar9 = (long)iVar2 - (long)iVar12;
        puVar8 = (undefined8 *)(**(long **)(this + 0x18) + (long)iVar12 * 8);
        iVar4 = iVar12;
        do {
          puVar10 = (ulong *)*puVar8;
          iVar11 = iVar4;
          if (param_1 < (int)puVar10[2]) break;
          iVar4 = iVar4 + 1;
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 1;
          local_80[0] = local_80[0] | *puVar10;
          local_80[1] = local_80[1] | puVar10[1];
          iVar11 = iVar2;
        } while (lVar9 != 0);
      }
      iVar2 = 0;
      if (local_80[0] == 0) goto LAB_015415b0;
LAB_015415a4:
      uVar3 = (local_80[0] & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_80[0] & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20);
      do {
        iVar4 = *(int *)(*(long *)(this + 8) + 0x43c);
        if (iVar4 < 1) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
          if (iVar4 != 0) {
            iVar7 = (*(int *)(*(long *)(this + 8) + uVar3 * 8 + 0x3c) << 7) / iVar4;
          }
        }
        if (0x7f < (uint)uVar3) {
LAB_015416cc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = uVar3 >> 3 & 0x18;
        *(ulong *)((long)local_80 + uVar6) =
             *(ulong *)((long)local_80 + uVar6) & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
        iVar2 = iVar2 + iVar7 + 1;
        if (local_80[0] != 0) goto LAB_015415a4;
LAB_015415b0:
        local_70 = 0;
        local_68 = local_80[1];
        std::__ndk1::bitset<128ul>::operator>>=((bitset<128ul> *)&local_70,0x40);
        if (local_68 != 0) goto LAB_015416cc;
        if (local_70 == 0) {
          if (iVar11 - iVar12 < 4) {
LAB_01541678:
            iVar4 = 0x40;
          }
          else {
            bVar1 = iVar12 < 3;
            if (*(char *)(*(long *)(this + 8) + 0x30) != '\0') {
              bVar1 = iVar12 < 5;
            }
            if (bVar1) goto LAB_01541678;
            iVar4 = 0x80;
          }
          iVar2 = (iVar4 - iVar2) * (iVar11 - iVar12);
          if (param_2 < iVar2) {
            *param_3 = iVar12;
            *param_4 = iVar11 + -1;
            param_2 = iVar2;
          }
          iVar2 = *(int *)this;
          if (iVar2 <= iVar11) {
            return param_2;
          }
          iVar12 = iVar11;
          if (iVar11 < iVar2) {
LAB_015414f0:
            lVar9 = (long)iVar2 - (long)iVar11;
            plVar5 = (long *)(**(long **)(this + 0x18) + (long)iVar11 * 8);
            while (iVar12 = iVar11, param_1 < *(int *)(*plVar5 + 0x10)) {
              iVar11 = iVar11 + 1;
              lVar9 = lVar9 + -1;
              plVar5 = plVar5 + 1;
              if (lVar9 == 0) {
                return param_2;
              }
            }
          }
          goto LAB_01541528;
        }
        uVar3 = (local_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_70 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar3 = (ulong)((int)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) + 0x40);
      } while( true );
    }
  }
  return param_2;
}

