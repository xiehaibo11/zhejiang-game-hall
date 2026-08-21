
/* cocos2d::network::HttpClient::networkThreadAlone(cocos2d::network::HttpRequest*,
   cocos2d::network::HttpResponse*) */

void __thiscall
cocos2d::network::HttpClient::networkThreadAlone
          (HttpClient *this,HttpRequest *param_1,HttpResponse *param_2)

{
  mutex *this_00;
  __shared_weak_count *p_Var1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *this_01;
  code *pcVar6;
  long lVar7;
  undefined **local_1a0;
  HttpClient *pHStack_198;
  HttpResponse *local_190;
  HttpRequest *pHStack_188;
  long *local_180;
  char local_170 [264];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  std::__ndk1::mutex::unlock(this_00);
  local_170[0xe8] = '\0';
  local_170[0xe9] = '\0';
  local_170[0xea] = '\0';
  local_170[0xeb] = '\0';
  local_170[0xec] = '\0';
  local_170[0xed] = '\0';
  local_170[0xee] = '\0';
  local_170[0xef] = '\0';
  local_170[0xe0] = '\0';
  local_170[0xe1] = '\0';
  local_170[0xe2] = '\0';
  local_170[0xe3] = '\0';
  local_170[0xe4] = '\0';
  local_170[0xe5] = '\0';
  local_170[0xe6] = '\0';
  local_170[0xe7] = '\0';
  local_170[0xf8] = '\0';
  local_170[0xf9] = '\0';
  local_170[0xfa] = '\0';
  local_170[0xfb] = '\0';
  local_170[0xfc] = '\0';
  local_170[0xfd] = '\0';
  local_170[0xfe] = '\0';
  local_170[0xff] = '\0';
  local_170[0xf0] = '\0';
  local_170[0xf1] = '\0';
  local_170[0xf2] = '\0';
  local_170[0xf3] = '\0';
  local_170[0xf4] = '\0';
  local_170[0xf5] = '\0';
  local_170[0xf6] = '\0';
  local_170[0xf7] = '\0';
  local_170[200] = '\0';
  local_170[0xc9] = '\0';
  local_170[0xca] = '\0';
  local_170[0xcb] = '\0';
  local_170[0xcc] = '\0';
  local_170[0xcd] = '\0';
  local_170[0xce] = '\0';
  local_170[0xcf] = '\0';
  local_170[0xc0] = '\0';
  local_170[0xc1] = '\0';
  local_170[0xc2] = '\0';
  local_170[0xc3] = '\0';
  local_170[0xc4] = '\0';
  local_170[0xc5] = '\0';
  local_170[0xc6] = '\0';
  local_170[199] = '\0';
  local_170[0xd8] = '\0';
  local_170[0xd9] = '\0';
  local_170[0xda] = '\0';
  local_170[0xdb] = '\0';
  local_170[0xdc] = '\0';
  local_170[0xdd] = '\0';
  local_170[0xde] = '\0';
  local_170[0xdf] = '\0';
  local_170[0xd0] = '\0';
  local_170[0xd1] = '\0';
  local_170[0xd2] = '\0';
  local_170[0xd3] = '\0';
  local_170[0xd4] = '\0';
  local_170[0xd5] = '\0';
  local_170[0xd6] = '\0';
  local_170[0xd7] = '\0';
  local_170[0xa8] = '\0';
  local_170[0xa9] = '\0';
  local_170[0xaa] = '\0';
  local_170[0xab] = '\0';
  local_170[0xac] = '\0';
  local_170[0xad] = '\0';
  local_170[0xae] = '\0';
  local_170[0xaf] = '\0';
  local_170[0xa0] = '\0';
  local_170[0xa1] = '\0';
  local_170[0xa2] = '\0';
  local_170[0xa3] = '\0';
  local_170[0xa4] = '\0';
  local_170[0xa5] = '\0';
  local_170[0xa6] = '\0';
  local_170[0xa7] = '\0';
  local_170[0xb8] = '\0';
  local_170[0xb9] = '\0';
  local_170[0xba] = '\0';
  local_170[0xbb] = '\0';
  local_170[0xbc] = '\0';
  local_170[0xbd] = '\0';
  local_170[0xbe] = '\0';
  local_170[0xbf] = '\0';
  local_170[0xb0] = '\0';
  local_170[0xb1] = '\0';
  local_170[0xb2] = '\0';
  local_170[0xb3] = '\0';
  local_170[0xb4] = '\0';
  local_170[0xb5] = '\0';
  local_170[0xb6] = '\0';
  local_170[0xb7] = '\0';
  local_170[0x88] = '\0';
  local_170[0x89] = '\0';
  local_170[0x8a] = '\0';
  local_170[0x8b] = '\0';
  local_170[0x8c] = '\0';
  local_170[0x8d] = '\0';
  local_170[0x8e] = '\0';
  local_170[0x8f] = '\0';
  local_170[0x80] = '\0';
  local_170[0x81] = '\0';
  local_170[0x82] = '\0';
  local_170[0x83] = '\0';
  local_170[0x84] = '\0';
  local_170[0x85] = '\0';
  local_170[0x86] = '\0';
  local_170[0x87] = '\0';
  local_170[0x98] = '\0';
  local_170[0x99] = '\0';
  local_170[0x9a] = '\0';
  local_170[0x9b] = '\0';
  local_170[0x9c] = '\0';
  local_170[0x9d] = '\0';
  local_170[0x9e] = '\0';
  local_170[0x9f] = '\0';
  local_170[0x90] = '\0';
  local_170[0x91] = '\0';
  local_170[0x92] = '\0';
  local_170[0x93] = '\0';
  local_170[0x94] = '\0';
  local_170[0x95] = '\0';
  local_170[0x96] = '\0';
  local_170[0x97] = '\0';
  local_170[0x68] = '\0';
  local_170[0x69] = '\0';
  local_170[0x6a] = '\0';
  local_170[0x6b] = '\0';
  local_170[0x6c] = '\0';
  local_170[0x6d] = '\0';
  local_170[0x6e] = '\0';
  local_170[0x6f] = '\0';
  local_170[0x60] = '\0';
  local_170[0x61] = '\0';
  local_170[0x62] = '\0';
  local_170[99] = '\0';
  local_170[100] = '\0';
  local_170[0x65] = '\0';
  local_170[0x66] = '\0';
  local_170[0x67] = '\0';
  local_170[0x78] = '\0';
  local_170[0x79] = '\0';
  local_170[0x7a] = '\0';
  local_170[0x7b] = '\0';
  local_170[0x7c] = '\0';
  local_170[0x7d] = '\0';
  local_170[0x7e] = '\0';
  local_170[0x7f] = '\0';
  local_170[0x70] = '\0';
  local_170[0x71] = '\0';
  local_170[0x72] = '\0';
  local_170[0x73] = '\0';
  local_170[0x74] = '\0';
  local_170[0x75] = '\0';
  local_170[0x76] = '\0';
  local_170[0x77] = '\0';
  local_170[0x48] = '\0';
  local_170[0x49] = '\0';
  local_170[0x4a] = '\0';
  local_170[0x4b] = '\0';
  local_170[0x4c] = '\0';
  local_170[0x4d] = '\0';
  local_170[0x4e] = '\0';
  local_170[0x4f] = '\0';
  local_170[0x40] = '\0';
  local_170[0x41] = '\0';
  local_170[0x42] = '\0';
  local_170[0x43] = '\0';
  local_170[0x44] = '\0';
  local_170[0x45] = '\0';
  local_170[0x46] = '\0';
  local_170[0x47] = '\0';
  local_170[0x58] = '\0';
  local_170[0x59] = '\0';
  local_170[0x5a] = '\0';
  local_170[0x5b] = '\0';
  local_170[0x5c] = '\0';
  local_170[0x5d] = '\0';
  local_170[0x5e] = '\0';
  local_170[0x5f] = '\0';
  local_170[0x50] = '\0';
  local_170[0x51] = '\0';
  local_170[0x52] = '\0';
  local_170[0x53] = '\0';
  local_170[0x54] = '\0';
  local_170[0x55] = '\0';
  local_170[0x56] = '\0';
  local_170[0x57] = '\0';
  local_170[0x28] = '\0';
  local_170[0x29] = '\0';
  local_170[0x2a] = '\0';
  local_170[0x2b] = '\0';
  local_170[0x2c] = '\0';
  local_170[0x2d] = '\0';
  local_170[0x2e] = '\0';
  local_170[0x2f] = '\0';
  local_170[0x20] = '\0';
  local_170[0x21] = '\0';
  local_170[0x22] = '\0';
  local_170[0x23] = '\0';
  local_170[0x24] = '\0';
  local_170[0x25] = '\0';
  local_170[0x26] = '\0';
  local_170[0x27] = '\0';
  local_170[0x38] = '\0';
  local_170[0x39] = '\0';
  local_170[0x3a] = '\0';
  local_170[0x3b] = '\0';
  local_170[0x3c] = '\0';
  local_170[0x3d] = '\0';
  local_170[0x3e] = '\0';
  local_170[0x3f] = '\0';
  local_170[0x30] = '\0';
  local_170[0x31] = '\0';
  local_170[0x32] = '\0';
  local_170[0x33] = '\0';
  local_170[0x34] = '\0';
  local_170[0x35] = '\0';
  local_170[0x36] = '\0';
  local_170[0x37] = '\0';
  local_170[8] = '\0';
  local_170[9] = '\0';
  local_170[10] = '\0';
  local_170[0xb] = '\0';
  local_170[0xc] = '\0';
  local_170[0xd] = '\0';
  local_170[0xe] = '\0';
  local_170[0xf] = '\0';
  local_170[0] = '\0';
  local_170[1] = '\0';
  local_170[2] = '\0';
  local_170[3] = '\0';
  local_170[4] = '\0';
  local_170[5] = '\0';
  local_170[6] = '\0';
  local_170[7] = '\0';
  local_170[0x18] = '\0';
  local_170[0x19] = '\0';
  local_170[0x1a] = '\0';
  local_170[0x1b] = '\0';
  local_170[0x1c] = '\0';
  local_170[0x1d] = '\0';
  local_170[0x1e] = '\0';
  local_170[0x1f] = '\0';
  local_170[0x10] = '\0';
  local_170[0x11] = '\0';
  local_170[0x12] = '\0';
  local_170[0x13] = '\0';
  local_170[0x14] = '\0';
  local_170[0x15] = '\0';
  local_170[0x16] = '\0';
  local_170[0x17] = '\0';
  processResponse(this,param_2,local_170);
  std::__ndk1::mutex::lock((mutex *)(this + 0xa0));
  if ((*(__shared_weak_count **)(this + 0x98) == (__shared_weak_count *)0x0) ||
     (this_01 = (__shared_weak_count *)
                std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(this + 0x98)),
     this_01 == (__shared_weak_count *)0x0)) goto LAB_009aac2c;
  if (*(Scheduler **)(this + 0x90) != (Scheduler *)0x0) {
    local_1a0 = &PTR_FUN_01c6ab18;
    pHStack_198 = this;
    local_190 = param_2;
    pHStack_188 = param_1;
    local_180 = (long *)&local_1a0;
                    /* try { // try from 009aabd0 to 00aaacb3 has its CatchHandler @ 009aa990 */
    Scheduler::performFunctionInCocosThread(*(Scheduler **)(this + 0x90),(function *)&local_1a0);
    if (&local_1a0 == (undefined ***)local_180) {
      pcVar6 = *(code **)(*local_180 + 0x20);
    }
    else {
      if (local_180 == (long *)0x0) goto LAB_009aabfc;
      pcVar6 = *(code **)(*local_180 + 0x28);
    }
    (*pcVar6)();
  }
LAB_009aabfc:
  p_Var1 = this_01 + 8;
  do {
    lVar7 = *(long *)p_Var1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
    if (bVar4) {
      *(long *)p_Var1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*(long *)this_01 + 0x10))(this_01);
    std::__ndk1::__shared_weak_count::__release_weak(this_01);
  }
LAB_009aac2c:
  std::__ndk1::mutex::unlock((mutex *)(this + 0xa0));
  std::__ndk1::mutex::lock(this_00);
  iVar2 = *(int *)(this + 100);
                    /* catch() { ... } // from try @ 009aaa10 with catch @ 009aac44 */
                    /* catch() { ... } // from try @ 009aaa04 with catch @ 009aac48 */
  *(int *)(this + 100) = iVar2 + -1;
                    /* catch() { ... } // from try @ 009aa9e4 with catch @ 009aac4c */
  std::__ndk1::mutex::unlock(this_00);
  if (iVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 009aaa1c with catch @ 009aac5c */
    (**(code **)(*(long *)this + 8))(this);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

