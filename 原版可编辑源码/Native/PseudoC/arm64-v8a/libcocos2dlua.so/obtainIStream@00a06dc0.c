
/* universe::network::Everywhere::obtainIStream() */

AUpdates * __thiscall universe::network::Everywhere::obtainIStream(Everywhere *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  AUpdates *this_00;
  
  lVar5 = *(long *)(this + 0x28);
  if (lVar5 == 0) {
    pcVar4 = malloc(0x1000);
    this_00 = operator_new(0x18);
    AUpdates::AUpdates(this_00,pcVar4,0x1000);
  }
  else {
                    /* try { // try from 00a06dd4 to 00b06eab has its CatchHandler @ 00a06cc0 */
    uVar1 = *(long *)(this + 0x20) + lVar5 + -1;
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 * 0x40 + -1;
    }
    this_00 = *(AUpdates **)
               (*(long *)(*(long *)(this + 8) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
               (uVar1 & 0x1ff) * 8);
    *(long *)(this + 0x28) = lVar5 + -1;
    if (0x3ff < (lVar2 - (lVar5 + *(long *)(this + 0x20))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x10) + -8));
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
    }
    AUpdates::resetCursor(this_00);
  }
  return this_00;
}

