
/* cocos2d::extension::AssetsManagerEx::init(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::init
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  Downloader *this_00;
  undefined8 *puVar7;
  basic_string *pbVar8;
  code *pcVar9;
  long lVar10;
  AssetsManagerEx *pAVar11;
  __shared_weak_count *this_01;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  undefined **local_80;
  AssetsManagerEx *pAStack_78;
  undefined8 local_70;
  AssetsManagerEx *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  pbVar8 = param_2;
  StringUtils::format("%p",local_98,this);
                    /* try { // try from 00a630f0 to 00b6314f has its CatchHandler @ 00a62fa8 */
  std::__ndk1::operator+((__ndk1 *)"__cc_assets_manager_",(char *)local_98,pbVar8);
  pAVar11 = this + 0x10;
  if (((byte)*pAVar11 & 1) == 0) {
    *(undefined2 *)pAVar11 = 0;
  }
  else {
    **(undefined1 **)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 00a63008 with catch @ 00a63128 */
    if (((byte)this[0x10] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a62ffc with catch @ 00a6312c */
      operator_delete(*(void **)(this + 0x20));
                    /* catch() { ... } // from try @ 00a63010 with catch @ 00a63134 */
      *(undefined8 *)(this + 0x10) = 0;
    }
  }
  *(undefined8 *)(this + 0x20) = local_70;
  *(AssetsManagerEx **)(this + 0x18) = pAStack_78;
  *(undefined ***)pAVar11 = local_80;
  uVar6 = FileUtils::getInstance();
  local_b8 = *(undefined4 *)(this + 0x16c);
                    /* try { // try from 00a63150 to 00b631a7 has its CatchHandler @ 00a63150
                       catch() { ... } // from try @ 00a63150 with catch @ 00a63150
                       catch() { ... } // from try @ 00a63344 with catch @ 00a63150 */
  *(undefined8 *)(this + 0x28) = uVar6;
  uStack_b4 = 0x2d;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0x706d742e08;
  this_00 = operator_new(0xd0);
  network::Downloader::Downloader(this_00,(DownloaderHints *)&local_b8);
  puVar7 = operator_new(0x20);
  puVar7[2] = 0;
  puVar7[3] = this_00;
                    /* try { // try from 00a631a8 to 00b631af has its CatchHandler @ 00a633d4 */
  *puVar7 = &PTR____shared_weak_count_01c6e750;
  puVar7[1] = 0;
  this_01 = *(__shared_weak_count **)(this + 0x40);
  *(Downloader **)(this + 0x38) = this_00;
  *(undefined8 **)(this + 0x40) = puVar7;
                    /* try { // try from 00a631b4 to 00b631bb has its CatchHandler @ 00a633cc */
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
                    /* try { // try from 00a631bc to 00b631cb has its CatchHandler @ 00a633c4 */
      lVar10 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
                    /* try { // try from 00a631d4 to 00b6320f has its CatchHandler @ 00a633dc */
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  local_80 = &PTR_FUN_01c6e7a0;
                    /* try { // try from 00a63210 to 00b6321f has its CatchHandler @ 00a633c0 */
  local_70 = 1;
  pAStack_78 = (AssetsManagerEx *)0x10;
  local_68 = this;
  local_60 = &local_80;
  FUN_008f46ac(&local_80,*(long *)(this + 0x38) + 0x90);
                    /* try { // try from 00a63220 to 00b63343 has its CatchHandler @ 00a633ec */
  if (&local_80 == local_60) {
    pcVar9 = (code *)(*local_60)[4];
LAB_00a63240:
    (*pcVar9)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_60)[5];
    goto LAB_00a63240;
  }
  local_80 = &PTR_FUN_01c6e838;
  pAStack_78 = this;
  local_60 = &local_80;
  FUN_008b293c(&local_80,*(long *)(this + 0x38) + 0x60);
  if (&local_80 == local_60) {
    pcVar9 = (code *)(*local_60)[4];
LAB_00a6328c:
    (*pcVar9)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_60)[5];
    goto LAB_00a6328c;
  }
  local_80 = &PTR_FUN_01c6e8b8;
  pAStack_78 = this;
  local_60 = &local_80;
  FUN_00901924(&local_80,*(long *)(this + 0x38) + 0x30);
  if (&local_80 == local_60) {
    pcVar9 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00a632dc;
    pcVar9 = (code *)(*local_60)[5];
  }
  (*pcVar9)();
LAB_00a632dc:
  setStoragePath(this,param_2);
  FUN_008d57d4(&local_80,this + 0x68,"version.manifest");
  pAVar11 = this + 0x80;
  if (((byte)*pAVar11 & 1) == 0) {
    *(undefined2 *)pAVar11 = 0;
  }
  else {
    **(undefined1 **)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    if (((byte)this[0x80] & 1) != 0) {
      operator_delete(*(void **)(this + 0x90));
      *(undefined8 *)(this + 0x80) = 0;
    }
  }
  *(undefined8 *)(this + 0x90) = local_70;
                    /* try { // try from 00a63344 to 00b6344b has its CatchHandler @ 00a63150 */
  *(AssetsManagerEx **)(this + 0x88) = pAStack_78;
  *(undefined ***)pAVar11 = local_80;
  FUN_008d57d4(&local_80,this + 0x50,"project.manifest");
  pAVar11 = this + 0x98;
  if (((byte)*pAVar11 & 1) == 0) {
    *(undefined2 *)pAVar11 = 0;
  }
  else {
    **(undefined1 **)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    if (((byte)this[0x98] & 1) != 0) {
      operator_delete(*(void **)(this + 0xa8));
      *(undefined8 *)(this + 0x98) = 0;
    }
  }
  *(undefined8 *)(this + 0xa8) = local_70;
  *(AssetsManagerEx **)(this + 0xa0) = pAStack_78;
  *(undefined ***)pAVar11 = local_80;
  FUN_008d57d4(&local_80,this + 0x68,"project.manifest.temp");
  pAVar11 = this + 0xb0;
  if (((byte)*pAVar11 & 1) == 0) {
    *(undefined2 *)pAVar11 = 0;
                    /* catch() { ... } // from try @ 00a63210 with catch @ 00a633c0 */
  }
  else {
                    /* catch() { ... } // from try @ 00a631bc with catch @ 00a633c4 */
    **(undefined1 **)(this + 0xc0) = 0;
                    /* catch() { ... } // from try @ 00a631b4 with catch @ 00a633cc */
    *(undefined8 *)(this + 0xb8) = 0;
                    /* catch() { ... } // from try @ 00a631a8 with catch @ 00a633d4 */
    if (((byte)this[0xb0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a631d4 with catch @ 00a633dc */
      operator_delete(*(void **)(this + 0xc0));
      *(undefined8 *)(this + 0xb0) = 0;
    }
  }
                    /* catch() { ... } // from try @ 00a63220 with catch @ 00a633ec */
  *(undefined8 *)(this + 0xc0) = local_70;
  *(AssetsManagerEx **)(this + 0xb8) = pAStack_78;
  *(undefined ***)pAVar11 = local_80;
  uVar2 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (uVar2 != 0) {
    loadLocalManifest(this,param_1);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 00a6344c to 00b6349f has its CatchHandler @ 00a6344c
                       catch() { ... } // from try @ 00a6344c with catch @ 00a6344c
                       catch() { ... } // from try @ 00a63594 with catch @ 00a6344c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

