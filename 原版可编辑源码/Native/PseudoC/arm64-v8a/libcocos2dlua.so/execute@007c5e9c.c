
/* LuaJavaBridge::CallInfo::execute() */

void __thiscall LuaJavaBridge::CallInfo::execute(CallInfo *this)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  _JNIEnv *p_Var4;
  ulong *puVar5;
  undefined8 uVar6;
  bool *pbVar7;
  void *__dest;
  ulong uVar8;
  undefined4 uVar9;
  byte local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  void *local_68;
  _jstring local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pbVar7 = (bool *)(ulong)*(uint *)(this + 0x70);
  switch(pbVar7) {
  case (bool *)0x0:
    _JNIEnv::CallStaticVoidMethod
              (*(_jclass **)(this + 0x88),*(_jmethodID **)(this + 0x90),*(undefined8 *)(this + 0x98)
              );
    break;
  case (bool *)0x1:
    uVar9 = _JNIEnv::CallStaticIntMethod
                      (*(_jclass **)(this + 0x88),*(_jmethodID **)(this + 0x90),
                       *(undefined8 *)(this + 0x98));
    *(undefined4 *)(this + 0x78) = uVar9;
    break;
  case (bool *)0x2:
    uVar9 = _JNIEnv::CallStaticFloatMethod
                      (*(_jclass **)(this + 0x88),*(_jmethodID **)(this + 0x90),
                       *(undefined8 *)(this + 0x98));
    *(undefined4 *)(this + 0x78) = uVar9;
    break;
  case (bool *)0x3:
    uVar3 = _JNIEnv::CallStaticBooleanMethod
                      (*(_jclass **)(this + 0x88),*(_jmethodID **)(this + 0x90),
                       *(undefined8 *)(this + 0x98));
    *(uint *)(this + 0x78) = uVar3 & 0xff;
    break;
  case (bool *)0x4:
    p_Var4 = (_JNIEnv *)
             _JNIEnv::CallStaticObjectMethod
                       (*(_jclass **)(this + 0x88),*(_jmethodID **)(this + 0x90),
                        *(undefined8 *)(this + 0x98));
    *(_JNIEnv **)(this + 0x80) = p_Var4;
    local_5c[0] = (_jstring)0x1;
    cocos2d::StringUtils::getStringUTFCharsJNI
              (*(StringUtils **)(this + 0x88),p_Var4,local_5c,pbVar7);
    if (local_5c[0] == (_jstring)0x0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = operator_new(0x18);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      if ((local_78 & 1) == 0) {
        puVar5[2] = (ulong)local_68;
        puVar5[1] = uStack_70;
        *puVar5 = CONCAT71(uStack_77,local_78);
      }
      else {
        if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uStack_70 < 0x17) {
          __dest = (void *)((long)puVar5 + 1);
          *(char *)puVar5 = (char)((int)uStack_70 << 1);
          if (uStack_70 != 0) goto LAB_007c601c;
        }
        else {
          uVar8 = uStack_70 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar8);
          puVar5[1] = uStack_70;
          puVar5[2] = (ulong)__dest;
          *puVar5 = uVar8 | 1;
LAB_007c601c:
          memcpy(__dest,local_68,uStack_70);
        }
        *(undefined1 *)((long)__dest + uStack_70) = 0;
      }
    }
    *(ulong **)(this + 0x78) = puVar5;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    break;
  default:
    *(undefined4 *)(this + 4) = 0xffffffff;
    __android_log_print(3,"luajc","Return type \'%d\' is not supported");
    uVar6 = 0;
    goto LAB_007c6094;
  }
  cVar2 = (**(code **)(**(long **)(this + 0x88) + 0x720))();
  if (cVar2 == '\x01') {
    (**(code **)(**(long **)(this + 0x88) + 0x80))();
    (**(code **)(**(long **)(this + 0x88) + 0x88))();
    uVar6 = 0;
    *(undefined4 *)(this + 4) = 0xfffffffc;
  }
  else {
    uVar6 = 1;
  }
LAB_007c6094:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

