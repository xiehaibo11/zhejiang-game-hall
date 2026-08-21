
/* cocos2d::Node::processParentFlags(cocos2d::Mat4 const&, unsigned int) */

uint __thiscall cocos2d::Node::processParentFlags(Node *this,Mat4 *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  Mat4 *pMVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00f25984 with catch @ 00f25938 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f2595c to 01025963 has its CatchHandler @ 00f259a0 */
  if ((this[100] != (Node)0x0) && (((param_2 >> 1 & 1) != 0 || (this[0x65] != (Node)0x0)))) {
    puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 400) + 0x168))();
    uVar5 = *puVar2;
                    /* try { // try from 00f25978 to 01025983 has its CatchHandler @ 00f259a8 */
    this[0x150] = (Node)0x1;
    this[0x10c] = (Node)0x1;
                    /* try { // try from 00f25984 to 010259cb has its CatchHandler @ 00f25938 */
    this[0x161] = (Node)0x1;
    *(ulong *)(this + 0x50) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20) *
                  (float)((ulong)uVar5 >> 0x20),(float)*(undefined8 *)(this + 0x5c) * (float)uVar5);
    this[0x65] = (Node)0x0;
  }
  lVar3 = Camera::getVisitingCamera();
                    /* catch() { ... } // from try @ 00f2595c with catch @ 00f259a0 */
                    /* catch() { ... } // from try @ 00f25978 with catch @ 00f259a8 */
  if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x42c) & (uint)*(ushort *)(this + 0x222)) != 0)) {
    param_2 = (byte)this[0x161] | param_2 | (uint)(byte)this[0x88] << 1;
    if ((param_2 & 3) != 0) {
      pMVar4 = (Mat4 *)(**(code **)(*(long *)this + 1000))(this);
      Mat4::Mat4((Mat4 *)&local_88,param_1);
      Mat4::multiply((Mat4 *)&local_88,pMVar4);
      *(undefined8 *)(this + 0xc4) = uStack_50;
      *(undefined8 *)(this + 0xbc) = local_58;
      *(undefined8 *)(this + 0xb4) = uStack_60;
      *(undefined8 *)(this + 0xac) = local_68;
      *(undefined8 *)(this + 0xa4) = uStack_70;
      *(undefined8 *)(this + 0x9c) = local_78;
      *(undefined8 *)(this + 0x94) = uStack_80;
      *(undefined8 *)(this + 0x8c) = local_88;
      Mat4::~Mat4((Mat4 *)&local_88);
    }
    this[0x161] = (Node)0x0;
    this[0x88] = (Node)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

