
/* v8::internal::GlobalHandles::InvokeFirstPassWeakCallbacks() */

long __thiscall v8::internal::GlobalHandles::InvokeFirstPassWeakCallbacks(GlobalHandles *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = InvokeFirstPassWeakCallbacks<v8::internal::GlobalHandles::Node>
                    (this,(vector *)(this + 0x58));
  uVar2 = InvokeFirstPassWeakCallbacks<v8::internal::GlobalHandles::TracedNode>
                    (this,(vector *)(this + 0x70));
  return uVar2 + uVar1;
}

