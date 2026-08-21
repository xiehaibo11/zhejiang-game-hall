
/* v8::internal::interpreter::HandlerTableBuilder::NewHandlerEntry() */

ulong __thiscall
v8::internal::interpreter::HandlerTableBuilder::NewHandlerEntry(HandlerTableBuilder *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  Zone *this_00;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = *(undefined8 **)(this + 8);
  uVar7 = (long)puVar2 - *(long *)this;
  if (*(undefined8 **)(this + 0x10) == puVar2) {
    lVar8 = (long)uVar7 >> 5;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x10) - *(long *)this;
    uVar9 = lVar6 >> 4;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x1fffffe < (ulong)(lVar6 >> 5)) {
      uVar1 = 0x3ffffff;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar9 = uVar1 * 0x20;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar9;
      }
      else {
        lVar6 = Zone::NewExpand(this_00,uVar9);
      }
    }
    puVar2 = (undefined8 *)(lVar6 + lVar8 * 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x7fffffff;
    puVar3 = *(undefined8 **)this;
    puVar4 = puVar2;
    puVar5 = *(undefined8 **)(this + 8);
    while (puVar5 != puVar3) {
      uVar10 = puVar5[-4];
      uVar12 = puVar5[-1];
      uVar11 = puVar5[-2];
      puVar4[-3] = puVar5[-3];
      puVar4[-4] = uVar10;
      puVar4[-1] = uVar12;
      puVar4[-2] = uVar11;
      puVar4 = puVar4 + -4;
      puVar5 = puVar5 + -4;
    }
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar2 + 4;
    *(ulong *)(this + 0x10) = lVar6 + uVar1 * 0x20;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x7fffffff;
    *(long *)(this + 8) = *(long *)(this + 8) + 0x20;
  }
  return uVar7 >> 5;
}

