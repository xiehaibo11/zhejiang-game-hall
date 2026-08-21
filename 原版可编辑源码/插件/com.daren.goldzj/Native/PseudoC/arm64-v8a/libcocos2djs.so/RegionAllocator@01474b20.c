
/* v8::base::RegionAllocator::RegionAllocator(unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::base::RegionAllocator::RegionAllocator
          (RegionAllocator *this,ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  Region *local_30;
  Region *local_28;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2 / param_3;
  }
  *(ulong *)this = param_1;
  *(ulong *)(this + 8) = param_2;
  this[0x10] = (RegionAllocator)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(ulong *)(this + 0x30) = param_3;
  *(ulong *)(this + 0x18) = uVar1;
  *(long *)(this + 0x20) = (long)((double)param_2 * 0.4);
  *(undefined8 *)(this + 0x40) = 0;
  *(RegionAllocator **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(RegionAllocator **)(this + 0x50) = this + 0x58;
  if (param_1 + param_2 <= param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","begin() < end()");
  }
  uVar2 = CONCAT17(POPCOUNT((char)(param_3 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(param_3 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(param_3 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(param_3 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(param_3 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(param_3 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(param_3 >>
                                                                                        8)),
                                                                         POPCOUNT((char)param_3)))))
                                    )));
  uVar3 = NEON_uaddlv(uVar2,1);
  if ((CONCAT62((int6)((ulong)uVar2 >> 0x10),uVar3) & 0xffffffff) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","base::bits::IsPowerOfTwo(page_size_)");
  }
  if ((param_3 - 1 & param_2) == 0) {
    if ((param_3 - 1 & param_1) == 0) {
      local_30 = operator_new(0x18);
      uVar4 = *(undefined8 *)this;
      uVar2 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(local_30 + 8) = *(undefined8 *)(this + 8);
      *(undefined8 *)local_30 = uVar4;
      *(undefined8 *)(local_30 + 0x10) = uVar2;
      std::__ndk1::
      __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
      ::
      __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
                ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::AddressEndOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                  *)(this + 0x38),&local_30,&local_30);
      local_28 = local_30;
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + *(long *)(local_30 + 8);
      std::__ndk1::
      __tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
      ::
      __emplace_unique_key_args<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::Region*const&>
                ((__tree<v8::base::RegionAllocator::Region*,v8::base::RegionAllocator::SizeAddressOrder,std::__ndk1::allocator<v8::base::RegionAllocator::Region*>>
                  *)(this + 0x50),&local_28,&local_28);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(begin(), page_size_)");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAligned(size(), page_size_)");
}

