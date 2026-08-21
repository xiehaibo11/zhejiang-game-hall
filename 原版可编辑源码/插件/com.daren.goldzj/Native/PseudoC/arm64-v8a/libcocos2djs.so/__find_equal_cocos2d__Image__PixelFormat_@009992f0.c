
/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const>,
   std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,
   std::__ndk1::__value_type<cocos2d::Image::PixelFormat, cocos2d::Image::PixelFormatInfo const>,
   std::__ndk1::less<cocos2d::Image::PixelFormat>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const> >
   >::__find_equal<cocos2d::Image::PixelFormat>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,
   cocos2d::Image::PixelFormatInfo const>, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, cocos2d::Image::PixelFormat const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
::__find_equal<cocos2d::Image::PixelFormat>
          (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
           *this,__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 *param_2,long *param_3,__tree_node_base **param_4,int *param_5)

{
  __tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
  *p_Var1;
  int iVar2;
  __tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
  *p_Var3;
  bool bVar4;
  __tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
  *p_Var7;
  long lVar8;
  
  p_Var1 = this + 8;
  if (p_Var1 != param_2) {
    iVar2 = *param_5;
                    /* try { // try from 00999308 to 00a9936f has its CatchHandler @ 00999580 */
    if (*(int *)(param_2 + 0x1c) <= iVar2) {
      if (iVar2 <= *(int *)(param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (__tree_node_base *)param_2;
        return param_4;
      }
      p_Var5 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 **)(param_2 + 8);
      if (p_Var5 == (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                     *)0x0) {
        p_Var5 = param_2 + 0x10;
        p_Var6 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var5;
        if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
              **)p_Var6 != param_2) {
          do {
            lVar8 = *(long *)p_Var5;
            p_Var5 = (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                      *)(lVar8 + 0x10);
            p_Var6 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                       **)p_Var5;
          } while (*(long *)p_Var6 != lVar8);
        }
      }
      else {
        do {
          p_Var6 = p_Var5;
          p_Var5 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                     **)p_Var6;
        } while (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var6 !=
                 (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  *)0x0);
      }
      if ((p_Var6 == p_Var1) || (iVar2 < *(int *)(p_Var6 + 0x1c))) {
        if (*(long *)(param_2 + 8) == 0) {
          *param_3 = (long)param_2;
          return (__tree_node_base **)(param_2 + 8);
        }
LAB_0099944c:
        *param_3 = (long)p_Var6;
                    /* try { // try from 00999454 to 00a9948f has its CatchHandler @ 00999580 */
        return (__tree_node_base **)p_Var6;
      }
      if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < *(int *)(p_Var6 + 0x1c)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 *)0x0) goto LAB_0099944c;
          }
          if (iVar2 <= *(int *)(p_Var6 + 0x1c)) break;
                    /* try { // try from 00999490 to 00a995d7 has its CatchHandler @ 009991d0 */
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                     **)p_Var5;
        } while (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var5 !=
                 (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  *)0x0);
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var5;
      }
      goto LAB_009994a8;
    }
  }
  p_Var6 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
             **)param_2;
  p_Var5 = param_2;
  if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
        **)this != param_2) {
    p_Var3 = p_Var6;
    p_Var7 = param_2;
    if (p_Var6 == (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   *)0x0) {
      do {
        p_Var5 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)(p_Var7 + 0x10);
        bVar4 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  **)p_Var5 == p_Var7;
        p_Var7 = p_Var5;
      } while (bVar4);
    }
    else {
      do {
        p_Var5 = p_Var3;
        p_Var3 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)(p_Var5 + 8);
      } while (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 **)(p_Var5 + 8) !=
               (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                *)0x0);
    }
                    /* try { // try from 00999374 to 00a993b7 has its CatchHandler @ 00999540 */
    iVar2 = *param_5;
    if (iVar2 <= *(int *)(p_Var5 + 0x1c)) {
      if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < *(int *)(p_Var6 + 0x1c)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 *)0x0) goto LAB_0099944c;
          }
                    /* try { // try from 009993c8 to 00a9940b has its CatchHandler @ 0099950c */
          if (iVar2 <= *(int *)(p_Var6 + 0x1c)) break;
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                     **)p_Var5;
        } while (*(__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                   **)p_Var5 !=
                 (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                  *)0x0);
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var5;
      }
LAB_009994a8:
      *param_3 = (long)p_Var1;
      return (__tree_node_base **)p_Var1;
    }
  }
  if (p_Var6 == (__tree<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::__map_value_compare<cocos2d::Image::PixelFormat,std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>,std::__ndk1::less<cocos2d::Image::PixelFormat>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<cocos2d::Image::PixelFormat,cocos2d::Image::PixelFormatInfo_const>>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  *param_3 = (long)p_Var5;
  return (__tree_node_base **)(p_Var5 + 8);
}

