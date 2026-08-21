
/* dragonBones::BaseFactory::parseDragonBonesData(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

long __thiscall
dragonBones::BaseFactory::parseDragonBonesData
          (BaseFactory *this,char *param_1,basic_string *param_2,float param_3)

{
  long lVar1;
  BaseObject *this_00;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined4 in_register_00005004;
  
  if ((((*param_1 == 'D') && (param_1[1] == 'B')) && (param_1[2] == 'D')) && (param_1[3] == 'T')) {
    plVar4 = &_binaryParser;
  }
  else {
    plVar4 = *(long **)(this + 0x48);
  }
  lVar1 = (**(code **)(*plVar4 + 0x10))(CONCAT44(in_register_00005004,param_3),plVar4);
  pcVar3 = *(code **)(*(long *)this + 0x48);
  while( true ) {
    this_00 = (BaseObject *)(*pcVar3)(this,0,0);
    uVar2 = (**(code **)(*plVar4 + 0x18))(CONCAT44(in_register_00005004,param_3),plVar4,0,this_00);
    if ((uVar2 & 1) == 0) break;
    (**(code **)(*(long *)this + 0x80))(this,this_00,param_2);
    pcVar3 = *(code **)(*(long *)this + 0x48);
  }
  BaseObject::returnToPool(this_00);
  if (lVar1 != 0) {
    (**(code **)(*(long *)this + 0x70))(this,lVar1,param_2);
  }
  return lVar1;
}

