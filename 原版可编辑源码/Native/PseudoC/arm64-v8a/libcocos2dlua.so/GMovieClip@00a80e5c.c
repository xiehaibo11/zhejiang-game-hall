
/* fairygui::GMovieClip::GMovieClip() */

void __thiscall fairygui::GMovieClip::GMovieClip(GMovieClip *this)

{
                    /* catch() { ... } // from try @ 00a80da8 with catch @ 00a80e64
                       catch() { ... } // from try @ 00a80e10 with catch @ 00a80e64 */
  GObject::GObject((GObject *)this);
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  this[0x1e8] = (GMovieClip)0x1;
  *(undefined4 *)(this + 0xb8) = 1;
  *(undefined ***)this = &PTR__GMovieClip_016a6010;
  this[0xbc] = (GMovieClip)0x1;
  return;
}

