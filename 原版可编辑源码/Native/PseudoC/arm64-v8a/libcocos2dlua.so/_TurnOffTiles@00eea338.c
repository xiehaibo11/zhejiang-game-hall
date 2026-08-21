
/* non-virtual thunk to cocos2d::TurnOffTiles::~TurnOffTiles() */

void __thiscall cocos2d::TurnOffTiles::~TurnOffTiles(TurnOffTiles *this)

{
  *(undefined ***)(this + -0x28) = &PTR__TurnOffTiles_016f9bb0;
  *(undefined ***)this = &PTR_clone_016f9c18;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

