
/* cocos2d::TrianglesCommand::init(float, cocos2d::Texture2D*, cocos2d::GLProgramState*,
   cocos2d::BlendFunc, cocos2d::TrianglesCommand::Triangles const&, cocos2d::Mat4 const&, unsigned
   int) */

void __thiscall
cocos2d::TrianglesCommand::init
          (float param_1,TrianglesCommand *this,Texture2D *param_2,long param_3,undefined8 param_5,
          undefined8 *param_6,Mat4 *param_7,uint param_8)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_90;
  int local_88;
  int iStack_84;
  ulong local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  iVar2 = Texture2D::getName(param_2);
  RenderCommand::init((RenderCommand *)this,param_1,param_7,param_8);
  uVar7 = param_6[1];
  uVar6 = *param_6;
  *(undefined8 *)(this + 0x40) = param_6[2];
  *(undefined8 *)(this + 0x38) = uVar7;
  *(undefined8 *)(this + 0x30) = uVar6;
  iVar4 = *(int *)(this + 0x44) % 3;
  if (iVar4 != 0) {
    *(int *)(this + 0x44) = *(int *)(this + 0x44) - iVar4;
  }
  uVar7 = *(undefined8 *)(param_7 + 0x28);
  uVar6 = *(undefined8 *)(param_7 + 0x20);
  uVar8 = *(undefined8 *)(param_7 + 0x30);
  uVar10 = *(undefined8 *)(param_7 + 8);
  uVar9 = *(undefined8 *)param_7;
  uVar12 = *(undefined8 *)(param_7 + 0x18);
  uVar11 = *(undefined8 *)(param_7 + 0x10);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_7 + 0x38);
  *(undefined8 *)(this + 0x78) = uVar8;
  *(undefined8 *)(this + 0x70) = uVar7;
  *(undefined8 *)(this + 0x68) = uVar6;
  *(undefined8 *)(this + 0x60) = uVar12;
  *(undefined8 *)(this + 0x58) = uVar11;
  *(undefined8 *)(this + 0x50) = uVar10;
  *(undefined8 *)(this + 0x48) = uVar9;
  iVar4 = (int)param_5;
  uVar5 = (uint)((ulong)param_5 >> 0x20);
  if ((((*(int *)(this + 0x1c) != iVar2) || (*(int *)(this + 0x28) != iVar4)) ||
      (*(uint *)(this + 0x2c) != uVar5)) || (*(long *)(this + 0x20) != param_3)) {
    *(int *)(this + 0x1c) = iVar2;
    *(int *)(this + 0x28) = iVar4;
    *(uint *)(this + 0x2c) = uVar5;
    *(long *)(this + 0x20) = param_3;
    _local_88 = CONCAT44(iVar4,iVar2);
    local_80 = (ulong)uVar5;
    local_90 = param_3;
    uVar3 = XXH32(&local_90,0x18,0);
    *(undefined4 *)(this + 0x18) = uVar3;
  }
  uVar3 = Texture2D::getAlphaTextureName(param_2);
  *(undefined4 *)(this + 0x88) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

