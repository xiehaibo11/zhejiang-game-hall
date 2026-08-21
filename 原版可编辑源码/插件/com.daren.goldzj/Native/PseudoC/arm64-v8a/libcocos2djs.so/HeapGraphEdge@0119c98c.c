
/* v8::internal::HeapGraphEdge::HeapGraphEdge(v8::internal::HeapGraphEdge::Type, char const*,
   v8::internal::HeapEntry*, v8::internal::HeapEntry*) */

void __thiscall
v8::internal::HeapGraphEdge::HeapGraphEdge
          (HeapGraphEdge *this,uint param_2,undefined8 param_3,uint *param_4,undefined8 param_5)

{
  uint uVar1;
  
  uVar1 = *param_4;
  *(undefined8 *)(this + 8) = param_5;
  *(undefined8 *)(this + 0x10) = param_3;
  *(uint *)this = uVar1 >> 1 & 0x7ffffff8 | param_2;
  return;
}

