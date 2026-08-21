
/* v8::internal::RegExpImpl::CompileIrregexp(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, bool)
    */

undefined4
v8::internal::RegExpImpl::CompileIrregexp
          (Isolate *param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  Isolate *pIVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined **local_148;
  long local_140;
  undefined8 uStack_138;
  undefined **local_118;
  StackGuard *local_110;
  int local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined2 local_d0;
  ulong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  Zone aZStack_a8 [64];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pIVar1 = param_1 + 0x95a0;
  Zone::Zone(aZStack_a8,*(AccountingAllocator **)(param_1 + 0x95d0),"../../src/regexp/regexp.cc:380"
            );
  InterruptsScope::InterruptsScope((InterruptsScope *)&local_118,param_1,0xff,0);
  local_118 = &PTR__InterruptsScope_01c98490;
  uVar14 = *param_2 & 0xffffffff00000000;
  uVar16 = uVar14 | *(uint *)(*param_2 + 0xb);
  iVar3 = *(int *)(uVar16 + 0xf) >> 1;
  uVar14 = uVar14 | *(uint *)(uVar16 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)pIVar1;
    if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar10 + 1;
    *puVar10 = uVar14;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
  }
  puVar10 = (ulong *)String::Flatten(param_1,puVar10,0);
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_c8 = (ulong *)0x0;
  local_c0 = 0;
  local_d0 = 1;
  local_b8 = 0;
  FlatStringReader::FlatStringReader((FlatStringReader *)&local_148,param_1,puVar10);
  uVar14 = RegExpParser::ParseRegExp(param_1,aZStack_a8,&local_148,iVar3,&local_e8);
  uVar13 = local_c0;
  if ((uVar14 & 1) != 0) {
    local_150 = *param_2;
    uVar8 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_150);
    local_b0 = ~uVar8 & 1;
    local_150 = *param_2;
    uVar9 = JSRegExp::BacktrackLimit((JSRegExp *)&local_150);
    uVar14 = Compile(param_1,aZStack_a8,&local_e8,iVar3,puVar10,param_3,param_4 & 1,uVar9);
    uVar13 = local_c0;
    if ((uVar14 & 1) != 0) {
      uVar14 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar1;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar10 + 1;
        *puVar10 = uVar14;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
        uVar14 = *puVar10;
      }
      uVar16 = local_d8;
      if (local_b0 == 1) {
        lVar4 = 0x13;
        if ((param_4 & 1) == 0) {
          lVar4 = 0x17;
        }
        puVar2 = (undefined4 *)(uVar14 + lVar4);
        *puVar2 = (int)local_d8;
        if ((local_d8 & 1) != 0) {
          uVar17 = local_d8 & 0xfffffffffffc0000;
          uVar15 = *(ulong *)(uVar17 + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,puVar2,local_d8);
            uVar15 = *(ulong *)(uVar17 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,puVar2,uVar16);
          }
        }
        lVar4 = 0x1b;
        if ((param_4 & 1) == 0) {
          lVar4 = 0x1f;
        }
        *(undefined4 *)(*puVar10 + lVar4) = 0xfffffffe;
      }
      else {
        lVar4 = 0x1b;
        if ((param_4 & 1) == 0) {
          lVar4 = 0x1f;
        }
        puVar2 = (undefined4 *)(uVar14 + lVar4);
        *puVar2 = (int)local_d8;
        if ((local_d8 & 1) != 0) {
          uVar17 = local_d8 & 0xfffffffffffc0000;
          uVar15 = *(ulong *)(uVar17 + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,puVar2,local_d8);
            uVar15 = *(ulong *)(uVar17 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,puVar2,uVar16);
          }
        }
        puVar11 = (ulong *)Builtins::builtin_handle((Builtins *)(param_1 + 0x9e00),0x1fd);
        uVar16 = *puVar10;
        uVar14 = *puVar11;
        lVar4 = 0x13;
        if ((param_4 & 1) == 0) {
          lVar4 = 0x17;
        }
        puVar2 = (undefined4 *)(uVar16 + lVar4);
        *puVar2 = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar16,puVar2,uVar14);
            uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar16,puVar2,uVar14);
          }
        }
      }
      uVar14 = *puVar10;
      if (local_c8 == (ulong *)0x0) {
        *(undefined4 *)(uVar14 + 0x2b) = 0;
      }
      else {
        uVar16 = *local_c8;
        *(int *)(uVar14 + 0x2b) = (int)uVar16;
        if ((uVar16 & 1) != 0) {
          uVar15 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar15 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x2b,uVar16);
            uVar15 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x2b,uVar16);
          }
        }
      }
      if (*(int *)(*puVar10 + 0x23) >> 1 < local_b8._4_4_) {
        *(int *)(*puVar10 + 0x23) = local_b8._4_4_ << 1;
      }
      if (FLAG_trace_regexp_tier_up != '\0') {
        local_150 = *param_2;
        uVar16 = *param_2;
        uVar14 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_150);
        local_158 = *param_2;
        pcVar5 = "bytecode";
        if ((uVar14 & 1) == 0) {
          pcVar5 = "native code";
        }
        uVar14 = JSRegExp::ShouldProduceBytecode((JSRegExp *)&local_158);
        uVar17 = *puVar10;
        bVar7 = (param_4 & 1) == 0;
        uVar15 = uVar17 & 0xffffffff00000000;
        if ((uVar14 & 1) == 0) {
          lVar4 = 0x13;
          if (bVar7) {
            lVar4 = 0x17;
          }
          local_160 = uVar15 | *(uint *)(uVar17 + lVar4);
          uVar14 = HeapObject::SizeFromMap
                             ((HeapObject *)&local_160,uVar15 | *(uint *)(local_160 - 1));
          uVar14 = uVar14 & 0xffffffff;
        }
        else {
          lVar4 = 0x1b;
          if (bVar7) {
            lVar4 = 0x1f;
          }
          uVar14 = (ulong)((*(int *)((uVar15 | *(uint *)(uVar17 + lVar4)) + 3) >> 1) + 0xbU &
                          0xfffffffc);
        }
        PrintF("JSRegExp object %p %s size: %d\n",uVar16,pcVar5,uVar14);
      }
      uVar9 = 1;
      goto LAB_011bbb84;
    }
    uVar14 = *param_2 & 0xffffffff00000000;
    uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(*param_2 + 0xb)) + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar1;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar10 + 1;
      *puVar10 = uVar14;
    }
    else {
      puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar14);
    }
  }
  puVar12 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x110,puVar10,uVar13,0);
  Isolate::Throw(param_1,*puVar12,0);
  uVar9 = 0;
LAB_011bbb84:
  local_148 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_140 + 0xb790) = uStack_138;
  local_118 = &PTR__InterruptsScope_01c984b0;
  if (local_f8 != 2) {
    StackGuard::PopInterruptsScope(local_110);
  }
  Zone::~Zone(aZStack_a8);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

