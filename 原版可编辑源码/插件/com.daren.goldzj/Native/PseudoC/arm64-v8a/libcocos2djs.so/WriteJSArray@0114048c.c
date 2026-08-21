
/* v8::internal::ValueSerializer::WriteJSArray(v8::internal::Handle<v8::internal::JSArray>) */

void __thiscall v8::internal::ValueSerializer::WriteJSArray(ValueSerializer *this,ulong *param_2)

{
  size_t sVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  ushort uVar5;
  void *pvVar6;
  long lVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  double dVar18;
  undefined1 local_dc;
  size_t local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar12 = *param_2;
  uVar17 = *(uint *)(uVar12 + 0xb);
  uVar14 = uVar12 & 0xffffffff00000000;
  if ((uVar17 & 1) == 0) {
    uVar15 = 0;
    if (-1 < (int)uVar17) {
      uVar15 = uVar17 >> 1;
    }
  }
  else if (*(short *)((uVar14 | 7) + (ulong)*(uint *)((uVar14 | uVar17) - 1)) == 0x42) {
    dVar18 = *(double *)((uVar14 | uVar17) + 3) + 4503599627370496.0;
    uVar15 = SUB84(dVar18,0);
    if ((ulong)dVar18 >> 0x20 != 0x43300000) {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 0;
  }
  if ((*(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)) < 0x30) &&
     ((bVar3 = *(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)), 0x2f < bVar3 ||
      ((bVar3 >> 3 & 1) == 0)))) {
    local_d8 = CONCAT71(local_d8._1_7_,0x41);
    lVar7 = *(long *)(this + 0x18);
    uVar12 = lVar7 + 1;
    if (*(ulong *)(this + 0x20) < uVar12) {
      local_d0 = 0;
      uVar14 = *(ulong *)(this + 0x20) * 2;
      plVar2 = *(long **)(this + 8);
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
        uVar14 = uVar12;
      }
      sVar1 = uVar14 + 0x40;
      if (plVar2 == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
        local_d0 = sVar1;
      }
      else {
        pvVar6 = (void *)(**(code **)(*plVar2 + 0x30))
                                   (plVar2,*(void **)(this + 0x10),sVar1,&local_d0);
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar6;
        *(size_t *)(this + 0x20) = local_d0;
        goto LAB_0114063c;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar6 = *(void **)(this + 0x10);
LAB_0114063c:
      *(ulong *)(this + 0x18) = uVar12;
      *(undefined1 *)((long)pvVar6 + lVar7) = (undefined1)local_d8;
    }
    WriteVarint<unsigned_int>(this,uVar15);
    uVar12 = *param_2;
    uVar14 = uVar12 & 0xffffffff00000000;
    bVar3 = *(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)) >> 3;
    if (bVar3 == 4) {
      if (uVar15 == 0) goto LAB_01140884;
      pIVar8 = *(Isolate **)this;
      uVar14 = uVar14 | *(uint *)(uVar12 + 7);
      if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar14;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
      }
      iVar16 = 7;
      uVar17 = uVar15;
      do {
        local_d8 = CONCAT71(local_d8._1_7_,0x4e);
        lVar7 = *(long *)(this + 0x18);
        uVar12 = lVar7 + 1;
        if (*(ulong *)(this + 0x20) < uVar12) {
          local_d0 = 0;
          uVar14 = *(ulong *)(this + 0x20) * 2;
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
            uVar14 = uVar12;
          }
          if (*(long **)(this + 8) == (long *)0x0) {
            pvVar6 = realloc(*(void **)(this + 0x10),uVar14 + 0x40);
            local_d0 = uVar14 + 0x40;
          }
          else {
            pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
          }
          if (pvVar6 != (void *)0x0) {
            *(void **)(this + 0x10) = pvVar6;
            *(size_t *)(this + 0x20) = local_d0;
            goto LAB_01140a04;
          }
          this[0x29] = (ValueSerializer)0x1;
        }
        else {
          pvVar6 = *(void **)(this + 0x10);
LAB_01140a04:
          *(ulong *)(this + 0x18) = uVar12;
          *(undefined1 *)((long)pvVar6 + lVar7) = (undefined1)local_d8;
        }
        local_d8 = *(size_t *)(*puVar9 + (long)iVar16);
        lVar7 = *(long *)(this + 0x18);
        uVar12 = lVar7 + 8;
        if (*(ulong *)(this + 0x20) < uVar12) {
          local_d0 = 0;
          uVar14 = *(ulong *)(this + 0x20) * 2;
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
            uVar14 = uVar12;
          }
          if (*(long **)(this + 8) == (long *)0x0) {
            pvVar6 = realloc(*(void **)(this + 0x10),uVar14 + 0x40);
            local_d0 = uVar14 + 0x40;
          }
          else {
            pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
          }
          if (pvVar6 != (void *)0x0) {
            *(void **)(this + 0x10) = pvVar6;
            *(size_t *)(this + 0x20) = local_d0;
            goto LAB_01140a30;
          }
          this[0x29] = (ValueSerializer)0x1;
        }
        else {
          pvVar6 = *(void **)(this + 0x10);
LAB_01140a30:
          *(ulong *)(this + 0x18) = uVar12;
          *(size_t *)((long)pvVar6 + lVar7) = local_d8;
        }
        uVar17 = uVar17 - 1;
        iVar16 = iVar16 + 8;
      } while (uVar17 != 0);
    }
    else {
      if (bVar3 == 2) {
        pIVar8 = *(Isolate **)this;
        uVar14 = uVar14 | *(uint *)(uVar12 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar14;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
        }
        if (uVar15 != 0) {
          iVar16 = 0;
          uVar17 = 0;
          do {
            uVar12 = *param_2;
            if ((*(int *)(uVar12 + 0xb) != (int)*puVar9) ||
               (uVar14 = uVar12 & 0xffffffff00000000,
               (*(byte *)((uVar14 | 10) + (ulong)*(uint *)(uVar12 - 1)) & 0xf8) != 0x10))
            goto LAB_01140888;
            pIVar8 = *(Isolate **)this;
            uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar12 + 7)) + (long)iVar16 + 7);
            if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)(pIVar8 + 0x95a0);
              if (puVar10 == *(ulong **)(pIVar8 + 0x95a8)) {
                puVar10 = (ulong *)HandleScope::Extend(pIVar8);
              }
              *(ulong **)(pIVar8 + 0x95a0) = puVar10 + 1;
              *puVar10 = uVar14;
            }
            else {
              puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
            }
            uVar5 = WriteObject(this,puVar10);
            uVar11 = 0;
            if ((uVar5 < 0x100) || ((uVar5 & 0xff) == 0)) goto LAB_01140bb0;
            uVar17 = uVar17 + 1;
            iVar16 = iVar16 + 4;
          } while (uVar15 != uVar17);
          goto LAB_01140b14;
        }
      }
      else if (bVar3 == 0) {
        pIVar8 = *(Isolate **)this;
        uVar14 = uVar14 | *(uint *)(uVar12 + 7);
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar14;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar14);
        }
        if (uVar15 != 0) {
          iVar16 = 0;
          uVar17 = uVar15;
          do {
            WriteSmi(this,*puVar9 & 0xffffffff00000000 |
                          (ulong)*(uint *)(*puVar9 + (long)iVar16 + 7));
            uVar17 = uVar17 - 1;
            iVar16 = iVar16 + 4;
          } while (uVar17 != 0);
          goto LAB_01140b14;
        }
      }
LAB_01140884:
      uVar17 = 0;
LAB_01140888:
      if (uVar17 < uVar15) {
        uVar12 = (ulong)uVar17;
        do {
          local_b8 = *(undefined8 *)this;
          local_d0 = CONCAT44(local_d0._4_4_,1);
          local_c4 = 0;
          uStack_c0 = 0xc0;
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_98 = 0;
          local_80 = 0xffffffffffffffff;
          local_a0 = param_2;
          local_90 = param_2;
          uStack_88 = uVar12;
          LookupIterator::Start<true>((LookupIterator *)&local_d0);
          if (local_d0._4_4_ == 4) {
            lVar7 = *(long *)(this + 0x18);
            uVar14 = lVar7 + 1;
            if (*(ulong *)(this + 0x20) < uVar14) {
              local_d8 = 0;
              uVar13 = *(ulong *)(this + 0x20) * 2;
              if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
                uVar13 = uVar14;
              }
              if (*(long **)(this + 8) == (long *)0x0) {
                pvVar6 = realloc(*(void **)(this + 0x10),uVar13 + 0x40);
                local_d8 = uVar13 + 0x40;
              }
              else {
                pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
              }
              if (pvVar6 == (void *)0x0) {
                this[0x29] = (ValueSerializer)0x1;
                goto LAB_011408dc;
              }
              *(void **)(this + 0x10) = pvVar6;
              *(size_t *)(this + 0x20) = local_d8;
            }
            else {
              pvVar6 = *(void **)(this + 0x10);
            }
            *(ulong *)(this + 0x18) = uVar14;
            *(undefined1 *)((long)pvVar6 + lVar7) = 0x2d;
          }
          else {
            lVar7 = Object::GetProperty((LookupIterator *)&local_d0,false);
            if (((lVar7 == 0) || (uVar5 = WriteObject(this,lVar7), uVar5 < 0x100)) ||
               ((uVar5 & 0xff) == 0)) goto LAB_01140bac;
          }
LAB_011408dc:
          uVar12 = uVar12 + 1;
        } while (uVar15 != (uint)uVar12);
      }
    }
LAB_01140b14:
    local_d0 = *(size_t *)this;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_c8 = 0;
    local_c4 = 0;
    uStack_ac = 0x12;
    uStack_a8 = 0x1010000;
    uVar5 = KeyAccumulator::CollectOwnPropertyNames((KeyAccumulator *)&local_d0,param_2,param_2);
    if ((0xff < uVar5) && ((uVar5 & 0xff) != 0)) {
      uVar11 = KeyAccumulator::GetKeys((KeyAccumulator *)&local_d0,0);
      uVar12 = WriteJSObjectPropertiesSlow(this,param_2,uVar11);
      if ((uVar12 & 0xff) != 0) {
        local_dc = 0x24;
        lVar7 = *(long *)(this + 0x18);
        uVar17 = (uint)(uVar12 >> 0x20);
        uVar12 = lVar7 + 1;
        if (*(ulong *)(this + 0x20) < uVar12) {
          local_d8 = 0;
          uVar14 = *(ulong *)(this + 0x20) * 2;
          plVar2 = *(long **)(this + 8);
          if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
            uVar14 = uVar12;
          }
          sVar1 = uVar14 + 0x40;
          if (plVar2 == (long *)0x0) {
            pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
            local_d8 = sVar1;
          }
          else {
            pvVar6 = (void *)(**(code **)(*plVar2 + 0x30))
                                       (plVar2,*(void **)(this + 0x10),sVar1,&local_d8);
          }
          if (pvVar6 == (void *)0x0) goto LAB_01140d68;
          *(void **)(this + 0x10) = pvVar6;
          *(size_t *)(this + 0x20) = local_d8;
        }
        else {
          pvVar6 = *(void **)(this + 0x10);
        }
        *(ulong *)(this + 0x18) = uVar12;
LAB_011405e4:
        *(undefined1 *)((long)pvVar6 + lVar7) = local_dc;
LAB_011405e8:
        WriteVarint<unsigned_int>(this,uVar17);
        WriteVarint<unsigned_int>(this,uVar15);
        if (this[0x29] == (ValueSerializer)0x0) {
          uVar11 = 0x101;
          goto LAB_01140bb0;
        }
        ThrowDataCloneError(this,0x169,*(long *)this + 200);
      }
    }
  }
  else {
    local_d8 = CONCAT71(local_d8._1_7_,0x61);
    lVar7 = *(long *)(this + 0x18);
    uVar12 = lVar7 + 1;
    if (*(ulong *)(this + 0x20) < uVar12) {
      local_d0 = 0;
      uVar14 = *(ulong *)(this + 0x20) * 2;
      plVar2 = *(long **)(this + 8);
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
        uVar14 = uVar12;
      }
      sVar1 = uVar14 + 0x40;
      if (plVar2 == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
        local_d0 = sVar1;
      }
      else {
        pvVar6 = (void *)(**(code **)(*plVar2 + 0x30))
                                   (plVar2,*(void **)(this + 0x10),sVar1,&local_d0);
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar6;
        *(size_t *)(this + 0x20) = local_d0;
        goto LAB_0114056c;
      }
      this[0x29] = (ValueSerializer)0x1;
    }
    else {
      pvVar6 = *(void **)(this + 0x10);
LAB_0114056c:
      *(ulong *)(this + 0x18) = uVar12;
      *(undefined1 *)((long)pvVar6 + lVar7) = (undefined1)local_d8;
    }
    WriteVarint<unsigned_int>(this,uVar15);
    lVar7 = KeyAccumulator::GetKeys(param_2,0,0x12,1,0,0);
    uVar11 = 0;
    if (lVar7 == 0) goto LAB_01140bb0;
    uVar12 = WriteJSObjectPropertiesSlow(this,param_2,lVar7);
    if ((uVar12 & 0xff) != 0) {
      local_d8 = CONCAT71(local_d8._1_7_,0x40);
      lVar7 = *(long *)(this + 0x18);
      uVar17 = (uint)(uVar12 >> 0x20);
      uVar12 = lVar7 + 1;
      if (uVar12 <= *(ulong *)(this + 0x20)) {
        pvVar6 = *(void **)(this + 0x10);
LAB_011405dc:
        *(ulong *)(this + 0x18) = uVar12;
        local_dc = (undefined1)local_d8;
        goto LAB_011405e4;
      }
      local_d0 = 0;
      uVar14 = *(ulong *)(this + 0x20) * 2;
      plVar2 = *(long **)(this + 8);
      if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
        uVar14 = uVar12;
      }
      sVar1 = uVar14 + 0x40;
      if (plVar2 == (long *)0x0) {
        pvVar6 = realloc(*(void **)(this + 0x10),sVar1);
        local_d0 = sVar1;
      }
      else {
        pvVar6 = (void *)(**(code **)(*plVar2 + 0x30))
                                   (plVar2,*(void **)(this + 0x10),sVar1,&local_d0);
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(this + 0x10) = pvVar6;
        *(size_t *)(this + 0x20) = local_d0;
        goto LAB_011405dc;
      }
LAB_01140d68:
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_011405e8;
    }
  }
LAB_01140bac:
  uVar11 = 0;
LAB_01140bb0:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

