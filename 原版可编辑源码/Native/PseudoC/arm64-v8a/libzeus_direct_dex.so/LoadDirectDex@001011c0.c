
/* LoadDirectDex(_JNIEnv*, _jobject*, _jstring*) */

undefined8 LoadDirectDex(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  void *__src;
  void *__ptr;
  char *pcVar9;
  ulong __n;
  uint local_74;
  int local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (DAT_00104038 == 0) {
    local_74 = 0;
    uVar6 = FUN_001017d0();
    __src = (void *)FUN_001014bc(uVar6,&local_74);
    if (__src == (void *)0x0) {
      pcVar9 = "fail to map dex file";
    }
    else {
      (**(code **)(*(long *)param_1 + 0x550))(param_1,param_3,uVar6);
      uVar4 = local_74;
      __n = (ulong)local_74;
      __ptr = malloc((ulong)(local_74 + 0x18));
      if (__ptr == (void *)0x0) {
        LOG("fail to alloc array object");
        FUN_00101854(__src);
        uVar6 = 0;
        goto LAB_00101484;
      }
      *(uint *)((long)__ptr + 0x10) = uVar4;
      memcpy((void *)((long)__ptr + 0x18),__src,__n);
      FUN_00101854(__src);
      local_6c = SUB84(__ptr,0);
      if (DAT_00104050 != (code *)0x0) {
        (*DAT_00104050)(&local_6c,&local_70);
        if ((DAT_00104040 != 0) && (DAT_00104048 != 0)) {
          lVar7 = (long)local_70;
          uVar6 = (**(code **)(*(long *)param_1 + 0x580))(param_1,__n);
          (**(code **)(*(long *)param_1 + 0x680))
                    (param_1,uVar6,0,uVar4,(void *)((long)__ptr + 0x18));
          uVar6 = FUN_001015e8(param_1,DAT_00104040,DAT_00104048,uVar6);
          uVar6 = (**(code **)(*(long *)param_1 + 0xa8))(param_1,uVar6);
          cVar2 = DAT_00104000;
          lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
          *(undefined8 *)(lVar7 + 0x60) = uVar6;
          if (cVar2 != '\0') {
            *(undefined8 *)(lVar7 + 0x68) = uVar6;
          }
        }
        free(__ptr);
        goto LAB_00101298;
      }
      pcVar9 = "fail to get openDexFileBytes object";
    }
    LOG(pcVar9);
    uVar6 = 0;
  }
  else {
    local_6c = 0;
    uVar6 = FUN_001017d0();
    lVar7 = FUN_001014bc(uVar6,&local_6c);
    (**(code **)(*(long *)param_1 + 0x550))(param_1,param_3,uVar6);
    uVar5 = local_6c;
    if (lVar7 == 0) {
      LOG("fail to map file");
      uVar6 = 0;
      goto LAB_00101484;
    }
    uVar6 = (**(code **)(*(long *)param_1 + 0x580))(param_1,local_6c);
    (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar6,0,uVar5,lVar7);
    FUN_00101854(lVar7);
    local_70 = FUN_001015ac(param_1,DAT_00104008,DAT_00104038,uVar6);
LAB_00101298:
    uVar6 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,DAT_00104008);
    (**(code **)(*(long *)param_1 + 0x368))(param_1,uVar6,DAT_00104010,local_70);
    (**(code **)(*(long *)param_1 + 0x340))(param_1,uVar6,DAT_00104018,param_3);
    uVar3 = DAT_00104020;
    uVar8 = FUN_0010161c(param_1,DAT_00104028,DAT_00104030);
    (**(code **)(*(long *)param_1 + 0x340))(param_1,uVar6,uVar3,uVar8);
  }
LAB_00101484:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

