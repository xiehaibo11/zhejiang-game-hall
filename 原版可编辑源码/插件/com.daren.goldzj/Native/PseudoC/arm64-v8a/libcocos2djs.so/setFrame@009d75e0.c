
/* cocos2d::VideoPlayer::setFrame(float, float, float, float) */

void __thiscall
cocos2d::VideoPlayer::setFrame
          (VideoPlayer *this,float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined2 uStack_32;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_32 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x18;
  local_37 = 0x74636552;
  uStack_3f = 0x65646956746573;
  uStack_38 = 0x6f;
  local_33 = 0;
  JniHelper::callStaticVoidMethod<int,int,int,int,int>
            ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c),(int)param_1,(int)param_2
             ,(int)param_3,(int)param_4);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

