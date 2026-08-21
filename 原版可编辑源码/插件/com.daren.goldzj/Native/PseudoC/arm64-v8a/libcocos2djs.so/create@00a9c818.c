
/* cocos2d::AudioResampler::create(audio_format_t, int, int, cocos2d::AudioResampler::src_quality)
    */

long * cocos2d::AudioResampler::create(uint param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  
  plVar6 = (long *)(ulong)param_1;
  if (param_4 == 0) {
    iVar3 = pthread_once((pthread_once_t *)&DAT_01d38e3c,init_routine);
    if (iVar3 != 0) {
      __android_log_print(6,"AudioResampler","%s pthread_once failed: %d","create",iVar3);
    }
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d38e40);
  do {
    uVar1 = param_4 - 2;
    iVar3 = uVar1 * 0xe + 6;
    if (2 < uVar1) {
      iVar3 = 3;
    }
    do {
      if (bVar2 || param_4 < 5 && DAT_01d38e68 + iVar3 < 0x83) {
        DAT_01d38e68 = DAT_01d38e68 + iVar3;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d38e40);
        if (param_4 == 2) {
          if (param_1 != 1) goto LAB_00a9ca58;
          plVar6 = operator_new(0x90,(nothrow_t *)&std::nothrow);
          if (plVar6 == (long *)0x0) goto LAB_00a9ca30;
          *(int *)(plVar6 + 1) = param_2;
          *(int *)((long)plVar6 + 0xc) = param_3;
          *(int *)(plVar6 + 2) = param_3;
          plVar6[3] = 0;
          plVar6[4] = 0;
          *plVar6 = (long)&PTR__AudioResampler_01c6f6f8;
          plVar6[6] = 0;
          *(undefined4 *)((long)plVar6 + 0x3c) = 0;
          plVar6[9] = 0x7fffffffffffffff;
          plVar6[8] = 0;
          *(undefined4 *)(plVar6 + 10) = 2;
          if (1 < param_2 - 1U) {
            uVar4 = 2;
LAB_00a9cabc:
                    /* WARNING: Subroutine does not return */
            __android_log_assert
                      (0,"AudioResampler","Unsupported sample format %d quality %d channels",uVar4,
                       param_2);
          }
          if (param_3 < 1) {
LAB_00a9ca74:
                    /* WARNING: Subroutine does not return */
            __android_log_assert(0,"AudioResampler","Unsupported sample rate %d Hz",param_3);
          }
          *(undefined4 *)(plVar6 + 5) = 0;
          plVar6[4] = 0;
          puVar5 = &AudioResamplerCubic::vtable;
        }
        else {
          if ((param_4 == 3) || (param_4 == 4)) {
            if (param_1 != 1) goto LAB_00a9ca58;
            goto LAB_00a9ca30;
          }
          if (param_1 != 1) {
LAB_00a9ca58:
                    /* WARNING: Subroutine does not return */
            __android_log_assert
                      ("format != AUDIO_FORMAT_PCM_16_BIT","AudioResampler","invalid pcm format");
          }
          plVar6 = operator_new(0x60,(nothrow_t *)&std::nothrow);
          if (plVar6 == (long *)0x0) goto LAB_00a9ca30;
          *(int *)(plVar6 + 1) = param_2;
          *(int *)((long)plVar6 + 0xc) = param_3;
          *(int *)(plVar6 + 2) = param_3;
          plVar6[3] = 0;
          plVar6[4] = 0;
          *plVar6 = (long)&PTR__AudioResampler_01c6f6f8;
          plVar6[6] = 0;
          *(undefined4 *)((long)plVar6 + 0x3c) = 0;
          plVar6[9] = 0x7fffffffffffffff;
          plVar6[8] = 0;
          *(undefined4 *)(plVar6 + 10) = 1;
          if (1 < param_2 - 1U) {
            uVar4 = 1;
            goto LAB_00a9cabc;
          }
          if (param_3 < 1) goto LAB_00a9ca74;
          *(undefined4 *)(plVar6 + 5) = 0;
          plVar6[4] = 0;
          puVar5 = &AudioResamplerOrder1::vtable;
          *(undefined4 *)((long)plVar6 + 0x54) = 0;
          *(undefined4 *)(plVar6 + 0xb) = 0;
        }
        *plVar6 = (long)(puVar5 + 0x10);
LAB_00a9ca30:
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return plVar6;
      }
      bVar2 = true;
    } while (2 < uVar1);
    bVar2 = false;
    param_4 = param_4 - 1;
  } while( true );
}

