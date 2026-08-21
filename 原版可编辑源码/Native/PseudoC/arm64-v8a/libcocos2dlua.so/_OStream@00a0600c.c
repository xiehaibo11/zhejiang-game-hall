
/* universe::network::OStream::~OStream() */

void __thiscall universe::network::OStream::~OStream(OStream *this)

{
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

