
/* v8::internal::EmbeddedData::FromIsolate(v8::internal::Isolate*) */

undefined1  [16] v8::internal::EmbeddedData::FromIsolate(Isolate *param_1)

{
  Builtins *this;
  uint uVar1;
  Instruction IVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  Instruction *pIVar5;
  int iVar6;
  uint *__s;
  ulong uVar7;
  undefined8 uVar8;
  ulong *__s_00;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auVar19 [12];
  ulong *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  long local_e0 [2];
  RelocInfo aRStack_d0 [48];
  Builtins aBStack_a0 [16];
  Instruction *local_90;
  char local_68;
  
  __s = operator_new(0x2de0);
  memset(__s,0,0x2de0);
  lVar14 = 0;
  bVar4 = false;
  uVar18 = 0;
  this = (Builtins *)(param_1 + 0x9e00);
  do {
    iVar15 = (int)lVar14;
    local_e0[0] = Builtins::builtin(this,iVar15);
    uVar7 = Code::IsIsolateIndependent((Code *)local_e0,param_1);
    if ((uVar7 & 1) == 0) {
      uVar8 = Builtins::name(iVar15);
      fprintf((FILE *)__cxa_thread_atexit_impl,"%s is not isolate-independent.\n",uVar8);
      bVar4 = true;
    }
    lVar9 = local_e0[0];
    iVar6 = Builtins::KindOf(*(int *)(local_e0[0] + 0x27));
    if (1 < iVar6 - 5U) {
      Builtins::CallableFor(aBStack_a0,param_1,*(undefined4 *)(lVar9 + 0x27));
      pIVar5 = local_90;
      auVar19 = CallInterfaceDescriptor::ContextRegister();
      if ((auVar19._0_8_ == 0x4000000010) && (auVar19._8_4_ == 0)) {
LAB_011d8b98:
        uVar8 = Builtins::name(iVar15);
        fprintf((FILE *)__cxa_thread_atexit_impl,"%s aliases the off-heap trampoline register.\n",
                uVar8);
        bVar4 = true;
      }
      else {
        uVar1 = *(uint *)pIVar5;
        uVar7 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          piVar13 = (int *)(*(long *)(pIVar5 + 0x18) + 8);
          do {
            if ((*(long *)(piVar13 + -2) == 0x4000000010) && (*piVar13 == 0)) goto LAB_011d8b98;
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 3;
          } while (uVar7 != 0);
        }
      }
    }
    lVar9 = lVar14 * 2;
    lVar14 = lVar14 + 1;
    uVar1 = *(uint *)(local_e0[0] + 0x13);
    __s[lVar9] = uVar18;
    (__s + lVar9)[1] = uVar1;
    uVar18 = (uVar1 + 0x20 & 0xffffffe0) + uVar18;
    if (lVar14 == 0x5bc) {
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "One or more builtins marked as isolate-independent either contains isolate-dependent code or aliases the off-heap trampoline register. If in doubt, ask jgruber@"
                );
      }
      uVar18 = uVar18 + 0x2e00;
      __s_00 = operator_new__((ulong)uVar18);
      memset(__s_00,0xcc,(ulong)uVar18);
      uVar7 = Isolate::HashIsolateForEmbeddedBlob(param_1);
      __s_00[1] = uVar7;
      memcpy(__s_00 + 2,__s,0x2de0);
      lVar14 = 0;
      puVar17 = __s;
      do {
        lVar9 = Builtins::builtin(this,(int)lVar14);
        memcpy((void *)((long)__s_00 + (ulong)*puVar17 + 0x2e00),(void *)(lVar9 + 0x3f),
               (long)*(int *)(lVar9 + 0x13));
        lVar14 = lVar14 + 1;
        puVar17 = puVar17 + 2;
      } while (lVar14 != 0x5bc);
      iVar15 = 0;
      local_f0 = __s_00;
      local_e8 = uVar18;
      do {
        uVar8 = Builtins::builtin(this,iVar15);
        RelocIterator::RelocIterator((RelocIterator *)aBStack_a0,uVar8,3);
        RelocIterator::RelocIterator((RelocIterator *)local_e0,&local_f0,uVar8,3);
        while (local_68 == '\0') {
          IVar2 = local_90[3];
          puVar10 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_90);
          if (IVar2 == (Instruction)0x58) {
            puVar10 = (undefined8 *)*puVar10;
          }
          puVar11 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
          uVar7 = Isolate::CurrentEmbeddedBlobSize();
          if ((puVar11 <= puVar10) &&
             (puVar10 < (undefined8 *)((long)puVar11 + (uVar7 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","address < start || address >= end");
          }
          uVar7 = Builtins::IsIsolateIndependentBuiltin((long)puVar10 + -0x3f);
          if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","Builtins::IsIsolateIndependentBuiltin(target)");
          }
          RelocInfo::set_target_address
                    (aRStack_d0,
                     (long)local_f0 +
                     (ulong)(uint)local_f0[(long)*(int *)(puVar10 + -3) + 2] + 0x2e00,0,0);
          RelocIterator::next((RelocIterator *)aBStack_a0);
          RelocIterator::next((RelocIterator *)local_e0);
        }
        iVar15 = iVar15 + 1;
        if (iVar15 == 0x5bc) {
          if (local_e8 == 8) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            lVar14 = (ulong)local_e8 - 8;
            puVar16 = local_f0 + 1;
            do {
              uVar12 = base::hash_combine(0,(ulong)(byte)*puVar16);
              uVar7 = base::hash_value(uVar7);
              uVar7 = base::hash_combine(uVar12,uVar7);
              lVar14 = lVar14 + -1;
              puVar16 = (ulong *)((long)puVar16 + 1);
            } while (lVar14 != 0);
          }
          *__s_00 = uVar7;
          if (FLAG_serialization_statistics != '\0') {
            PrintStatistics((EmbeddedData *)&local_f0);
          }
          operator_delete(__s);
          auVar3._8_4_ = local_e8;
          auVar3._0_8_ = local_f0;
          auVar3._12_4_ = uStack_e4;
          return auVar3;
        }
      } while( true );
    }
  } while( true );
}

