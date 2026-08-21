
/* v8::internal::ScopeIterator::ScopeIterator(v8::internal::Isolate*, v8::internal::FrameInspector*,
   v8::internal::ScopeIterator::ReparseStrategy) */

void __thiscall
v8::internal::ScopeIterator::ScopeIterator
          (ScopeIterator *this,undefined8 param_1,FrameInspector *param_2,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(FrameInspector **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x28) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x58] = (ScopeIterator)0x0;
  *(undefined8 *)(this + 0x30) = uVar2;
  puVar1 = (ulong *)FrameInspector::GetContext(param_2);
  uVar3 = *puVar1;
  if (((uVar3 & 1) != 0) &&
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x88 < 10)) {
    uVar2 = FrameInspector::GetContext(param_2);
    *(undefined8 *)(this + 0x28) = uVar2;
    TryParseAndRetrieveScopes(this,param_4);
    return;
  }
  return;
}

