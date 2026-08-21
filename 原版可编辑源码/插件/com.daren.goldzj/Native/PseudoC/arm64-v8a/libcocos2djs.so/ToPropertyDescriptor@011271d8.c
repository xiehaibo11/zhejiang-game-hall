
/* v8::internal::PropertyDescriptor::ToPropertyDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDescriptor*) */

undefined8
v8::internal::PropertyDescriptor::ToPropertyDescriptor
          (Isolate *param_1,ulong *param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong *local_90;
  ulong *local_88;
  undefined8 *local_80;
  long local_78;
  long *local_70;
  undefined8 *local_68;
  
  uVar10 = *param_2;
  if ((uVar10 & 1) != 0) {
    uVar17 = uVar10 & 0xffffffff00000000;
    if (0xa8 < *(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar10 - 1))) {
      if (((0xa9 < *(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar10 - 1))) &&
          (uVar10 = uVar17 | *(uint *)(uVar10 - 1), *(short *)(uVar10 + 7) == 0x421)) &&
         ((*(byte *)(uVar10 + 9) >> 5 & 1) == 0)) {
        uVar1 = *(uint *)(uVar10 + 0xf);
        uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar16 = *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)
                                               ) + 0x13)) + 0x103);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(param_1 + 0x95a0);
          if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar11 | uVar16;
        }
        else {
          puVar6 = (undefined8 *)
                   CanonicalHandleScope::Lookup
                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11 | uVar16);
          uVar16 = (uint)*puVar6;
        }
        if ((uVar1 == uVar16) && (*(int *)(*(long *)(param_1 + 0x9508) + 8) == 0)) {
          iVar2 = *(int *)((uVar17 | *(uint *)(uVar10 + 0xf)) - 1);
          uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
          uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13)
          ;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(param_1 + 0x95a0);
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar11;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
            uVar11 = *puVar7;
          }
          if ((iVar2 == *(int *)(uVar11 + 0x1f7)) && ((*(uint *)(uVar10 + 0xb) >> 0x15 & 1) == 0)) {
            uVar11 = uVar17 | *(uint *)(uVar10 + 0x17);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)(param_1 + 0x95a0);
              if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
              *puVar7 = uVar11;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
            }
            uVar11 = (ulong)(*(uint *)(uVar10 + 0xb) >> 10) & 0x3ff;
            if ((int)uVar11 != 0) {
              lVar18 = 0;
              do {
                uVar13 = *puVar7;
                uVar16 = *(uint *)(lVar18 + uVar13 + 0x13);
                iVar2 = *(int *)(lVar18 + uVar13 + 0xf);
                if ((uVar16 >> 2 & 1) == 0) {
                  if ((uVar16 >> 1 & 1) != 0) goto LAB_01127658;
                  uVar1 = *(int *)((lVar18 + 0x13U | uVar17) + (ulong)*(uint *)(uVar10 + 0x17)) >> 1
                  ;
                  uVar4 = uVar1 >> 0x13 & 0x3ff;
                  iVar3 = (uint)*(byte *)(uVar10 + 3) - (uint)*(byte *)(uVar10 + 4);
                  if ((int)uVar4 < iVar3) {
                    uVar13 = (ulong)*(byte *)(uVar10 + 4) << 0x1c;
                    iVar15 = (uVar4 + *(byte *)(uVar10 + 4)) * 4;
                  }
                  else {
                    iVar15 = (uVar4 - iVar3) * 4 + 8;
                    uVar13 = 0x20000000;
                  }
                  uVar1 = uVar1 >> 6 & 7;
                  local_68 = (undefined8 *)CONCAT71(local_68._1_7_,(char)uVar1);
                  if (4 < uVar1) {
                    uVar9 = Representation::Mnemonic((Representation *)&local_68);
                    PrintF("%s\n",uVar9);
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  puVar8 = (ulong *)JSObject::FastPropertyAt
                                              (param_2,uVar16 >> 7 & 7,
                                               (ulong)((int)uVar4 < iVar3) << 0xd |
                                               (long)iVar3 << 0x10 | (long)iVar15 | uVar13 |
                                               *(ulong *)(&DAT_019da4d0 + (ulong)uVar1 * 8));
                }
                else {
                  if ((uVar16 >> 1 & 1) != 0) goto LAB_01127658;
                  uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(lVar18 + uVar13 + 0x17);
                  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar8 = *(ulong **)(param_1 + 0x95a0);
                    if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
                      puVar8 = (ulong *)HandleScope::Extend(param_1);
                    }
                    *(ulong **)(param_1 + 0x95a0) = puVar8 + 1;
                    *puVar8 = uVar13;
                  }
                  else {
                    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13
                                                );
                  }
                }
                if (iVar2 == *(int *)(param_1 + 0x670)) {
                  local_68 = (undefined8 *)*puVar8;
                  bVar5 = Object::BooleanValue((Object *)&local_68,param_1);
                  bVar5 = *param_3 & 0xfc | bVar5 & 1 | 2;
LAB_0112741c:
                  *param_3 = bVar5;
                }
                else {
                  if (iVar2 == *(int *)(param_1 + 0x5b8)) {
                    local_68 = (undefined8 *)*puVar8;
                    uVar13 = Object::BooleanValue((Object *)&local_68,param_1);
                    bVar12 = 8;
                    bVar14 = 0xc;
                    bVar5 = *param_3 & 0xf3;
LAB_01127580:
                    if ((uVar13 & 1) == 0) {
                      bVar14 = bVar12;
                    }
                    bVar5 = bVar5 | bVar14;
                    goto LAB_0112741c;
                  }
                  if (iVar2 == *(int *)(param_1 + 0xac8)) {
                    *(ulong **)(param_3 + 8) = puVar8;
                  }
                  else {
                    if (iVar2 == *(int *)(param_1 + 0xb00)) {
                      local_68 = (undefined8 *)*puVar8;
                      uVar13 = Object::BooleanValue((Object *)&local_68,param_1);
                      bVar12 = 0x20;
                      bVar14 = 0x30;
                      bVar5 = *param_3 & 0xcf;
                      goto LAB_01127580;
                    }
                    if (iVar2 == *(int *)(param_1 + 0x700)) {
                      uVar13 = *puVar8;
                      if (((uVar13 & 1) == 0) ||
                         ((*(byte *)((uVar13 & 0xffffffff00000000 | 9) +
                                    (ulong)*(uint *)(uVar13 - 1)) >> 1 & 1) == 0))
                      goto LAB_01127658;
                      *(ulong **)(param_3 + 0x10) = puVar8;
                    }
                    else if (iVar2 == *(int *)(param_1 + 0x9b0)) {
                      uVar13 = *puVar8;
                      if (((uVar13 & 1) == 0) ||
                         ((*(byte *)((uVar13 & 0xffffffff00000000 | 9) +
                                    (ulong)*(uint *)(uVar13 - 1)) >> 1 & 1) == 0))
                      goto LAB_01127658;
                      *(ulong **)(param_3 + 0x18) = puVar8;
                    }
                  }
                }
                lVar18 = lVar18 + 0xc;
              } while (uVar11 * 0xc != lVar18);
            }
            if ((*(long *)(param_3 + 0x10) == 0) && (*(long *)(param_3 + 0x18) == 0)) {
              return 1;
            }
            if ((*(long *)(param_3 + 8) == 0) && ((*param_3 >> 5 & 1) == 0)) {
              return 1;
            }
          }
        }
      }
LAB_01127658:
      local_68 = (undefined8 *)0x0;
      uVar10 = FUN_01127878(param_2,param_1 + 0x670,&local_68);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        local_70 = (long *)*local_68;
        bVar5 = Object::BooleanValue((Object *)&local_70,param_1);
        *param_3 = *param_3 & 0xfc | bVar5 & 1 | 2;
      }
      local_70 = (long *)0x0;
      uVar10 = FUN_01127878(param_2,param_1 + 0x5b8,&local_70);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_70 != (long *)0x0) {
        local_78 = *local_70;
        uVar10 = Object::BooleanValue((Object *)&local_78,param_1);
        bVar5 = 0xc;
        if ((uVar10 & 1) == 0) {
          bVar5 = 8;
        }
        *param_3 = *param_3 & 0xf3 | bVar5;
      }
      local_78 = 0;
      uVar10 = FUN_01127878(param_2,param_1 + 0xac8,&local_78);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_78 != 0) {
        *(long *)(param_3 + 8) = local_78;
      }
      local_80 = (undefined8 *)0x0;
      uVar10 = FUN_01127878(param_2,param_1 + 0xb00,&local_80);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_80 != (undefined8 *)0x0) {
        local_88 = (ulong *)*local_80;
        uVar10 = Object::BooleanValue((Object *)&local_88,param_1);
        bVar5 = 0x30;
        if ((uVar10 & 1) == 0) {
          bVar5 = 0x20;
        }
        *param_3 = *param_3 & 0xcf | bVar5;
      }
      local_88 = (ulong *)0x0;
      uVar10 = FUN_01127878(param_2,param_1 + 0x700,&local_88);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_88 != (ulong *)0x0) {
        uVar10 = *local_88;
        if (((uVar10 & 1) == 0) ||
           (((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 1 & 1)
             == 0 && ((int)uVar10 != *(int *)(param_1 + 0xa0))))) {
          uVar9 = 0x69;
          param_2 = local_88;
          goto LAB_011272ac;
        }
        *(ulong **)(param_3 + 0x10) = local_88;
      }
      local_90 = (ulong *)0x0;
      uVar10 = FUN_01127878(param_2,param_1 + 0x9b0,&local_90);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      if (local_90 != (ulong *)0x0) {
        uVar10 = *local_90;
        if (((uVar10 & 1) == 0) ||
           (((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 1 & 1)
             == 0 && ((int)uVar10 != *(int *)(param_1 + 0xa0))))) {
          uVar9 = 0x6c;
          param_2 = local_90;
          goto LAB_011272ac;
        }
        *(ulong **)(param_3 + 0x18) = local_90;
      }
      if (((*(long *)(param_3 + 0x10) == 0) && (*(long *)(param_3 + 0x18) == 0)) ||
         ((*(long *)(param_3 + 8) == 0 && ((*param_3 >> 5 & 1) == 0)))) {
        return 1;
      }
      uVar9 = 0xaf;
      goto LAB_011272ac;
    }
  }
  uVar9 = 0x71;
LAB_011272ac:
  puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar9,param_2,0,0);
  Isolate::Throw(param_1,*puVar6,0);
  return 0;
}

