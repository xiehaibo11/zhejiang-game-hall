
/* cocos2d::extension::AssetsManagerEx::initManifests(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::extension::AssetsManagerEx::initManifests(basic_string *param_1)

{
  long lVar1;
  Manifest *pMVar2;
  ulong uVar3;
  Ref *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00e02040 to 00f02087 has its CatchHandler @ 00e02134 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1[0x240] = (basic_string)0x1;
  pMVar2 = operator_new(0x1a8,(nothrow_t *)&std::nothrow);
  if (pMVar2 == (Manifest *)0x0) {
                    /* catch() { ... } // from try @ 00e01794 with catch @ 00e02174 */
                    /* catch() { ... } // from try @ 00e01724 with catch @ 00e02178 */
    *(undefined8 *)(param_1 + 0x100) = 0;
                    /* catch() { ... } // from try @ 00e016b8 with catch @ 00e0217c */
LAB_00e0223c:
    param_1[0x240] = (basic_string)0x0;
    this = *(Ref **)(param_1 + 0x100);
  }
  else {
                    /* try { // try from 00e02088 to 00f021bb has its CatchHandler @ 00e01304 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
    Manifest::Manifest(pMVar2,(basic_string *)local_60);
    *(Manifest **)(param_1 + 0x100) = pMVar2;
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
      pMVar2 = *(Manifest **)(param_1 + 0x100);
    }
    if (pMVar2 == (Manifest *)0x0) goto LAB_00e0223c;
    loadLocalManifest(param_1);
    pMVar2 = operator_new(0x1a8,(nothrow_t *)&std::nothrow);
    if (pMVar2 == (Manifest *)0x0) {
                    /* catch() { ... } // from try @ 00e0165c with catch @ 00e02180 */
      *(undefined8 *)(param_1 + 0x108) = 0;
LAB_00e02184:
                    /* catch() { ... } // from try @ 00e01604 with catch @ 00e02184 */
      param_1[0x240] = (basic_string)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00e01f9c with catch @ 00e020dc */
                    /* catch() { ... } // from try @ 00e01ed8 with catch @ 00e020e0 */
                    /* catch() { ... } // from try @ 00e01b94 with catch @ 00e020e4 */
                    /* catch() { ... } // from try @ 00e01910 with catch @ 00e020e8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"");
      Manifest::Manifest(pMVar2,(basic_string *)local_60);
                    /* catch() { ... } // from try @ 00e01f50 with catch @ 00e020fc */
      *(Manifest **)(param_1 + 0x108) = pMVar2;
                    /* catch() { ... } // from try @ 00e01e8c with catch @ 00e02100 */
                    /* catch() { ... } // from try @ 00e01b2c with catch @ 00e02104 */
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
        pMVar2 = *(Manifest **)(param_1 + 0x108);
      }
      if (pMVar2 == (Manifest *)0x0) goto LAB_00e02184;
                    /* catch() { ... } // from try @ 00e01afc with catch @ 00e02124 */
      Manifest::parse(pMVar2,param_1 + 0xd0);
                    /* catch() { ... } // from try @ 00e01ae8 with catch @ 00e02128 */
                    /* catch() { ... } // from try @ 00e018c4 with catch @ 00e0212c */
                    /* catch() { ... } // from try @ 00e01554 with catch @ 00e02130 */
                    /* catch() { ... } // from try @ 00e02040 with catch @ 00e02134 */
                    /* catch() { ... } // from try @ 00e01fd4 with catch @ 00e02138 */
      uVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x128))
                        (*(long **)(param_1 + 0x48),param_1 + 0xd0);
                    /* catch() { ... } // from try @ 00e01ef8 with catch @ 00e0213c */
                    /* catch() { ... } // from try @ 00e01e34 with catch @ 00e02140 */
                    /* catch() { ... } // from try @ 00e01db0 with catch @ 00e02144 */
                    /* catch() { ... } // from try @ 00e01d58 with catch @ 00e02148 */
      if (((uVar3 & 1) != 0) &&
         (uVar3 = Manifest::isLoaded(*(Manifest **)(param_1 + 0x108)), (uVar3 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00e01ce8 with catch @ 00e0214c */
                    /* catch() { ... } // from try @ 00e01c88 with catch @ 00e02150 */
                    /* catch() { ... } // from try @ 00e01c1c with catch @ 00e02154 */
                    /* catch() { ... } // from try @ 00e01bc8 with catch @ 00e02158 */
                    /* catch() { ... } // from try @ 00e01a34 with catch @ 00e0215c */
        (**(code **)(**(long **)(param_1 + 0x48) + 0x168))
                  (*(long **)(param_1 + 0x48),param_1 + 0x88);
                    /* catch() { ... } // from try @ 00e019e0 with catch @ 00e02160 */
                    /* catch() { ... } // from try @ 00e01984 with catch @ 00e02164 */
        if (*(Ref **)(param_1 + 0x108) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00e01930 with catch @ 00e02168 */
          Ref::release(*(Ref **)(param_1 + 0x108));
        }
                    /* catch() { ... } // from try @ 00e01858 with catch @ 00e0216c */
        *(undefined8 *)(param_1 + 0x108) = 0;
                    /* catch() { ... } // from try @ 00e01800 with catch @ 00e02170 */
      }
    }
                    /* catch() { ... } // from try @ 00e015a8 with catch @ 00e02188 */
                    /* catch() { ... } // from try @ 00e01a88 with catch @ 00e0218c */
                    /* catch() { ... } // from try @ 00e01418 with catch @ 00e02190 */
                    /* catch() { ... } // from try @ 00e0146c with catch @ 00e02194 */
    pMVar2 = operator_new(0x1a8,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00e014bc with catch @ 00e02198 */
    if (pMVar2 == (Manifest *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      goto LAB_00e0223c;
    }
                    /* catch() { ... } // from try @ 00e013f0 with catch @ 00e0219c */
                    /* catch() { ... } // from try @ 00e013b4 with catch @ 00e021a0
                       catch() { ... } // from try @ 00e014a0 with catch @ 00e021a0
                       catch() { ... } // from try @ 00e02024 with catch @ 00e021a0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
    Manifest::Manifest(pMVar2,(basic_string *)local_60);
                    /* try { // try from 00e021bc to 00f0224b has its CatchHandler @ 00e021bc
                       catch() { ... } // from try @ 00e021bc with catch @ 00e021bc
                       catch() { ... } // from try @ 00e02260 with catch @ 00e021bc
                       catch() { ... } // from try @ 00e023e0 with catch @ 00e021bc */
    *(Manifest **)(param_1 + 0x110) = pMVar2;
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
      pMVar2 = *(Manifest **)(param_1 + 0x110);
    }
    if (pMVar2 == (Manifest *)0x0) goto LAB_00e0223c;
    if (param_1[0x240] != (basic_string)0x0) goto LAB_00e02210;
    this = *(Ref **)(param_1 + 0x100);
  }
  if (this != (Ref *)0x0) {
    Ref::release(this);
  }
  if (*(Ref **)(param_1 + 0x108) != (Ref *)0x0) {
    Ref::release(*(Ref **)(param_1 + 0x108));
  }
  if (*(Ref **)(param_1 + 0x110) != (Ref *)0x0) {
    Ref::release(*(Ref **)(param_1 + 0x110));
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
LAB_00e02210:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00e0224c to 00f0225f has its CatchHandler @ 00e02534 */
  __stack_chk_fail();
}

