
/* v8::Maybe<bool>
   v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)5>(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ShouldThrow) */

undefined2
v8::internal::JSObject::PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)5>
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
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  Isolate *this;
  Isolate *pIVar16;
  ulong uVar17;
  long *plVar18;
  Isolate *local_80;
  long *local_78;
  ulong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar18 = (long *)*param_1;
  this = (Isolate *)((ulong)plVar18 & 0xffffffff00000000);
  uVar17 = (ulong)this | 7;
  if (*(short *)(uVar17 + *(uint *)((long)plVar18 + -1)) == 0xab) {
    local_80 = *(Isolate **)(this + 0x2bc8);
    iVar6 = Context::global_object((Context *)&local_80);
    local_70 = (ulong *)0x0;
    local_68 = local_68 & 0xffffff0000000000;
    local_60 = 0;
    local_80 = this;
    local_78 = plVar18;
    PrototypeIterator::Advance((PrototypeIterator *)&local_80);
    if ((int)local_78 == iVar6) goto LAB_010cf07c;
LAB_010cf020:
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
    if ((uVar13 & 1) != 0) goto LAB_010cf07c;
    Isolate::ReportFailedAccessCheck(this,param_1);
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      if (param_2 == 1) {
LAB_010cf1a4:
        uVar5 = 1;
        goto LAB_010cf1f4;
      }
      uVar11 = 0x4e;
LAB_010cf1bc:
      puVar8 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar11,0,0,0);
      Isolate::Throw(this,*puVar8,0);
    }
    else {
      Isolate::PromoteScheduledException(this);
    }
    uVar5 = 0;
  }
  else {
    if ((*(byte *)(((ulong)this | 9) + (ulong)*(uint *)((long)plVar18 + -1)) >> 5 & 1) != 0)
    goto LAB_010cf020;
LAB_010cf07c:
    uVar13 = *param_1;
    uVar14 = uVar13 & 0xffffffff00000000;
    if ((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 10) & 0xf0) != 0x50) {
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
          uVar5 = PreventExtensionsWithTransition<(v8::internal::PropertyAttributes)5>
                            (local_70,param_2);
          goto LAB_010cf1f4;
        }
      }
      else {
        if (((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 9) >> 2 & 1) != 0) ||
           ((*(byte *)((uVar14 | *(uint *)(uVar13 - 1)) + 9) >> 3 & 1) != 0)) {
          if (param_2 == 1) goto LAB_010cf1a4;
          uVar11 = 0x1f;
          goto LAB_010cf1bc;
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
        plVar18 = (long *)Map::Update(this,puVar7);
        local_70 = (ulong *)*plVar18;
        uVar2 = *(uint *)((long)local_70 + 0x23);
        local_68 = (ulong)this | (ulong)uVar2;
        local_78 = plVar18;
        if ((uVar2 == 3) || ((uVar2 & 1) == 0)) {
          local_60 = 1;
        }
        else {
          uVar13 = (ulong)uVar2 & 3;
          if (uVar13 == 1) {
            if (*(short *)(uVar17 + *(uint *)(local_68 - 1)) == 0x98) {
              local_60 = 4;
            }
            else if (*(short *)(uVar17 + *(uint *)(local_68 - 1)) == 100) {
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
        uVar17 = TransitionsAccessor::SearchSpecial
                           ((TransitionsAccessor *)&local_80,*(undefined8 *)(this + 0xb68));
        if ((int)uVar17 == 0) {
          uVar17 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_80);
          if ((uVar17 & 1) != 0) {
            puVar7 = (ulong *)Map::CopyForPreventExtensions
                                        (this,plVar18,5,this + 0xb68,"CopyForPreventExtensions",0);
            bVar12 = *(byte *)(*puVar7 + 10);
            goto LAB_010cf35c;
          }
          NormalizeProperties(this,param_1,0,0,"SlowPreventExtensions");
          uVar17 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1);
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(this + 0x95a0);
            if (puVar7 == *(ulong **)(this + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar17;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar17);
          }
          plVar9 = (long *)Map::Copy(this,puVar7,"SlowCopyForPreventExtensions");
          *(uint *)(*plVar9 + 0xb) = *(uint *)(*plVar9 + 0xb) & 0xf7ffffff;
          uVar17 = *param_1;
          uVar14 = uVar17 & 0xffffffff00000000;
          uVar13 = uVar14 | 10;
          if ((((byte)((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) >> 3) - 0x11) < 0xb) ||
              ((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8) == 0x60)) ||
             ((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8) == 0x80)) {
            pIVar16 = (Isolate *)0x0;
          }
          else {
            if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x423) {
              puVar15 = (uint *)(uVar17 + 0xb);
            }
            else {
              puVar15 = (uint *)((uVar14 | *(uint *)(uVar17 + 7)) + 3);
            }
            if (*puVar15 < 2) {
              pIVar16 = this + 1000;
            }
            else {
              plVar10 = *(long **)(ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8));
              pIVar16 = (Isolate *)(**(code **)(*plVar10 + 0xb0))(plVar10,param_1);
              if (pIVar16 == (Isolate *)0x0) goto LAB_010cf5d8;
            }
            bVar12 = 0x80;
            if (1 < (byte)((*(byte *)(*plVar18 + 10) >> 3) - 0xf)) {
              bVar12 = 0x60;
            }
            *(byte *)(*plVar9 + 10) = bVar12 | *(byte *)(*plVar9 + 10) & 7;
          }
LAB_010cf5d8:
          MigrateToMap(this,param_1,plVar9,0);
          uVar13 = *param_1;
          uVar17 = uVar13 & 0xffffffff00000000;
          uVar14 = uVar17 | *(uint *)(uVar13 + 3);
          if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xaa) {
            if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)(this + 0x95a0);
              if (puVar7 == *(ulong **)(this + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(this);
              }
              *(ulong **)(this + 0x95a0) = puVar7 + 1;
              *puVar7 = uVar14;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)pIVar1,uVar14);
            }
            ApplyAttributesToDictionary<v8::internal::GlobalDictionary>(this,this + 0x80,puVar7,5);
          }
          else {
            if ((*(uint *)(uVar13 + 3) & 1) == 0) {
              uVar14 = *(ulong *)(uVar17 + 0x410);
            }
            if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
              puVar7 = *(ulong **)(this + 0x95a0);
              if (puVar7 == *(ulong **)(this + 0x95a8)) {
                puVar7 = (ulong *)HandleScope::Extend(this);
              }
              *(ulong **)(this + 0x95a0) = puVar7 + 1;
              *puVar7 = uVar14;
            }
            else {
              puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)pIVar1,uVar14);
            }
            ApplyAttributesToDictionary<v8::internal::NameDictionary>(this,this + 0x80,puVar7,5);
          }
        }
        else {
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(this + 0x95a0);
            if (puVar7 == *(ulong **)(this + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(this);
            }
            *(ulong **)(this + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar17;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar17);
            uVar17 = *puVar7;
          }
          bVar12 = *(byte *)(uVar17 + 10);
LAB_010cf35c:
          if ((byte)((bVar12 >> 3) - 6) < 6) {
LAB_010cf3c4:
            pIVar16 = (Isolate *)0x0;
          }
          else {
            uVar17 = *param_1;
            uVar14 = uVar17 & 0xffffffff00000000;
            uVar13 = uVar14 | 10;
            if ((((byte)((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) >> 3) - 0x11) < 0xb) ||
                ((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8) == 0x60)) ||
               ((*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8) == 0x80)) goto LAB_010cf3c4;
            if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x423) {
              puVar15 = (uint *)(uVar17 + 0xb);
            }
            else {
              puVar15 = (uint *)((uVar14 | *(uint *)(uVar17 + 7)) + 3);
            }
            if (*puVar15 < 2) {
              pIVar16 = this + 1000;
            }
            else {
              plVar18 = *(long **)(ElementsAccessor::elements_accessors_ +
                                  ((ulong)*(byte *)(uVar13 + *(uint *)(uVar17 - 1)) & 0xf8));
              pIVar16 = (Isolate *)(**(code **)(*plVar18 + 0xb0))(plVar18,param_1);
            }
          }
          MigrateToMap(this,param_1,puVar7,0);
        }
        uVar17 = *param_1;
        if (5 < (byte)((*(byte *)((uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 - 1)) + 10)
                       >> 3) - 6)) {
          if ((byte)((*(byte *)((uVar17 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar17 - 1))
                     >> 3) - 0x11) < 0xb) {
            if (*(long *)(uVar17 + 0x17) != 0) {
              uVar11 = 0x20;
              goto LAB_010cf1bc;
            }
          }
          else {
            if (pIVar16 != (Isolate *)0x0) {
              uVar13 = *(ulong *)pIVar16;
              *(int *)(uVar17 + 7) = (int)uVar13;
              if ((uVar13 & 1) != 0) {
                uVar14 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
                if (((uint)uVar14 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar17,uVar17 + 7,uVar13);
                  uVar14 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
                }
                if (((uVar14 & 0x18) != 0) &&
                   ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar17,uVar17 + 7,uVar13);
                }
              }
            }
            uVar2 = *(uint *)(*param_1 + 7);
            if (uVar2 != *(uint *)(this + 1000)) {
              uVar17 = *param_1 & 0xffffffff00000000 | (ulong)uVar2;
              if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
                puVar7 = *(ulong **)(this + 0x95a0);
                if (puVar7 == *(ulong **)(this + 0x95a8)) {
                  puVar7 = (ulong *)HandleScope::Extend(this);
                }
                *(ulong **)(this + 0x95a0) = puVar7 + 1;
                *puVar7 = uVar17;
              }
              else {
                puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)pIVar1,uVar17);
                uVar17 = *puVar7;
              }
              uVar13 = *param_1;
              if ((*(uint *)(uVar17 + 0x13) & 3) != 2) {
                *(undefined4 *)(uVar17 + 0x13) = 2;
                if ((*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 0xb)
                     >> 0x14 & 1) != 0) {
                  FUN_010d8b9c(uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
                }
              }
              ApplyAttributesToDictionary<v8::internal::NumberDictionary>(this,this + 0x80,puVar7,5)
              ;
            }
          }
        }
      }
    }
    uVar5 = 0x101;
  }
LAB_010cf1f4:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

