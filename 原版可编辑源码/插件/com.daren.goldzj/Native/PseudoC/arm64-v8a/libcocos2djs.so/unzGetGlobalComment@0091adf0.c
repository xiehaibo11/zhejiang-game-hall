
/* cocos2d::unzGetGlobalComment(void*, char*, unsigned long) */

ulong cocos2d::unzGetGlobalComment(void *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == (void *)0x0) {
    uVar3 = 0xffffff9a;
    goto LAB_0091ae40;
  }
  uVar3 = *(ulong *)((long)param_1 + 0x70);
  if (param_3 <= *(ulong *)((long)param_1 + 0x70)) {
    uVar3 = param_3;
  }
  lVar1 = call_zseek64(param_1,*(void **)((long)param_1 + 0x60),
                       *(long *)((long)param_1 + 0x98) + 0x16,0);
  if (lVar1 == 0) {
    if (uVar3 == 0) {
      if (param_2 == (char *)0x0) goto LAB_0091ae40;
    }
    else {
      *param_2 = '\0';
      uVar2 = (**(code **)((long)param_1 + 8))
                        (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x60)
                         ,param_2,uVar3);
      if (uVar2 != uVar3) goto LAB_0091ae34;
    }
    if (*(ulong *)((long)param_1 + 0x70) < param_3) {
      param_2[*(ulong *)((long)param_1 + 0x70)] = '\0';
    }
  }
  else {
LAB_0091ae34:
    uVar3 = 0xffffffff;
  }
LAB_0091ae40:
  return uVar3 & 0xffffffff;
}

