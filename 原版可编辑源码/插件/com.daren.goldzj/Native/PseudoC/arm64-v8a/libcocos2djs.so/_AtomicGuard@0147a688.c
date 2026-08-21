
/* v8::sampler::AtomicGuard::~AtomicGuard() */

void __thiscall v8::sampler::AtomicGuard::~AtomicGuard(AtomicGuard *this)

{
  if (this[8] != (AtomicGuard)0x0) {
    **(undefined4 **)this = 0;
  }
  return;
}

