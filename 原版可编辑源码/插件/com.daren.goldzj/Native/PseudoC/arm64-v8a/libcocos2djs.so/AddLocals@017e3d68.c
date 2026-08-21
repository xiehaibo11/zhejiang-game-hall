
/* v8::internal::wasm::LocalDeclEncoder::AddLocals(unsigned int, v8::internal::wasm::ValueType) */

int __thiscall
v8::internal::wasm::LocalDeclEncoder::AddLocals(LocalDeclEncoder *this,uint param_1,uint param_3)

{
  ulong uVar1;
  long lVar2;
  Zone *this_00;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  lVar8 = *(long *)(this + 0x28);
  if (*(long *)this == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)*(undefined8 *)(*(long *)this + 8);
  }
  puVar3 = *(ulong **)(this + 8);
  puVar4 = *(ulong **)(this + 0x10);
  *(ulong *)(this + 0x28) = lVar8 + (ulong)param_1;
  if ((puVar4 != puVar3) && ((uint)*(byte *)((long)puVar4 + -4) == (param_3 & 0xff))) {
    puVar4 = puVar4 + -1;
    param_1 = (int)*puVar4 + param_1;
    *(ulong **)(this + 0x10) = puVar4;
  }
  if (puVar4 < *(ulong **)(this + 0x18)) {
    *puVar4 = CONCAT44(param_3,param_1) & 0xffffffffff;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  else {
    lVar10 = (long)puVar4 - (long)puVar3 >> 3;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = (long)*(ulong **)(this + 0x18) - (long)puVar3;
    uVar6 = lVar2 >> 2;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffe < (ulong)(lVar2 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x20);
      uVar6 = uVar1 * 8;
      lVar2 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar2) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar2) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar2 + uVar6;
      }
      else {
        lVar2 = Zone::NewExpand(this_00,uVar6);
      }
    }
    puVar3 = (ulong *)(lVar2 + lVar10 * 8);
    puVar5 = puVar3 + 1;
    *puVar3 = CONCAT44(param_3,param_1) & 0xffffffffff;
    puVar4 = *(ulong **)(this + 8);
    puVar7 = *(ulong **)(this + 0x10);
    while (puVar7 != puVar4) {
      puVar7 = puVar7 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar7;
    }
    *(ulong **)(this + 8) = puVar3;
    *(ulong **)(this + 0x10) = puVar5;
    *(ulong *)(this + 0x18) = lVar2 + uVar1 * 8;
  }
  return iVar9 + (int)lVar8;
}

