
/* universe::network::Touchbar::~Touchbar() */

void __thiscall universe::network::Touchbar::~Touchbar(Touchbar *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

