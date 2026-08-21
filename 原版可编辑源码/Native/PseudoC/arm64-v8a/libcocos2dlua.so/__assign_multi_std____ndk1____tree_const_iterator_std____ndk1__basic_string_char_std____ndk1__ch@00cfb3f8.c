
/* void std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >
   >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__tree_node<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__tree_node<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, void*>*, long>,
   std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__tree_node<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, void*>*, long>) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__tree_node<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void*>*,long>>
          (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,__tree_node *param_2,__tree_node *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  _Var3;
  bool bVar4;
  int iVar5;
  __tree_node *p_Var6;
  __tree_node *p_Var7;
  __tree_node *p_Var8;
  long lVar9;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var10;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var11;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var12;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var13;
  
  if (*(long *)(this + 0x10) != 0) {
    p_Var6 = *(__tree_node **)this;
    p_Var11 = this + 8;
    *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      **)this = p_Var11;
    *(undefined8 *)(*(long *)p_Var11 + 0x10) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)p_Var11 = 0;
    p_Var8 = *(__tree_node **)(p_Var6 + 8);
    if (p_Var8 != (__tree_node *)0x0) {
      p_Var6 = p_Var8;
    }
    if (p_Var6 == (__tree_node *)0x0) {
      p_Var8 = (__tree_node *)0x0;
    }
    else {
      p_Var8 = *(__tree_node **)(p_Var6 + 0x10);
      if (p_Var8 != (__tree_node *)0x0) {
        p_Var7 = *(__tree_node **)p_Var8;
        if (p_Var7 == p_Var6) {
          p_Var7 = *(__tree_node **)(p_Var8 + 8);
          *(undefined8 *)p_Var8 = 0;
          while (p_Var7 != (__tree_node *)0x0) {
            do {
              p_Var8 = p_Var7;
              p_Var7 = *(__tree_node **)p_Var8;
            } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
            p_Var7 = *(__tree_node **)(p_Var8 + 8);
          }
        }
        else {
          *(undefined8 *)(p_Var8 + 8) = 0;
          while (p_Var7 != (__tree_node *)0x0) {
            do {
              p_Var8 = p_Var7;
              p_Var7 = *(__tree_node **)p_Var8;
            } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
            p_Var7 = *(__tree_node **)(p_Var8 + 8);
          }
        }
      }
      p_Var7 = p_Var6;
      if (param_2 != param_3) {
        do {
          p_Var6 = p_Var8;
          if (p_Var7 != param_2) {
            uVar2 = *(ulong *)(param_2 + 0x28);
            p_Var8 = *(__tree_node **)(param_2 + 0x30);
            if (((byte)param_2[0x20] & 1) == 0) {
              p_Var8 = param_2 + 0x21;
              uVar2 = (ulong)((byte)param_2[0x20] >> 1);
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var7 + 0x20),(char *)p_Var8,uVar2);
          }
          p_Var12 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      **)p_Var11;
          p_Var10 = p_Var11;
          p_Var13 = p_Var11;
          if (p_Var12 !=
              (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)0x0) {
            uVar2 = *(ulong *)(p_Var7 + 0x28);
            p_Var8 = *(__tree_node **)(p_Var7 + 0x30);
            if (((byte)p_Var7[0x20] & 1) == 0) {
              p_Var8 = p_Var7 + 0x21;
              uVar2 = (ulong)((byte)p_Var7[0x20] >> 1);
            }
            do {
              while( true ) {
                p_Var13 = p_Var12;
                _Var3 = p_Var13[0x20];
                uVar1 = (ulong)((byte)_Var3 >> 1);
                if (((byte)_Var3 & 1) != 0) {
                  uVar1 = *(ulong *)(p_Var13 + 0x28);
                }
                __n = uVar1;
                if (uVar2 <= uVar1) {
                  __n = uVar2;
                }
                if (__n == 0) break;
                p_Var10 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            **)(p_Var13 + 0x30);
                if (((byte)_Var3 & 1) == 0) {
                  p_Var10 = p_Var13 + 0x21;
                }
                iVar5 = memcmp(p_Var8,p_Var10,__n);
                if (iVar5 == 0) break;
                if (-1 < iVar5) goto LAB_00cfb528;
LAB_00cfb574:
                p_Var10 = p_Var13;
                p_Var12 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                            **)p_Var13;
                if (*(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      **)p_Var13 ==
                    (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                     *)0x0) goto LAB_00cfb5b0;
              }
              if (uVar2 < uVar1) goto LAB_00cfb574;
LAB_00cfb528:
              p_Var12 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          **)(p_Var13 + 8);
            } while (*(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                       **)(p_Var13 + 8) !=
                     (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)0x0);
            p_Var10 = p_Var13 + 8;
          }
LAB_00cfb5b0:
          *(undefined8 *)p_Var7 = 0;
          *(undefined8 *)(p_Var7 + 8) = 0;
          *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            **)(p_Var7 + 0x10) = p_Var13;
          *(__tree_node **)p_Var10 = p_Var7;
          if (**(long **)this != 0) {
            *(long *)this = **(long **)this;
            p_Var7 = *(__tree_node **)p_Var10;
          }
          __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 8),(__tree_node_base *)p_Var7);
          *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
          p_Var8 = p_Var6;
          if (p_Var6 == (__tree_node *)0x0) goto LAB_00cfb650;
          p_Var8 = *(__tree_node **)(p_Var6 + 0x10);
          if (p_Var8 == (__tree_node *)0x0) {
            p_Var8 = (__tree_node *)0x0;
            p_Var7 = *(__tree_node **)(param_2 + 8);
joined_r0x00cfb628:
            if (p_Var7 == (__tree_node *)0x0) goto LAB_00cfb674;
LAB_00cfb658:
            do {
              param_2 = p_Var7;
              p_Var7 = *(__tree_node **)param_2;
            } while (*(__tree_node **)param_2 != (__tree_node *)0x0);
          }
          else {
            p_Var7 = *(__tree_node **)p_Var8;
            if (p_Var7 == p_Var6) {
              *(undefined8 *)p_Var8 = 0;
              p_Var7 = *(__tree_node **)(p_Var8 + 8);
              if (*(__tree_node **)(p_Var8 + 8) == (__tree_node *)0x0) goto LAB_00cfb668;
              do {
                do {
                  p_Var8 = p_Var7;
                  p_Var7 = *(__tree_node **)p_Var8;
                } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
                p_Var7 = *(__tree_node **)(p_Var8 + 8);
              } while (*(__tree_node **)(p_Var8 + 8) != (__tree_node *)0x0);
            }
            else {
              *(undefined8 *)(p_Var8 + 8) = 0;
              if (p_Var7 == (__tree_node *)0x0) {
LAB_00cfb668:
                p_Var7 = *(__tree_node **)(param_2 + 8);
                goto joined_r0x00cfb628;
              }
              do {
                do {
                  p_Var8 = p_Var7;
                  p_Var7 = *(__tree_node **)p_Var8;
                } while (*(__tree_node **)p_Var8 != (__tree_node *)0x0);
                p_Var7 = *(__tree_node **)(p_Var8 + 8);
              } while (*(__tree_node **)(p_Var8 + 8) != (__tree_node *)0x0);
            }
LAB_00cfb650:
            p_Var7 = *(__tree_node **)(param_2 + 8);
            if (*(__tree_node **)(param_2 + 8) != (__tree_node *)0x0) goto LAB_00cfb658;
LAB_00cfb674:
            p_Var7 = param_2 + 0x10;
            bVar4 = *(__tree_node **)*(__tree_node **)p_Var7 != param_2;
            param_2 = *(__tree_node **)p_Var7;
            if (bVar4) {
              do {
                lVar9 = *(long *)p_Var7;
                p_Var7 = (__tree_node *)(lVar9 + 0x10);
                param_2 = *(__tree_node **)p_Var7;
              } while (*(long *)param_2 != lVar9);
            }
          }
        } while ((param_2 != param_3) && (p_Var7 = p_Var6, p_Var6 != (__tree_node *)0x0));
      }
      destroy(this,p_Var6);
      if (p_Var8 == (__tree_node *)0x0) goto joined_r0x00cfb6f4;
      p_Var6 = *(__tree_node **)(p_Var8 + 0x10);
      while (p_Var7 = p_Var6, p_Var7 != (__tree_node *)0x0) {
        p_Var8 = p_Var7;
        p_Var6 = *(__tree_node **)(p_Var7 + 0x10);
      }
    }
    destroy(this,p_Var8);
  }
joined_r0x00cfb6f4:
  while (param_2 != param_3) {
    __emplace_multi<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              (this,(basic_string *)(param_2 + 0x20));
    p_Var6 = *(__tree_node **)(param_2 + 8);
    if (*(__tree_node **)(param_2 + 8) == (__tree_node *)0x0) {
      p_Var6 = param_2 + 0x10;
      bVar4 = *(__tree_node **)*(__tree_node **)p_Var6 != param_2;
      param_2 = *(__tree_node **)p_Var6;
      if (bVar4) {
        do {
          lVar9 = *(long *)p_Var6;
          p_Var6 = (__tree_node *)(lVar9 + 0x10);
          param_2 = *(__tree_node **)p_Var6;
        } while (*(long *)param_2 != lVar9);
      }
    }
    else {
      do {
        param_2 = p_Var6;
        p_Var6 = *(__tree_node **)param_2;
      } while (*(__tree_node **)param_2 != (__tree_node *)0x0);
    }
  }
  return;
}

