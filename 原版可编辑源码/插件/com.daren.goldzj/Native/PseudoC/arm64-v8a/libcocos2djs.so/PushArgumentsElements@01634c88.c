
/* v8::internal::compiler::StateValueList::PushArgumentsElements(v8::internal::CreateArgumentsType)
    */

void __thiscall
v8::internal::compiler::StateValueList::PushArgumentsElements(StateValueList *this,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (puVar2 < *(undefined8 **)(this + 0x10)) {
    *puVar2 = 0x70800;
    puVar2[1] = param_2 & 0xff;
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  }
  else {
    lVar7 = (long)puVar2 - *(long *)this >> 4;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
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
    puVar2 = (undefined8 *)(lVar4 + lVar7 * 0x10);
    *puVar2 = 0x70800;
    puVar2[1] = param_2 & 0xff;
    lVar7 = *(long *)this;
    puVar3 = puVar2;
    for (lVar6 = *(long *)(this + 8); lVar6 != lVar7; lVar6 = lVar6 + -0x10) {
      uVar8 = *(undefined8 *)(lVar6 + -0x10);
      puVar3[-1] = *(undefined8 *)(lVar6 + -8);
      puVar3[-2] = uVar8;
      puVar3 = puVar3 + -2;
    }
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar2 + 2;
    *(ulong *)(this + 0x10) = lVar4 + uVar1 * 0x10;
  }
  return;
}

