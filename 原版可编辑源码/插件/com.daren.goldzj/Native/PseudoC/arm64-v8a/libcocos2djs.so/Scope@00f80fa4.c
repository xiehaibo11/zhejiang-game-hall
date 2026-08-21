
/* v8::internal::GCTracer::Scope::Scope(v8::internal::GCTracer*,
   v8::internal::GCTracer::Scope::ScopeId) */

void __thiscall
v8::internal::GCTracer::Scope::Scope(Scope *this,undefined8 param_1,undefined4 param_3)

{
  RuntimeCallStats *pRVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = param_1;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  uVar2 = Heap::MonotonicallyIncreasingTimeInMs();
  *(undefined8 *)(this + 0x10) = uVar2;
  if (TracingFlags::runtime_stats == 0) {
    return;
  }
  pRVar1 = (RuntimeCallStats *)(*(long *)(**(long **)this + 0xcd0) + 0x58a0);
  *(RuntimeCallStats **)(this + 0x38) = pRVar1;
  RuntimeCallStats::Enter(pRVar1,this + 0x18,param_3);
  return;
}

