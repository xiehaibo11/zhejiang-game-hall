
/* spine::AttachmentVertices::AttachmentVertices(cocos2d::middleware::Texture2D*, int, unsigned
   short*, int) */

void __thiscall
spine::AttachmentVertices::AttachmentVertices
          (AttachmentVertices *this,Texture2D *param_1,int param_2,ushort *param_3,int param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  *(Texture2D **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__AttachmentVertices_01c8fad0;
  if (param_1 != (Texture2D *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
  }
  puVar3 = operator_new(0x18);
  uVar7 = (ulong)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar7;
  uVar5 = (uVar7 + (long)param_2 * 4) * 4;
  uVar1 = uVar5 + 8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  *(undefined8 **)(this + 0x10) = puVar3;
  if (SUB168(auVar2 * ZEXT816(0x14),8) != 0 || 0xfffffffffffffff7 < uVar5) {
    uVar1 = 0xffffffffffffffff;
  }
  puVar4 = operator_new__(uVar1);
  puVar6 = puVar4 + 1;
  *puVar4 = uVar7;
  if (param_2 != 0) {
    puVar4 = puVar6;
    do {
      *puVar4 = 0;
      cocos2d::Color4B::Color4B((Color4B *)(puVar4 + 2));
      puVar4 = (ulong *)((long)puVar4 + 0x14);
    } while (puVar4 != (ulong *)((long)puVar6 + uVar7 * 0x14));
    puVar3 = *(undefined8 **)(this + 0x10);
  }
  *puVar3 = puVar6;
  puVar3[1] = param_3;
  *(int *)(puVar3 + 2) = param_2;
  *(int *)((long)puVar3 + 0x14) = param_4;
  return;
}

