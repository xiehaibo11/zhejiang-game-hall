
/* fairygui::GProgressBar::setFillAmount(fairygui::GObject*, float) */

undefined8 __thiscall
fairygui::GProgressBar::setFillAmount(GProgressBar *this,GObject *param_1,float param_2)

{
  int iVar1;
  GImage *this_00;
  GLoader *this_01;
  undefined8 uVar2;
  
  if (param_1 == (GObject *)0x0) {
    uVar2 = 0;
                    /* try { // try from 00a87b0c to 00b87b2b has its CatchHandler @ 00a870f0 */
  }
  else {
    this_00 = (GImage *)__dynamic_cast(param_1,&GObject::typeinfo,&GImage::typeinfo,0);
    if ((this_00 == (GImage *)0x0) || (iVar1 = GImage::getFillMethod(this_00), iVar1 == 0)) {
      this_01 = (GLoader *)__dynamic_cast(param_1,&GObject::typeinfo,&GLoader::typeinfo,0);
                    /* try { // try from 00a87b2c to 00b87b33 has its CatchHandler @ 00a88138 */
      if (this_01 == (GLoader *)0x0) {
        return 0;
      }
                    /* try { // try from 00a87b34 to 00b87b3b has its CatchHandler @ 00a88128 */
      uVar2 = GLoader::getFillMethod(this_01);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
                    /* try { // try from 00a87b3c to 00b87b47 has its CatchHandler @ 00a88124 */
      GLoader::setFillAmount(this_01,param_2);
    }
    else {
      GImage::setFillAmount(this_00,param_2);
                    /* try { // try from 00a87b04 to 00b87b0b has its CatchHandler @ 00a88100 */
    }
                    /* try { // try from 00a87b48 to 00b87caf has its CatchHandler @ 00a8819c */
    uVar2 = 1;
  }
  return uVar2;
}

