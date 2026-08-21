
/* cocos2d::unzGoToFirstFile64(void*, cocos2d::unz_file_info64_s*, char*, unsigned long) */

undefined8
cocos2d::unzGoToFirstFile64(void *param_1,unz_file_info64_s *param_2,char *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffff9a;
  }
  else {
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = *(undefined8 *)((long)param_1 + 0xa8);
    uVar1 = FUN_01028a58(param_1,(undefined8 *)((long)param_1 + 0xb0),(long)param_1 + 0x138,param_3,
                         param_4,0,0,0,0);
    *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    if (param_2 != (unz_file_info64_s *)0x0) {
      uVar2 = *(undefined8 *)((long)param_1 + 0xb0);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)((long)param_1 + 0xb8);
      *(undefined8 *)param_2 = uVar2;
      uVar2 = *(undefined8 *)((long)param_1 + 0xe0);
      uVar4 = *(undefined8 *)((long)param_1 + 0xf8);
      uVar3 = *(undefined8 *)((long)param_1 + 0xf0);
      uVar6 = *(undefined8 *)((long)param_1 + 200);
      uVar5 = *(undefined8 *)((long)param_1 + 0xc0);
      uVar8 = *(undefined8 *)((long)param_1 + 0xd8);
      uVar7 = *(undefined8 *)((long)param_1 + 0xd0);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)((long)param_1 + 0xe8);
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      *(undefined8 *)(param_2 + 0x48) = uVar4;
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      *(undefined8 *)(param_2 + 0x18) = uVar6;
      *(undefined8 *)(param_2 + 0x10) = uVar5;
      *(undefined8 *)(param_2 + 0x28) = uVar8;
      *(undefined8 *)(param_2 + 0x20) = uVar7;
      uVar7 = *(undefined8 *)((long)param_1 + 0x118);
      uVar6 = *(undefined8 *)((long)param_1 + 0x110);
      uVar3 = *(undefined8 *)((long)param_1 + 0x128);
      uVar2 = *(undefined8 *)((long)param_1 + 0x120);
      uVar5 = *(undefined8 *)((long)param_1 + 0x108);
      uVar4 = *(undefined8 *)((long)param_1 + 0x100);
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)((long)param_1 + 0x130);
      *(undefined8 *)(param_2 + 0x68) = uVar7;
      *(undefined8 *)(param_2 + 0x60) = uVar6;
      *(undefined8 *)(param_2 + 0x78) = uVar3;
      *(undefined8 *)(param_2 + 0x70) = uVar2;
      *(undefined8 *)(param_2 + 0x58) = uVar5;
      *(undefined8 *)(param_2 + 0x50) = uVar4;
    }
  }
  return uVar1;
}

