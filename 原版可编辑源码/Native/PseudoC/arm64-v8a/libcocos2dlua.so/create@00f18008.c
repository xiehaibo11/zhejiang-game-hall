
/* cocos2d::LayerMultiplex::create(cocos2d::Layer*, ...) */

Node * cocos2d::LayerMultiplex::create(Layer *param_1,...)

{
  long lVar1;
  Node *this;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 local_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f17fc8 with catch @ 00f18014
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f17f88 with catch @ 00f18018
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b8 = in_x1;
  uStack_b0 = in_x2;
  local_a8 = in_x3;
  uStack_a0 = in_x4;
  local_98 = in_x5;
  uStack_90 = in_x6;
  local_88 = in_x7;
  this = operator_new(0x340,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    this[0x2fa] = (Node)0x0;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined4 *)(this + 0x318) = 0;
    this[0x31c] = (Node)0x1;
    this[0x1fa] = (Node)0x1;
    *(undefined ***)this = &PTR__Layer_016ff630;
    local_40 = 0x3f0000003f000000;
    Node::setAnchorPoint(this,(Vec2 *)&local_40);
    *(undefined4 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined ***)this = &PTR__LayerMultiplex_01701720;
    uStack_68 = 0xffffff80ffffffc8;
    local_80 = (undefined1 *)register0x00000008;
    ppuStack_78 = &local_80;
    puStack_70 = auStack_c0;
    initWithLayers((LayerMultiplex *)this,param_1,&local_80);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

