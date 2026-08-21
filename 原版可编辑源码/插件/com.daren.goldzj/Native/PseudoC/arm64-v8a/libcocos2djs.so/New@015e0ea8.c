
/* v8::internal::wasm::CompilationState::New(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&, std::__ndk1::shared_ptr<v8::internal::Counters>) */

void __thiscall
v8::internal::wasm::CompilationState::New
          (undefined8 *param_1_00,CompilationState *this,undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  Mutex *this_00;
  undefined4 *puVar10;
  long lVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar7 = operator_new(0x1b8);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  *puVar7 = *(undefined8 *)this;
  puVar8 = operator_new(0x60);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_01cc9b50;
  base::SharedMutex::SharedMutex((SharedMutex *)(puVar8 + 3));
  puVar8[10] = *(undefined8 *)this;
  lVar11 = *(long *)(this + 8);
  puVar8[0xb] = lVar11;
  if (lVar11 != 0) {
    plVar9 = (long *)(lVar11 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7[1] = (SharedMutex *)(puVar8 + 3);
  puVar7[2] = puVar8;
  bVar5 = false;
  if (FLAG_wasm_tier_up != '\0') {
    bVar5 = *(char *)(*(long *)(*(long *)this + 200) + 0x178) == '\0';
  }
  *(bool *)(puVar7 + 3) = bVar5;
  puVar7[4] = uVar2;
  puVar7[5] = uVar3;
  *(undefined1 *)(puVar7 + 6) = 0;
  if (1 < (int)FLAG_wasm_num_compilation_tasks) {
    plVar9 = (long *)V8::GetCurrentPlatform();
    uVar6 = (**(code **)(*plVar9 + 0x28))();
    if ((int)FLAG_wasm_num_compilation_tasks <= (int)uVar6) {
      uVar6 = FLAG_wasm_num_compilation_tasks;
    }
    if (0 < (int)uVar6) goto LAB_015e0fa8;
  }
  uVar6 = 1;
LAB_015e0fa8:
  uVar15 = (ulong)uVar6;
  *(uint *)((long)puVar7 + 0x34) = uVar6;
  uVar14 = (uVar15 + (ulong)uVar6 * 2) * 0x20;
  this_00 = operator_new(uVar14);
  puVar7[7] = this_00;
  puVar7[8] = this_00;
  puVar7[9] = this_00 + uVar14;
  uVar14 = uVar15;
  do {
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    base::Mutex::Mutex(this_00);
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    uVar14 = uVar14 - 1;
    this_00 = (Mutex *)(puVar7[8] + 0x60);
    puVar7[8] = this_00;
  } while (uVar14 != 0);
  base::Mutex::Mutex((Mutex *)(puVar7 + 10));
  lVar11 = 0x58;
  uVar14 = 1;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x14] = 0;
  *(undefined2 *)(puVar7 + 0xf) = 0;
  *(undefined4 *)(puVar7 + 0x1a) = 0;
  do {
    uVar12 = 0;
    if (uVar14 != (uint)((int)((ulong)(puVar7[8] - puVar7[7]) >> 5) * -0x55555555)) {
      uVar12 = (undefined4)uVar14;
    }
    uVar14 = uVar14 + 1;
    *(undefined4 *)(puVar7[7] + lVar11) = uVar12;
    lVar11 = lVar11 + 0x60;
  } while (uVar14 - uVar15 != 1);
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1b] = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1d] = 0;
  base::Mutex::Mutex((Mutex *)(puVar7 + 0x20));
  iVar13 = *(int *)((long)puVar7 + 0x34);
  lVar11 = (long)iVar13;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x25] = 0;
  if (iVar13 != 0) {
    if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar10 = operator_new(lVar11 * 4);
    puVar7[0x25] = puVar10;
    puVar7[0x26] = puVar10;
    puVar7[0x27] = puVar10 + lVar11;
    do {
      *puVar10 = 0;
      lVar11 = lVar11 + -1;
      puVar10 = (undefined4 *)(puVar7[0x26] + 4);
      puVar7[0x26] = puVar10;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(puVar7 + 0x28) = 0;
  puVar7[0x29] = 0;
  puVar7[0x2a] = 0;
  base::Mutex::Mutex((Mutex *)(puVar7 + 0x2b));
  uVar14 = (ulong)*(uint *)((long)puVar7 + 0x34);
  puVar7[0x36] = 0;
  puVar7[0x33] = 0;
  puVar7[0x32] = 0;
  puVar7[0x35] = 0;
  puVar7[0x34] = 0;
  puVar7[0x31] = 0;
  puVar7[0x30] = 0;
  if (0 < (int)*(uint *)((long)puVar7 + 0x34)) {
    lVar11 = 0;
    iVar13 = -1;
    do {
      iVar1 = (int)uVar14 + iVar13;
      iVar13 = iVar13 + -1;
      *(int *)(puVar7[0x25] + lVar11 * 4) = iVar1;
      uVar14 = (ulong)*(int *)((long)puVar7 + 0x34);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (long)uVar14);
  }
  *param_1_00 = puVar7;
  return;
}

