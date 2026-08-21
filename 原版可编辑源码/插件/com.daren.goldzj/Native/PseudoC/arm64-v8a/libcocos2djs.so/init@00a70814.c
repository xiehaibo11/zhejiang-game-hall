
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::AudioEngineImpl::init() */

void __thiscall cocos2d::AudioEngineImpl::init(AudioEngineImpl *this)

{
  SLEngineItf_ **ppSVar1;
  SLObjectItf_ **ppSVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  AudioPlayerProvider *this_00;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  undefined1 auStack_98 [8];
  undefined **local_90;
  code *pcStack_88;
  undefined ***local_70;
  long local_58;
  
                    /* try { // try from 00a70824 to 00b7082f has its CatchHandler @ 00a70dc0 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a70858 to 00b708fb has its CatchHandler @ 00a70e04 */
  iVar4 = slCreateEngine(this + 0x10,0,0,0,0,0);
  if (iVar4 == 0) {
    puVar6 = *(undefined8 **)(this + 0x10);
    iVar4 = (**(code **)*puVar6)(puVar6,0);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(**(long **)(this + 0x10) + 0x18))
                        (*(long **)(this + 0x10),_SL_IID_ENGINE,this + 0x18);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(**(long **)(this + 0x18) + 0x38))
                          (*(long **)(this + 0x18),this + 0x20,0,auStack_98,auStack_98);
        if (iVar4 == 0) {
          puVar6 = *(undefined8 **)(this + 0x20);
                    /* try { // try from 00a70958 to 00b70963 has its CatchHandler @ 00a70dd4 */
          iVar4 = (**(code **)*puVar6)(puVar6,0);
          if (iVar4 == 0) {
            this_00 = operator_new(0x170);
            ppSVar1 = *(SLEngineItf_ ***)(this + 0x18);
            ppSVar2 = *(SLObjectItf_ ***)(this + 0x20);
                    /* try { // try from 00a709c0 to 00b709cb has its CatchHandler @ 00a70e00 */
            iVar4 = getDeviceSampleRateJNI();
            iVar5 = getDeviceAudioBufferSizeInFramesJNI();
            local_90 = &PTR_FUN_01c6ec30;
                    /* try { // try from 00a709f0 to 00b709f7 has its CatchHandler @ 00a70db8 */
            pcStack_88 = FUN_00a70a48;
            local_70 = &local_90;
                    /* try { // try from 00a70a0c to 00b70a93 has its CatchHandler @ 00a70e00 */
            AudioPlayerProvider::AudioPlayerProvider
                      (this_00,ppSVar1,ppSVar2,iVar4,iVar5,(function *)&local_90,
                       (ICallerThreadUtils *)&PTR_PTR_01d1b778);
            *(AudioPlayerProvider **)(this + 0xa0) = this_00;
            if (&local_90 == local_70) {
              pcVar9 = (code *)(*local_70)[4];
LAB_00a70a38:
              (*pcVar9)();
            }
            else if (local_70 != (undefined ***)0x0) {
              pcVar9 = (code *)(*local_70)[5];
              goto LAB_00a70a38;
            }
            uVar7 = 1;
            goto LAB_00a70984;
          }
          pcVar8 = "\"realize the output mix fail\"";
          uVar7 = 0xae;
        }
        else {
          pcVar8 = "\"create output mix fail\"";
          uVar7 = 0xaa;
        }
      }
      else {
        pcVar8 = "\"get the engine interface fail\"";
        uVar7 = 0xa4;
                    /* try { // try from 00a708fc to 00b70957 has its CatchHandler @ 00a70324 */
      }
    }
    else {
      pcVar8 = "\"realize the engine fail\"";
      uVar7 = 0xa0;
    }
  }
  else {
    pcVar8 = "\"create opensl engine fail\"";
    uVar7 = 0x9c;
  }
  log("fun:%s,line:%d,msg:%s","init",uVar7,pcVar8);
  uVar7 = 0;
LAB_00a70984:
                    /* try { // try from 00a7098c to 00b70997 has its CatchHandler @ 00a70dbc */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

