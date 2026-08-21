
/* cocos2d::Image::getBitPerPixel() const */

undefined4 __thiscall cocos2d::Image::getBitPerPixel(Image *this)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* try { // try from 00997aa8 to 00a97ac3 has its CatchHandler @ 00997cf0 */
  if (DAT_01d37a98 != (long *)0x0) {
    plVar2 = DAT_01d37a98;
    do {
      while (*(int *)((long)plVar2 + 0x1c) <= *(int *)(this + 0x2c)) {
                    /* try { // try from 00997ad4 to 00a97afb has its CatchHandler @ 00997cec */
        if (*(int *)(this + 0x2c) <= *(int *)((long)plVar2 + 0x1c)) {
                    /* try { // try from 00997b10 to 00a97b77 has its CatchHandler @ 00997d30 */
          if (plVar2 != (long *)0x0) {
            return *(undefined4 *)((long)plVar2 + 0x2c);
          }
          goto LAB_00997ae0;
        }
        plVar2 = (long *)plVar2[1];
        if (plVar2 == (long *)0x0) goto LAB_00997ae0;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_00997ae0:
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_0087c04c(uVar1,"map::at:  key not found");
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
}

