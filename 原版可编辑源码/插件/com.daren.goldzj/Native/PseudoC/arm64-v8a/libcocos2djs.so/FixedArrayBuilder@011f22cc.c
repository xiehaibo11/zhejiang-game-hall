
/* v8::internal::FixedArrayBuilder::FixedArrayBuilder(v8::internal::Isolate*, int) */

void __thiscall
v8::internal::FixedArrayBuilder::FixedArrayBuilder
          (FixedArrayBuilder *this,Isolate *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = Factory::NewFixedArrayWithHoles((Factory *)param_1,param_2,0);
  *(undefined8 *)this = uVar1;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (FixedArrayBuilder)0x0;
  return;
}

