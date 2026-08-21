
/* ClipperLib::Clipper::~Clipper() */

void __thiscall ClipperLib::Clipper::~Clipper(Clipper *this)

{
                    /* catch() { ... } // from try @ 01032df4 with catch @ 0103319c */
  ~Clipper(this);
                    /* catch() { ... } // from try @ 01032e30 with catch @ 010331bc */
  operator_delete(this);
  return;
}

