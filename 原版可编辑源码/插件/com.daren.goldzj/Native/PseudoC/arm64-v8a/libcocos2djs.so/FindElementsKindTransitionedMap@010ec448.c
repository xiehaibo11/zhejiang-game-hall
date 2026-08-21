
/* v8::internal::Map::FindElementsKindTransitionedMap(v8::internal::Isolate*,
   std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > > const&) */

ulong v8::internal::Map::FindElementsKindTransitionedMap(Isolate *param_1,vector *param_2)

{
  bool bVar1;
  vector vVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  long *in_x2;
  undefined8 in_x4;
  vector *pvVar6;
  vector *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  vector *local_98;
  vector *local_90;
  undefined8 local_88;
  vector *local_80;
  vector *local_78;
  int local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar6 = *(vector **)param_1;
  if ((*(uint *)(pvVar6 + 0xb) >> 0x14 & 1) == 0) {
    vVar2 = pvVar6[10];
    uVar13 = 0;
    if ((0x2f < (byte)vVar2) || ((byte)vVar2 >> 3 == 3)) goto LAB_010ec568;
    bVar1 = (byte)vVar2 < 0x28 && ((byte)vVar2 & 8) == 0;
LAB_010ec4d4:
    do {
      local_98 = pvVar6;
      pvVar6 = param_2 + *(uint *)(local_98 + 0x13);
      if ((((ulong)pvVar6 & 1) == 0) ||
         (*(short *)(((ulong)param_2 | 7) + (ulong)*(uint *)(pvVar6 + -1)) != 0xa2)) {
        pvVar7 = *(vector **)(param_2 + 0xa0);
        pvVar6 = pvVar7;
        if (((ulong)pvVar7 & 1) == 0) goto LAB_010ec4d4;
      }
      else {
        pvVar7 = *(vector **)(param_2 + 0xa0);
      }
    } while ((int)pvVar6 != (int)pvVar7);
    uVar13 = EquivalentToForTransition((Map *)param_1);
    if ((uVar13 & 1) != 0) {
      local_98 = (vector *)LookupElementsTransitionMap((Map *)&local_98,param_2,(byte)vVar2 >> 3);
      local_88 = 0;
      local_78 = param_2 + *(uint *)(local_98 + 0x23);
      if ((((ulong)local_78 & 1) == 0) || ((int)local_78 == 3)) {
        local_70 = 1;
      }
      else if (((ulong)local_78 & 3) == 1) {
        uVar13 = (ulong)local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar13 + *(uint *)(local_78 + -1)) == 0x98) {
          local_70 = 4;
        }
        else if (*(short *)(uVar13 + *(uint *)(local_78 + -1)) == 100) {
          local_70 = 0;
        }
        else {
          local_70 = 2;
        }
      }
      else {
        local_80 = local_98;
        if (((ulong)local_78 & 3) != 3) {
LAB_010ec7b8:
          local_88 = 0;
          local_90 = param_2;
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_70 = 3;
      }
      local_90 = param_2;
      local_80 = local_98;
      pvVar6 = (vector *)
               TransitionsAccessor::SearchSpecial
                         ((TransitionsAccessor *)&local_90,*(undefined8 *)(param_2 + 0xb48));
      uVar13 = 0;
      iVar14 = (int)pvVar6;
      while ((local_98 = pvVar6, iVar14 != 0 && ((byte)pvVar6[10] < 0x30))) {
        plVar10 = (long *)*in_x2;
        if (plVar10 != (long *)in_x2[1]) {
LAB_010ec620:
          if (((long *)*plVar10 == (long *)0x0) ||
             (7 < (*(byte *)(*(long *)*plVar10 + 10) ^ (byte)pvVar6[10]))) goto LAB_010ec614;
          uVar12 = TryReplayPropertyTransitions((Map *)&local_98,param_2,*(undefined8 *)param_1);
          if ((int)uVar12 == 0) goto LAB_010ec71c;
          iVar14 = 0;
          uVar8 = (ulong)(*(uint *)(uVar12 + 0xb) >> 10) & 0x3ff;
          if ((int)uVar8 != 0) {
            puVar11 = (uint *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0x17)) +
                              0x13);
            do {
              uVar8 = uVar8 - 1;
              iVar14 = ((*puVar11 >> 2 ^ 0xffffffff) & 1) + iVar14;
              puVar11 = puVar11 + 3;
            } while (uVar8 != 0);
          }
          uVar8 = InstancesNeedRewriting
                            ((Map *)param_1,uVar12,iVar14,
                             (uint)*(byte *)(uVar12 + 3) - (uint)*(byte *)(uVar12 + 4),in_x4,
                             &local_90);
          if ((uVar8 & 1) == 0) {
            puVar9 = (undefined8 *)*in_x2;
            if (puVar9 == (undefined8 *)in_x2[1]) goto LAB_010ec71c;
            do {
              if (((int *)*puVar9 != (int *)0x0) && (*(int *)*puVar9 == (int)uVar12)) {
                bVar3 = *(byte *)(uVar12 + 10);
                bVar5 = (bVar3 & 8) == 0;
                uVar8 = uVar13;
                if (bVar3 >= 0x28 || !bVar5) {
                  uVar8 = uVar12;
                }
                uVar13 = uVar12;
                if (!bVar1) {
                  uVar13 = uVar8;
                }
                bVar1 = (bool)(bVar1 & (bVar3 < 0x28 && bVar5));
                break;
              }
              puVar9 = puVar9 + 1;
            } while ((undefined8 *)in_x2[1] != puVar9);
          }
        }
LAB_010ec71c:
        local_88 = 0;
        local_78 = param_2 + *(uint *)(pvVar6 + 0x23);
        iVar14 = 1;
        local_80 = pvVar6;
        if ((((ulong)local_78 & 1) != 0) && ((int)local_78 != 3)) {
          uVar12 = (ulong)local_78 & 3;
          iVar14 = (int)uVar12;
          if (uVar12 != 3) {
            if (uVar12 != 1) goto LAB_010ec7b8;
            uVar12 = (ulong)local_78 & 0xffffffff00000000 | 7;
            if (*(short *)(uVar12 + *(uint *)(local_78 + -1)) == 0x98) {
              iVar14 = 4;
            }
            else {
              iVar14 = (uint)(*(short *)(uVar12 + *(uint *)(local_78 + -1)) != 100) << 1;
            }
          }
        }
        local_70 = iVar14;
        local_90 = param_2;
        pvVar6 = (vector *)
                 TransitionsAccessor::SearchSpecial
                           ((TransitionsAccessor *)&local_90,*(undefined8 *)(param_2 + 0xb48));
        iVar14 = (int)pvVar6;
      }
      goto LAB_010ec568;
    }
  }
  uVar13 = 0;
LAB_010ec568:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_010ec614:
  plVar10 = plVar10 + 1;
  if ((long *)in_x2[1] == plVar10) goto LAB_010ec71c;
  goto LAB_010ec620;
}

