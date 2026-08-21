
/* cocostudio::Armature::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocostudio::Armature::init(Armature *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  Armature *pAVar1;
  long lVar2;
  ArmatureAnimation *this_01;
  ArmatureDataManager *this_02;
  AnimationData *pAVar3;
  long lVar4;
  Bone *this_03;
  MovementData *this_04;
  basic_string *pbVar5;
  MovementBoneData *this_05;
  long *plVar6;
  ArmatureData *pAVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x298))();
  if (*(long **)(this + 0x378) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x378) + 8))();
  }
  *(undefined8 *)(this + 0x378) = 0;
  this_01 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
  if (this_01 != (ArmatureAnimation *)0x0) {
    ArmatureAnimation::ArmatureAnimation(this_01);
  }
  *(ArmatureAnimation **)(this + 0x378) = this_01;
  (**(code **)(*(long *)this_01 + 0xa0))(this_01,this);
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
  ::clear((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
           *)(this + 800));
  puVar10 = *(undefined8 **)(this + 0x348);
  puVar12 = *(undefined8 **)(this + 0x350);
  if (puVar10 != puVar12) {
    do {
      puVar11 = puVar10 + 1;
      cocos2d::Ref::release((Ref *)*puVar10);
      puVar10 = puVar11;
    } while (puVar12 != puVar11);
    puVar10 = *(undefined8 **)(this + 0x348);
  }
  *(undefined8 **)(this + 0x350) = puVar10;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1a8);
  *(undefined8 *)(this + 0x360) = 0x30300000001;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar8 = *(ulong *)(param_1 + 8);
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar5 = param_1 + 1;
      uVar8 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar5,uVar8);
  }
  this_02 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00c37248:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,"new_armature",0xc);
      pAVar7 = operator_new(0x70,(nothrow_t *)&std::nothrow);
      if (pAVar7 != (ArmatureData *)0x0) {
        ArmatureData::ArmatureData(pAVar7);
        uVar8 = ArmatureData::init();
        if ((uVar8 & 1) == 0) {
          (**(code **)(*(long *)pAVar7 + 8))(pAVar7);
          pAVar7 = (ArmatureData *)0x0;
        }
        else {
          cocos2d::Ref::autorelease((Ref *)pAVar7);
        }
      }
      *(ArmatureData **)(this + 0x300) = pAVar7;
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (pAVar7 + 0x28) != this_00) {
        uVar8 = *(ulong *)(this + 0x1b0);
        pAVar1 = *(Armature **)(this + 0x1b8);
        if (((byte)this[0x1a8] & 1) == 0) {
          pAVar1 = this + 0x1a9;
          uVar8 = (ulong)((byte)this[0x1a8] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pAVar7 + 0x28),(char *)pAVar1,uVar8);
      }
      pAVar3 = operator_new(0x80,(nothrow_t *)&std::nothrow);
      if (pAVar3 != (AnimationData *)0x0) {
        AnimationData::AnimationData(pAVar3);
        cocos2d::Ref::autorelease((Ref *)pAVar3);
      }
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (pAVar3 + 0x28) != this_00) {
        uVar8 = *(ulong *)(this + 0x1b0);
        pAVar1 = *(Armature **)(this + 0x1b8);
        if (((byte)this[0x1a8] & 1) == 0) {
          pAVar1 = this + 0x1a9;
          uVar8 = (ulong)((byte)this[0x1a8] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (pAVar3 + 0x28),(char *)pAVar1,uVar8);
      }
      pAVar7 = *(ArmatureData **)(this + 0x300);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,"");
      ArmatureDataManager::addArmatureData
                (this_02,(basic_string *)this_00,pAVar7,(basic_string *)local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_70,"");
      ArmatureDataManager::addAnimationData
                (this_02,(basic_string *)this_00,pAVar3,(basic_string *)local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      (**(code **)(**(long **)(this + 0x378) + 0x108))(*(long **)(this + 0x378),pAVar3);
      goto LAB_00c373a4;
    }
  }
  else if (*(long *)(this + 0x1b0) == 0) goto LAB_00c37248;
  pAVar3 = (AnimationData *)ArmatureDataManager::getAnimationData(this_02,param_1);
  (**(code **)(**(long **)(this + 0x378) + 0x108))(*(long **)(this + 0x378),pAVar3);
  lVar4 = ArmatureDataManager::getArmatureData(this_02,param_1);
  *(long *)(this + 0x300) = lVar4;
  for (plVar13 = *(long **)(lVar4 + 0x50); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    this_03 = (Bone *)createBone(this,(basic_string *)(plVar13 + 2));
    if (*(basic_string **)(pAVar3 + 0x70) == *(basic_string **)(pAVar3 + 0x68)) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
    this_04 = (MovementData *)AnimationData::getMovement(pAVar3,*(basic_string **)(pAVar3 + 0x68));
    if (this_04 != (MovementData *)0x0) {
      pbVar5 = (basic_string *)(**(code **)(*(long *)this_03 + 0x2c8))(this_03);
      this_05 = (MovementBoneData *)MovementData::getMovementBoneData(this_04,pbVar5);
      if (((this_05 != (MovementBoneData *)0x0) &&
          (7 < *(long *)(this_05 + 0x50) - *(long *)(this_05 + 0x48))) &&
         (lVar4 = MovementBoneData::getFrameData(this_05,0), lVar4 != 0)) {
        plVar6 = (long *)(**(code **)(*(long *)this_03 + 0x5c8))(this_03);
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar4);
        Bone::changeDisplayWithIndex(this_03,*(int *)(lVar4 + 0x74),false);
      }
    }
  }
  (**(code **)(*(long *)this + 0x3d8))(0,this);
  (**(code **)(*(long *)this + 0x570))(this);
LAB_00c373a4:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
  uVar9 = cocos2d::GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_70);
  (**(code **)(*(long *)this + 0x310))(this,uVar9);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  (**(code **)(*(long *)this + 0x4d8))(this,1);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

