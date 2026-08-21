
/* JavaScriptJavaBridge::CallInfo::execute() */

void JavaScriptJavaBridge::CallInfo::execute(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long in_x0;
  undefined8 uVar4;
  ulong *puVar5;
  bool *in_x3;
  long lVar6;
  void *__dest;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  byte local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  void *local_60;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  switch(*(char *)(in_x0 + 0x70)) {
  case '\x01':
    _JNIEnv::CallStaticVoidMethod
              (*(_jclass **)(in_x0 + 0x88),*(_jmethodID **)(in_x0 + 0x90),
               *(undefined8 *)(in_x0 + 0x98));
    break;
  case '\x02':
    uVar9 = _JNIEnv::CallStaticIntMethod
                      (*(_jclass **)(in_x0 + 0x88),*(_jmethodID **)(in_x0 + 0x90),
                       *(undefined8 *)(in_x0 + 0x98));
    *(undefined4 *)(in_x0 + 0x78) = uVar9;
    break;
  case '\x03':
    uVar4 = _JNIEnv::CallStaticLongMethod
                      (*(_jclass **)(in_x0 + 0x88),*(_jmethodID **)(in_x0 + 0x90),
                       *(undefined8 *)(in_x0 + 0x98));
    *(undefined8 *)(in_x0 + 0x78) = uVar4;
    break;
  case '\x04':
    uVar9 = _JNIEnv::CallStaticFloatMethod
                      (*(_jclass **)(in_x0 + 0x88),*(_jmethodID **)(in_x0 + 0x90),
                       *(undefined8 *)(in_x0 + 0x98));
    *(undefined4 *)(in_x0 + 0x78) = uVar9;
    break;
  case '\x05':
    uVar3 = _JNIEnv::CallStaticBooleanMethod
                      (*(_jclass **)(in_x0 + 0x88),*(_jmethodID **)(in_x0 + 0x90),
                       *(undefined8 *)(in_x0 + 0x98));
    *(uint *)(in_x0 + 0x78) = uVar3 & 0xff;
    break;
  case '\x06':
    puVar8 = (undefined8 *)(in_x0 + 0x88);
    uVar4 = _JNIEnv::CallStaticObjectMethod
                      ((_jclass *)*puVar8,*(_jmethodID **)(in_x0 + 0x90),
                       *(undefined8 *)(in_x0 + 0x98));
    *(undefined8 *)(in_x0 + 0x80) = uVar4;
    cVar2 = (**(code **)(*(long *)*puVar8 + 0x720))((long *)*puVar8);
    if (cVar2 == '\0') {
      if (*(_JNIEnv **)(in_x0 + 0x80) != (_JNIEnv *)0x0) {
        cocos2d::StringUtils::getStringUTFCharsJNI
                  ((StringUtils *)*puVar8,*(_JNIEnv **)(in_x0 + 0x80),(_jstring *)0x0,in_x3);
        puVar5 = operator_new(0x18);
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        if ((local_70 & 1) == 0) {
          puVar5[2] = (ulong)local_60;
          puVar5[1] = uStack_68;
          *puVar5 = CONCAT71(uStack_6f,local_70);
          *(ulong **)(in_x0 + 0x78) = puVar5;
          break;
        }
        if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uStack_68 < 0x17) {
          __dest = (void *)((long)puVar5 + 1);
          *(char *)puVar5 = (char)((int)uStack_68 << 1);
          if (uStack_68 != 0) goto LAB_008b3190;
        }
        else {
          uVar7 = uStack_68 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar7);
          puVar5[1] = uStack_68;
          puVar5[2] = (ulong)__dest;
          *puVar5 = uVar7 | 1;
LAB_008b3190:
          memcpy(__dest,local_60,uStack_68);
        }
        *(undefined1 *)((long)__dest + uStack_68) = 0;
        *(ulong **)(in_x0 + 0x78) = puVar5;
        operator_delete(local_60);
        break;
      }
    }
    else {
      (**(code **)(**(long **)(in_x0 + 0x88) + 0x80))();
      (**(code **)(**(long **)(in_x0 + 0x88) + 0x88))();
      *(undefined8 *)(in_x0 + 0x80) = 0;
    }
    *(undefined8 *)(in_x0 + 0x78) = 0;
    break;
  default:
    *(undefined4 *)(in_x0 + 4) = 0xffffffff;
    __android_log_print(3,"JavaScriptJavaBridge","Return type \'%d\' is not supported",
                        (int)*(char *)(in_x0 + 0x70));
    uVar4 = 0;
    goto LAB_008b30cc;
  }
  cVar2 = (**(code **)(**(long **)(in_x0 + 0x88) + 0x720))();
  if (cVar2 == '\x01') {
    (**(code **)(**(long **)(in_x0 + 0x88) + 0x80))();
    (**(code **)(**(long **)(in_x0 + 0x88) + 0x88))();
    uVar4 = 0;
    *(undefined4 *)(in_x0 + 4) = 0xfffffffc;
  }
  else {
    uVar4 = 1;
  }
LAB_008b30cc:
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

