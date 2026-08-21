
/* cocos2d::extension::AssetsManagerEx::AssetsManagerEx(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::AssetsManagerEx
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Downloader *this_03;
  undefined8 *puVar7;
  basic_string *pbVar8;
  code *pcVar9;
  __shared_weak_count *this_04;
  AssetsManagerEx *pAVar10;
  AssetsManagerEx *pAVar11;
  undefined4 local_d8;
  undefined4 uStack_d4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string local_b8 [16];
  void *local_a8;
  undefined **local_a0;
  AssetsManagerEx *pAStack_98;
  undefined8 local_90;
  AssetsManagerEx *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar8 = param_2;
  Ref::Ref((Ref *)this);
                    /* try { // try from 00e01794 to 00f017df has its CatchHandler @ 00e02174 */
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__AssetsManagerEx_016e7f48;
  pAVar11 = this + 0x28;
  *(undefined8 *)pAVar11 = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x70),"");
  pAVar10 = this + 0x88;
  *(undefined8 *)pAVar10 = 0;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xa0);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_00,"");
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_01,"");
  this_02 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xd0);
                    /* try { // try from 00e01800 to 00f0184b has its CatchHandler @ 00e02170 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_02,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0xe8),param_1);
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  this[0x118] = (AssetsManagerEx)0x0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x140) = 0x3f800000;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0x3f800000;
                    /* try { // try from 00e01858 to 00f018b7 has its CatchHandler @ 00e0216c */
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0x20;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c8) = 0x3f800000;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  this[0x240] = (AssetsManagerEx)0x0;
  lVar5 = Director::getInstance();
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar5 + 0xb0);
  StringUtils::format("%p",local_b8,this);
  std::__ndk1::operator+((__ndk1 *)EventListenerAssetsManagerEx::LISTENER_ID,local_b8,pbVar8);
  if (((byte)*pAVar11 & 1) == 0) {
                    /* try { // try from 00e018c4 to 00f018db has its CatchHandler @ 00e0212c */
    *(undefined2 *)pAVar11 = 0;
  }
  else {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((byte)this[0x28] & 1) != 0) {
      operator_delete(*(void **)(this + 0x38));
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  *(undefined8 *)(this + 0x38) = local_90;
  *(AssetsManagerEx **)(this + 0x30) = pAStack_98;
  *(undefined ***)pAVar11 = local_a0;
  uVar6 = FileUtils::getInstance();
  local_d8 = *(undefined4 *)(this + 0x188);
  *(undefined8 *)(this + 0x48) = uVar6;
                    /* try { // try from 00e01910 to 00f01923 has its CatchHandler @ 00e020e8 */
  uStack_d4 = 0x2d;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,".tmp");
  this_03 = operator_new(0xd0);
                    /* try { // try from 00e01930 to 00f01977 has its CatchHandler @ 00e02168 */
  network::Downloader::Downloader(this_03,(DownloaderHints *)&local_d8);
  puVar7 = operator_new(0x20);
  puVar7[2] = 0;
  puVar7[3] = this_03;
  *puVar7 = &PTR____shared_weak_count_016e7fd0;
  puVar7[1] = 0;
  this_04 = *(__shared_weak_count **)(this + 0x60);
  *(Downloader **)(this + 0x58) = this_03;
  *(undefined8 **)(this + 0x60) = puVar7;
  if (this_04 != (__shared_weak_count *)0x0) {
    p_Var1 = this_04 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
                    /* try { // try from 00e01984 to 00f019d3 has its CatchHandler @ 00e02164 */
      (**(code **)(*(long *)this_04 + 0x10))(this_04);
      std::__ndk1::__shared_weak_count::__release_weak(this_04);
    }
  }
  local_a0 = &PTR_FUN_016e8020;
  local_90 = 1;
  pAStack_98 = (AssetsManagerEx *)0x10;
  local_88 = this;
  local_80 = &local_a0;
  FUN_0090e07c(&local_a0,*(long *)(this + 0x58) + 0x90);
  if (&local_a0 == local_80) {
                    /* try { // try from 00e019e0 to 00f01a27 has its CatchHandler @ 00e02160 */
    pcVar9 = (code *)(*local_80)[4];
LAB_00e019e8:
    (*pcVar9)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_80)[5];
    goto LAB_00e019e8;
  }
  local_a0 = &PTR_FUN_016e80b8;
  pAStack_98 = this;
  local_80 = &local_a0;
  FUN_0090dd8c(&local_a0,*(long *)(this + 0x58) + 0x60);
  if (&local_a0 == local_80) {
    pcVar9 = (code *)(*local_80)[4];
LAB_00e01a34:
                    /* try { // try from 00e01a34 to 00f01a7b has its CatchHandler @ 00e0215c */
    (*pcVar9)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_80)[5];
    goto LAB_00e01a34;
  }
  local_a0 = &PTR_FUN_016e8138;
  pAStack_98 = this;
  local_80 = &local_a0;
  FUN_0090dad8(&local_a0,*(long *)(this + 0x58) + 0x30);
  if (&local_a0 == local_80) {
    pcVar9 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00e01a84;
    pcVar9 = (code *)(*local_80)[5];
  }
  (*pcVar9)();
LAB_00e01a84:
                    /* try { // try from 00e01a88 to 00f01ae3 has its CatchHandler @ 00e0218c */
  setStoragePath(this,param_2);
  FUN_007c1fb0(&local_a0,pAVar10,"version.manifest");
  if (((byte)*this_00 & 1) == 0) {
    *(undefined2 *)this_00 = 0;
  }
  else {
    **(undefined1 **)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    if (((byte)this[0xa0] & 1) != 0) {
      operator_delete(*(void **)(this + 0xb0));
      *(undefined8 *)(this + 0xa0) = 0;
    }
  }
  *(undefined8 *)(this + 0xb0) = local_90;
  *(AssetsManagerEx **)(this + 0xa8) = pAStack_98;
  *(undefined ***)this_00 = local_a0;
                    /* try { // try from 00e01ae8 to 00f01aef has its CatchHandler @ 00e02128 */
  FUN_007c1fb0(&local_a0,
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x70),"project.manifest");
                    /* try { // try from 00e01afc to 00f01b13 has its CatchHandler @ 00e02124 */
  if (((byte)*this_01 & 1) == 0) {
    *(undefined2 *)this_01 = 0;
  }
  else {
    **(undefined1 **)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    if (((byte)this[0xb8] & 1) != 0) {
      operator_delete(*(void **)(this + 200));
      *(undefined8 *)(this + 0xb8) = 0;
    }
  }
                    /* try { // try from 00e01b2c to 00f01b37 has its CatchHandler @ 00e02104 */
  *(undefined8 *)(this + 200) = local_90;
  *(AssetsManagerEx **)(this + 0xc0) = pAStack_98;
  *(undefined ***)this_01 = local_a0;
  FUN_007c1fb0(&local_a0,pAVar10,"project.manifest.temp");
  if (((byte)*this_02 & 1) == 0) {
    *(undefined2 *)this_02 = 0;
  }
  else {
    **(undefined1 **)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    if (((byte)this[0xd0] & 1) != 0) {
      operator_delete(*(void **)(this + 0xe0));
      *(undefined8 *)(this + 0xd0) = 0;
    }
  }
  *(undefined8 *)(this + 0xe0) = local_90;
  *(AssetsManagerEx **)(this + 0xd8) = pAStack_98;
  *(undefined ***)this_02 = local_a0;
                    /* try { // try from 00e01b94 to 00f01ba7 has its CatchHandler @ 00e020e4 */
  initManifests((basic_string *)this);
  if (((byte)local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
                    /* try { // try from 00e01bc8 to 00f01c0f has its CatchHandler @ 00e02158 */
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

