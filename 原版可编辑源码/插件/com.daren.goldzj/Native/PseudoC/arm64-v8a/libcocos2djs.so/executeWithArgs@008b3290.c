
/* JavaScriptJavaBridge::CallInfo::executeWithArgs(jvalue*) */

void __thiscall JavaScriptJavaBridge::CallInfo::executeWithArgs(CallInfo *this,jvalue *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  _JNIEnv *p_Var6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  void *__dest;
  ulong uVar10;
  undefined4 uVar11;
  byte local_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  void *local_60;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  switch(this[0x70]) {
  case (CallInfo)0x1:
    (**(code **)(**(long **)(this + 0x88) + 0x478))
              (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98));
    break;
  case (CallInfo)0x2:
    uVar11 = (**(code **)(**(long **)(this + 0x88) + 0x418))
                       (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                        *(undefined8 *)(this + 0x98));
    *(undefined4 *)(this + 0x78) = uVar11;
    break;
  case (CallInfo)0x3:
    iVar4 = (**(code **)(**(long **)(this + 0x88) + 0x418))
                      (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                       *(undefined8 *)(this + 0x98));
    *(long *)(this + 0x78) = (long)iVar4;
    break;
  case (CallInfo)0x4:
    uVar11 = (**(code **)(**(long **)(this + 0x88) + 0x448))
                       (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                        *(undefined8 *)(this + 0x98));
    *(undefined4 *)(this + 0x78) = uVar11;
    break;
  case (CallInfo)0x5:
    uVar3 = (**(code **)(**(long **)(this + 0x88) + 0x3b8))
                      (*(long **)(this + 0x88),*(undefined8 *)(this + 0x90),
                       *(undefined8 *)(this + 0x98));
    *(uint *)(this + 0x78) = uVar3 & 0xff;
    break;
  case (CallInfo)0x6:
    plVar5 = *(long **)(this + 0x88);
    p_Var6 = (_JNIEnv *)
             (**(code **)(*plVar5 + 0x3a0))
                       (plVar5,*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98));
    *(_JNIEnv **)(this + 0x80) = p_Var6;
    cocos2d::StringUtils::getStringUTFCharsJNI
              (*(StringUtils **)(this + 0x88),p_Var6,(_jstring *)0x0,(bool *)param_1);
    puVar7 = operator_new(0x18);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if ((local_70 & 1) == 0) {
      puVar7[2] = (ulong)local_60;
      puVar7[1] = uStack_68;
      *puVar7 = CONCAT71(uStack_6f,local_70);
      *(ulong **)(this + 0x78) = puVar7;
    }
    else {
      if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_68 < 0x17) {
        __dest = (void *)((long)puVar7 + 1);
        *(char *)puVar7 = (char)((int)uStack_68 << 1);
        if (uStack_68 != 0) goto LAB_008b346c;
      }
      else {
        uVar10 = uStack_68 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar10);
        puVar7[1] = uStack_68;
        puVar7[2] = (ulong)__dest;
        *puVar7 = uVar10 | 1;
LAB_008b346c:
        memcpy(__dest,local_60,uStack_68);
      }
      *(undefined1 *)((long)__dest + uStack_68) = 0;
      *(ulong **)(this + 0x78) = puVar7;
      operator_delete(local_60);
    }
    break;
  default:
    *(undefined4 *)(this + 4) = 0xffffffff;
    __android_log_print(3,"JavaScriptJavaBridge","Return type \'%d\' is not supported",
                        (int)(char)this[0x70]);
    uVar8 = 0;
    goto LAB_008b34dc;
  }
  cVar2 = (**(code **)(**(long **)(this + 0x88) + 0x720))();
  if (cVar2 == '\x01') {
    (**(code **)(**(long **)(this + 0x88) + 0x80))();
    (**(code **)(**(long **)(this + 0x88) + 0x88))();
    uVar8 = 0;
    *(undefined4 *)(this + 4) = 0xfffffffc;
  }
  else {
    uVar8 = 1;
  }
LAB_008b34dc:
  if (*(long *)(lVar1 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

