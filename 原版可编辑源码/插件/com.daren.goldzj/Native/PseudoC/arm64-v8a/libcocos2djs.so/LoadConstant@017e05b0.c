
/* v8::internal::wasm::LiftoffAssembler::LoadConstant(v8::internal::wasm::LiftoffRegister,
   v8::internal::wasm::WasmValue, v8::internal::RelocInfo::Mode) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::LoadConstant
          (LiftoffAssembler *this,ulong param_2,undefined1 *param_3,ulong param_4)

{
  long lVar1;
  ulong local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  long local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*param_3) {
  case 1:
    local_80 = param_2 & 0xff | 0x2000000000;
    local_50 = (long)*(int *)(param_3 + 1);
    break;
  case 2:
    local_80 = param_2 & 0xff | 0x4000000000;
    local_50 = *(long *)(param_3 + 1);
    break;
  case 3:
    TurboAssembler::Fmov
              (*(undefined4 *)(param_3 + 1),this,
               (ulong)(((uint)param_2 & 0xff) - 0x1d) | 0x2000000000,0x100000001);
    goto LAB_017e06a0;
  case 4:
    TurboAssembler::Fmov
              (*(undefined8 *)(param_3 + 1),this,
               (ulong)(((uint)param_2 & 0xff) - 0x1d) | 0x4000000000,0x100000001);
    goto LAB_017e06a0;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_78 = 0;
  local_48 = param_4 & 0xff;
  local_70[0] = 0;
  local_68 = 0;
  uStack_40 = 0xffffffff;
  local_38 = 2;
  TurboAssembler::Mov((TurboAssembler *)this,&local_80,local_70,0);
LAB_017e06a0:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

