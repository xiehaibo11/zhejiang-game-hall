
/* cocostudio::Armature::removeBone(cocostudio::Bone*, bool) */

void __thiscall cocostudio::Armature::removeBone(Armature *this,Bone *param_1,bool param_2)

{
  undefined8 *puVar1;
  size_t __n;
  basic_string *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *__dest;
  
  (**(code **)(*(long *)param_1 + 0x568))(param_1,0);
  Bone::removeFromParent(param_1,param_2);
  __dest = *(undefined8 **)(this + 0x348);
  puVar3 = *(undefined8 **)(this + 0x350);
  puVar4 = __dest;
  if ((__dest != puVar3) && ((Bone *)*__dest != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_00c37884;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((Bone *)*puVar1 != param_1);
  }
  if (puVar4 != puVar3) {
    if ((__dest != puVar3) && ((Bone *)*__dest != param_1)) {
      do {
        if (puVar3 + -1 == __dest) goto LAB_00c37884;
        puVar4 = __dest + 1;
        __dest = __dest + 1;
      } while ((Bone *)*puVar4 != param_1);
    }
    if (__dest != puVar3) {
      __n = (long)puVar3 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x350) = __dest + ((long)__n >> 3);
      cocos2d::Ref::release((Ref *)param_1);
    }
  }
LAB_00c37884:
  pbVar2 = (basic_string *)(**(code **)(*(long *)param_1 + 0x2c8))(param_1);
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
           *)(this + 800),pbVar2);
                    /* WARNING: Could not recover jumptable at 0x00c378c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x280))(this,param_1,1);
  return;
}

