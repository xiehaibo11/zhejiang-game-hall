
/* cocos2d::TextureCache::loadImage() */

void cocos2d::TextureCache::loadImage(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long in_x0;
  long *plVar4;
  basic_string *in_x2;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  __ndk1 *this;
  basic_string local_90 [16];
  void *local_80;
  mutex *local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(char *)(in_x0 + 0x140) == '\0') {
                    /* try { // try from 00fef764 to 010ef76b has its CatchHandler @ 00fef7cc */
                    /* try { // try from 00fef76c to 010ef793 has its CatchHandler @ 00fef7d4 */
    do {
      local_70 = '\x01';
      local_78 = (mutex *)(in_x0 + 0xc0);
      std::__ndk1::mutex::lock((mutex *)(in_x0 + 0xc0));
                    /* try { // try from 00fef794 to 010ef7ef has its CatchHandler @ 00fef674 */
      if (*(long *)(in_x0 + 0x88) == 0) {
LAB_00fef8f0:
        if (*(char *)(in_x0 + 0x140) != '\0') {
          if (local_70 != '\0') {
            std::__ndk1::mutex::unlock(local_78);
          }
          break;
        }
        std::__ndk1::condition_variable::wait
                  ((condition_variable *)(in_x0 + 0x110),(unique_lock *)&local_78);
      }
      else {
        uVar7 = *(ulong *)(in_x0 + 0x80);
        this = *(__ndk1 **)
                (*(long *)((long)*(undefined8 **)(in_x0 + 0x68) + (uVar7 >> 6 & 0x3fffffffffffff8))
                + (uVar7 & 0x1ff) * 8);
        *(ulong *)(in_x0 + 0x80) = uVar7 + 1;
        *(long *)(in_x0 + 0x88) = *(long *)(in_x0 + 0x88) + -1;
        if (0x3ff < uVar7 + 1) {
                    /* catch() { ... } // from try @ 00fef764 with catch @ 00fef7cc */
          operator_delete((void *)**(undefined8 **)(in_x0 + 0x68));
                    /* catch() { ... } // from try @ 00fef76c with catch @ 00fef7d4 */
          *(long *)(in_x0 + 0x68) = *(long *)(in_x0 + 0x68) + 8;
          *(long *)(in_x0 + 0x80) = *(long *)(in_x0 + 0x80) + -0x200;
        }
        if (this == (__ndk1 *)0x0) goto LAB_00fef8f0;
        if (local_70 == '\0') {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__throw_system_error(1,"unique_lock::unlock: not locked");
        }
        std::__ndk1::mutex::unlock(local_78);
        local_70 = '\0';
        bVar3 = Image::initWithImageFileThreadSafe((Image *)(this + 0x68),(basic_string *)this);
        this[0x34c] = (__ndk1)(bVar3 & 1);
        if (((bVar3 & 1) != 0) && (*(int *)(this + 0xac) == 5)) {
                    /* try { // try from 00fef830 to 010ef85f has its CatchHandler @ 00fef830
                       catch() { ... } // from try @ 00fef830 with catch @ 00fef830
                       catch() { ... } // from try @ 00fef86c with catch @ 00fef830 */
          uVar7 = (ulong)(s_etc1AlphaFileSuffix >> 1);
          if ((s_etc1AlphaFileSuffix & 1) != 0) {
            uVar7 = DAT_017928f8;
          }
          if (uVar7 != 0) {
            std::__ndk1::operator+(this,(basic_string *)&s_etc1AlphaFileSuffix,in_x2);
            plVar4 = (long *)FileUtils::getInstance();
            uVar7 = (**(code **)(*plVar4 + 0x128))(plVar4,local_90);
                    /* try { // try from 00fef860 to 010ef86b has its CatchHandler @ 00fef8d8 */
            if ((uVar7 & 1) != 0) {
                    /* try { // try from 00fef86c to 010ef8eb has its CatchHandler @ 00fef830 */
              Image::initWithImageFileThreadSafe((Image *)(this + 0x1d8),local_90);
            }
            if (((byte)local_90[0] & 1) != 0) {
              operator_delete(local_80);
            }
          }
        }
        std::__ndk1::mutex::lock((mutex *)(in_x0 + 0xe8));
        lVar5 = *(long *)(in_x0 + 0x98);
        lVar6 = *(long *)(in_x0 + 0xb8);
        lVar1 = *(long *)(in_x0 + 0xa0) - lVar5;
        uVar7 = 0;
        if (lVar1 != 0) {
          uVar7 = lVar1 * 0x40 - 1;
        }
        uVar8 = lVar6 + *(long *)(in_x0 + 0xb0);
        if (uVar7 == uVar8) {
          std::__ndk1::
          deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
          ::__add_back_capacity
                    ((deque<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                      *)(in_x0 + 0x90));
          lVar6 = *(long *)(in_x0 + 0xb8);
          lVar5 = *(long *)(in_x0 + 0x98);
          uVar8 = *(long *)(in_x0 + 0xb0) + lVar6;
        }
                    /* catch() { ... } // from try @ 00fef860 with catch @ 00fef8d8 */
        *(__ndk1 **)(*(long *)(lVar5 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
             this;
        *(long *)(in_x0 + 0xb8) = lVar6 + 1;
        std::__ndk1::mutex::unlock((mutex *)(in_x0 + 0xe8));
      }
      if (local_70 != '\0') {
        std::__ndk1::mutex::unlock(local_78);
      }
    } while (*(char *)(in_x0 + 0x140) == '\0');
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00fef93c to 010ef95f has its CatchHandler @ 00fefa14 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00fef968 to 010ef977 has its CatchHandler @ 00fefa10 */
  __stack_chk_fail();
}

