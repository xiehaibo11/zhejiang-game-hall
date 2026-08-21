
/* cocostudio::ArmatureAnimation::play(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocostudio::ArmatureAnimation::play
          (ArmatureAnimation *this,basic_string *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  basic_string *pbVar6;
  ulong uVar7;
  DisplayManager *this_00;
  long *plVar8;
  undefined4 uVar9;
  Bone *this_01;
  long *plVar10;
  Tween *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if (uVar7 == 0) goto LAB_00c3b1d0;
  lVar5 = AnimationData::getMovement(*(AnimationData **)(this + 0x58),param_1);
  *(long *)(this + 0x68) = lVar5;
  if (lVar5 == 0) goto LAB_00c3b1d0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar5 + 0x40);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x78) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar7 = *(ulong *)(param_1 + 8);
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = param_1 + 1;
      uVar7 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x78),(char *)pbVar6,uVar7);
    lVar5 = *(long *)(this + 0x68);
  }
  *(float *)(this + 0x24) = *(float *)(this + 0x60) * *(float *)(lVar5 + 0x44);
  if (param_2 == -1) {
    param_2 = *(int *)(lVar5 + 0x48);
    iVar2 = *(int *)(lVar5 + 0x4c);
    if (iVar2 == 0) goto LAB_00c3b030;
LAB_00c3afe4:
    iVar3 = *(int *)(lVar5 + 0x54);
  }
  else {
    iVar2 = *(int *)(lVar5 + 0x4c);
    if (iVar2 != 0) goto LAB_00c3afe4;
LAB_00c3b030:
    iVar2 = *(int *)(this + 0x30);
    iVar3 = *(int *)(lVar5 + 0x54);
  }
  if (param_3 < 0) {
    param_3 = (int)*(byte *)(lVar5 + 0x50);
  }
  this[0x130] = (ArmatureAnimation)0x0;
  ProcessBase::play((ProcessBase *)this,param_2,iVar2,param_3,iVar3);
  if (*(int *)(this + 0x30) == 0) {
    uVar9 = 0xfffffffc;
  }
  else {
    uVar9 = 0xfffffffd;
    if (param_3 != 0) {
      uVar9 = 0xfffffffe;
    }
    *(int *)(this + 0x40) = iVar2;
  }
  *(undefined4 *)(this + 0x34) = uVar9;
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x98);
  lVar5 = Armature::getBoneDic(*(Armature **)(this + 0x70));
  for (plVar10 = *(long **)(lVar5 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    this_01 = (Bone *)plVar10[5];
    lVar5 = *(long *)(this + 0x68);
    pbVar6 = (basic_string *)(**(code **)(*(long *)this_01 + 0x2c8))(this_01);
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>>>
                        *)(lVar5 + 0x58),pbVar6);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    local_70 = (Tween *)Bone::getTween(this_01);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x50) - *(long *)(lVar5 + 0x48) < 1)) {
      uVar7 = (**(code **)(*(long *)this_01 + 0x598))(this_01);
      if ((uVar7 & 1) == 0) {
        this_00 = (DisplayManager *)(**(code **)(*(long *)this_01 + 0x588))(this_01);
        DisplayManager::changeDisplayWithIndex(this_00,-1,false);
        (**(code **)(*(long *)local_70 + 0x28))();
      }
    }
    else {
      puVar1 = *(undefined8 **)(this + 0xa0);
      if (puVar1 == *(undefined8 **)(this + 0xa8)) {
        std::__ndk1::vector<cocostudio::Tween*,std::__ndk1::allocator<cocostudio::Tween*>>::
        __push_back_slow_path<cocostudio::Tween*const&>
                  ((vector<cocostudio::Tween*,std::__ndk1::allocator<cocostudio::Tween*>> *)
                   (this + 0x98),&local_70);
      }
      else {
        *puVar1 = local_70;
        *(undefined8 **)(this + 0xa0) = puVar1 + 1;
      }
      *(float *)(lVar5 + 0x2c) = (float)*(int *)(*(long *)(this + 0x68) + 0x40);
      (**(code **)(*(long *)local_70 + 0xa8))(local_70,lVar5,param_2,iVar2,param_3,iVar3);
      (**(code **)(*(long *)local_70 + 0x40))(*(undefined4 *)(this + 0x24));
      lVar5 = (**(code **)(*(long *)this_01 + 0x580))(this_01);
      if (lVar5 != 0) {
        plVar8 = (long *)(**(code **)(*(long *)this_01 + 0x580))(this_01);
        plVar8 = (long *)(**(code **)(*plVar8 + 0x588))();
        (**(code **)(*plVar8 + 0xb8))(*(undefined4 *)(this + 0x24));
      }
    }
  }
  (**(code **)(**(long **)(this + 0x70) + 0x3d8))(0);
LAB_00c3b1d0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

