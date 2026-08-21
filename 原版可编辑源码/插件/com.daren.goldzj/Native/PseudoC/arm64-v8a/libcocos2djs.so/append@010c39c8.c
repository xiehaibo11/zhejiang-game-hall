
/* v8::internal::FeedbackVectorSpec::append(v8::internal::FeedbackSlotKind) */

void __thiscall
v8::internal::FeedbackVectorSpec::append(FeedbackVectorSpec *this,undefined1 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  Zone *this_00;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  puVar4 = *(undefined1 **)(this + 8);
  if (puVar4 < *(undefined1 **)(this + 0x10)) {
    *puVar4 = param_2;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
  }
  else {
    lVar6 = *(long *)this;
    puVar1 = puVar4 + (1 - lVar6);
    if ((ulong)puVar1 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (long)*(undefined1 **)(this + 0x10) - lVar6;
    puVar7 = (undefined1 *)(uVar3 * 2);
    if (puVar1 <= puVar7) {
      puVar1 = puVar7;
    }
    if (0x3ffffffe < uVar3) {
      puVar1 = (undefined1 *)0x7fffffff;
    }
    if (puVar1 == (undefined1 *)0x0) {
      lVar2 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar3 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
      lVar2 = *(long *)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - lVar2) < uVar3) {
        lVar2 = Zone::NewExpand(this_00,uVar3);
      }
      else {
        *(ulong *)(this_00 + 0x10) = lVar2 + uVar3;
      }
    }
    puVar4 = puVar4 + (lVar2 - lVar6);
    puVar5 = puVar4 + 1;
    *puVar4 = param_2;
    puVar7 = *(undefined1 **)this;
    puVar8 = *(undefined1 **)(this + 8);
    while (puVar8 != puVar7) {
      puVar8 = puVar8 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar8;
    }
    *(undefined1 **)this = puVar4;
    *(undefined1 **)(this + 8) = puVar5;
    *(undefined1 **)(this + 0x10) = puVar1 + lVar2;
  }
  return;
}

