
/* cocos2d::PUParticle3DQuadRender::fillVertex(unsigned short, cocos2d::Vec3 const&, cocos2d::Vec4
   const&, cocos2d::Vec2 const&) */

void __thiscall
cocos2d::PUParticle3DQuadRender::fillVertex
          (PUParticle3DQuadRender *this,ushort param_1,Vec3 *param_2,Vec4 *param_3,Vec2 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(this + 0x98);
  uVar3 = *(undefined8 *)param_2;
  lVar1 = ((ulong)param_1 + (ulong)param_1 * 8) * 4;
  *(undefined4 *)((undefined8 *)(lVar2 + lVar1) + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + lVar1) = uVar3;
  lVar2 = *(long *)(this + 0x98);
  uVar3 = *(undefined8 *)param_3;
  *(undefined8 *)(lVar2 + lVar1 + 0x1c) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar2 + lVar1 + 0x14) = uVar3;
  *(undefined8 *)(*(long *)(this + 0x98) + lVar1 + 0xc) = *(undefined8 *)param_4;
  return;
}

