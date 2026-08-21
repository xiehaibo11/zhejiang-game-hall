
/* v8::internal::WasmCompiledFrame::Print(v8::internal::StringStream*,
   v8::internal::StackFrame::PrintMode, int) const */

void __thiscall
v8::internal::WasmCompiledFrame::Print
          (WasmCompiledFrame *this,StringStream *param_1,int param_3,undefined4 param_4)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  void *pvVar12;
  void **ppvVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [12];
  void *local_e0;
  void **local_d8;
  undefined8 uStack_d0;
  int local_c8;
  int local_c0;
  int local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar2 = "%5d: ";
  if (param_3 != 0) {
    pcVar2 = "[%d]: ";
  }
  uVar8 = __strlen_chk(pcVar2,7);
  local_b0 = (void *)CONCAT44(local_b0._4_4_,param_4);
  StringStream::Add(param_1,pcVar2,uVar8,&local_b0,1);
  uVar8 = __strlen_chk("WASM [",7);
  StringStream::Add(param_1,"WASM [",uVar8,0,0);
  uVar9 = (**(code **)(*(long *)this + 0x58))(this);
  StringStream::PrintName(param_1,uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7));
  puVar10 = (undefined8 *)
            wasm::WasmCodeManager::LookupCode
                      (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),
                       **(ulong **)(this + 0x28));
  uVar8 = *puVar10;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_b0 = (void *)0x0;
  local_e0 = (void *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000 |
                     (ulong)*(uint *)(*(ulong *)(*(long *)(this + 0x20) + -0x10) + 0x6f));
  (**(code **)(*(long *)this + 0x88))(this,&local_b0);
  uVar3 = *(uint *)((long)local_b0 + 8);
  lVar14 = *(long *)((long)local_b0 + 0x20);
  pvVar12 = local_a8;
  if (local_b0 == (void *)0x0) {
LAB_00f48108:
    if (uVar3 < 3) {
      auVar17 = WasmModuleObject::GetRawFunctionName
                          ((WasmModuleObject *)&local_e0,*(uint *)(lVar14 + 0x38));
      lVar14 = (long)auVar17._8_4_;
      if (0x3f < auVar17._8_4_) {
        lVar14 = 0x40;
      }
      __memcpy_chk(&local_b0,auVar17._0_8_,lVar14,0x41);
      *(undefined1 *)((long)&local_b0 + lVar14) = 0;
      iVar7 = (**(code **)(*(long *)this + 0x68))(this);
      uVar9 = *(ulong *)(*(long *)(this + 0x20) + -0x10) & 0xffffffff00000000;
      lVar14 = *(long *)(**(long **)(*(long *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(*(
                                                  long *)(this + 0x20) + -0x10) + 0x6f)) + 0xb)) + 3
                                              ) + 0x18) + 200);
      local_d8 = (void *)0x0;
      uStack_d0 = 0;
      local_e0 = (void *)0x0;
      (**(code **)(*(long *)this + 0x88))(this,&local_e0);
      uVar3 = *(uint *)((long)local_e0 + 8);
      lVar16 = *(long *)((long)local_e0 + 0x20);
      ppvVar13 = local_d8;
      if (local_e0 == (void *)0x0) {
LAB_00f481e8:
        if (uVar3 < 3) {
          iVar5 = *(int *)(lVar16 + 0x38);
          uVar15 = **(undefined8 **)(this + 0x28);
          iVar4 = *(int *)(*(long *)(lVar14 + 0x88) + (long)iVar5 * 0x20 + 0x10);
          uVar11 = __strlen_chk("], function #%u (\'%s\'), pc=%p (+0x%x), pos=%d (+%d)\n",0x35);
          local_d8 = &local_b0;
          local_e0 = (void *)CONCAT44(local_e0._4_4_,iVar5);
          uStack_d0 = uVar15;
          local_c8 = (int)uVar15 - (int)uVar8;
          local_c0 = iVar7;
          local_b8 = iVar7 - iVar4;
          StringStream::Add(param_1,"], function #%u (\'%s\'), pc=%p (+0x%x), pos=%d (+%d)\n",uVar11
                            ,&local_e0,6);
          if (param_3 != 0) {
            uVar8 = __strlen_chk(&DAT_018938a8,2);
            StringStream::Add(param_1,&DAT_018938a8,uVar8,0,0);
          }
          if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      else {
        do {
          if (local_e0 == ppvVar13) {
            local_d8 = local_e0;
            operator_delete(local_e0);
            goto LAB_00f481e8;
          }
          puVar1 = (uint *)((long)ppvVar13 + -0x30);
          ppvVar13 = (void *)((long)ppvVar13 + -0x38);
        } while (*puVar1 < 3);
      }
    }
  }
  else {
    do {
      if (local_b0 == pvVar12) {
        local_a8 = local_b0;
        operator_delete(local_b0);
        goto LAB_00f48108;
      }
      puVar1 = (uint *)((long)pvVar12 + -0x30);
      pvVar12 = (void *)((long)pvVar12 + -0x38);
    } while (*puVar1 < 3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

