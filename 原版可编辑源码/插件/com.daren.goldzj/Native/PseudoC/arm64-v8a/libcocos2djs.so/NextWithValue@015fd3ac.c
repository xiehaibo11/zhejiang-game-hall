
/* v8::internal::wasm::StreamingDecoder::DecodeNumberOfFunctions::NextWithValue(v8::internal::wasm::StreamingDecoder*)
    */

void v8::internal::wasm::StreamingDecoder::DecodeNumberOfFunctions::NextWithValue
               (StreamingDecoder *param_1)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  long lVar3;
  __shared_weak_count *p_Var4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  void *__src;
  undefined8 *puVar11;
  long *in_x1;
  undefined8 *in_x8;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 uStack_a8;
  undefined8 local_78;
  byte local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  char *local_60;
  undefined7 local_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long local_48;
  
  lVar9 = tpidr_el0;
  local_48 = *(long *)(lVar9 + 0x28);
  lVar13 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(lVar13 + 0x20);
  uVar15 = *(long *)(lVar13 + 0x18) - lVar3;
  if (uVar15 < *(ulong *)(param_1 + 0x30)) {
    local_60 = operator_new(0x20);
    builtin_strncpy(local_60,"invalid code section length",0x1c);
    iVar5 = *(int *)((long)in_x1 + 0x2c);
    local_70 = 0x21;
    uStack_68 = 0x1b;
LAB_015fd44c:
    uStack_67 = 0;
    local_78 = CONCAT44(local_78._4_4_,iVar5 + -1);
    local_58 = 0;
    uStack_6f = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    plVar10 = (long *)*in_x1;
    if (plVar10 == (long *)0x0) {
      *in_x1 = 0;
    }
    else {
      (**(code **)(*plVar10 + 0x40))(plVar10,&local_78);
      plVar10 = (long *)*in_x1;
      *in_x1 = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
    *in_x8 = 0;
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    goto LAB_015fd6cc;
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  __src = (void *)(**(code **)(*(long *)param_1 + 0x20))();
  memcpy((void *)(lVar13 + lVar3),__src,*(size_t *)(param_1 + 0x30));
  lVar13 = *(long *)(param_1 + 0x28);
  if (lVar13 == 0) {
    if (uVar15 != *(ulong *)(param_1 + 0x30)) {
      local_60 = operator_new(0x30);
      uStack_a8 = 0x24;
      builtin_strncpy(local_60,"not all code section bytes were used",0x25);
      iVar5 = *(int *)((long)in_x1 + 0x2c);
      local_70 = 0x31;
      uStack_68 = uStack_a8;
      goto LAB_015fd44c;
    }
    uVar6 = *(undefined4 *)((long)in_x1 + 0x2c);
    puVar11 = operator_new(0x18);
    *(undefined1 *)(puVar11 + 2) = 0;
    *(undefined4 *)((long)puVar11 + 0x14) = uVar6;
    *puVar11 = &PTR__DecodingState_01cca0c8;
    puVar11[1] = 0;
LAB_015fd6c0:
    *in_x8 = puVar11;
  }
  else {
    uVar2 = *(undefined8 *)(in_x1[3] + -0x10);
    p_Var4 = *(__shared_weak_count **)(in_x1[3] + -8);
    if (p_Var4 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var4 + 8;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar8) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plVar10 = (long *)*in_x1;
    if (plVar10 == (long *)0x0) {
      if (p_Var4 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var4 + 8;
        do {
          lVar13 = *(long *)p_Var1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar8) {
            *(long *)p_Var1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 != 0) goto LAB_015fd66c;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
        if (*in_x1 == 0) goto LAB_015fd6c8;
        goto LAB_015fd674;
      }
    }
    else {
      local_70 = (byte)p_Var4;
      uStack_6f = (undefined7)((ulong)p_Var4 >> 8);
      local_78 = uVar2;
      uVar15 = (**(code **)(*plVar10 + 0x20))
                         (plVar10,lVar13,*(int *)((long)in_x1 + 0x2c) + -1,&local_78,
                          uVar15 & 0xffffffff);
      p_Var4 = (__shared_weak_count *)CONCAT71(uStack_6f,local_70);
      if (p_Var4 == (__shared_weak_count *)0x0) {
LAB_015fd530:
        if ((uVar15 & 1) == 0) goto LAB_015fd534;
LAB_015fd66c:
        lVar13 = *in_x1;
      }
      else {
        p_Var1 = p_Var4 + 8;
        do {
          lVar13 = *(long *)p_Var1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar8) {
            *(long *)p_Var1 = lVar13 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar13 != 0) goto LAB_015fd530;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
        if ((uVar15 & 1) != 0) goto LAB_015fd66c;
LAB_015fd534:
        plVar10 = (long *)*in_x1;
        *in_x1 = 0;
        if (plVar10 == (long *)0x0) goto LAB_015fd66c;
        (**(code **)(*plVar10 + 8))();
        lVar13 = *in_x1;
      }
      if (lVar13 != 0) {
LAB_015fd674:
        lVar13 = *(long *)(param_1 + 0x30);
        lVar3 = *(long *)(param_1 + 0x38);
        lVar14 = *(long *)(lVar3 + 0x20);
        puVar11 = operator_new(0x50);
        lVar12 = *(long *)(param_1 + 0x28);
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = lVar3;
        puVar11[8] = lVar13 + lVar14;
        puVar11[3] = 0x74cbb1;
        puVar11[4] = "body size";
        *puVar11 = &PTR__DecodingState_01cca1d8;
        puVar11[1] = 0;
        puVar11[9] = lVar12 + -1;
        goto LAB_015fd6c0;
      }
    }
LAB_015fd6c8:
    *in_x8 = 0;
  }
LAB_015fd6cc:
  if (*(long *)(lVar9 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

