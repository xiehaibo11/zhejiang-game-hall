
/* cocos2d::GridBase::initWithSize(cocos2d::Size const&, cocos2d::Rect const&) */

void __thiscall cocos2d::GridBase::initWithSize(GridBase *this,Size *param_1,Rect *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  Texture2D *this_00;
  undefined8 uVar4;
  size_t __nmemb;
  float local_70;
  float local_6c;
  long local_68;
  
                    /* try { // try from 00f07350 to 0100739b has its CatchHandler @ 00f07350
                       catch(type#1 @ 00000000) { ... } // from try @ 00f07350 with catch @ 00f07350
                       catch(type#1 @ 00000000) { ... } // from try @ 00f0740c with catch @ 00f07350
                        */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Director::getInstance();
  Director::getWinSizeInPixels();
  iVar2 = ccNextPOT((int)local_70);
  iVar3 = ccNextPOT((int)local_6c);
                    /* try { // try from 00f0739c to 010073a7 has its CatchHandler @ 00f074b4 */
  __nmemb = (size_t)(iVar2 * iVar3 * 4);
                    /* try { // try from 00f073b0 to 010073b7 has its CatchHandler @ 00f0749c */
  __ptr = calloc(__nmemb,1);
  if (__ptr == (void *)0x0) {
    Ref::release((Ref *)this);
  }
  else {
                    /* try { // try from 00f073c0 to 010073c7 has its CatchHandler @ 00f0747c */
    this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f073d0 to 010073d3 has its CatchHandler @ 00f07448 */
    if (this_00 != (Texture2D *)0x0) {
      Texture2D::Texture2D(this_00);
      Texture2D::initWithData(this_00,__ptr,__nmemb,2,iVar2,iVar3,&local_70);
      free(__ptr);
                    /* try { // try from 00f07404 to 0100740b has its CatchHandler @ 00f07444 */
                    /* try { // try from 00f0740c to 010074c7 has its CatchHandler @ 00f07350 */
      initWithSize(this,param_1,this_00,false,param_2);
      Ref::release((Ref *)this_00);
      uVar4 = 1;
      goto LAB_00f07444;
    }
    free(__ptr);
  }
  uVar4 = 0;
LAB_00f07444:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f07404 with catch @ 00f07444
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f073d0 with catch @ 00f07448
                        */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

