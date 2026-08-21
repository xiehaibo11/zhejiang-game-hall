
/* cocos2d::TextFieldTTF::setCursorFromPoint(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void __thiscall
cocos2d::TextFieldTTF::setCursorFromPoint(TextFieldTTF *this,Vec2 *param_1,Camera *param_2)

{
  TextFieldTTF TVar1;
  long lVar2;
  Size *pSVar3;
  ulong uVar4;
  long *plVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  Rect aRStack_b8 [8];
  Size aSStack_b0 [8];
  Mat4 aMStack_a8 [64];
  long local_68;
  
                    /* try { // try from 00f56564 to 0105656f has its CatchHandler @ 00f5675c */
                    /* try { // try from 00f56570 to 0105657b has its CatchHandler @ 00f5674c */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0x710] != (TextFieldTTF)0x0) {
    TVar1 = this[0x728];
    this[0x728] = (TextFieldTTF)0x0;
    (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
    Rect::Rect(aRStack_b8);
                    /* try { // try from 00f565d0 to 010565db has its CatchHandler @ 00f567c8 */
    pSVar3 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
    Size::operator=(aSStack_b0,pSVar3);
    (**(code **)(*(long *)this + 0x448))(aMStack_a8,this);
                    /* try { // try from 00f56608 to 01056623 has its CatchHandler @ 00f567c4 */
    uVar4 = isScreenPointInRect(param_1,param_2,aMStack_a8,aRStack_b8,(Vec3 *)0x0);
    Mat4::~Mat4(aMStack_a8);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(this + 0x420) < 1) {
        uVar4 = 0;
      }
      else {
        lVar8 = 0;
        uVar4 = 0;
        do {
          if (((*(char *)(*(long *)(this + 0x3f0) + lVar8 + 4) != '\0') &&
              (-1 < *(int *)(*(long *)(this + 0x3f0) + lVar8 + 0x10))) &&
             (plVar5 = (long *)(**(code **)(*(long *)this + 0x5d0))(this,uVar4 & 0xffffffff),
             plVar5 != (long *)0x0)) {
            pfVar6 = (float *)(**(code **)(*plVar5 + 0x168))();
            Size::Size((Size *)aMStack_a8,*pfVar6,*(float *)(this + 0x424));
            Size::operator=(aSStack_b0,(Size *)aMStack_a8);
            (**(code **)(*plVar5 + 0x448))(aMStack_a8,plVar5);
            uVar7 = isScreenPointInRect(param_1,param_2,aMStack_a8,aRStack_b8,(Vec3 *)0x0);
            Mat4::~Mat4(aMStack_a8);
            if ((uVar7 & 1) != 0) {
              if ((this[0x710] != (TextFieldTTF)0x0) && (uVar4 <= *(ulong *)(this + 0x6b0))) {
                *(ulong *)(this + 0x718) = uVar4;
                *(undefined4 *)(this + 0x724) = 0x3f800000;
              }
              break;
            }
          }
          uVar4 = uVar4 + 1;
          lVar8 = lVar8 + 0x18;
        } while ((long)uVar4 < (long)*(int *)(this + 0x420));
      }
      if ((((int)uVar4 == *(int *)(this + 0x420)) && (this[0x710] != (TextFieldTTF)0x0)) &&
         ((uVar4 & 0xffffffff) <= *(ulong *)(this + 0x6b0))) {
        *(ulong *)(this + 0x718) = uVar4 & 0xffffffff;
        *(undefined4 *)(this + 0x724) = 0x3f800000;
      }
    }
    this[0x728] = TVar1;
    (**(code **)(*(long *)this + 0x588))(this,this + 0x6b8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

