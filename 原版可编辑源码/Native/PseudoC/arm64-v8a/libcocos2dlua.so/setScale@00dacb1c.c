
/* cocos2d::ui::Widget::setScale(float, float) */

void __thiscall cocos2d::ui::Widget::setScale(Widget *this,float param_1,float param_2)

{
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
                    /* try { // try from 00dacb24 to 00eacb2b has its CatchHandler @ 00dacb94 */
                    /* try { // try from 00dacb2c to 00eacb4b has its CatchHandler @ 00daca34 */
  (**(code **)(*(long *)this + 0x50))(CONCAT44(in_register_00005004,param_1));
                    /* try { // try from 00dacb4c to 00eacb57 has its CatchHandler @ 00dacb94 */
                    /* try { // try from 00dacb58 to 00eacb9b has its CatchHandler @ 00daca34 */
                    /* WARNING: Could not recover jumptable at 0x00dacb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(CONCAT44(in_register_00005024,param_2),this);
  return;
}

