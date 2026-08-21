
/* std::__ndk1::vector<v8::internal::wasm::InterpreterCode,
   v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
::reserve(vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
          *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  Zone *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar7 = *(long *)this;
  if ((ulong)((*(long *)(this + 0x10) - lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    lVar9 = *(long *)(this + 8);
    this_00 = *(Zone **)(this + 0x18);
    lVar4 = *(long *)(this_00 + 0x10);
    uVar5 = param_1 * 0x58;
    if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
        uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
    }
    else {
      lVar4 = v8::internal::Zone::NewExpand(this_00,uVar5);
    }
    lVar8 = *(long *)this;
    lVar2 = *(long *)(this + 8);
    lVar6 = lVar4 + (lVar9 - lVar7 >> 3) * 8;
    lVar7 = lVar6;
    lVar9 = lVar8;
    if (lVar2 != lVar8) {
      lVar7 = 0;
      do {
        lVar9 = lVar2 + lVar7;
        lVar1 = lVar6 + lVar7;
        lVar7 = lVar7 + -0x58;
        *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(lVar9 + -0x58);
        uVar3 = *(undefined4 *)(lVar9 + -0x50);
        *(undefined8 *)(lVar1 + -0x40) = 0;
        *(undefined8 *)(lVar1 + -0x38) = 0;
        *(undefined8 *)(lVar1 + -0x48) = 0;
        *(undefined4 *)(lVar1 + -0x50) = uVar3;
        *(undefined8 *)(lVar1 + -0x30) = *(undefined8 *)(lVar9 + -0x30);
        *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(lVar9 + -0x48);
        *(undefined8 *)(lVar1 + -0x40) = *(undefined8 *)(lVar9 + -0x40);
        *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(lVar9 + -0x38);
        uVar11 = *(undefined8 *)(lVar9 + -0x10);
        uVar10 = *(undefined8 *)(lVar9 + -0x18);
        uVar13 = *(undefined8 *)(lVar9 + -0x20);
        uVar12 = *(undefined8 *)(lVar9 + -0x28);
        *(undefined8 *)(lVar9 + -0x48) = 0;
        *(undefined8 *)(lVar9 + -0x40) = 0;
        *(undefined8 *)(lVar9 + -0x38) = 0;
        *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar9 + -8);
        *(undefined8 *)(lVar1 + -0x10) = uVar11;
        *(undefined8 *)(lVar1 + -0x18) = uVar10;
        *(undefined8 *)(lVar1 + -0x20) = uVar13;
        *(undefined8 *)(lVar1 + -0x28) = uVar12;
      } while (lVar8 - lVar2 != lVar7);
      lVar8 = *(long *)this;
      lVar7 = lVar6 + lVar7;
      lVar9 = *(long *)(this + 8);
    }
    *(long *)this = lVar7;
    *(long *)(this + 8) = lVar6;
    *(ulong *)(this + 0x10) = lVar4 + param_1 * 0x58;
    while (lVar7 = lVar9, lVar7 != lVar8) {
      lVar9 = lVar7 + -0x58;
      if (*(long *)(lVar7 + -0x48) != 0) {
        *(long *)(lVar7 + -0x40) = *(long *)(lVar7 + -0x48);
      }
    }
  }
  return;
}

