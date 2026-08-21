
/* v8::internal::WasmInstanceObject::module() */

undefined8 __thiscall v8::internal::WasmInstanceObject::module(WasmInstanceObject *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return *(undefined8 *)
          (**(long **)(*(long *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this + 0x6f)) + 0xb
                                                   )) + 3) + 0x18) + 200);
}

