
/* v8::Maybe<bool>
   v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)0>(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ShouldThrow) */

undefined2
v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)0>
          (ulong *param_1,int param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  Isolate *pIVar9;
  long *plVar10;
  undefined8 uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  Isolate *this;
  ulong uVar16;
  long *plVar17;
  Isolate *local_80;
  long *local_78;
  ulong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar17 = (long *)*param_1;
  this = (Isolate *)((ulong)plVar17 & 0xffffffff00000000);
  uVar16 = (ulong)this | 7;
  if (*(short *)(uVar16 + *(uint *)((long)plVar17 + -1)) != 0xab) {
    if ((*(byte *)(((ulong)this | 9) + (ulong)*(uint *)((long)plVar17 + -1)) >> 5 & 1) == 0)
    goto LAB_010d789c;
LAB_010d7840:
    uVar13 = *(ulong *)(this + 0x2bc8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(this + 0x95a0);
      if (puVar7 == *(ulong **)(this + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar13;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar13);
    }
    uVar13 = Isolate::MayAccess(this,puVar7,param_1);
    if ((uVar13 & 1) != 0) goto LAB_010d789c;
    Isolate::ReportFailedAccessCheck(this,param_1);
    if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
      Isolate::PromoteScheduledException(this);
      uVar5 = 0;
      goto LAB_010d78d8;
    }
    if (param_2 != 1) {
      uVar11 = 0x4e;
      goto LAB_010d7a34;
    }
LAB_010d7a28:
    uVar5 = 1;
    goto LAB_010d78d8;
  }
  local_80 = *(Isolate **)(this + 0x2bc8);
  iVar6 = Context::global_object((Context *)&local_80);
  local_70 = (ulong *)0x0;
  local_68 = local_68 & 0xffffff0000000000;
  local_60 = 0;
  local_80 = this;
  local_78 = plVar17;
  PrototypeIterator::Advance((PrototypeIterator *)&local_80);
  if ((int)local_78 != iVar6) goto LAB_010d7840;
LAB_010d789c:
  uVar13 = *param_1;
  uVar14 = uVar13 & 0xffffffff00000000;
  if (((*(uint *)((uVar14 | *(uint *)(uVar13 - 1)) + 0xb) >> 0x1b & 1) != 0) &&
     ((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 10) >> 3 & 0x1c | 2) != 10)) {
    if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xab) {
      local_78 = (long *)0x0;
      local_68 = local_68 & 0xffffff0000000000;
      local_60 = 0;
      local_70 = param_1;
      if (param_1 == (ulong *)0x0) {
        local_80 = this;
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!handle_.is_null()");
      }
      local_80 = this;
      PrototypeIterator::Advance((PrototypeIterator *)&local_80);
      if (local_68._4_1_ == '\0') {
        uVar5 = PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)0>
                          (local_70,param_2);
        goto LAB_010d78d8;
      }
    }
    else {
      if (((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 9) >> 2 & 1) != 0) ||
         ((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 9) >> 3 & 1) != 0)) {
        if (param_2 != 1) {
          uVar11 = 0x1e;
LAB_010d7a34:
          puVar8 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar11,0,0,0);
          Isolate::Throw(this,*puVar8,0);
          uVar5 = 0;
          goto LAB_010d78d8;
        }
        goto LAB_010d7a28;
      }
      bVar12 = *(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 10);
      bVar4 = bVar12 >> 3;
      if ((bVar4 < 6) && ((0x33U >> (ulong)bVar4 & 1) != 0)) {
        TransitionElementsKind(param_1,0x30202020302 >> ((ulong)bVar12 & 0x38));
      }
      pIVar1 = this + 0x95b8;
      uVar13 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(this + 0x95a0);
        if (puVar7 == *(ulong **)(this + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar13;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar13);
      }
      plVar17 = (long *)Map::Update(this,puVar7);
      local_70 = (ulong *)*plVar17;
      uVar2 = *(uint *)((long)local_70 + 0x23);
      local_68 = (ulong)this | (ulong)uVar2;
      local_78 = plVar17;
      if ((uVar2 == 3) || ((uVar2 & 1) == 0)) {
        local_60 = 1;
      }
      else {
        uVar13 = (ulong)uVar2 & 3;
        if (uVar13 == 1) {
          if (*(short *)(uVar16 + *(uint *)(local_68 - 1)) == 0x98) {
            local_60 = 4;
          }
          else if (*(short *)(uVar16 + *(uint *)(local_68 - 1)) == 100) {
            local_60 = 0;
          }
          else {
            local_60 = 2;
          }
        }
        else {
          if (uVar13 != 3) {
            local_80 = this;
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          local_60 = 3;
        }
      }
      local_80 = this;
      uVar16 = TransitionsAccessor::SearchSpecial
                         ((TransitionsAccessor *)&local_80,*(undefined8 *)(this + 0xb98));
      if ((int)uVar16 == 0) {
        uVar16 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_80);
        if ((uVar16 & 1) != 0) {
          puVar7 = (ulong *)Map::CopyForPreventExtensions
                                      (this,plVar17,0,this + 0xb98,"CopyForPreventExtensions",0);
          bVar12 = *(byte *)(*puVar7 + 10);
          goto LAB_010d7b98;
        }
        NormalizeProperties(this,param_1,0,0,"SlowPreventExtensions");
        uVar16 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(this + 0x95a0);
          if (puVar7 == *(ulong **)(this + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar16;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar16);
        }
        puVar7 = (ulong *)Map::Copy(this,puVar7,"SlowCopyForPreventExtensions");
        *(uint *)(*puVar7 + 0xb) = *(uint *)(*puVar7 + 0xb) & 0xf7ffffff;
        uVar16 = *param_1;
        uVar14 = uVar16 & 0xffffffff00000000;
        uVar13 = uVar14 | 10;
        if (((10 < (byte)((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) >> 3) - 0x11)) &&
            ((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8) != 0x60)) &&
           ((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8) != 0x80)) {
          if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x423) {
            puVar15 = (uint *)(uVar16 + 0xb);
          }
          else {
            puVar15 = (uint *)((uVar14 | *(uint *)(uVar16 + 7)) + 3);
          }
          if (*puVar15 < 2) {
            pIVar9 = this + 1000;
LAB_010d7f48:
            bVar12 = 0x80;
            if (1 < (byte)((*(byte *)(*plVar17 + 10) >> 3) - 0xf)) {
              bVar12 = 0x60;
            }
            *(byte *)(*puVar7 + 10) = bVar12 | *(byte *)(*puVar7 + 10) & 7;
          }
          else {
            plVar10 = *(long **)(ElementsAccessor::elements_accessors_ +
                                ((ulong)*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8));
            pIVar9 = (Isolate *)(**(code **)(*plVar10 + 0xb0))(plVar10,param_1);
            if (pIVar9 != (Isolate *)0x0) goto LAB_010d7f48;
          }
          goto LAB_010d7d20;
        }
LAB_010d7d1c:
        pIVar9 = (Isolate *)0x0;
      }
      else {
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(this + 0x95a0);
          if (puVar7 == *(ulong **)(this + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar16;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar16);
          uVar16 = *puVar7;
        }
        bVar12 = *(byte *)(uVar16 + 10);
LAB_010d7b98:
        if ((byte)((bVar12 >> 3) - 6) < 6) goto LAB_010d7d1c;
        uVar16 = *param_1;
        uVar14 = uVar16 & 0xffffffff00000000;
        uVar13 = uVar14 | 10;
        if ((((byte)((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) >> 3) - 0x11) < 0xb) ||
            ((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8) == 0x60)) ||
           ((*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8) == 0x80)) goto LAB_010d7d1c;
        if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar16 - 1)) == 0x423) {
          puVar15 = (uint *)(uVar16 + 0xb);
        }
        else {
          puVar15 = (uint *)((uVar14 | *(uint *)(uVar16 + 7)) + 3);
        }
        if (*puVar15 < 2) {
          pIVar9 = this + 1000;
        }
        else {
          plVar17 = *(long **)(ElementsAccessor::elements_accessors_ +
                              ((ulong)*(byte *)(uVar13 + *(uint *)(uVar16 - 1)) & 0xf8));
          pIVar9 = (Isolate *)(**(code **)(*plVar17 + 0xb0))(plVar17,param_1);
        }
      }
LAB_010d7d20:
      MigrateToMap(this,param_1,puVar7,0);
      uVar16 = *param_1;
      if ((5 < (byte)((*(byte *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 - 1)) + 10)
                      >> 3) - 6)) &&
         (10 < (byte)((*(byte *)((uVar16 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar16 - 1))
                      >> 3) - 0x11))) {
        if (pIVar9 != (Isolate *)0x0) {
          uVar13 = *(ulong *)pIVar9;
          *(int *)(uVar16 + 7) = (int)uVar13;
          if ((uVar13 & 1) != 0) {
            uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar14 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar16,uVar16 + 7,uVar13);
              uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar14 & 0x18) != 0) &&
               ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar16,uVar16 + 7,uVar13);
            }
          }
        }
        uVar2 = *(uint *)(*param_1 + 7);
        if (uVar2 != *(uint *)(this + 1000)) {
          uVar16 = *param_1 & 0xffffffff00000000 | (ulong)uVar2;
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(this + 0x95a0);
            if (puVar7 == *(ulong **)(this + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar16;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar16);
            uVar16 = *puVar7;
          }
          uVar13 = *param_1;
          if ((*(uint *)(uVar16 + 0x13) & 3) != 2) {
            *(undefined4 *)(uVar16 + 0x13) = 2;
            if ((*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 0xb) >>
                 0x14 & 1) != 0) {
              FUN_010d8b9c(uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
            }
          }
        }
      }
    }
  }
  uVar5 = 0x101;
LAB_010d78d8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

