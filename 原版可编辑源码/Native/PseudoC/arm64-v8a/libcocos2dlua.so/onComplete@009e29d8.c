
/* universe::core::SimpleProvided::onComplete() */

void __thiscall universe::core::SimpleProvided::onComplete(SimpleProvided *this)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e29e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 0x30))();
    return;
  }
  return;
}

