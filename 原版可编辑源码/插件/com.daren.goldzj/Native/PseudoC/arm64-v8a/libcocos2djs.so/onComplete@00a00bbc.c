
/* universe::core::SimpleProvided::onComplete() */

void __thiscall universe::core::SimpleProvided::onComplete(SimpleProvided *this)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a00bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00a00bcc to 00b00bdb has its CatchHandler @ 00a00f28 */
    (**(code **)(**(long **)(this + 0x40) + 0x30))();
    return;
  }
  return;
}

