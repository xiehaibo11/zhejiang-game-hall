
/* non-virtual thunk to cocos2d::Sprite3D::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::Sprite3D::setBlendFunc(Sprite3D *this,BlendFunc *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(this + 0x50) != *(int *)param_1) || (*(int *)(this + 0x54) != *(int *)(param_1 + 4))
     ) {
    puVar2 = *(undefined8 **)(this + 0x58);
    puVar1 = *(undefined8 **)(this + 0x60);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)param_1;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      Mesh::setBlendFunc((Mesh *)*puVar2,param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d40570 with catch @ 00d40514
                       catch(type#1 @ 00000000) { ... } // from try @ 00d4073c with catch @ 00d40514
                        */
    }
  }
  return;
}

