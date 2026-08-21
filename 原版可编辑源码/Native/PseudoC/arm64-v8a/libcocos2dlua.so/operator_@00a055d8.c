
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(universe::network::AUpdates&&) */

AUpdates * __thiscall universe::network::AUpdates::operator=(AUpdates *this,AUpdates *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00a055d8 to 00b055db has its CatchHandler @ 00a05610 */
                    /* try { // try from 00a055dc to 00b05623 has its CatchHandler @ 00a0558c */
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
                    /* catch() { ... } // from try @ 00a055d8 with catch @ 00a05610 */
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00a05624 to 00b05723 has its CatchHandler @ 00a05624
                       catch() { ... } // from try @ 00a05624 with catch @ 00a05624
                       catch() { ... } // from try @ 00a057a4 with catch @ 00a05624 */
  return this;
}

