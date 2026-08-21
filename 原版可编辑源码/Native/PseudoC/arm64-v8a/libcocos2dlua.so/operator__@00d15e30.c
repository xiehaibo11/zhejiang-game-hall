
/* bool 
   std::__ndk1::__invert<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D,
   cocos2d::BatchMesh::OneSprite3D)#1}&>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::BatchMesh::OneSprite3D
   const&, cocos2d::BatchMesh::OneSprite3D const&) */

bool __thiscall
std::__ndk1::
__invert<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::{lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)#1}&>
::operator()(__invert<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&>
             *this,OneSprite3D *param_1,OneSprite3D *param_2)

{
  bool bVar1;
  long lVar2;
  Mat4 aMStack_130 [64];
  undefined8 local_f0;
  Vec4 aVStack_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  Mat4 aMStack_c0 [64];
  undefined8 local_80;
  Vec4 aVStack_78 [16];
  undefined8 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uStack_c8 = *(undefined8 *)(param_2 + 8);
  local_d0 = *(undefined8 *)param_2;
  cocos2d::Mat4::Mat4(aMStack_c0,(Mat4 *)(param_2 + 0x10));
  local_80 = *(undefined8 *)(param_2 + 0x50);
  cocos2d::Vec4::Vec4(aVStack_78,(Vec4 *)(param_2 + 0x58));
  local_68 = *(undefined8 *)(param_2 + 0x68);
  cocos2d::Mat4::Mat4(aMStack_130,(Mat4 *)(param_1 + 0x10));
  local_f0 = *(undefined8 *)(param_1 + 0x50);
  cocos2d::Vec4::Vec4(aVStack_e8,(Vec4 *)(param_1 + 0x58));
  local_d8 = *(undefined8 *)(param_1 + 0x68);
  bVar1 = (float)local_d8 < (float)local_68;
  cocos2d::Vec4::~Vec4(aVStack_e8);
  cocos2d::Mat4::~Mat4(aMStack_130);
  cocos2d::Vec4::~Vec4(aVStack_78);
  cocos2d::Mat4::~Mat4(aMStack_c0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

