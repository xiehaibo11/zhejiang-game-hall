
/* virtual thunk to ClipperLib::Clipper::~Clipper() */

void __thiscall ClipperLib::Clipper::~Clipper(Clipper *this)

{
                    /* catch() { ... } // from try @ 01032e24 with catch @ 01033194
                       try { // try from 01033194 to 0113336f has its CatchHandler @ 01031838 */
                    /* catch() { ... } // from try @ 01033090 with catch @ 01033198
                       catch() { ... } // from try @ 01033184 with catch @ 01033198 */
  ~Clipper(this + *(long *)(*(long *)this + -0x18));
  return;
}

