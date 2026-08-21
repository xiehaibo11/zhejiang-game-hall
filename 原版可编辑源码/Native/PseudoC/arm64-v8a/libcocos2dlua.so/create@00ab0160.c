
/* fairygui::GearBase::create(fairygui::GObject*, int) */

GearDisplay * fairygui::GearBase::create(GObject *param_1,int param_2)

{
  GearFontSize *this;
  
                    /* try { // try from 00ab0174 to 00bb018b has its CatchHandler @ 00ab02f0 */
                    /* try { // try from 00ab018c to 00bb0193 has its CatchHandler @ 00ab03fc */
  switch(param_2) {
  case 0:
    this = operator_new(0x40);
                    /* try { // try from 00ab019c to 00bb01af has its CatchHandler @ 00ab02ec */
    GearDisplay::GearDisplay((GearDisplay *)this,param_1);
    break;
  case 1:
    this = operator_new(0x60);
                    /* try { // try from 00ab01c0 to 00bb01d3 has its CatchHandler @ 00ab03cc */
    GearXY::GearXY((GearXY *)this,param_1);
    break;
  case 2:
    this = operator_new(0x58);
                    /* try { // try from 00ab01d8 to 00bb01eb has its CatchHandler @ 00ab03d0 */
    GearSize::GearSize((GearSize *)this,param_1);
    break;
  case 3:
    this = operator_new(0x58);
                    /* try { // try from 00ab01f0 to 00bb0203 has its CatchHandler @ 00ab03d4 */
    GearLook::GearLook((GearLook *)this,param_1);
    break;
  case 4:
    this = operator_new(0x50);
    GearColor::GearColor((GearColor *)this,param_1);
    break;
  case 5:
                    /* try { // try from 00ab0214 to 00bb0227 has its CatchHandler @ 00ab03e4 */
    this = operator_new(0x50);
    GearAnimation::GearAnimation((GearAnimation *)this,param_1);
    break;
  case 6:
    this = operator_new(0x60);
                    /* try { // try from 00ab0238 to 00bb024b has its CatchHandler @ 00ab03f4 */
    GearText::GearText((GearText *)this,param_1);
    break;
  case 7:
    this = operator_new(0x60);
                    /* try { // try from 00ab0250 to 00bb0263 has its CatchHandler @ 00ab03f8 */
    GearIcon::GearIcon((GearIcon *)this,param_1);
    break;
  case 8:
    this = operator_new(0x40);
                    /* try { // try from 00ab027c to 00bb0437 has its CatchHandler @ 00aaf68c */
    GearDisplay2::GearDisplay2((GearDisplay2 *)this,param_1);
    break;
  case 9:
    this = operator_new(0x50);
                    /* try { // try from 00ab0268 to 00bb027b has its CatchHandler @ 00ab03fc */
    GearFontSize::GearFontSize(this,param_1);
    break;
  default:
    this = (GearFontSize *)0x0;
  }
  return (GearDisplay *)this;
}

