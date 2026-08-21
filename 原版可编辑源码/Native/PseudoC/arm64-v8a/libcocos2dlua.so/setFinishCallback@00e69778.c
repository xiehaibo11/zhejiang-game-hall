
/* cocos2d::experimental::AudioEngine::setFinishCallback(int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> const&) */

void cocos2d::experimental::AudioEngine::setFinishCallback(int param_1,function *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (DAT_0178f2d0 != 0) {
    uVar7 = CONCAT17(POPCOUNT((char)(DAT_0178f2d0 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_0178f2d0 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_0178f2d0 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_0178f2d0 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_0178f2d0 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_0178f2d0 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_0178f2d0 >> 8)),POPCOUNT((char)DAT_0178f2d0)))
                                                  )))));
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
    uVar2 = (ulong)param_1;
    if ((uVar8 & 0xffffffff) < 2) {
      uVar3 = DAT_0178f2d0 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (DAT_0178f2d0 <= uVar2) {
        uVar3 = 0;
        if (DAT_0178f2d0 != 0) {
          uVar3 = uVar2 / DAT_0178f2d0;
        }
        uVar3 = uVar2 - uVar3 * DAT_0178f2d0;
      }
    }
    plVar4 = *(long **)(_audioIDInfoMap + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 == uVar2) {
          if ((int)plVar4[2] == param_1) {
            AudioEngineImpl::setFinishCallback(_audioEngineImpl,param_1,param_2);
            return;
          }
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            uVar5 = uVar5 & DAT_0178f2d0 - 1;
          }
          else if (DAT_0178f2d0 <= uVar5) {
            uVar1 = 0;
            if (DAT_0178f2d0 != 0) {
              uVar1 = uVar5 / DAT_0178f2d0;
            }
            uVar5 = uVar5 - uVar1 * DAT_0178f2d0;
          }
          if (uVar5 != uVar3) {
            return;
          }
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}

