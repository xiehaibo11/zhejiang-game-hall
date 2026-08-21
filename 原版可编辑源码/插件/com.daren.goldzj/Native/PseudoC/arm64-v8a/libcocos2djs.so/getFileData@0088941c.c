
/* cocos2d::ZipFile::getFileData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::ResizableBuffer*) */

undefined4 __thiscall
cocos2d::ZipFile::getFileData(ZipFile *this,basic_string *param_1,ResizableBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (**(long **)(this + 8) != 0) {
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar1 != 0) {
      std::__ndk1::mutex::lock((mutex *)(this + 0x10));
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
                          *)(*(long *)(this + 8) + 8),param_1);
      if (lVar4 == 0) {
LAB_008894c4:
        uVar6 = 0;
      }
      else {
        local_50 = *(undefined8 *)(lVar4 + 0x38);
        uStack_58 = *(undefined8 *)(lVar4 + 0x30);
        local_60 = *(undefined8 *)(lVar4 + 0x28);
        iVar3 = unzGoToFilePos((void *)**(undefined8 **)(this + 8),(unz_file_pos_s *)&local_60);
        if ((iVar3 != 0) ||
           (iVar3 = unzOpenCurrentFile((void *)**(undefined8 **)(this + 8)), iVar3 != 0))
        goto LAB_008894c4;
        (**(code **)(*(long *)param_2 + 0x10))(param_2,local_50);
        pvVar7 = (void *)**(undefined8 **)(this + 8);
        pvVar5 = (void *)(**(code **)(*(long *)param_2 + 0x18))(param_2);
        unzReadCurrentFile(pvVar7,pvVar5,(uint)local_50);
        unzCloseCurrentFile((void *)**(undefined8 **)(this + 8));
        uVar6 = 1;
      }
      std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
      goto LAB_008894d8;
    }
  }
  uVar6 = 0;
LAB_008894d8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

