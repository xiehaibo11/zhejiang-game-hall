
/* cocos2d::renderer::Model::Model() */

void __thiscall cocos2d::renderer::Model::Model(Model *this)

{
                    /* try { // try from 009c0ec0 to 00ac0ecb has its CatchHandler @ 009c1070 */
                    /* try { // try from 009c0ecc to 00ac0ed7 has its CatchHandler @ 009c106c */
  *(undefined8 *)this = 0;
  Mat4::Mat4((Mat4 *)(this + 8));
                    /* try { // try from 009c0ed8 to 00ac0ff7 has its CatchHandler @ 009c1084 */
  *(undefined8 *)(this + 0x48) = 0;
  InputAssembler::InputAssembler((InputAssembler *)(this + 0x50));
  this[0x70] = (Model)0x0;
  *(undefined8 *)(this + 0x74) = 0xffffffffffffffff;
  return;
}

