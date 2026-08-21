
/* cocos2d::Image::getPixelFormatInfo() const */

long * __thiscall cocos2d::Image::getPixelFormatInfo(Image *this)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* try { // try from 00997c74 to 00a97d87 has its CatchHandler @ 009979d8 */
  if (DAT_01d37a98 != (long *)0x0) {
    plVar2 = DAT_01d37a98;
    do {
      while (*(int *)((long)plVar2 + 0x1c) <= *(int *)(this + 0x2c)) {
        if (*(int *)(this + 0x2c) <= *(int *)((long)plVar2 + 0x1c)) {
          if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00997ad4 with catch @ 00997cec
                       catch() { ... } // from try @ 00997bc4 with catch @ 00997cec */
                    /* catch() { ... } // from try @ 00997aa8 with catch @ 00997cf0
                       catch() { ... } // from try @ 00997b7c with catch @ 00997cf0 */
            return plVar2 + 4;
          }
          goto LAB_00997cb4;
        }
        plVar2 = (long *)plVar2[1];
        if (plVar2 == (long *)0x0) goto LAB_00997cb4;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_00997cb4:
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_0087c04c(uVar1,"map::at:  key not found");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
}

