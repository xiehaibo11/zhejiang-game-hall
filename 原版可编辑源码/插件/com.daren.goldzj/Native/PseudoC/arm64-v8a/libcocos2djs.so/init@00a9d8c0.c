
/* Mp3Reader::init(mp3_callbacks*, void*) */

uint __thiscall Mp3Reader::init(Mp3Reader *this,mp3_callbacks *param_1,void *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(void **)this = param_2;
  *(mp3_callbacks **)(this + 8) = param_1;
  local_30 = 0;
  uVar3 = FUN_00a9d97c(param_1,param_2,0,&local_30,&local_34);
  if ((uVar3 & 1) == 0) {
    __android_log_print(6,"mp3reader","%s, resync failed","init");
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(this + 0x18) = local_30;
    *(undefined4 *)(this + 0x10) = local_34;
    uVar2 = FUN_00a9ddd4(local_34,auStack_40,this + 0x20,this + 0x24,this + 0x28,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

