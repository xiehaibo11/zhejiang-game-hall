
/* v8::internal::BasicBlockProfiler::Data::Data(unsigned long) */

void __thiscall v8::internal::BasicBlockProfiler::Data::Data(Data *this,ulong param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  *(ulong *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (param_1 == 0) {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    if (param_1 >> 0x3e != 0) {
LAB_014e7fd0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = operator_new(param_1 * 4);
    *(undefined4 **)(this + 8) = puVar1;
    *(undefined4 **)(this + 0x10) = puVar1;
    *(undefined4 **)(this + 0x18) = puVar1 + param_1;
    do {
      *puVar1 = 0;
      param_1 = param_1 - 1;
      puVar1 = (undefined4 *)(*(long *)(this + 0x10) + 4);
      *(undefined4 **)(this + 0x10) = puVar1;
    } while (param_1 != 0);
    uVar2 = *(ulong *)this;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    if (uVar2 != 0) {
      if (uVar2 >> 0x3e != 0) goto LAB_014e7fd0;
      puVar1 = operator_new(uVar2 * 4);
      *(undefined4 **)(this + 0x20) = puVar1;
      *(undefined4 **)(this + 0x28) = puVar1;
      *(undefined4 **)(this + 0x30) = puVar1 + uVar2;
      do {
        *puVar1 = 0;
        uVar2 = uVar2 - 1;
        puVar1 = (undefined4 *)(*(long *)(this + 0x28) + 4);
        *(undefined4 **)(this + 0x28) = puVar1;
      } while (uVar2 != 0);
    }
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

