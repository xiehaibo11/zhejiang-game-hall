
/* cocos2d::Mesh::create(std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&, int,
   std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> > const&,
   std::__ndk1::vector<cocos2d::MeshVertexAttrib, std::__ndk1::allocator<cocos2d::MeshVertexAttrib>
   > const&) */

undefined8 cocos2d::Mesh::create(vector *param_1,int param_2,vector *param_3,vector *param_4)

{
  long lVar1;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *pvVar2;
  long lVar3;
  undefined8 uVar4;
  MeshIndexData *pMVar5;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *pvStack_a0;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  ulong *puStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  uStack_90 = 0;
  local_98 = (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)0x0;
  pvStack_a0 = (vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)0x0;
  local_a8 = 0;
  uStack_70 = 0;
  local_78 = 0;
  puStack_80 = (ulong *)0x0;
  local_88 = (ulong *)0x0;
  uStack_64 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)
      &local_58 !=
      (vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>> *)param_4
     ) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::assign<cocos2d::MeshVertexAttrib*>
              ((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)&local_58,*(MeshVertexAttrib **)param_4,*(MeshVertexAttrib **)(param_4 + 8));
  }
  if ((vector *)&local_c8 != param_1) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::assign<float*>
              ((vector<float,std::__ndk1::allocator<float>> *)&local_c8,*(float **)param_1,
               *(float **)(param_1 + 8));
  }
  pvVar2 = pvStack_a0;
  if (pvStack_a0 == local_98) {
    std::__ndk1::
    vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
    ::
    __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
              ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                *)&local_a8,param_3);
  }
  else {
    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
              (pvStack_a0,param_3);
    pvStack_a0 = pvVar2 + 0x18;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_e0,"");
  if (local_88 < puStack_80) {
    local_88[2] = (ulong)local_d0;
    local_88[1] = uStack_d8;
    *local_88 = local_e0;
    uStack_d8 = 0;
    local_d0 = (void *)0x0;
    local_e0 = 0;
    local_88 = local_88 + 3;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&uStack_90,(basic_string *)&local_e0);
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
  }
  lVar3 = MeshVertexData::create((MeshData *)&local_c8);
  pMVar5 = (MeshIndexData *)**(undefined8 **)(lVar3 + 0x38);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_e0,"");
  uVar4 = create((basic_string *)&local_e0,pMVar5,(MeshSkin *)0x0);
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  MeshData::~MeshData((MeshData *)&local_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

