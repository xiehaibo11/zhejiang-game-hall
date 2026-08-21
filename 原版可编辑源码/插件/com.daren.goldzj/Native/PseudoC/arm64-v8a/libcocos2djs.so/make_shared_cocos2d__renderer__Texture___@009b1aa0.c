
/* std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>
   std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>::make_shared<cocos2d::renderer::Texture*&>(cocos2d::renderer::Texture*&)
    */

void __thiscall
std::__ndk1::shared_ptr<cocos2d::TextRenderGroupItem>::make_shared<cocos2d::renderer::Texture*&>
          (shared_ptr<cocos2d::TextRenderGroupItem> *this,Texture **param_1)

{
  undefined8 *puVar1;
  MeshBuffer *this_00;
  undefined8 *in_x8;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x40);
  puVar1[2] = 0;
  *puVar1 = &PTR____shared_ptr_emplace_01c6abf8;
  puVar1[1] = 0;
  uVar2 = *(undefined8 *)this;
  puVar1[3] = &PTR__TextRenderGroupItem_01c6ab98;
  puVar1[5] = uVar2;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  puVar1[4] = 0;
  this_00 = operator_new(400);
  cocos2d::middleware::MeshBuffer::MeshBuffer(this_00,5);
  puVar1[4] = this_00;
  *in_x8 = puVar1 + 3;
  in_x8[1] = puVar1;
  return;
}

