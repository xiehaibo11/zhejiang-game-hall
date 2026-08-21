
/* universe::Literally::~Literally() */

void __thiscall universe::Literally::~Literally(Literally *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  *(undefined ***)this = &PTR__Literally_01c6c668;
  *(undefined8 *)(this + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009fd4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

