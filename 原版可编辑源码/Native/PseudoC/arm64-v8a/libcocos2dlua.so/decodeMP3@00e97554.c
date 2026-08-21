
/* decodeMP3(mp3_callbacks*, void*, std::__ndk1::vector<char, std::__ndk1::allocator<char> >&, int*,
   int*, int*) */

undefined4
decodeMP3(mp3_callbacks *param_1,void *param_2,vector *param_3,int *param_4,int *param_5,
         int *param_6)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  undefined4 uVar5;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  void *local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_9c;
  void *local_98;
  mp3_callbacks *pmStack_90;
  undefined4 local_88;
  undefined8 local_80;
  int local_78;
  uint local_74;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_b4 = 0;
  local_cc = 0;
  uVar4 = pvmp3_decoderMemRequirements();
  __ptr = malloc(uVar4 & 0xffffffff);
  pvmp3_InitDecoder(&local_e0,__ptr);
  local_e8 = 0;
  local_98 = param_2;
  pmStack_90 = param_1;
  uVar4 = FUN_00e96d60(param_1,param_2,0,&local_e8,&local_9c);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"mp3reader","%s, resync failed","init");
  }
  else {
    local_80 = local_e8;
    local_88 = local_9c;
    uVar4 = FUN_00e971bc(local_9c,auStack_f0,&local_78,&local_74,auStack_70,0);
    if ((uVar4 & 1) != 0) {
      __ptr_00 = malloc(0x2800);
      __ptr_01 = malloc(0x2400);
      uVar4 = Mp3Reader::getFrame((Mp3Reader *)&local_98,__ptr_00,(uint *)&local_e8);
      while ((uVar4 & 1) != 0) {
        *param_4 = local_74;
        *param_5 = local_78;
        local_b8 = 0x1200;
        local_c8 = 0;
        local_d8 = (uint)local_e8;
        uStack_d4 = 0;
        local_e0 = __ptr_00;
        local_a8 = __ptr_01;
        iVar3 = pvmp3_framedecoder(&local_e0,__ptr);
        if (iVar3 != 0) {
          __android_log_print(6,"mp3reader","Decoder encountered error=%d",iVar3);
          uVar5 = 1;
          goto LAB_00e97724;
        }
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                  ((vector<char,std::__ndk1::allocator<char>> *)param_3,*(undefined8 *)(param_3 + 8)
                   ,__ptr_01,(void *)((long)__ptr_01 + (long)(int)local_b8 * 2));
        uVar1 = 0;
        if (local_74 != 0) {
          uVar1 = local_b8 / local_74;
        }
        *param_6 = *param_6 + uVar1;
        uVar4 = Mp3Reader::getFrame((Mp3Reader *)&local_98,__ptr_00,(uint *)&local_e8);
      }
      uVar5 = 0;
LAB_00e97724:
      (**(code **)(pmStack_90 + 0x10))(local_98);
      free(__ptr_00);
      free(__ptr_01);
      goto LAB_00e97740;
    }
  }
  __android_log_print(6,"mp3reader","mp3Reader.init: Encountered error reading\n");
  uVar5 = 1;
LAB_00e97740:
  free(__ptr);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

