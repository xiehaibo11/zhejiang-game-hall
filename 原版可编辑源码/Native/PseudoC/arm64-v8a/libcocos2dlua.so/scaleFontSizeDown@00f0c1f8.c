
/* cocos2d::Label::scaleFontSizeDown(float) */

void __thiscall cocos2d::Label::scaleFontSizeDown(Label *this,float param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  basic_string *pbVar4;
  undefined4 in_register_00005004;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x308);
  if (iVar1 == 3) {
    (**(code **)(*(long *)this + 0x570))(CONCAT44(in_register_00005004,param_1),this);
  }
  else if (iVar1 == 1) {
    fVar3 = 0.1;
    if (1.1920929e-07 <= ABS(param_1)) {
      fVar3 = param_1;
    }
    (**(code **)(*(long *)this + 0x540))(fVar3,this,this + 0x348,&Vec2::ZERO);
    this[0x30c] = (Label)0x1;
    if (ABS(param_1) < 1.1920929e-07) goto LAB_00f0c308;
  }
  else if (iVar1 == 0) {
    pbVar4 = (basic_string *)(**(code **)(*(long *)this + 0x538))(this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_80,pbVar4);
    uStack_54 = *(undefined8 *)(pbVar4 + 0x2c);
    uStack_60 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
    uStack_5c = (undefined4)*(undefined8 *)(pbVar4 + 0x24);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(pbVar4 + 0x24) >> 0x20);
    _local_68 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar4 + 0x18) >> 0x20),param_1);
    setTTFConfigInternal(this,(_ttfConfig *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  (**(code **)(*(long *)this + 0x5c8))(this);
LAB_00f0c308:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

