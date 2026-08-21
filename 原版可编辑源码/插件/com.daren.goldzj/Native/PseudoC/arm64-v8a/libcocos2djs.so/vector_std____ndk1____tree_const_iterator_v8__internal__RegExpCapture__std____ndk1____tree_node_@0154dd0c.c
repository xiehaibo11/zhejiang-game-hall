
/* std::__ndk1::vector<v8::internal::RegExpCapture*,
   v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>
   >::vector<std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long>,
   std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long>,
   v8::internal::ZoneAllocator<v8::internal::RegExpCapture*> const&,
   std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long>
   >::value&&is_constructible<v8::internal::RegExpCapture*,
   std::__ndk1::iterator_traits<std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,
   std::__ndk1::__tree_node<v8::internal::RegExpCapture*, void*>*, long> >::reference>::value,
   void>::type*) */

void std::__ndk1::
     vector<v8::internal::RegExpCapture*,v8::internal::ZoneAllocator<v8::internal::RegExpCapture*>>
     ::
     vector<std::__ndk1::__tree_const_iterator<v8::internal::RegExpCapture*,std::__ndk1::__tree_node<v8::internal::RegExpCapture*,void*>*,long>>
               (long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  Zone *this;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  this = (Zone *)*param_4;
  param_1[3] = (long)this;
  if (param_2 != param_3) {
    plVar3 = param_2;
    uVar1 = 0;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
      plVar4 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar4 = plVar3 + 2;
        plVar6 = (long *)*plVar4;
        if ((long *)*plVar6 != plVar3) {
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x10);
            plVar6 = (long *)*plVar4;
          } while (*plVar6 != lVar5);
        }
      }
      else {
        do {
          plVar6 = plVar4;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      plVar3 = plVar6;
    } while (plVar6 != param_3);
    if (0xffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = *(long **)(this + 0x10);
    uVar2 = uVar1 * 8;
    if (uVar2 < (ulong)(*(long *)(this + 0x18) - (long)plVar3) ||
        uVar2 - (*(long *)(this + 0x18) - (long)plVar3) == 0) {
      *(long **)(this + 0x10) = plVar3 + uVar1;
    }
    else {
      plVar3 = (long *)v8::internal::Zone::NewExpand(this,uVar2);
    }
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + uVar1);
    do {
      *plVar3 = param_2[4];
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      plVar3 = (long *)(param_1[1] + 8);
      param_1[1] = (long)plVar3;
      param_2 = plVar4;
    } while (plVar4 != param_3);
  }
  return;
}

