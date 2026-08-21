
/* v8::internal::StartupSerializer::StartupSerializer(v8::internal::Isolate*,
   v8::internal::ReadOnlySerializer*) */

void __thiscall
v8::internal::StartupSerializer::StartupSerializer
          (StartupSerializer *this,Isolate *param_1,ReadOnlySerializer *param_2)

{
  RootsSerializer::RootsSerializer((RootsSerializer *)this,param_1,0x1b3);
  *(ReadOnlySerializer **)(this + 0x240) = param_2;
  *(undefined ***)this = &PTR__StartupSerializer_01cbbbf8;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  Serializer::InitializeCodeAddressMap((Serializer *)this);
  return;
}

