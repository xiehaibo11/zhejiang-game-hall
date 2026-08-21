
/* spine::SkeletonDataMgr::setSkeletonData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spine::SkeletonData*,
   spine::Atlas*, spine::AttachmentLoader*, std::__ndk1::vector<int, std::__ndk1::allocator<int> >
   const&) */

void __thiscall
spine::SkeletonDataMgr::setSkeletonData
          (SkeletonDataMgr *this,basic_string *param_1,SkeletonData *param_2,Atlas *param_3,
          AttachmentLoader *param_4,vector *param_5)

{
  long lVar1;
  SkeletonDataMgr *pSVar2;
  Ref *this_00;
  vector<int,std::__ndk1::allocator<int>> *this_01;
  long lVar3;
  basic_string *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar2 = (SkeletonDataMgr *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
                       *)(this + 0x40),param_1);
  if (this + 0x48 != pSVar2) {
    releaseByUUID(this,param_1);
  }
  this_00 = operator_new(0x40);
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  cocos2d::Ref::Ref(this_00);
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined ***)this_00 = &PTR__SkeletonDataInfo_01c8fbc0;
  this_01 = (vector<int,std::__ndk1::allocator<int>> *)(this_00 + 0x28);
  *(undefined8 *)this_01 = 0;
  *(SkeletonData **)(this_00 + 0x10) = param_2;
  *(Atlas **)(this_00 + 0x18) = param_3;
  *(AttachmentLoader **)(this_00 + 0x20) = param_4;
  if (this_01 != (vector<int,std::__ndk1::allocator<int>> *)param_5) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::assign<int*>
              (this_01,*(int **)param_5,*(int **)(param_5 + 8));
  }
  local_60 = param_1;
  lVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x40),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_01948101,(tuple *)&local_60);
  *(Ref **)(lVar3 + 0x38) = this_00;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

