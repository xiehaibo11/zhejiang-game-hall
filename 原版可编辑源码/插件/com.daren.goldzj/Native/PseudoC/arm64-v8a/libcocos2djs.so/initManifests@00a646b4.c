
/* cocos2d::extension::AssetsManagerEx::initManifests() */

void __thiscall cocos2d::extension::AssetsManagerEx::initManifests(AssetsManagerEx *this)

{
  long lVar1;
  Manifest *pMVar2;
  ulong uVar3;
  Ref *this_00;
  AssetsManagerEx *pAVar4;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a646d4 to 00b646df has its CatchHandler @ 00a64978 */
                    /* try { // try from 00a646e0 to 00b646e7 has its CatchHandler @ 00a64984 */
  this[0x260] = (AssetsManagerEx)0x1;
                    /* try { // try from 00a646e8 to 00b64723 has its CatchHandler @ 00a649a8 */
  pMVar2 = operator_new(400,(nothrow_t *)&std::nothrow);
  if (pMVar2 == (Manifest *)0x0) {
    *(undefined8 *)(this + 0xe8) = 0;
LAB_00a64790:
    this[0x260] = (AssetsManagerEx)0x0;
  }
  else {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    Manifest::Manifest(pMVar2,(basic_string *)&local_60);
    pAVar4 = this + 0xe8;
    *(Manifest **)pAVar4 = pMVar2;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
                    /* try { // try from 00a64724 to 00b6472b has its CatchHandler @ 00a64980 */
      pMVar2 = *(Manifest **)pAVar4;
    }
    if (pMVar2 == (Manifest *)0x0) goto LAB_00a64790;
                    /* try { // try from 00a6472c to 00b64767 has its CatchHandler @ 00a64998 */
    Manifest::parseFile(pMVar2,(basic_string *)(this + 0xb0));
    uVar3 = (**(code **)(**(long **)(this + 0x28) + 0xf8))
                      (*(long **)(this + 0x28),(basic_string *)(this + 0xb0));
    if (((uVar3 & 1) != 0) && (uVar3 = Manifest::isLoaded(*(Manifest **)pAVar4), (uVar3 & 1) == 0))
    {
                    /* try { // try from 00a64768 to 00b6476f has its CatchHandler @ 00a6497c */
                    /* try { // try from 00a64770 to 00b647ab has its CatchHandler @ 00a64988 */
      (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),this + 0x68);
      if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0xe8));
      }
      *(undefined8 *)pAVar4 = 0;
    }
  }
  pMVar2 = operator_new(400,(nothrow_t *)&std::nothrow);
  if (pMVar2 == (Manifest *)0x0) {
    *(undefined8 *)(this + 0xf0) = 0;
    this[0x260] = (AssetsManagerEx)0x0;
LAB_00a647f4:
    this_00 = *(Ref **)(this + 0xe0);
  }
  else {
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    Manifest::Manifest(pMVar2,(basic_string *)&local_60);
    *(Manifest **)(this + 0xf0) = pMVar2;
    if ((local_60 & 1) != 0) {
                    /* try { // try from 00a647cc to 00b64857 has its CatchHandler @ 00a64a0c */
      operator_delete(local_50);
      pMVar2 = *(Manifest **)(this + 0xf0);
    }
    if (pMVar2 != (Manifest *)0x0) {
      if (this[0x260] != (AssetsManagerEx)0x0) goto LAB_00a64820;
      goto LAB_00a647f4;
    }
    this[0x260] = (AssetsManagerEx)0x0;
    this_00 = *(Ref **)(this + 0xe0);
  }
  if (this_00 != (Ref *)0x0) {
    Ref::release(this_00);
  }
  if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xe8));
  }
  if (*(Ref **)(this + 0xf0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xf0));
  }
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
LAB_00a64820:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

