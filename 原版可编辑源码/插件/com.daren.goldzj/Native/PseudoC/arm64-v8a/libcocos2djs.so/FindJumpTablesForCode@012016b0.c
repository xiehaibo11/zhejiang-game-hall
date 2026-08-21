
/* v8::internal::wasm::NativeModule::FindJumpTablesForCode(unsigned long) const */

undefined1  [16] __thiscall
v8::internal::wasm::NativeModule::FindJumpTablesForCode(NativeModule *this,ulong param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  if (*(long **)(this + 0x160) != *(long **)(this + 0x168)) {
    plVar2 = *(long **)(this + 0x160) + 2;
    do {
      if ((param_1 - plVar2[-2] < (ulong)plVar2[-1]) &&
         ((undefined8 *)plVar2[1] != (undefined8 *)0x0)) {
        if ((undefined8 *)*plVar2 == (undefined8 *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)*plVar2;
        }
        uVar4 = *(undefined8 *)plVar2[1];
        base::Mutex::Unlock((Mutex *)(this + 0x110));
        auVar5._8_8_ = uVar4;
        auVar5._0_8_ = uVar3;
        return auVar5;
      }
      plVar1 = plVar2 + 2;
      plVar2 = plVar2 + 4;
    } while (plVar1 != *(long **)(this + 0x168));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("code_addr is not part of a code space");
}

