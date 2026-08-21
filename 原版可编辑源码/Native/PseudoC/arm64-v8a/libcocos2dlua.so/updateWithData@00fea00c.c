
/* cocos2d::Texture2D::updateWithData(void const*, int, int, int, int) */

undefined4 __thiscall
cocos2d::Texture2D::updateWithData
          (Texture2D *this,void *param_1,int param_2,int param_3,int param_4,int param_5)

{
  long *plVar1;
  
  if (*(uint *)(this + 0x30) == 0) {
                    /* try { // try from 00fea0bc to 010ea0c3 has its CatchHandler @ 00fea160 */
    return 0;
  }
  GL::bindTexture2D(*(uint *)(this + 0x30));
  if (DAT_017928b8 != (long *)0x0) {
    plVar1 = DAT_017928b8;
    do {
      while (*(int *)((long)plVar1 + 0x1c) <= *(int *)(this + 0x24)) {
        if (*(int *)(this + 0x24) <= *(int *)((long)plVar1 + 0x1c)) {
          if (plVar1 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00fea0e8 with catch @ 00fea08c */
            glTexSubImage2D(0xde1,0,param_2,param_3,param_4,param_5,
                            *(undefined4 *)((long)plVar1 + 0x24),(int)plVar1[5],param_1);
            return 1;
          }
          goto LAB_00fea0cc;
        }
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) goto LAB_00fea0cc;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
LAB_00fea0cc:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

