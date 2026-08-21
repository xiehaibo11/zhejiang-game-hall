
/* std::__ndk1::vector<v8::internal::wasm::AsmJsParser::VarInfo,
   v8::internal::ZoneAllocator<v8::internal::wasm::AsmJsParser::VarInfo> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::AsmJsParser::VarInfo,v8::internal::ZoneAllocator<v8::internal::wasm::AsmJsParser::VarInfo>>
::__append(vector<v8::internal::wasm::AsmJsParser::VarInfo,v8::internal::ZoneAllocator<v8::internal::wasm::AsmJsParser::VarInfo>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  Zone *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar3 >> 3) * -0x3333333333333333) < param_1) {
    lVar2 = (long)puVar3 - *(long *)this >> 3;
    uVar1 = lVar2 * -0x3333333333333333 + param_1;
    if (0x3333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar6 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if ("ect::Cast" < (char *)(lVar5 * -0x3333333333333333)) {
      uVar1 = 0x3333333;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar6 = uVar1 * 0x28;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar6;
      }
      else {
        lVar5 = v8::internal::Zone::NewExpand(this_00,uVar6);
      }
    }
    puVar4 = (undefined8 *)(lVar5 + lVar2 * 8);
    puVar3 = puVar4;
    do {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *puVar3 = 0x80000001;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined2 *)((long)puVar3 + 0x24) = 1;
      param_1 = param_1 - 1;
      puVar3 = puVar3 + 5;
    } while (param_1 != 0);
    lVar2 = *(long *)this;
    for (lVar7 = *(long *)(this + 8); lVar7 != lVar2; lVar7 = lVar7 + -0x28) {
      uVar9 = *(undefined8 *)(lVar7 + -0x20);
      uVar8 = *(undefined8 *)(lVar7 + -0x28);
      uVar11 = *(undefined8 *)(lVar7 + -0x10);
      uVar10 = *(undefined8 *)(lVar7 + -0x18);
      puVar4[-1] = *(undefined8 *)(lVar7 + -8);
      puVar4[-2] = uVar11;
      puVar4[-3] = uVar10;
      puVar4[-4] = uVar9;
      puVar4[-5] = uVar8;
      puVar4 = puVar4 + -5;
    }
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar3;
    *(ulong *)(this + 0x10) = lVar5 + uVar1 * 0x28;
  }
  else {
    do {
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *puVar3 = 0x80000001;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined2 *)((long)puVar3 + 0x24) = 1;
      param_1 = param_1 - 1;
      puVar3 = (undefined8 *)(*(long *)(this + 8) + 0x28);
      *(undefined8 **)(this + 8) = puVar3;
    } while (param_1 != 0);
  }
  return;
}

