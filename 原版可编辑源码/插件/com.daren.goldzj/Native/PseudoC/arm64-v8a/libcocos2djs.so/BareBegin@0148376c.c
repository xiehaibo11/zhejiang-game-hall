
/* v8::internal::wasm::AsmJsParser::BareBegin(v8::internal::wasm::AsmJsParser::BlockKind, int) */

void __thiscall
v8::internal::wasm::AsmJsParser::BareBegin(AsmJsParser *this,uint param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  Zone *this_00;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  
  puVar2 = *(ulong **)(this + 0x218);
  if (puVar2 == *(ulong **)(this + 0x220)) {
    lVar5 = (long)puVar2 - *(long *)(this + 0x210) >> 3;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = (long)*(ulong **)(this + 0x220) - *(long *)(this + 0x210);
    uVar7 = lVar3 >> 2;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x228);
      uVar7 = uVar1 * 8;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar7;
      }
      else {
        lVar3 = Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar2 = (ulong *)(lVar3 + lVar5 * 8);
    puVar4 = puVar2 + 1;
    *puVar2 = (ulong)param_2 | param_3 << 0x20;
    puVar6 = *(ulong **)(this + 0x210);
    puVar8 = *(ulong **)(this + 0x218);
    while (puVar8 != puVar6) {
      puVar8 = puVar8 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar8;
    }
    *(ulong **)(this + 0x210) = puVar2;
    *(ulong **)(this + 0x218) = puVar4;
    *(ulong *)(this + 0x220) = lVar3 + uVar1 * 8;
  }
  else {
    *puVar2 = (ulong)param_2 | param_3 << 0x20;
    *(long *)(this + 0x218) = *(long *)(this + 0x218) + 8;
  }
  return;
}

