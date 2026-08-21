
/* cocos2d::BatchMesh::onMeshDraw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned char*, int,
   unsigned char*, int, cocos2d::Vec4, float) */

void __thiscall
cocos2d::BatchMesh::onMeshDraw
          (undefined4 param_1,BatchMesh *this,undefined8 param_3_00,Mat4 *param_2,undefined8 param_3
          ,undefined4 param_4,undefined8 param_5,undefined4 param_6,undefined8 *param_9)

{
  Mat4 *this_00;
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  int iStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(this + 0x290)) {
    if (this[0x280] != (BatchMesh)0x0) {
      Mat4::Mat4((Mat4 *)&local_d8);
      Vec4::Vec4((Vec4 *)&local_90);
      uStack_88 = param_9[1];
      local_90 = *param_9;
      uStack_b0 = *(undefined8 *)(param_2 + 0x28);
      local_b8 = *(undefined8 *)(param_2 + 0x20);
      uStack_a0 = *(undefined8 *)(param_2 + 0x38);
      uStack_a8 = *(undefined8 *)(param_2 + 0x30);
      uStack_d0 = *(undefined8 *)(param_2 + 8);
      local_d8 = *(undefined8 *)param_2;
      uStack_c0 = *(undefined8 *)(param_2 + 0x18);
      uStack_c8 = *(undefined8 *)(param_2 + 0x10);
      puVar2 = *(undefined8 **)(this + 0xd8);
      iStack_7c = (int)((ulong)((long)puVar2 - *(long *)(this + 0xd0)) >> 4) * -0x49249249;
      local_e8 = param_3;
      uStack_e0 = param_5;
      local_98 = param_4;
      uStack_94 = param_6;
      local_80 = param_1;
      if (*(undefined8 **)(this + 0xe0) == puVar2) {
        std::__ndk1::
        vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>
        ::__push_back_slow_path<cocos2d::BatchMesh::OneSprite3D_const&>
                  ((vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>
                    *)(this + 0xd0),(OneSprite3D *)&local_e8);
      }
      else {
        puVar2[1] = param_5;
        *puVar2 = param_3;
        Mat4::Mat4((Mat4 *)(puVar2 + 2),(Mat4 *)&local_d8);
        puVar2[10] = CONCAT44(uStack_94,local_98);
        Vec4::Vec4((Vec4 *)(puVar2 + 0xb),(Vec4 *)&local_90);
        puVar2[0xd] = CONCAT44(iStack_7c,local_80);
        *(undefined8 **)(this + 0xd8) = puVar2 + 0xe;
      }
      Vec4::~Vec4((Vec4 *)&local_90);
      Mat4::~Mat4((Mat4 *)&local_d8);
    }
    this_00 = *(Mat4 **)(this + 0x138);
    this[0x281] = (BatchMesh)0x0;
    if (this_00 == *(Mat4 **)(this + 0x140)) {
      std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
      __push_back_slow_path<cocos2d::Mat4_const&>
                ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x130),
                 param_2);
    }
    else {
      Mat4::Mat4(this_00,param_2);
      *(Mat4 **)(this + 0x138) = this_00 + 0x40;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

