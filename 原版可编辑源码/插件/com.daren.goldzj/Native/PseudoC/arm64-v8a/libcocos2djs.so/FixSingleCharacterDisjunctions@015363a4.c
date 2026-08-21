
/* v8::internal::RegExpDisjunction::FixSingleCharacterDisjunctions(v8::internal::RegExpCompiler*) */

void __thiscall
v8::internal::RegExpDisjunction::FixSingleCharacterDisjunctions
          (RegExpDisjunction *this,RegExpCompiler *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  uint uVar12;
  Zone *this_00;
  undefined8 *puVar13;
  undefined4 uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  
  plVar17 = *(long **)(this + 8);
  uVar2 = *(uint *)((long)plVar17 + 0xc);
  if ((int)uVar2 < 1) {
    uVar21 = 0;
  }
  else {
    this_00 = *(Zone **)(param_1 + 0x448);
    uVar21 = 0;
    uVar18 = 0;
    do {
      while( true ) {
        lVar16 = (long)(int)uVar18;
        plVar15 = *(long **)(*plVar17 + (long)(int)uVar18 * 8);
        uVar6 = (**(code **)(*plVar15 + 0xa0))(plVar15);
        iVar20 = (int)uVar21;
        if (((uVar6 & 1) != 0) &&
           (lVar7 = (**(code **)(*plVar15 + 0x98))(plVar15), *(int *)(lVar7 + 0x10) == 1)) break;
        *(undefined8 *)(*plVar17 + (long)iVar20 * 8) = *(undefined8 *)(*plVar17 + lVar16 * 8);
        uVar21 = (ulong)(iVar20 + 1);
        uVar18 = uVar18 + 1;
LAB_0153641c:
        if ((int)uVar2 <= (int)uVar18) goto LAB_01536780;
      }
      uVar12 = uVar18 + 1;
      uVar19 = uVar12;
      if ((int)uVar2 <= (int)uVar12) {
LAB_01536604:
        bVar5 = (int)uVar18 < (int)uVar19;
        uVar18 = uVar19;
        if (bVar5) {
          uVar6 = -(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3;
          do {
            uVar21 = (ulong)((int)uVar21 + 1);
            lVar7 = lVar16 * 8;
            lVar16 = lVar16 + 1;
            *(undefined8 *)(*plVar17 + uVar6) = *(undefined8 *)(*plVar17 + lVar7);
            uVar6 = uVar6 + 8;
          } while ((int)uVar19 != lVar16);
        }
        goto LAB_0153641c;
      }
      uVar3 = *(uint *)(lVar7 + 0x18);
      uVar6 = (ulong)(int)uVar12;
      bVar5 = **(ushort **)(lVar7 + 8) >> 10 == 0x37;
      uVar1 = uVar18;
      do {
        uVar1 = uVar1 + 1;
        plVar15 = *(long **)(*plVar17 + uVar6 * 8);
        uVar8 = (**(code **)(*plVar15 + 0xa0))(plVar15);
        uVar19 = uVar1;
        if ((((uVar8 & 1) == 0) ||
            (lVar7 = (**(code **)(*plVar15 + 0x98))(plVar15), *(int *)(lVar7 + 0x10) != 1)) ||
           (*(uint *)(lVar7 + 0x18) != uVar3)) break;
        uVar6 = uVar6 + 1;
        bVar5 = (bool)(bVar5 | **(ushort **)(lVar7 + 8) >> 10 == 0x37);
        uVar19 = uVar2;
      } while (uVar2 != uVar6);
      if ((int)uVar19 <= (int)uVar12) goto LAB_01536604;
      plVar15 = *(long **)(this_00 + 0x10);
      lVar7 = *(long *)(this_00 + 0x18);
      if ((ulong)(lVar7 - (long)plVar15) < 0x10) {
        plVar15 = (long *)Zone::NewExpand(this_00,0x10);
        plVar9 = *(long **)(this_00 + 0x10);
        lVar7 = *(long *)(this_00 + 0x18);
      }
      else {
        plVar9 = plVar15 + 2;
        *(long **)(this_00 + 0x10) = plVar9;
      }
      if ((ulong)(lVar7 - (long)plVar9) < 0x10) {
        plVar9 = (long *)Zone::NewExpand(this_00,0x10);
      }
      else {
        *(long **)(this_00 + 0x10) = plVar9 + 2;
      }
      *plVar15 = (long)plVar9;
      plVar15[1] = 2;
      if (0 < (int)(uVar19 - uVar18)) {
        uVar21 = (ulong)(uVar19 - uVar18);
        lVar16 = lVar16 << 3;
        do {
          lVar7 = (**(code **)(**(long **)(*plVar17 + lVar16) + 0x98))();
          uVar18 = *(uint *)(plVar15 + 1);
          uVar12 = *(uint *)((long)plVar15 + 0xc);
          uVar4 = **(ushort **)(lVar7 + 8);
          if ((int)uVar12 < (int)uVar18) {
            pvVar11 = (void *)*plVar15;
          }
          else {
            uVar1 = uVar18 << 1 | 1;
            uVar6 = -(ulong)((uVar18 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3
            ;
            pvVar11 = *(void **)(this_00 + 0x10);
            if ((ulong)(*(long *)(this_00 + 0x18) - (long)pvVar11) < uVar6) {
              pvVar11 = (void *)Zone::NewExpand(this_00,uVar6);
            }
            else {
              *(ulong *)(this_00 + 0x10) = (long)pvVar11 + uVar6;
            }
            uVar12 = *(uint *)((long)plVar15 + 0xc);
            if (0 < (int)uVar12) {
              MemCopy(pvVar11,(void *)*plVar15,(ulong)uVar12 << 3);
              uVar12 = *(uint *)((long)plVar15 + 0xc);
            }
            *plVar15 = (long)pvVar11;
            *(uint *)(plVar15 + 1) = uVar1;
          }
          uVar21 = uVar21 - 1;
          lVar16 = lVar16 + 8;
          *(uint *)((long)plVar15 + 0xc) = uVar12 + 1;
          *(ulong *)((long)pvVar11 + (long)(int)uVar12 * 8) = (ulong)uVar4 | (ulong)uVar4 << 0x20;
        } while (uVar21 != 0);
      }
      puVar10 = *(undefined8 **)(this_00 + 0x10);
      uVar14 = 0;
      if (!(bool)((uVar3 & 0x10) == 0 | bVar5 ^ 1U)) {
        uVar14 = 2;
      }
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar10) < 0x20) {
        puVar10 = (undefined8 *)Zone::NewExpand(this_00,0x20);
      }
      else {
        *(undefined8 **)(this_00 + 0x10) = puVar10 + 4;
      }
      *(undefined2 *)(puVar10 + 2) = 0;
      *puVar10 = &PTR__RegExpTree_01cc7550;
      puVar10[1] = plVar15;
      *(uint *)(puVar10 + 3) = uVar3;
      *(undefined4 *)((long)puVar10 + 0x1c) = uVar14;
      if (*(int *)((long)plVar15 + 0xc) == 0) {
        uVar18 = *(uint *)(plVar15 + 1);
        if ((int)uVar18 < 1) {
          uVar12 = uVar18 << 1 | 1;
          uVar21 = -(ulong)((uVar18 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar12 << 3
          ;
          pvVar11 = *(void **)(this_00 + 0x10);
          if ((ulong)(*(long *)(this_00 + 0x18) - (long)pvVar11) < uVar21) {
            pvVar11 = (void *)Zone::NewExpand(this_00,uVar21);
          }
          else {
            *(ulong *)(this_00 + 0x10) = (long)pvVar11 + uVar21;
          }
          uVar18 = *(uint *)((long)plVar15 + 0xc);
          if (0 < (int)uVar18) {
            MemCopy(pvVar11,(void *)*plVar15,(ulong)uVar18 << 3);
            uVar18 = *(uint *)((long)plVar15 + 0xc);
          }
          puVar13 = (undefined8 *)((long)pvVar11 + (long)(int)uVar18 * 8);
          *plVar15 = (long)pvVar11;
          *(uint *)(plVar15 + 1) = uVar12;
          *(uint *)((long)plVar15 + 0xc) = uVar18 + 1;
        }
        else {
          puVar13 = (undefined8 *)*plVar15;
          *(undefined4 *)((long)plVar15 + 0xc) = 1;
        }
        *puVar13 = 0x10ffff00000000;
        *(uint *)((long)puVar10 + 0x1c) = *(uint *)((long)puVar10 + 0x1c) ^ 1;
      }
      *(undefined8 **)(*plVar17 + (long)iVar20 * 8) = puVar10;
      uVar21 = (ulong)(iVar20 + 1);
      uVar18 = uVar19;
    } while ((int)uVar19 < (int)uVar2);
  }
LAB_01536780:
  *(int *)((long)plVar17 + 0xc) = (int)uVar21;
  return;
}

