
/* cocos2d::extension::AssetsManagerEx::loadLocalManifest(cocos2d::extension::Manifest*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::loadLocalManifest
          (AssetsManagerEx *this,Manifest *param_1,basic_string *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  Manifest *this_00;
  long *plVar4;
  code *pcVar5;
  basic_string *pbVar6;
  AssetsManagerEx *pAVar7;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
                    /* try { // try from 00a648c0 to 00b648fb has its CatchHandler @ 00a64a0c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if ((param_1 == (Manifest *)0x0) || (0 < *(int *)(this + 0x30))) goto LAB_00a64b6c;
                    /* try { // try from 00a648fc to 00b64a63 has its CatchHandler @ 00a643ec */
  uVar3 = Manifest::isLoaded(param_1);
  if ((uVar3 & 1) != 0) {
    this[0x260] = (AssetsManagerEx)0x1;
    uVar3 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    if (uVar3 != 0) {
      setStoragePath(this,param_2);
      FUN_008d57d4(&local_60,this + 0x68,"version.manifest");
      pAVar7 = this + 0x80;
      if (((byte)*pAVar7 & 1) == 0) {
        *(undefined2 *)pAVar7 = 0;
      }
      else {
        **(undefined1 **)(this + 0x90) = 0;
        *(undefined8 *)(this + 0x88) = 0;
        if (((byte)this[0x80] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a6461c with catch @ 00a64978
                       catch() { ... } // from try @ 00a646d4 with catch @ 00a64978 */
                    /* catch() { ... } // from try @ 00a64768 with catch @ 00a6497c */
          operator_delete(*(void **)(this + 0x90));
                    /* catch() { ... } // from try @ 00a64724 with catch @ 00a64980 */
          *(undefined8 *)(this + 0x80) = 0;
        }
      }
                    /* catch() { ... } // from try @ 00a646e0 with catch @ 00a64984 */
                    /* catch() { ... } // from try @ 00a64770 with catch @ 00a64988 */
      *(void **)(this + 0x90) = local_50;
                    /* catch() { ... } // from try @ 00a6472c with catch @ 00a64998 */
      *(undefined8 *)(this + 0x88) = uStack_58;
      *(ulong *)pAVar7 = local_60;
      FUN_008d57d4(&local_60,this + 0x50,"project.manifest");
                    /* catch() { ... } // from try @ 00a646e8 with catch @ 00a649a8 */
                    /* catch() { ... } // from try @ 00a64648 with catch @ 00a649ac */
      pAVar7 = this + 0x98;
                    /* catch() { ... } // from try @ 00a645ac with catch @ 00a649b0 */
      if (((byte)*pAVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a645a4 with catch @ 00a649b4 */
        *(undefined2 *)pAVar7 = 0;
      }
      else {
        **(undefined1 **)(this + 0xa8) = 0;
                    /* catch() { ... } // from try @ 00a64650 with catch @ 00a649c4 */
        *(undefined8 *)(this + 0xa0) = 0;
        if (((byte)this[0x98] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a645bc with catch @ 00a649d4
                       catch() { ... } // from try @ 00a6485c with catch @ 00a649d4 */
          operator_delete(*(void **)(this + 0xa8));
          *(undefined8 *)(this + 0x98) = 0;
        }
      }
      *(void **)(this + 0xa8) = local_50;
                    /* catch() { ... } // from try @ 00a64474 with catch @ 00a649f4 */
                    /* catch() { ... } // from try @ 00a64468 with catch @ 00a649f8 */
      *(undefined8 *)(this + 0xa0) = uStack_58;
      *(ulong *)pAVar7 = local_60;
                    /* catch() { ... } // from try @ 00a64448 with catch @ 00a649fc */
      FUN_008d57d4(&local_60,this + 0x68,"project.manifest.temp");
      pAVar7 = this + 0xb0;
      if (((byte)*pAVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a64480 with catch @ 00a64a0c
                       catch() { ... } // from try @ 00a647cc with catch @ 00a64a0c
                       catch() { ... } // from try @ 00a648c0 with catch @ 00a64a0c */
        *(undefined2 *)pAVar7 = 0;
      }
      else {
        **(undefined1 **)(this + 0xc0) = 0;
        *(undefined8 *)(this + 0xb8) = 0;
        if (((byte)this[0xb0] & 1) != 0) {
          operator_delete(*(void **)(this + 0xc0));
          *(undefined8 *)(this + 0xb0) = 0;
        }
      }
      *(void **)(this + 0xc0) = local_50;
      *(undefined8 *)(this + 0xb8) = uStack_58;
      *(ulong *)pAVar7 = local_60;
    }
    if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0xe0));
    }
    *(Manifest **)(this + 0xe0) = param_1;
    Ref::retain((Ref *)param_1);
    pbVar6 = (basic_string *)(this + 0x98);
                    /* try { // try from 00a64a64 to 00b64aa7 has its CatchHandler @ 00a64a64
                       catch() { ... } // from try @ 00a64a64 with catch @ 00a64a64
                       catch() { ... } // from try @ 00a64b38 with catch @ 00a64a64 */
    uVar3 = (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),pbVar6);
    if (((uVar3 & 1) != 0) &&
       (this_00 = operator_new(400,(nothrow_t *)&std::nothrow), this_00 != (Manifest *)0x0)) {
      local_60 = 0;
      uStack_58 = 0;
      local_50 = (void *)0x0;
      Manifest::Manifest(this_00,(basic_string *)&local_60);
      if ((local_60 & 1) != 0) {
                    /* try { // try from 00a64aa8 to 00b64b37 has its CatchHandler @ 00a64b68 */
        operator_delete(local_50);
      }
      Manifest::parseFile(this_00,pbVar6);
      uVar3 = Manifest::isLoaded(this_00);
      if ((uVar3 & 1) == 0) {
        plVar4 = *(long **)(this + 0x28);
        pcVar5 = *(code **)(*plVar4 + 0x138);
      }
      else {
        uVar3 = Manifest::versionGreater(*(Manifest **)(this + 0xe0),this_00,this + 0x1d0);
        if ((uVar3 & 1) == 0) {
          if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
            Ref::release(*(Ref **)(this + 0xe0));
          }
          *(Manifest **)(this + 0xe0) = this_00;
          goto LAB_00a64b34;
        }
        pbVar6 = (basic_string *)(this + 0x50);
        (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),pbVar6);
        plVar4 = *(long **)(this + 0x28);
        pcVar5 = *(code **)(*plVar4 + 0x128);
      }
      (*pcVar5)(plVar4,pbVar6);
      Ref::release((Ref *)this_00);
    }
LAB_00a64b34:
                    /* try { // try from 00a64b38 to 00b64b7b has its CatchHandler @ 00a64a64 */
    uVar2 = Manifest::getAssets(*(Manifest **)(this + 0xe0));
    *(undefined8 *)(this + 0x48) = uVar2;
    Manifest::prependSearchPaths();
    initManifests(this);
    if (this[0x260] != (AssetsManagerEx)0x0) {
      uVar2 = 1;
      *(undefined4 *)(this + 0x30) = 1;
      goto LAB_00a64b6c;
    }
  }
                    /* catch() { ... } // from try @ 00a64aa8 with catch @ 00a64b68 */
  uVar2 = 0;
LAB_00a64b6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00a64b7c to 00b64bd7 has its CatchHandler @ 00a64b7c
                       catch() { ... } // from try @ 00a64b7c with catch @ 00a64b7c
                       catch() { ... } // from try @ 00a64e08 with catch @ 00a64b7c
                       catch() { ... } // from try @ 00a64fd8 with catch @ 00a64b7c
                       catch() { ... } // from try @ 00a65068 with catch @ 00a64b7c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

