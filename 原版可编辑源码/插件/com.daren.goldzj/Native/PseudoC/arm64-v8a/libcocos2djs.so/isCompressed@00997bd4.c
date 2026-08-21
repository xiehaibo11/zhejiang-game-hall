
/* cocos2d::Image::isCompressed() const */

undefined1 __thiscall cocos2d::Image::isCompressed(Image *this)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (DAT_01d37a98 != (long *)0x0) {
    plVar2 = DAT_01d37a98;
    do {
      while (*(int *)((long)plVar2 + 0x1c) <= *(int *)(this + 0x2c)) {
        if (*(int *)(this + 0x2c) <= *(int *)((long)plVar2 + 0x1c)) {
          if (plVar2 != (long *)0x0) {
            return (char)plVar2[6];
          }
          goto LAB_00997c18;
        }
        plVar2 = (long *)plVar2[1];
        if (plVar2 == (long *)0x0) goto LAB_00997c18;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
LAB_00997c18:
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_0087c04c(uVar1,"map::at:  key not found");
                    /* try { // try from 00997c38 to 00a97c73 has its CatchHandler @ 00997d30 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,&std::out_of_range::typeinfo,std::invalid_argument::~invalid_argument);
}

