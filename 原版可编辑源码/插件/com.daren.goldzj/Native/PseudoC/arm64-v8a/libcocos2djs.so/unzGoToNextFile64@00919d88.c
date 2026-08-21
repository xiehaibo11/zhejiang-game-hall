
/* cocos2d::unzGoToNextFile64(void*, cocos2d::unz_file_info64_s*, char*, unsigned long) */

undefined8
cocos2d::unzGoToNextFile64(void *param_1,unz_file_info64_s *param_2,char *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == (void *)0x0) {
    uVar2 = 0xffffff9a;
  }
  else {
    if (*(long *)((long)param_1 + 0x90) != 0) {
      lVar1 = *(long *)((long)param_1 + 0x80) + 1;
      if ((*(long *)((long)param_1 + 0x68) == 0xffff) || (lVar1 != *(long *)((long)param_1 + 0x68)))
      {
        *(long *)((long)param_1 + 0x80) = lVar1;
        *(long *)((long)param_1 + 0x88) =
             *(long *)((long)param_1 + 0xf0) + *(long *)((long)param_1 + 0xf8) +
             *(long *)((long)param_1 + 0x100) + *(long *)((long)param_1 + 0x88) + 0x2e;
        uVar2 = FUN_009190b0(param_1,(undefined8 *)((long)param_1 + 0xb0),(long)param_1 + 0x138,
                             param_3,param_4,0,0,0,0);
        *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar2 == 0);
        if (param_2 == (unz_file_info64_s *)0x0) {
          return uVar2;
        }
        uVar3 = *(undefined8 *)((long)param_1 + 0xb0);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)((long)param_1 + 0xb8);
        *(undefined8 *)param_2 = uVar3;
        uVar3 = *(undefined8 *)((long)param_1 + 0xe0);
        uVar5 = *(undefined8 *)((long)param_1 + 0xf8);
        uVar4 = *(undefined8 *)((long)param_1 + 0xf0);
        uVar7 = *(undefined8 *)((long)param_1 + 200);
        uVar6 = *(undefined8 *)((long)param_1 + 0xc0);
        uVar9 = *(undefined8 *)((long)param_1 + 0xd8);
        uVar8 = *(undefined8 *)((long)param_1 + 0xd0);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)((long)param_1 + 0xe8);
        *(undefined8 *)(param_2 + 0x30) = uVar3;
        *(undefined8 *)(param_2 + 0x48) = uVar5;
        *(undefined8 *)(param_2 + 0x40) = uVar4;
        *(undefined8 *)(param_2 + 0x18) = uVar7;
        *(undefined8 *)(param_2 + 0x10) = uVar6;
        *(undefined8 *)(param_2 + 0x28) = uVar9;
        *(undefined8 *)(param_2 + 0x20) = uVar8;
        uVar8 = *(undefined8 *)((long)param_1 + 0x118);
        uVar7 = *(undefined8 *)((long)param_1 + 0x110);
        uVar4 = *(undefined8 *)((long)param_1 + 0x128);
        uVar3 = *(undefined8 *)((long)param_1 + 0x120);
        uVar6 = *(undefined8 *)((long)param_1 + 0x108);
        uVar5 = *(undefined8 *)((long)param_1 + 0x100);
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)((long)param_1 + 0x130);
        *(undefined8 *)(param_2 + 0x68) = uVar8;
        *(undefined8 *)(param_2 + 0x60) = uVar7;
        *(undefined8 *)(param_2 + 0x78) = uVar4;
        *(undefined8 *)(param_2 + 0x70) = uVar3;
        *(undefined8 *)(param_2 + 0x58) = uVar6;
        *(undefined8 *)(param_2 + 0x50) = uVar5;
        return uVar2;
      }
    }
    uVar2 = 0xffffff9c;
  }
  return uVar2;
}

