
/* universe::network::Everywhere::clear() */

void __thiscall universe::network::Everywhere::clear(Everywhere *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  AUpdates *this_00;
  
                    /* try { // try from 00a06d24 to 00b06d4b has its CatchHandler @ 00a06ef8 */
  lVar4 = *(long *)(this + 0x28);
  while (lVar4 != 0) {
    uVar1 = *(long *)(this + 0x20) + lVar4 + -1;
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
                    /* try { // try from 00a06d68 to 00b06d7f has its CatchHandler @ 00a06efc */
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 * 0x40 + -1;
    }
    this_00 = *(AUpdates **)
               (*(long *)(*(long *)(this + 8) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
               (uVar1 & 0x1ff) * 8);
    *(long *)(this + 0x28) = lVar4 + -1;
    if (0x3ff < (lVar2 - (lVar4 + *(long *)(this + 0x20))) + 1U) {
                    /* try { // try from 00a06d8c to 00b06da3 has its CatchHandler @ 00a06ed8 */
      operator_delete(*(void **)(*(long *)(this + 0x10) + -8));
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -8;
    }
    if (this_00 != (AUpdates *)0x0) {
      AUpdates::~AUpdates(this_00);
                    /* try { // try from 00a06da8 to 00b06dd3 has its CatchHandler @ 00a06ed4 */
      operator_delete(this_00);
    }
    lVar4 = *(long *)(this + 0x28);
  }
  return;
}

