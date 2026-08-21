
/* Init(_JNIEnv*, _jobject*, int) */

void Init(_JNIEnv *param_1,_jobject *param_2,int param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  size_t __n;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar8;
  undefined4 local_6c;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0010184c(*(undefined8 *)param_1,param_1,"dalvik/system/DexFile");
  FUN_001017c4(*(undefined8 *)param_1);
  FUN_001017e8();
  lVar7 = extraout_x8;
  if ((bool)in_ZR) goto LAB_00100ee4;
  DAT_00104008 = FUN_0010182c();
  FUN_001017b4();
  uVar4 = FUN_001017f8();
  if ((bool)in_ZR) {
LAB_00100ee0:
    lVar7 = *(long *)param_1;
LAB_00100ee4:
    (**(code **)(lVar7 + 0x80))(param_1);
    FUN_0010180c();
  }
  else {
    DAT_00104010 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x2f0),uVar4,DAT_00104008,
                                "mCookie",&DAT_0010190e);
    FUN_001017b4();
    uVar4 = FUN_001017f8();
    if ((bool)in_ZR) goto LAB_00100ee0;
    DAT_00104018 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x2f0),uVar4,DAT_00104008,
                                "mFileName","Ljava/lang/String;");
    FUN_001017b4();
    uVar4 = FUN_001017f8();
    if ((bool)in_ZR) goto LAB_00100ee0;
    DAT_00104020 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x2f0),uVar4,DAT_00104008,"guard"
                                ,"Ldalvik/system/CloseGuard;");
    FUN_001017b4();
    FUN_001017e8();
    lVar7 = extraout_x8_00;
    if ((bool)in_ZR) goto LAB_00100ee4;
    (**(code **)(extraout_x8_00 + 0x30))(param_1,"dalvik/system/CloseGuard");
    FUN_001017c4(*(undefined8 *)param_1);
    FUN_001017e8();
    lVar7 = extraout_x8_01;
    if ((bool)in_ZR) goto LAB_00100ee4;
    DAT_00104028 = FUN_0010182c();
    FUN_001017b4();
    uVar4 = FUN_001017f8();
    if ((bool)in_ZR) goto LAB_00100ee0;
    DAT_00104030 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x388),uVar4,DAT_00104028,
                                &DAT_001018c2,"()Ldalvik/system/CloseGuard;");
    FUN_001017b4();
    FUN_001017f8();
    if ((bool)in_ZR) goto LAB_00100ee0;
    lVar5 = dlopen("libdvm.so",2);
    if (lVar5 == 0) {
      pcVar6 = "Fail to find dvm";
    }
    else {
      uVar2 = param_3 == 0x12;
      if (0x12 < param_3) {
        uVar4 = FUN_0010184c(*(undefined8 *)param_1,param_1,"com/android/dex/Dex");
        FUN_001017c4(*(undefined8 *)param_1);
        FUN_001017e8();
        lVar7 = extraout_x8_02;
        if ((bool)uVar2) goto LAB_00100ee4;
        DAT_00104040 = (**(code **)(extraout_x8_02 + 0xa8))(param_1,uVar4);
        FUN_001017b4();
        uVar4 = FUN_001017f8();
        if (!(bool)uVar2) {
          DAT_00104048 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x108),uVar4,DAT_00104040,
                                      "<init>","([B)V");
          FUN_001017b4();
          FUN_001017f8();
          if (!(bool)uVar2) {
            local_6c = 0x637468;
            __strlen_chk(&local_6c,4);
            __system_property_get("ro.product.brand",auStack_68);
            iVar3 = FUN_0010183c();
            if (iVar3 == 0) {
              DAT_00104000 = 1;
            }
            else {
              __system_property_get("ro.product.manufacturer",auStack_68);
              iVar3 = FUN_0010183c();
              DAT_00104000 = iVar3 == 0;
            }
            goto LAB_00101010;
          }
        }
        goto LAB_00100ee0;
      }
      DAT_00104038 = FUN_00101804(*(undefined8 *)(*(long *)param_1 + 0x388),lVar5,DAT_00104008,
                                  "openDexFile",&DAT_0010190a);
      FUN_0010180c();
LAB_00101010:
      if (DAT_00104038 != 0) {
LAB_0010101c:
        uVar4 = 1;
        goto LAB_00100ef8;
      }
      lVar7 = dlsym(lVar5,"dvm_dalvik_system_DexFile");
      if (lVar7 != 0) {
        __n = __strlen_chk("openDexFile",0xc);
        for (plVar8 = (long *)(lVar7 + 0x10); (char *)plVar8[-2] != (char *)0x0; plVar8 = plVar8 + 3
            ) {
          iVar3 = strncmp("openDexFile",(char *)plVar8[-2],__n);
          if ((iVar3 == 0) && (iVar3 = strncmp("([B)I",(char *)plVar8[-1],__n), iVar3 == 0)) {
            DAT_00104050 = *plVar8;
            if (DAT_00104050 == 0) goto LAB_00100ef4;
            goto LAB_0010101c;
          }
        }
        uVar4 = 0;
        DAT_00104050 = 0;
        goto LAB_00100ef8;
      }
      pcVar6 = "Fail to find DexFile symbols";
    }
    LOG(pcVar6);
  }
LAB_00100ef4:
  uVar4 = 0;
LAB_00100ef8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

