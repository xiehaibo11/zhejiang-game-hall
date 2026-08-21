
/* cocos2d::TrianglesCommand::init(float, unsigned int, cocos2d::GLProgramState*,
   cocos2d::BlendFunc, cocos2d::TrianglesCommand::Triangles const&, cocos2d::Mat4 const&, unsigned
   int) */

void __thiscall
cocos2d::TrianglesCommand::init
          (float param_1,TrianglesCommand *this,int param_2,long param_3,undefined8 param_5,
          undefined8 *param_6,Mat4 *param_7,uint param_8)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_70;
  int local_68;
  int iStack_64;
  ulong local_60;
  long local_58;
  
                    /* try { // try from 00ff38f4 to 010f38ff has its CatchHandler @ 00ff3948 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00ff3900 to 010f3963 has its CatchHandler @ 00ff38c8 */
  local_58 = *(long *)(lVar1 + 0x28);
  RenderCommand::init((RenderCommand *)this,param_1,param_7,param_8);
  uVar6 = param_6[1];
  uVar5 = *param_6;
  *(undefined8 *)(this + 0x40) = param_6[2];
                    /* catch() { ... } // from try @ 00ff38f4 with catch @ 00ff3948 */
  *(undefined8 *)(this + 0x38) = uVar6;
  *(undefined8 *)(this + 0x30) = uVar5;
  iVar3 = *(int *)(this + 0x44) % 3;
  if (iVar3 != 0) {
    *(int *)(this + 0x44) = *(int *)(this + 0x44) - iVar3;
  }
  uVar6 = *(undefined8 *)(param_7 + 0x28);
  uVar5 = *(undefined8 *)(param_7 + 0x20);
  uVar7 = *(undefined8 *)(param_7 + 0x30);
  uVar9 = *(undefined8 *)(param_7 + 8);
  uVar8 = *(undefined8 *)param_7;
  uVar11 = *(undefined8 *)(param_7 + 0x18);
  uVar10 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_7 + 0x38);
  *(undefined8 *)(this + 0x78) = uVar7;
  *(undefined8 *)(this + 0x70) = uVar6;
  *(undefined8 *)(this + 0x68) = uVar5;
  *(undefined8 *)(this + 0x60) = uVar11;
  *(undefined8 *)(this + 0x58) = uVar10;
  *(undefined8 *)(this + 0x50) = uVar9;
  *(undefined8 *)(this + 0x48) = uVar8;
  iVar3 = (int)param_5;
  uVar4 = (uint)((ulong)param_5 >> 0x20);
  if ((((*(int *)(this + 0x1c) != param_2) || (*(int *)(this + 0x28) != iVar3)) ||
      (*(uint *)(this + 0x2c) != uVar4)) || (*(long *)(this + 0x20) != param_3)) {
    *(int *)(this + 0x1c) = param_2;
    *(int *)(this + 0x28) = iVar3;
    *(uint *)(this + 0x2c) = uVar4;
    *(long *)(this + 0x20) = param_3;
    _local_68 = CONCAT44(iVar3,param_2);
    local_60 = (ulong)uVar4;
    local_70 = param_3;
    uVar2 = XXH32(&local_70,0x18,0);
    *(undefined4 *)(this + 0x18) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

