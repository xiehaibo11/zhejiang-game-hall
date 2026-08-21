
/* v8::internal::CompiledReplacement::Compile(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int,
   int) */

undefined8 __thiscall
v8::internal::CompiledReplacement::Compile
          (CompiledReplacement *this,Factory *param_1,ulong *param_3,long *param_4,int param_5,
          undefined4 param_6)

{
  ulong uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  Zone *pZVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  long local_70 [2];
  
  local_70[0] = *param_4;
  auVar20 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)local_70);
  if (param_5 < 1) {
LAB_0157bc64:
    uVar7 = 0;
  }
  else {
    uVar8 = *param_3 & 0xffffffff00000000;
    uVar19 = *(uint *)((uVar8 | *(uint *)(*param_3 + 0xb)) + 0x2b);
    if ((uVar19 & 1) == 0) goto LAB_0157bc64;
    uVar7 = uVar8 | uVar19;
    if (0xe < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) - 0x76) {
      uVar7 = 0;
    }
  }
  if (auVar20._8_8_ >> 0x20 == 1) {
    bVar5 = ParseReplacementPattern<unsigned_char_const>();
  }
  else {
    bVar5 = ParseReplacementPattern<unsigned_short_const>
                      (this,this,auVar20._0_8_,(long)auVar20._8_4_,uVar7,param_5,param_6);
  }
  if (bVar5) {
    return 1;
  }
  puVar17 = *(uint **)(this + 0x10);
  puVar18 = *(uint **)(this + 0x18);
  if (puVar18 == (uint *)0x0) {
    uVar8 = 0;
    puVar18 = puVar17;
  }
  else {
    uVar8 = (ulong)puVar18[1];
    if (puVar18[1] == *puVar18) {
      puVar18 = *(uint **)(puVar18 + 2);
      uVar8 = 0;
    }
    if (puVar18 != puVar17) goto LAB_0157bcfc;
  }
  if (uVar8 == 0) {
    return 0;
  }
LAB_0157bcfc:
  uVar19 = 0;
  uVar7 = 0;
  do {
    puVar2 = puVar17 + uVar7 * 2 + 6;
    uVar4 = *puVar2;
    if ((int)uVar4 < 1) {
      puVar15 = puVar2 + 1;
      if ((uVar4 != 0) || (plVar6 = param_4, *(uint *)(*param_4 + 7) != *puVar15)) {
        plVar6 = (long *)Factory::NewProperSubString(param_1,param_4,-uVar4);
      }
      puVar11 = *(undefined8 **)(this + 0x28);
      if (puVar11 < *(undefined8 **)(this + 0x30)) {
        *puVar11 = plVar6;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
      }
      else {
        lVar16 = (long)puVar11 - *(long *)(this + 0x20) >> 3;
        uVar1 = lVar16 + 1;
        if (uVar1 >> 0x1c != 0) {
LAB_0157bf70:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar9 = (long)*(undefined8 **)(this + 0x30) - *(long *)(this + 0x20);
        uVar13 = lVar9 >> 2;
        if (uVar1 <= uVar13) {
          uVar1 = uVar13;
        }
        if (0x7fffffe < (ulong)(lVar9 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar9 = 0;
        }
        else {
          pZVar10 = *(Zone **)(this + 0x38);
          uVar13 = uVar1 * 8;
          lVar9 = *(long *)(pZVar10 + 0x10);
          if (uVar13 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar9) ||
              uVar13 - (*(long *)(pZVar10 + 0x18) - lVar9) == 0) {
            *(ulong *)(pZVar10 + 0x10) = lVar9 + uVar13;
          }
          else {
            lVar9 = Zone::NewExpand(pZVar10,uVar13);
          }
        }
        puVar11 = (undefined8 *)(lVar9 + lVar16 * 8);
        puVar12 = puVar11 + 1;
        *puVar11 = plVar6;
        puVar3 = *(undefined8 **)(this + 0x20);
        puVar14 = *(undefined8 **)(this + 0x28);
        while (puVar14 != puVar3) {
          puVar14 = puVar14 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar14;
        }
        *(undefined8 **)(this + 0x20) = puVar11;
        *(undefined8 **)(this + 0x28) = puVar12;
        *(ulong *)(this + 0x30) = lVar9 + uVar1 * 8;
      }
      *puVar2 = 4;
LAB_0157bf00:
      *puVar15 = uVar19;
      uVar19 = uVar19 + 1;
    }
    else if (uVar4 == 5) {
      puVar11 = *(undefined8 **)(this + 0x28);
      if (puVar11 == *(undefined8 **)(this + 0x30)) {
        lVar16 = (long)puVar11 - *(long *)(this + 0x20) >> 3;
        uVar1 = lVar16 + 1;
        if (uVar1 >> 0x1c != 0) goto LAB_0157bf70;
        lVar9 = (long)*(undefined8 **)(this + 0x30) - *(long *)(this + 0x20);
        uVar13 = lVar9 >> 2;
        if (uVar1 <= uVar13) {
          uVar1 = uVar13;
        }
        if (0x7fffffe < (ulong)(lVar9 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar9 = 0;
        }
        else {
          pZVar10 = *(Zone **)(this + 0x38);
          uVar13 = uVar1 * 8;
          lVar9 = *(long *)(pZVar10 + 0x10);
          if (uVar13 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar9) ||
              uVar13 - (*(long *)(pZVar10 + 0x18) - lVar9) == 0) {
            *(ulong *)(pZVar10 + 0x10) = lVar9 + uVar13;
          }
          else {
            lVar9 = Zone::NewExpand(pZVar10,uVar13);
          }
        }
        puVar11 = (undefined8 *)(lVar9 + lVar16 * 8);
        puVar12 = puVar11 + 1;
        *puVar11 = param_4;
        puVar3 = *(undefined8 **)(this + 0x20);
        puVar14 = *(undefined8 **)(this + 0x28);
        while (puVar14 != puVar3) {
          puVar14 = puVar14 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar14;
        }
        *(undefined8 **)(this + 0x20) = puVar11;
        *(undefined8 **)(this + 0x28) = puVar12;
        *(ulong *)(this + 0x30) = lVar9 + uVar1 * 8;
      }
      else {
        *puVar11 = param_4;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
      }
      puVar15 = puVar17 + uVar7 * 2 + 7;
      goto LAB_0157bf00;
    }
    uVar7 = uVar7 + 1;
    if (*puVar17 <= uVar7) {
      puVar17 = *(uint **)(puVar17 + 2);
      uVar7 = 0;
    }
    if ((puVar18 == puVar17) && (uVar8 == uVar7)) {
      return 0;
    }
  } while( true );
}

