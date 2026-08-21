
/* v8::internal::Sweeper::Sweeper(v8::internal::Heap*, v8::internal::MajorNonAtomicMarkingState*) */

void __thiscall
v8::internal::Sweeper::Sweeper(Sweeper *this,Heap *param_1,MajorNonAtomicMarkingState *param_2)

{
  *(Heap **)this = param_1;
  *(MajorNonAtomicMarkingState **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x30),0);
  base::Mutex::Mutex((Mutex *)(this + 0x40));
  *(undefined8 *)(this + 0x100) = 0;
  this[0x108] = (Sweeper)0x0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined2 *)(this + 0xf8) = 0;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x130),0);
  *(undefined2 *)(this + 0x140) = 0;
  this[0x142] = (Sweeper)0x0;
  return;
}

