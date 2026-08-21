
/* cocos2d::renderer::IndexBuffer::init(cocos2d::renderer::DeviceGraphics*,
   cocos2d::renderer::IndexFormat, cocos2d::renderer::Usage, void const*, unsigned long, unsigned
   int) */

undefined8 __thiscall
cocos2d::renderer::IndexBuffer::init
          (IndexBuffer *this,undefined8 param_1,short param_3,undefined2 param_4,void *param_5,
          ulong param_6,int param_7)

{
  int iVar1;
  
                    /* try { // try from 009b65d8 to 00ab65ef has its CatchHandler @ 009b67f0 */
  iVar1 = 1;
                    /* try { // try from 009b65f8 to 00ab6603 has its CatchHandler @ 009b67ec */
  *(undefined8 *)(this + 0x10) = param_1;
  *(short *)(this + 0x18) = param_3;
  *(undefined2 *)(this + 0x1a) = param_4;
                    /* try { // try from 009b6604 to 00ab660f has its CatchHandler @ 009b67e8 */
  *(int *)(this + 0x1c) = param_7;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x28] = (IndexBuffer)0x1;
  if (param_3 != 0x1401) {
                    /* try { // try from 009b6610 to 00ab6773 has its CatchHandler @ 009b6800 */
    if (param_3 == 0x1405) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
      if (param_3 != 0x1403) goto LAB_009b663c;
      iVar1 = 2;
    }
  }
  *(int *)(this + 0x20) = iVar1;
LAB_009b663c:
  *(int *)(this + 0x24) = iVar1 * param_7;
  glGenBuffers(1,this + 0xc);
  update(this,0,param_5,param_6);
  return 1;
}

