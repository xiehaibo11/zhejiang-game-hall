
void FUN_00a092b0(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 0x4a0) != '\0') {
    pcVar2 = (char *)universe::Translated::getInstance();
    universe::Translated::log(pcVar2,"GuoPengFei: delete 5");
  }
  lVar4 = *(long *)(lVar7 + 0x390);
  lVar5 = *(long *)(lVar7 + 0x380);
  uVar6 = *(long *)(lVar7 + 0x398) - lVar4;
  if (uVar6 - lVar5 < param_2) {
    uVar3 = (ulong)(((double)(param_2 - (uVar6 - lVar5) >> 0x10) + 1.0) * 65536.0);
    uVar1 = uVar6 + uVar3;
    if (uVar6 < uVar1) {
      std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
                ((vector<char,std::__ndk1::allocator<char>> *)(lVar7 + 0x390),uVar3);
      lVar4 = *(long *)(lVar7 + 0x390);
      lVar5 = *(long *)(lVar7 + 0x380);
    }
    else if (uVar6 != uVar1) {
      *(ulong *)(lVar7 + 0x398) = lVar4 + uVar1;
    }
  }
  *param_3 = lVar4 + lVar5;
  param_3[1] = param_2;
  return;
}

