
/* cocostudio::DisplayFactory::createSpriteDisplay(cocostudio::Bone*,
   cocostudio::DecorativeDisplay*) */

void cocostudio::DisplayFactory::createSpriteDisplay(Bone *param_1,DecorativeDisplay *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  Skin *pSVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  basic_string local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60,(basic_string *)(lVar4 + 0x28));
  uVar11 = (ulong)((byte)local_60[0] >> 1);
  bVar10 = (byte)local_60[0] & 1;
  pvVar1 = (void *)((ulong)local_60 | 1);
  uVar3 = uVar11;
  if (((byte)local_60[0] & 1) != 0) {
    pvVar1 = local_50;
    uVar3 = local_58;
  }
  uVar12 = uVar3;
  if (uVar3 != 0) {
    do {
      if (uVar12 == 0) goto LAB_00c42dc8;
      lVar7 = uVar12 - 1;
      uVar12 = uVar12 - 1;
    } while (*(char *)((long)pvVar1 + lVar7) != '.');
    if (uVar12 != 0xffffffffffffffff) {
      if (uVar3 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar11 = uVar12;
      if (((byte)local_60[0] & 1) == 0) {
        local_60[0] = SUB41((int)uVar12 << 1,0);
        uVar11 = local_58;
      }
      local_58 = uVar11;
      *(undefined1 *)((long)pvVar1 + uVar12) = 0;
      bVar10 = (byte)local_60[0] & 1;
      uVar11 = (ulong)((byte)local_60[0] >> 1);
    }
  }
LAB_00c42dc8:
  if (bVar10 != 0) {
    uVar11 = local_58;
  }
  if (uVar11 == 0) {
    pSVar5 = (Skin *)Skin::create();
  }
  else {
    FUN_007c1fb0(local_78,local_60,&DAT_0144877a);
    pSVar5 = (Skin *)Skin::createWithSpriteFrameName(local_78);
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  (**(code **)(*(long *)param_2 + 0x18))(param_2,pSVar5);
  if (pSVar5 != (Skin *)0x0) {
    (**(code **)(*(long *)pSVar5 + 0x680))(pSVar5,param_1);
    if (((byte)*(basic_string *)(lVar4 + 0x28) & 1) == 0) {
      pcVar9 = (char *)(lVar4 + 0x29);
    }
    else {
      pcVar9 = *(char **)(lVar4 + 0x38);
    }
    initSpriteDisplay(param_1,param_2,pcVar9,pSVar5);
    plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x570))(param_1);
    if (plVar6 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x5a8))();
      if (0.3 <= *(float *)(lVar7 + 0x68)) {
        (**(code **)(*(long *)pSVar5 + 0x670))(pSVar5,lVar4 + 0x40);
      }
      else {
        uVar8 = (**(code **)(*(long *)param_1 + 0x560))(param_1);
        (**(code **)(*(long *)pSVar5 + 0x670))(pSVar5,uVar8);
      }
    }
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

