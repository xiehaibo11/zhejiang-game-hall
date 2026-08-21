
/* cocos2d::ZipFile::getFileData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long*) */

void * __thiscall cocos2d::ZipFile::getFileData(ZipFile *this,basic_string *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  size_t local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (**(long **)(this + 8) != 0) {
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar1 != 0) {
      std::__ndk1::mutex::lock((mutex *)(this + 0x10));
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::ZipEntryInfo>>>
                          *)(*(long *)(this + 8) + 8),param_1);
      if (lVar5 == 0) {
LAB_00889378:
        pvVar6 = (void *)0x0;
      }
      else {
        local_50 = *(size_t *)(lVar5 + 0x38);
        uStack_58 = *(undefined8 *)(lVar5 + 0x30);
        local_60 = *(undefined8 *)(lVar5 + 0x28);
        iVar4 = unzGoToFilePos((void *)**(undefined8 **)(this + 8),(unz_file_pos_s *)&local_60);
        if ((iVar4 != 0) ||
           (iVar4 = unzOpenCurrentFile((void *)**(undefined8 **)(this + 8)), sVar3 = local_50,
           iVar4 != 0)) goto LAB_00889378;
        pvVar6 = malloc(local_50);
        unzReadCurrentFile((void *)**(undefined8 **)(this + 8),pvVar6,(uint)sVar3);
        if (param_2 != (long *)0x0) {
          *param_2 = local_50;
        }
        unzCloseCurrentFile((void *)**(undefined8 **)(this + 8));
      }
      std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
      goto LAB_0088938c;
    }
  }
  pvVar6 = (void *)0x0;
LAB_0088938c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

