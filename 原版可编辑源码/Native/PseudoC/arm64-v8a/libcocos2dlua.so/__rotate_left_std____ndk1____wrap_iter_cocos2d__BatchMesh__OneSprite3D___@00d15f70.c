
/* std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   std::__ndk1::__rotate_left<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>) */

undefined8 *
std::__ndk1::__rotate_left<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
          (undefined8 *param_1,long param_2)

{
  size_t __n;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  cocos2d::Mat4::Mat4((Mat4 *)&local_b0,(Mat4 *)(param_1 + 2));
  local_70 = param_1[10];
  cocos2d::Vec4::Vec4((Vec4 *)&uStack_68,(Vec4 *)(param_1 + 0xb));
  local_58 = param_1[0xd];
  __n = param_2 - (long)(param_1 + 0xe);
  if (__n != 0) {
    memmove(param_1,param_1 + 0xe,__n);
  }
  param_1 = param_1 + ((long)__n >> 4) * 2;
  param_1[3] = uStack_a8;
  param_1[2] = local_b0;
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[0xb] = uStack_68;
  param_1[10] = local_70;
  param_1[0xd] = local_58;
  param_1[0xc] = uStack_60;
  param_1[7] = uStack_88;
  param_1[6] = local_90;
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  cocos2d::Vec4::~Vec4((Vec4 *)&uStack_68);
  cocos2d::Mat4::~Mat4((Mat4 *)&local_b0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

