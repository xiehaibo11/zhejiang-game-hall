
/* spine::SkeletonTwoColorBatch::addCommand(cocos2d::Renderer*, float, unsigned int,
   cocos2d::GLProgramState*, cocos2d::BlendFunc, spine::TwoColorTriangles const&, cocos2d::Mat4
   const&, unsigned int) */

RenderCommand * __thiscall
spine::SkeletonTwoColorBatch::addCommand
          (float param_2,SkeletonTwoColorBatch *this,Renderer *param_1,int param_3,long param_4,
          undefined8 param_6,undefined8 *param_7,Mat4 *param_8,uint param_9)

{
  RenderCommand *this_00;
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
  
  this_00 = (RenderCommand *)nextFreeCommand(this);
  cocos2d::RenderCommand::init(this_00,param_2,param_8,param_9);
  uVar5 = param_7[1];
  uVar4 = *param_7;
  *(undefined8 *)(this_00 + 0x80) = param_7[2];
  *(undefined8 *)(this_00 + 0x78) = uVar5;
  *(undefined8 *)(this_00 + 0x70) = uVar4;
  iVar2 = *(int *)(this_00 + 0x84) % 3;
  if (iVar2 != 0) {
    *(int *)(this_00 + 0x84) = *(int *)(this_00 + 0x84) - iVar2;
  }
  uVar5 = *(undefined8 *)(param_8 + 0x28);
  uVar4 = *(undefined8 *)(param_8 + 0x20);
  uVar6 = *(undefined8 *)(param_8 + 0x30);
  uVar8 = *(undefined8 *)(param_8 + 8);
  uVar7 = *(undefined8 *)param_8;
  uVar10 = *(undefined8 *)(param_8 + 0x18);
  uVar9 = *(undefined8 *)(param_8 + 0x10);
  *(undefined8 *)(this_00 + 0xc0) = *(undefined8 *)(param_8 + 0x38);
  *(undefined8 *)(this_00 + 0xb8) = uVar6;
  *(undefined8 *)(this_00 + 0xb0) = uVar5;
  *(undefined8 *)(this_00 + 0xa8) = uVar4;
  *(undefined8 *)(this_00 + 0xa0) = uVar10;
  *(undefined8 *)(this_00 + 0x98) = uVar9;
  *(undefined8 *)(this_00 + 0x90) = uVar8;
  *(undefined8 *)(this_00 + 0x88) = uVar7;
  iVar2 = (int)param_6;
  iVar3 = (int)((ulong)param_6 >> 0x20);
  if ((((*(int *)(this_00 + 0x54) != param_3) || (*(int *)(this_00 + 0x68) != iVar2)) ||
      (*(int *)(this_00 + 0x6c) != iVar3)) ||
     ((*(long *)(this_00 + 0x58) != param_4 ||
      (*(long *)(this_00 + 0x60) != *(long *)(param_4 + 0xd0))))) {
    *(int *)(this_00 + 0x54) = param_3;
    *(int *)(this_00 + 0x68) = iVar2;
    *(int *)(this_00 + 0x6c) = iVar3;
    *(long *)(this_00 + 0x58) = param_4;
    lVar1 = *(long *)(param_4 + 0xd0);
    *(long *)(this_00 + 0x60) = lVar1;
    if (*(long *)(param_4 + 0x68) < 1) {
      iVar2 = iVar2 + param_3 + iVar3 + *(int *)(lVar1 + 0x24);
    }
    else {
      iVar2 = 0;
      this_00[0x11] = (RenderCommand)0x1;
    }
    *(int *)(this_00 + 0x50) = iVar2;
  }
  cocos2d::Renderer::addCommand(param_1,this_00);
  return this_00;
}

