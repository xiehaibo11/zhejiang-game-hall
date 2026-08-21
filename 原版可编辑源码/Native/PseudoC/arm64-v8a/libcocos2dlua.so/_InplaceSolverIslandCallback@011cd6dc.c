
/* InplaceSolverIslandCallback::~InplaceSolverIslandCallback() */

void __thiscall
InplaceSolverIslandCallback::~InplaceSolverIslandCallback(InplaceSolverIslandCallback *this)

{
  *(undefined ***)this = &PTR__InplaceSolverIslandCallback_0172db28;
  if (*(void **)(this + 0x88) != (void *)0x0) {
    if (this[0x90] != (InplaceSolverIslandCallback)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x88));
    }
    *(undefined8 *)(this + 0x88) = 0;
  }
  this[0x90] = (InplaceSolverIslandCallback)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    if (this[0x70] != (InplaceSolverIslandCallback)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x68));
    }
    *(undefined8 *)(this + 0x68) = 0;
  }
  this[0x70] = (InplaceSolverIslandCallback)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    if (this[0x50] != (InplaceSolverIslandCallback)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x48));
    }
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (InplaceSolverIslandCallback)0x1;
  *(undefined8 *)(this + 0x3c) = 0;
  return;
}

