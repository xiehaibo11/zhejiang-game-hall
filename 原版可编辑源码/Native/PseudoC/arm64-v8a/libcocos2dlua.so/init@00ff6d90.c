
/* cocos2d::experimental::RenderTarget::init(unsigned int, unsigned int,
   cocos2d::Texture2D::PixelFormat) */

void __thiscall
cocos2d::experimental::RenderTarget::init
          (RenderTarget *this,uint param_1,uint param_2,undefined4 param_4)

{
  long lVar1;
  Texture2D *this_00;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  Ref *this_01;
  code *pcVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined **local_90;
  RenderTarget *pRStack_88;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ff6db4 to 010f6db7 has its CatchHandler @ 00ff6dd0 */
                    /* try { // try from 00ff6db8 to 010f6de3 has its CatchHandler @ 00ff6d70 */
  *(uint *)(this + 0x28) = param_1;
  *(uint *)(this + 0x2c) = param_2;
                    /* catch() { ... } // from try @ 00ff6db4 with catch @ 00ff6dd0 */
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 == (Texture2D *)0x0) {
    *(undefined8 *)(this + 0x30) = 0;
    uVar2 = 0;
    goto LAB_00ff6f18;
  }
  Texture2D::Texture2D(this_00);
  uVar5 = (ulong)(param_1 * param_2 * 4);
  *(Texture2D **)(this + 0x30) = this_00;
  __s = malloc(uVar5);
  uVar2 = 0;
  if (__s == (void *)0x0) goto LAB_00ff6f18;
  memset(__s,0,uVar5);
  Size::Size((Size *)&local_90,(float)param_1,(float)param_2);
  uVar5 = Texture2D::initWithData(this_00,__s,uVar5,param_4,param_1,param_2,&local_90);
  this_01 = *(Ref **)(this + 0x30);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 00ff6ebc to 010f6f03 has its CatchHandler @ 00ff6ebc
                       catch() { ... } // from try @ 00ff6ebc with catch @ 00ff6ebc
                       catch() { ... } // from try @ 00ff6f10 with catch @ 00ff6ebc
                       catch() { ... } // from try @ 00ff6f50 with catch @ 00ff6ebc
                       catch() { ... } // from try @ 00ff6f88 with catch @ 00ff6ebc */
    if (this_01 != (Ref *)0x0) {
      (**(code **)(*(long *)this_01 + 8))(this_01);
    }
    *(undefined8 *)(this + 0x30) = 0;
    free(__s);
    uVar2 = 0;
    goto LAB_00ff6f18;
  }
  Ref::autorelease(this_01);
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0x30));
  }
  free(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"event_renderer_recreated");
  local_90 = &PTR_FUN_01724968;
  pRStack_88 = this;
  local_70 = &local_90;
  uVar2 = EventListenerCustom::create((basic_string *)local_a8,(function *)&local_90);
  *(undefined8 *)(this + 0x38) = uVar2;
  if (&local_90 == local_70) {
    pcVar4 = (code *)(*local_70)[4];
LAB_00ff6eec:
    (*pcVar4)();
  }
  else if (local_70 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_70)[5];
    goto LAB_00ff6eec;
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  lVar3 = Director::getInstance();
                    /* try { // try from 00ff6f04 to 010f6f0f has its CatchHandler @ 00ff6fd8 */
                    /* try { // try from 00ff6f10 to 010f6f43 has its CatchHandler @ 00ff6ebc */
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x38),-1);
  uVar2 = 1;
LAB_00ff6f18:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ff6f44 to 010f6f4f has its CatchHandler @ 00ff6fd4 */
  __stack_chk_fail(uVar2);
}

