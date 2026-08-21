
/* spine::TwoColorTrianglesCommand::init(float, unsigned int, cocos2d::GLProgramState*,
   cocos2d::BlendFunc, spine::TwoColorTriangles const&, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
spine::TwoColorTrianglesCommand::init
          (float param_1,TwoColorTrianglesCommand *this,int param_2,long param_3,undefined8 param_5,
          undefined8 *param_6,Mat4 *param_7,uint param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cocos2d::RenderCommand::init((RenderCommand *)this,param_1,param_7,param_8);
  uVar5 = param_6[1];
  uVar4 = *param_6;
  *(undefined8 *)(this + 0x80) = param_6[2];
  *(undefined8 *)(this + 0x78) = uVar5;
  *(undefined8 *)(this + 0x70) = uVar4;
                    /* try { // try from 00d5333c to 00e53343 has its CatchHandler @ 00d53404 */
  iVar2 = *(int *)(this + 0x84) % 3;
  if (iVar2 != 0) {
                    /* try { // try from 00d5334c to 00e53357 has its CatchHandler @ 00d533f4 */
    *(int *)(this + 0x84) = *(int *)(this + 0x84) - iVar2;
  }
  uVar5 = *(undefined8 *)(param_7 + 0x28);
  uVar4 = *(undefined8 *)(param_7 + 0x20);
  uVar6 = *(undefined8 *)(param_7 + 0x30);
  uVar8 = *(undefined8 *)(param_7 + 8);
  uVar7 = *(undefined8 *)param_7;
  uVar10 = *(undefined8 *)(param_7 + 0x18);
  uVar9 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_7 + 0x38);
  *(undefined8 *)(this + 0xb8) = uVar6;
  *(undefined8 *)(this + 0xb0) = uVar5;
  *(undefined8 *)(this + 0xa8) = uVar4;
  *(undefined8 *)(this + 0xa0) = uVar10;
  *(undefined8 *)(this + 0x98) = uVar9;
                    /* try { // try from 00d5336c to 00e53377 has its CatchHandler @ 00d53408 */
  *(undefined8 *)(this + 0x90) = uVar8;
  *(undefined8 *)(this + 0x88) = uVar7;
  iVar2 = (int)param_5;
  iVar3 = (int)((ulong)param_5 >> 0x20);
                    /* try { // try from 00d53378 to 00e5344f has its CatchHandler @ 00d5323c */
  if ((((*(int *)(this + 0x54) != param_2) || (*(int *)(this + 0x68) != iVar2)) ||
      (*(int *)(this + 0x6c) != iVar3)) ||
     ((*(long *)(this + 0x58) != param_3 || (*(long *)(this + 0x60) != *(long *)(param_3 + 0xd0)))))
  {
    *(int *)(this + 0x54) = param_2;
    *(int *)(this + 0x68) = iVar2;
    *(int *)(this + 0x6c) = iVar3;
    *(long *)(this + 0x58) = param_3;
    lVar1 = *(long *)(param_3 + 0xd0);
    *(long *)(this + 0x60) = lVar1;
    if (*(long *)(param_3 + 0x68) < 1) {
      iVar2 = iVar2 + param_2 + iVar3 + *(int *)(lVar1 + 0x24);
    }
    else {
      iVar2 = 0;
      this[0x11] = (TwoColorTrianglesCommand)0x1;
    }
    *(int *)(this + 0x50) = iVar2;
  }
                    /* catch() { ... } // from try @ 00d5334c with catch @ 00d533f4 */
  return;
}

