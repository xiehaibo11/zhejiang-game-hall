
/* v8::Maybe<bool>
   v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)4>(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ShouldThrow) */

undefined2
v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)4>
          (ulong *param_1,int param_2)

{
  long lVar1;
  Isolate *pIVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  Isolate *this;
  Isolate *pIVar20;
  ulong uVar21;
  long *plVar22;
  Isolate *local_80;
  long *local_78;
  ulong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar22 = (long *)*param_1;
  this = (Isolate *)((ulong)plVar22 & 0xffffffff00000000);
  uVar21 = (ulong)this | 7;
  if (*(short *)(uVar21 + *(uint *)((long)plVar22 + -1)) != 0xab) {
    if ((*(byte *)(((ulong)this | 9) + (ulong)*(uint *)((long)plVar22 + -1)) >> 5 & 1) == 0)
    goto LAB_010ce670;
LAB_010ce614:
    uVar14 = *(ulong *)(this + 0x2bc8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(this + 0x95a0);
      if (puVar8 == *(ulong **)(this + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar14;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
    }
    uVar14 = Isolate::MayAccess(this,puVar8,param_1);
    if ((uVar14 & 1) != 0) goto LAB_010ce670;
    Isolate::ReportFailedAccessCheck(this,param_1);
    if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
      Isolate::PromoteScheduledException(this);
      uVar6 = 0;
      goto LAB_010ce69c;
    }
    if (param_2 != 1) {
      uVar12 = 0x4e;
      goto LAB_010ce7f8;
    }
LAB_010ce7ec:
    uVar6 = 1;
    goto LAB_010ce69c;
  }
  local_80 = *(Isolate **)(this + 0x2bc8);
  iVar7 = Context::global_object((Context *)&local_80);
  local_70 = (ulong *)0x0;
  local_68 = local_68 & 0xffffff0000000000;
  local_60 = 0;
  local_80 = this;
  local_78 = plVar22;
  PrototypeIterator::Advance((PrototypeIterator *)&local_80);
  if ((int)local_78 != iVar7) goto LAB_010ce614;
LAB_010ce670:
  uVar14 = *param_1;
  uVar16 = uVar14 & 0xffffffff00000000;
  if ((*(byte *)((uVar16 | *(uint *)(uVar14 - 1)) + 10) >> 3 & 0x1c | 2) != 10) {
    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xab) {
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
        uVar6 = PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)4>
                          (local_70,param_2);
        goto LAB_010ce69c;
      }
    }
    else {
      if (((*(byte *)((uVar16 | *(uint *)(uVar14 - 1)) + 9) >> 2 & 1) != 0) ||
         ((*(byte *)((uVar16 | *(uint *)(uVar14 - 1)) + 9) >> 3 & 1) != 0)) {
        if (param_2 != 1) {
          uVar12 = 0x21;
LAB_010ce7f8:
          puVar9 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar12,0,0,0);
          Isolate::Throw(this,*puVar9,0);
          uVar6 = 0;
          goto LAB_010ce69c;
        }
        goto LAB_010ce7ec;
      }
      bVar13 = *(byte *)((uVar16 | *(uint *)(uVar14 - 1)) + 10);
      bVar5 = bVar13 >> 3;
      if ((bVar5 < 6) && ((0x33U >> (ulong)bVar5 & 1) != 0)) {
        TransitionElementsKind(param_1,0x30202020302 >> ((ulong)bVar13 & 0x38));
      }
      pIVar2 = this + 0x95b8;
      uVar14 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
      if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(this + 0x95a0);
        if (puVar8 == *(ulong **)(this + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar14);
      }
      plVar22 = (long *)Map::Update(this,puVar8);
      local_70 = (ulong *)*plVar22;
      uVar3 = *(uint *)((long)local_70 + 0x23);
      local_68 = (ulong)this | (ulong)uVar3;
      local_78 = plVar22;
      if ((uVar3 == 3) || ((uVar3 & 1) == 0)) {
        local_60 = 1;
      }
      else {
        uVar14 = (ulong)uVar3 & 3;
        if (uVar14 == 1) {
          if (*(short *)(uVar21 + *(uint *)(local_68 - 1)) == 0x98) {
            local_60 = 4;
          }
          else if (*(short *)(uVar21 + *(uint *)(local_68 - 1)) == 100) {
            local_60 = 0;
          }
          else {
            local_60 = 2;
          }
        }
        else {
          if (uVar14 != 3) {
            local_80 = this;
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          local_60 = 3;
        }
      }
      local_80 = this;
      uVar21 = TransitionsAccessor::SearchSpecial
                         ((TransitionsAccessor *)&local_80,*(undefined8 *)(this + 0xbe0));
      if ((int)uVar21 == 0) {
        uVar21 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_80);
        if ((uVar21 & 1) != 0) {
          puVar8 = (ulong *)Map::CopyForPreventExtensions
                                      (this,plVar22,4,this + 0xbe0,"CopyForPreventExtensions",0);
          bVar13 = *(byte *)(*puVar8 + 10);
          goto LAB_010ce95c;
        }
        NormalizeProperties(this,param_1,0,0,"SlowPreventExtensions");
        uVar21 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
        if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(this + 0x95a0);
          if (puVar8 == *(ulong **)(this + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar21;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar21);
        }
        plVar10 = (long *)Map::Copy(this,puVar8,"SlowCopyForPreventExtensions");
        *(uint *)(*plVar10 + 0xb) = *(uint *)(*plVar10 + 0xb) & 0xf7ffffff;
        uVar21 = *param_1;
        uVar16 = uVar21 & 0xffffffff00000000;
        uVar14 = uVar16 | 10;
        if ((((byte)((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) >> 3) - 0x11) < 0xb) ||
            ((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8) == 0x60)) ||
           ((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8) == 0x80)) {
          pIVar20 = (Isolate *)0x0;
        }
        else {
          if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x423) {
            puVar19 = (uint *)(uVar21 + 0xb);
          }
          else {
            puVar19 = (uint *)((uVar16 | *(uint *)(uVar21 + 7)) + 3);
          }
          if (*puVar19 < 2) {
            pIVar20 = this + 1000;
          }
          else {
            plVar11 = *(long **)(ElementsAccessor::elements_accessors_ +
                                ((ulong)*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8));
            pIVar20 = (Isolate *)(**(code **)(*plVar11 + 0xb0))(plVar11,param_1);
            if (pIVar20 == (Isolate *)0x0) goto LAB_010cebc4;
          }
          bVar13 = 0x80;
          if (1 < (byte)((*(byte *)(*plVar22 + 10) >> 3) - 0xf)) {
            bVar13 = 0x60;
          }
          *(byte *)(*plVar10 + 10) = bVar13 | *(byte *)(*plVar10 + 10) & 7;
        }
LAB_010cebc4:
        MigrateToMap(this,param_1,plVar10,0);
        uVar14 = *param_1;
        uVar21 = uVar14 & 0xffffffff00000000;
        uVar16 = uVar21 | *(uint *)(uVar14 + 3);
        if (*(short *)((uVar21 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xaa) {
          if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(this + 0x95a0);
            if (puVar8 == *(ulong **)(this + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar16;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar16);
          }
          ApplyAttributesToDictionary<v8::internal::GlobalDictionary>(this,this + 0x80,puVar8,4);
        }
        else {
          if ((*(uint *)(uVar14 + 3) & 1) == 0) {
            uVar16 = *(ulong *)(uVar21 + 0x410);
          }
          if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(this + 0x95a0);
            if (puVar8 == *(ulong **)(this + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar16;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar16);
            uVar16 = *puVar8;
          }
          if ((int)*(uint *)(uVar16 + 0xf) >> 1 != 0) {
            lVar18 = (long)((ulong)*(uint *)(uVar16 + 0xf) << 0x20) >> 0x21;
            lVar15 = 0x1c00000000;
            lVar17 = 0x1400000000;
            while( true ) {
              lVar18 = lVar18 + -1;
              lVar1 = uVar16 + 7;
              uVar3 = *(uint *)((lVar17 >> 0x20) + lVar1);
              if (((uVar3 != *(uint *)(this + 0xa8)) && (uVar3 != *(uint *)(this + 0xa0))) &&
                 (((uVar3 & 1) == 0 ||
                  ((uVar21 = uVar16 & 0xffffffff00000000 | (ulong)uVar3,
                   *(short *)((uVar16 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar21 - 1)) !=
                   0x40 || ((*(byte *)(uVar21 + 7) & 1) == 0)))))) {
                *(uint *)((lVar15 >> 0x20) + lVar1) =
                     *(uint *)((lVar15 >> 0x20) + lVar1) & 0xfffffffe | 0x40;
              }
              if (lVar18 == 0) break;
              uVar16 = *puVar8;
              lVar15 = lVar15 + 0xc00000000;
              lVar17 = lVar17 + 0xc00000000;
            }
          }
        }
      }
      else {
        if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(this + 0x95a0);
          if (puVar8 == *(ulong **)(this + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)(this + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar21;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar21);
          uVar21 = *puVar8;
        }
        bVar13 = *(byte *)(uVar21 + 10);
LAB_010ce95c:
        if ((byte)((bVar13 >> 3) - 6) < 6) {
LAB_010ce9c4:
          pIVar20 = (Isolate *)0x0;
        }
        else {
          uVar21 = *param_1;
          uVar16 = uVar21 & 0xffffffff00000000;
          uVar14 = uVar16 | 10;
          if ((((byte)((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) >> 3) - 0x11) < 0xb) ||
              ((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8) == 0x60)) ||
             ((*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8) == 0x80)) goto LAB_010ce9c4;
          if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar21 - 1)) == 0x423) {
            puVar19 = (uint *)(uVar21 + 0xb);
          }
          else {
            puVar19 = (uint *)((uVar16 | *(uint *)(uVar21 + 7)) + 3);
          }
          if (*puVar19 < 2) {
            pIVar20 = this + 1000;
          }
          else {
            plVar22 = *(long **)(ElementsAccessor::elements_accessors_ +
                                ((ulong)*(byte *)(uVar14 + *(uint *)(uVar21 - 1)) & 0xf8));
            pIVar20 = (Isolate *)(**(code **)(*plVar22 + 0xb0))(plVar22,param_1);
          }
        }
        MigrateToMap(this,param_1,puVar8,0);
      }
      uVar21 = *param_1;
      if ((5 < (byte)((*(byte *)((uVar21 & 0xffffffff00000000 | (ulong)*(uint *)(uVar21 - 1)) + 10)
                      >> 3) - 6)) &&
         (10 < (byte)((*(byte *)((uVar21 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar21 - 1))
                      >> 3) - 0x11))) {
        if (pIVar20 != (Isolate *)0x0) {
          uVar14 = *(ulong *)pIVar20;
          *(int *)(uVar21 + 7) = (int)uVar14;
          if ((uVar14 & 1) != 0) {
            uVar16 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar16 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar21,uVar21 + 7,uVar14);
              uVar16 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar16 & 0x18) != 0) &&
               ((*(byte *)((uVar21 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar21,uVar21 + 7,uVar14);
            }
          }
        }
        uVar3 = *(uint *)(*param_1 + 7);
        if (uVar3 != *(uint *)(this + 1000)) {
          uVar21 = *param_1 & 0xffffffff00000000 | (ulong)uVar3;
          if (*(CanonicalHandleScope **)pIVar2 == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(this + 0x95a0);
            if (puVar8 == *(ulong **)(this + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar21;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar2,uVar21);
            uVar21 = *puVar8;
          }
          uVar14 = *param_1;
          if ((*(uint *)(uVar21 + 0x13) & 3) != 2) {
            *(undefined4 *)(uVar21 + 0x13) = 2;
            if ((*(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1)) + 0xb) >>
                 0x14 & 1) != 0) {
              FUN_010d8b9c(uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1));
            }
          }
          uVar21 = *puVar8;
          if ((int)*(uint *)(uVar21 + 0xf) >> 1 != 0) {
            lVar18 = (long)((ulong)*(uint *)(uVar21 + 0xf) << 0x20) >> 0x21;
            lVar15 = 0x1800000000;
            lVar17 = 0x1000000000;
            while( true ) {
              lVar18 = lVar18 + -1;
              lVar1 = uVar21 + 7;
              uVar3 = *(uint *)((lVar17 >> 0x20) + lVar1);
              if (((uVar3 != *(uint *)(this + 0xa8)) && (uVar3 != *(uint *)(this + 0xa0))) &&
                 (((uVar3 & 1) == 0 ||
                  ((uVar14 = uVar21 & 0xffffffff00000000 | (ulong)uVar3,
                   *(short *)((uVar21 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar14 - 1)) !=
                   0x40 || ((*(byte *)(uVar14 + 7) & 1) == 0)))))) {
                *(uint *)((lVar15 >> 0x20) + lVar1) =
                     *(uint *)((lVar15 >> 0x20) + lVar1) & 0xfffffffe | 0x40;
              }
              if (lVar18 == 0) break;
              uVar21 = *puVar8;
              lVar15 = lVar15 + 0xc00000000;
              lVar17 = lVar17 + 0xc00000000;
            }
          }
        }
      }
    }
  }
  uVar6 = 0x101;
LAB_010ce69c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

