
/* v8::Extension::~Extension() */

void __thiscall v8::Extension::~Extension(Extension *this)

{
  *(undefined ***)this = &PTR__Extension_01c98268;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ed6468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}

