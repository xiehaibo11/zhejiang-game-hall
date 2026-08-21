
/* cocos2d::Native::getNotchSize() */

void __thiscall cocos2d::Native::getNotchSize(Native *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  Size *in_x8;
  Size aSStack_58 [8];
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(in_x8,0.0,0.0);
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org.cocos2dx.lib.Cocos2dxActivity","getNotchSize",
                     "()[I");
  if (((uVar2 & 1) != 0) &&
     (lVar3 = _JNIEnv::CallStaticObjectMethod(local_50,p_Stack_48,local_40), lVar3 != 0)) {
    piVar4 = (int *)(**(code **)(*(long *)local_50 + 0x5d8))(local_50,lVar3,0);
    Size::Size(aSStack_58,(float)piVar4[1],(float)*piVar4);
    Size::operator=(in_x8,aSStack_58);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,lVar3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

