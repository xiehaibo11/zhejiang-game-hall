
/* cocos2d::PUParticle3DQuadRender::fillTriangle(unsigned short, unsigned short, unsigned short,
   unsigned short) */

void __thiscall
cocos2d::PUParticle3DQuadRender::fillTriangle
          (PUParticle3DQuadRender *this,ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xb0);
  *(ushort *)(lVar1 + (ulong)param_1 * 2) = param_2;
  *(ushort *)(lVar1 + (ulong)(param_1 + 1) * 2) = param_3;
  *(ushort *)(lVar1 + (ulong)(param_1 + 2) * 2) = param_4;
  return;
}

