
/* v8::internal::compiler::RepresentationChanger::RepresentationChanger(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::RepresentationChanger::RepresentationChanger
          (RepresentationChanger *this,JSGraph *param_1,JSHeapBroker *param_2)

{
  undefined8 uVar1;
  
  uVar1 = TypeCache::Get();
  *(undefined8 *)this = uVar1;
  *(JSGraph **)(this + 8) = param_1;
  *(JSHeapBroker **)(this + 0x10) = param_2;
  *(undefined2 *)(this + 0x18) = 0;
  return;
}

