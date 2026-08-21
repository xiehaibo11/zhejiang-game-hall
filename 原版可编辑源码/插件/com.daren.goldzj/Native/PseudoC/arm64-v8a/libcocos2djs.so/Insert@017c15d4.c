
/* v8::internal::interpreter::ConstantArrayBuilder::Insert(double) */

ulong v8::internal::interpreter::ConstantArrayBuilder::Insert(double param_1)

{
  uint uVar1;
  int iVar2;
  long *in_x0;
  long lVar3;
  undefined8 in_x1;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  double local_38 [2];
  double *local_28;
  
  local_38[0] = param_1;
  if (NAN(param_1)) {
    iVar2 = (int)in_x0[0x16];
    if (-1 < iVar2) {
LAB_017c1748:
      return (long)iVar2;
    }
    lVar3 = *in_x0;
    if (((*(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
          *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4) ||
        (lVar3 = in_x0[1],
        *(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
        *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4)) ||
       (lVar3 = in_x0[2],
       *(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
       *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4)) {
      iVar2 = ConstantArraySlice::Allocate(lVar3,in_x1,0x11,1);
      *(int *)(in_x0 + 0x16) = iVar2;
      goto LAB_017c1748;
    }
  }
  else {
    plVar5 = in_x0 + 0xf;
    plVar6 = (long *)*plVar5;
    plVar4 = plVar5;
    if (plVar6 != (long *)0x0) {
      do {
        if ((double)plVar6[4] >= param_1) {
          plVar4 = plVar6;
        }
        plVar6 = (long *)plVar6[(double)plVar6[4] < param_1];
      } while (plVar6 != (long *)0x0);
      if ((plVar4 != plVar5) && ((double)plVar4[4] <= param_1)) {
        uVar1 = *(uint *)(plVar4 + 5);
        goto LAB_017c16c0;
      }
    }
    lVar3 = *in_x0;
    if ((*(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
         *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4) ||
       ((lVar3 = in_x0[1],
        *(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
        *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4 ||
        (lVar3 = in_x0[2],
        *(long *)(lVar3 + 8) - *(long *)(lVar3 + 0x10) !=
        *(long *)(lVar3 + 0x28) - *(long *)(lVar3 + 0x20) >> 4)))) {
      uVar1 = ConstantArraySlice::Allocate(lVar3,param_1,4,1);
      local_28 = local_38;
      lVar3 = std::__ndk1::
              __tree<std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::__map_value_compare<double,std::__ndk1::__value_type<double,unsigned_int>,std::__ndk1::less<double>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<double,unsigned_int>>>
              ::
              __emplace_unique_key_args<double,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<double_const&>,std::__ndk1::tuple<>>
                        ((double *)(in_x0 + 0xe),(piecewise_construct_t *)local_38,
                         (tuple *)&DAT_01a634a0,(tuple *)&local_28);
      *(uint *)(lVar3 + 0x28) = uVar1;
LAB_017c16c0:
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

