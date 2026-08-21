
/* cocostudio::DisplayFactory::initSpriteDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*,
   char const*, cocostudio::Skin*) */

void cocostudio::DisplayFactory::initSpriteDisplay
               (Bone *param_1,DecorativeDisplay *param_2,char *param_3,Skin *param_4)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ArmatureDataManager *this;
  long lVar4;
  ColliderDetector *this_00;
  ulong uVar5;
  undefined8 local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_3);
  pvVar1 = (void *)((ulong)local_60 | 1);
  uVar3 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    pvVar1 = local_50;
    uVar3 = local_58;
  }
  uVar5 = uVar3;
  if (uVar3 != 0) {
    do {
      if (uVar5 == 0) goto LAB_00c43440;
      lVar4 = uVar5 - 1;
      uVar5 = uVar5 - 1;
    } while (*(char *)((long)pvVar1 + lVar4) != '.');
    if (uVar5 != 0xffffffffffffffff) {
      if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar3 = uVar5;
      if (((byte)local_60[0] & 1) == 0) {
        local_60[0] = SUB41((int)uVar5 << 1,0);
        uVar3 = local_58;
      }
      local_58 = uVar3;
      *(undefined1 *)((long)pvVar1 + uVar5) = 0;
    }
  }
LAB_00c43440:
  this = (ArmatureDataManager *)ArmatureDataManager::getInstance();
  lVar4 = ArmatureDataManager::getTextureData(this,(basic_string *)local_60);
  if (lVar4 != 0) {
    local_68 = *(undefined8 *)(lVar4 + 0x2c);
    (**(code **)(*(long *)param_4 + 0x148))(param_4,&local_68);
    if (0 < *(long *)(lVar4 + 0x58) - *(long *)(lVar4 + 0x50)) {
      this_00 = (ColliderDetector *)ColliderDetector::create(param_1);
      ColliderDetector::addContourDataList(this_00,(Vector *)(lVar4 + 0x50));
      (**(code **)(*(long *)param_2 + 0x38))(param_2,this_00);
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

