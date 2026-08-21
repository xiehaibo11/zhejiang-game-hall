
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
  void *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  undefined8 local_a0;
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
  local_dc = 0;
  local_c4 = 0;
  uVar4 = pvmp3_decoderMemRequirements();
  __ptr = malloc(uVar4 & 0xffffffff);
  pvmp3_InitDecoder(&local_f0,__ptr);
  local_a0 = 0;
  local_98 = param_2;
  pmStack_90 = param_1;
  uVar4 = FUN_00a9d97c(param_1,param_2,0,&local_a0,&local_a4);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"mp3reader","%s, resync failed","init");
  }
  else {
                    /* try { // try from 00a9e210 to 00b9e21b has its CatchHandler @ 00a9e21c */
                    /* catch() { ... } // from try @ 00a9e144 with catch @ 00a9e21c
                       catch() { ... } // from try @ 00a9e210 with catch @ 00a9e21c
                       try { // try from 00a9e21c to 00b9e31b has its CatchHandler @ 00a9e094 */
    local_80 = local_a0;
    local_88 = local_a4;
    uVar4 = FUN_00a9ddd4(local_a4,auStack_b0,&local_78,&local_74,auStack_70,0);
    if ((uVar4 & 1) != 0) {
      __ptr_00 = malloc(0x2800);
      __ptr_01 = malloc(0x2400);
      uVar4 = Mp3Reader::getFrame((Mp3Reader *)&local_98,__ptr_00,(uint *)&local_a0);
      while ((uVar4 & 1) != 0) {
        *param_4 = local_74;
                    /* catch() { ... } // from try @ 00a9e114 with catch @ 00a9e280 */
        *param_5 = local_78;
        local_d8 = 0;
                    /* catch() { ... } // from try @ 00a9e110 with catch @ 00a9e290 */
        local_e8 = (uint)local_a0;
        uStack_e4 = 0;
        local_c8 = 0x1200;
        local_f0 = __ptr_00;
        local_b8 = __ptr_01;
                    /* catch() { ... } // from try @ 00a9e104 with catch @ 00a9e2a0 */
        iVar3 = pvmp3_framedecoder(&local_f0,__ptr);
        if (iVar3 != 0) {
          __android_log_print(6,"mp3reader","Decoder encountered error=%d",iVar3);
          uVar5 = 1;
          goto LAB_00a9e35c;
        }
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                  ((vector<char,std::__ndk1::allocator<char>> *)param_3,*(undefined8 *)(param_3 + 8)
                   ,__ptr_01,(void *)((long)__ptr_01 + (long)(int)local_c8 * 2));
        uVar1 = 0;
        if (local_74 != 0) {
          uVar1 = local_c8 / local_74;
        }
        *param_6 = *param_6 + uVar1;
        uVar4 = Mp3Reader::getFrame((Mp3Reader *)&local_98,__ptr_00,(uint *)&local_a0);
      }
      uVar5 = 0;
LAB_00a9e35c:
      (**(code **)(pmStack_90 + 0x10))(local_98);
      free(__ptr_00);
      free(__ptr_01);
      free(__ptr);
      goto LAB_00a9e380;
    }
  }
                    /* try { // try from 00a9e31c to 00b9e407 has its CatchHandler @ 00a9e31c
                       catch() { ... } // from try @ 00a9e31c with catch @ 00a9e31c
                       catch() { ... } // from try @ 00a9e538 with catch @ 00a9e31c */
  __android_log_print(6,"mp3reader","mp3Reader.init: Encountered error reading\n");
  free(__ptr);
  uVar5 = 1;
LAB_00a9e380:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

