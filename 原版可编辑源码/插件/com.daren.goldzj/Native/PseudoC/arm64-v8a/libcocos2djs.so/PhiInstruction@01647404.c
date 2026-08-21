
/* v8::internal::compiler::PhiInstruction::PhiInstruction(v8::internal::Zone*, int, unsigned long)
    */

void __thiscall
v8::internal::compiler::PhiInstruction::PhiInstruction
          (PhiInstruction *this,Zone *param_1,int param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  *(int *)this = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(ulong *)(this + 8) = (ulong)(uint)param_2 << 3 | 0x8800000001;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x28) = param_1;
  if (param_3 != 0) {
    if (param_3 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    uVar2 = param_3 * 4 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar1) < uVar2) {
      puVar1 = (undefined4 *)Zone::NewExpand(param_1,uVar2);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)puVar1 + uVar2;
    }
    *(undefined4 **)(this + 0x20) = puVar1 + param_3;
    *(undefined4 **)(this + 0x10) = puVar1;
    *(undefined4 **)(this + 0x18) = puVar1;
    do {
      *puVar1 = 0xffffffff;
      param_3 = param_3 - 1;
      puVar1 = (undefined4 *)(*(long *)(this + 0x18) + 4);
      *(undefined4 **)(this + 0x18) = puVar1;
    } while (param_3 != 0);
  }
  return;
}

