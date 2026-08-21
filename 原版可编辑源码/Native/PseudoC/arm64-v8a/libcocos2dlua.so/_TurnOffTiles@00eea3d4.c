
/* non-virtual thunk to cocos2d::TurnOffTiles::~TurnOffTiles() */

void __thiscall cocos2d::TurnOffTiles::~TurnOffTiles(TurnOffTiles *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__TurnOffTiles_016f9bb0;
  *(undefined ***)this = &PTR_clone_016f9c18;
                    /* try { // try from 00eea404 to 00fea40f has its CatchHandler @ 00eea4b0 */
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
                    /* try { // try from 00eea410 to 00fea42b has its CatchHandler @ 00eea480 */
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

