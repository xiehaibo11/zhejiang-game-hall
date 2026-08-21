
/* v8::internal::RegExpMacroAssembler::CheckNotInSurrogatePair(int, v8::internal::Label*) */

void __thiscall
v8::internal::RegExpMacroAssembler::CheckNotInSurrogatePair
          (RegExpMacroAssembler *this,int param_1,Label *param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  (**(code **)(*(long *)this + 0x108))(this,param_1,&local_18,1,1,1);
  (**(code **)(*(long *)this + 0xb0))(this,0xdc00,0xdfff,&local_18);
  (**(code **)(*(long *)this + 0x108))(this,param_1 + -1,&local_18,1,1,1);
  (**(code **)(*(long *)this + 0xa8))(this,0xd800,0xdbff,param_2);
  (**(code **)(*(long *)this + 0x40))(this,&local_18);
  return;
}

