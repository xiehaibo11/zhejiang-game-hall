
/* covariant return thunk to fairygui::ActionMovieClip::clone() const */

long __thiscall fairygui::ActionMovieClip::clone(ActionMovieClip *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
                    /* try { // try from 00a82b30 to 00b82bf3 has its CatchHandler @ 00a82a64 */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

