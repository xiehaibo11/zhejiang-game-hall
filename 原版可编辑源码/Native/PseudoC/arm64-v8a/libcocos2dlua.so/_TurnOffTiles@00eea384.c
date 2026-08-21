
/* cocos2d::TurnOffTiles::~TurnOffTiles() */

void __thiscall cocos2d::TurnOffTiles::~TurnOffTiles(TurnOffTiles *this)

{
  *(undefined ***)this = &PTR__TurnOffTiles_016f9bb0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9c18;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
                    /* try { // try from 00eea3bc to 00fea403 has its CatchHandler @ 00eea3bc
                       catch() { ... } // from try @ 00eea3bc with catch @ 00eea3bc
                       catch() { ... } // from try @ 00eea42c with catch @ 00eea3bc */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

