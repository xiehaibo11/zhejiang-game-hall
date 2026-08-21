
/* v8::internal::wasm::NativeModule::UseLazyStub(unsigned int) */

void __thiscall v8::internal::wasm::NativeModule::UseLazyStub(NativeModule *this,uint param_1)

{
  Mutex *this_00;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined8 local_220 [55];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar8 = *(long **)(this + 0xf8);
  if (plVar8 == (long *)0x0) {
    iVar13 = *(int *)(*(long *)(this + 200) + 0x44);
    puVar7 = (undefined8 *)__emutls_get_address(&DAT_01d35888);
    local_250 = *puVar7;
    this_00 = (Mutex *)(this + 0x110);
    *puVar7 = &local_250;
    uStack_240 = 0;
    local_248 = 0;
    uStack_230 = 0;
    local_238 = 0;
    local_228 = 0x3f800000;
    base::Mutex::Lock(this_00);
    uVar2 = **(undefined8 **)(this + 0x160);
    uVar3 = (*(undefined8 **)(this + 0x160))[1];
    base::Mutex::Unlock(this_00);
    uVar5 = iVar13 * 0xc;
    local_220[0] = 0;
    puVar7 = (undefined8 *)CreateEmptyJumpTableInRegion(this,uVar5,uVar2,uVar3,local_220);
    *(undefined8 **)(this + 0xf8) = puVar7;
    pvVar9 = (void *)*puVar7;
    uVar10 = *(uint *)(*(long *)(this + 200) + 0x3c);
    base::Mutex::Lock(this_00);
    plVar8 = *(long **)(this + 0x160);
    while( true ) {
      if (plVar8 == *(long **)(this + 0x168)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("code_addr is not part of a code space");
      }
      if (((ulong)((long)pvVar9 - *plVar8) < (ulong)plVar8[1]) && ((long *)plVar8[3] != (long *)0x0)
         ) break;
      plVar8 = plVar8 + 4;
    }
    lVar14 = *(long *)plVar8[3];
    base::Mutex::Unlock(this_00);
    JumpTableAssembler::JumpTableAssembler
              ((JumpTableAssembler *)local_220,(ulong)pvVar9,uVar5 + 0x100);
    if (iVar13 != 0) {
      do {
        JumpTableAssembler::EmitLazyCompileJumpSlot
                  ((JumpTableAssembler *)local_220,uVar10,lVar14 + 0xc0);
        iVar13 = iVar13 + -1;
        uVar10 = uVar10 + 1;
      } while (iVar13 != 0);
    }
    FlushInstructionCache(pvVar9,(ulong)uVar5);
    Assembler::~Assembler((Assembler *)local_220);
    WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)&local_250);
    plVar8 = *(long **)(this + 0xf8);
  }
  lVar11 = *plVar8;
  iVar13 = *(int *)(*(long *)(this + 200) + 0x3c);
  base::Mutex::Lock((Mutex *)(this + 0x110));
  lVar14 = *(long *)(this + 0x160);
  lVar4 = *(long *)(this + 0x168);
  if (lVar14 != lVar4) {
    iVar13 = param_1 - iVar13;
    uVar12 = (ulong)(iVar13 * 0x10 + 0x210);
    plVar8 = *(long **)(lVar14 + 0x10);
    while( true ) {
      if (plVar8 != (long *)0x0) {
        uVar1 = **(long **)(lVar14 + 0x18) + uVar12;
        if ((ulong)(*(long **)(lVar14 + 0x18))[1] <= uVar12) {
          uVar1 = 0;
        }
        JumpTableAssembler::PatchJumpTableSlot
                  (*plVar8 + (ulong)(uint)(iVar13 * 4),uVar1,lVar11 + (ulong)(uint)(iVar13 * 0xc));
      }
      if (lVar4 == lVar14 + 0x20) break;
      plVar8 = *(long **)(lVar14 + 0x30);
      lVar14 = lVar14 + 0x20;
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

