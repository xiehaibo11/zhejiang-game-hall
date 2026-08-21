
/* v8::internal::compiler::StateValueList::PushPlain(v8::internal::MachineType) */

void __thiscall v8::internal::compiler::StateValueList::PushPlain(StateValueList *this,int param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  puVar2 = *(ulong **)(this + 8);
  uVar7 = (ulong)(uint)(param_2 << 8) & 0xffff00 | 2;
  if (puVar2 < *(ulong **)(this + 0x10)) {
    *puVar2 = uVar7;
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  }
  else {
    lVar8 = (long)puVar2 - *(long *)this >> 4;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(ulong **)(this + 0x10) - *(long *)this;
    uVar5 = lVar4 >> 3;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x3fffffe < (ulong)(lVar4 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar5 = uVar1 * 0x10;
      lVar4 = *(long *)(this_00 + 0x10);
      if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
          uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
      }
      else {
        lVar4 = Zone::NewExpand(this_00,uVar5);
      }
    }
    puVar2 = (ulong *)(lVar4 + lVar8 * 0x10);
    *puVar2 = uVar7;
    lVar8 = *(long *)this;
    puVar3 = puVar2;
    for (lVar6 = *(long *)(this + 8); lVar6 != lVar8; lVar6 = lVar6 + -0x10) {
      uVar7 = *(ulong *)(lVar6 + -0x10);
      puVar3[-1] = *(ulong *)(lVar6 + -8);
      puVar3[-2] = uVar7;
      puVar3 = puVar3 + -2;
    }
    *(ulong **)this = puVar3;
    *(ulong **)(this + 8) = puVar2 + 2;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 0x10;
  }
  return;
}

