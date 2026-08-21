
/* v8::internal::compiler::AccessBuilder::ForJSObjectInObjectProperty(v8::internal::compiler::MapRef
   const&, int) */

void __thiscall
v8::internal::compiler::AccessBuilder::ForJSObjectInObjectProperty
          (AccessBuilder *this,MapRef *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *in_x8;
  
  uVar1 = MapRef::GetInObjectPropertyOffset((MapRef *)this,(int)param_1);
  *(undefined8 *)(in_x8 + 0x18) = 0xc7f7fff;
  *(undefined2 *)(in_x8 + 0x20) = 0x708;
  *(undefined4 *)(in_x8 + 4) = uVar1;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *in_x8 = 1;
  in_x8[0x22] = 5;
  *(undefined4 *)(in_x8 + 0x24) = 1;
  in_x8[0x30] = 0;
  return;
}

