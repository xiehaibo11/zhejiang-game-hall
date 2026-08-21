
/* LuaJavaBridge::CallInfo::executeWithArgs(jvalue*) */

void __thiscall LuaJavaBridge::CallInfo::executeWithArgs(CallInfo *this,jvalue *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  _JNIEnv *p_Var4;
  ulong *puVar5;
  undefined8 uVar6;
  void *__dest;
  ulong uVar7;
  undefined4 uVar8;
  byte local_78;
  undefined7 uStack_77;
  ulong uStack_70;
  void *local_68;
  _jstring local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(this + 0x70)) {
  case 0:
    (**(code **)(**(long **)(this + 0x88) + 0x478))
              (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),
               param_1);
    break;
  case 1:
    uVar8 = (**(code **)(**(long **)(this + 0x88) + 0x418))
                      (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                       *(undefined8 *)(this + 0x98),param_1);
    *(undefined4 *)(this + 0x78) = uVar8;
    break;
  case 2:
    uVar8 = (**(code **)(**(long **)(this + 0x88) + 0x448))
                      (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                       *(undefined8 *)(this + 0x98),param_1);
    *(undefined4 *)(this + 0x78) = uVar8;
    break;
  case 3:
    uVar3 = (**(code **)(**(long **)(this + 0x88) + 0x3b8))
                      (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                       *(undefined8 *)(this + 0x98),param_1);
    *(uint *)(this + 0x78) = uVar3 & 0xff;
    break;
  case 4:
    p_Var4 = (_JNIEnv *)
             (**(code **)(**(long **)(this + 0x88) + 0x3a0))
                       (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                        *(undefined8 *)(this + 0x98));
    *(_JNIEnv **)(this + 0x80) = p_Var4;
    local_5c[0] = (_jstring)0x1;
    cocos2d::StringUtils::getStringUTFCharsJNI
              (*(StringUtils **)(this + 0x88),p_Var4,local_5c,(bool *)param_1);
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
          if (uStack_70 != 0) goto LAB_007c645c;
        }
        else {
          uVar7 = uStack_70 + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar7);
          puVar5[1] = uStack_70;
          puVar5[2] = (ulong)__dest;
          *puVar5 = uVar7 | 1;
LAB_007c645c:
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
    goto LAB_007c64d4;
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
LAB_007c64d4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

