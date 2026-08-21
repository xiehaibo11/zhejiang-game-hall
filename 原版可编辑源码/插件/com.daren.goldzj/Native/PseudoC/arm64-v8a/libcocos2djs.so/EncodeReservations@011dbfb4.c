
/* v8::internal::SerializerAllocator::EncodeReservations() const */

void v8::internal::SerializerAllocator::EncodeReservations(void)

{
  long in_x0;
  uint *puVar1;
  uint uVar2;
  vector<v8::internal::SerializedData::Reservation,std::__ndk1::allocator<v8::internal::SerializedData::Reservation>>
  *in_x8;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint local_54;
  
  lVar5 = 0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  do {
    lVar6 = in_x0 + lVar5 * 0x18;
    plVar7 = (long *)(lVar6 + 0x10);
    lVar3 = *plVar7;
    plVar8 = (long *)(lVar6 + 0x18);
    if (*plVar8 == lVar3) {
      puVar1 = (uint *)(in_x0 + lVar5 * 4);
      uVar2 = *puVar1;
LAB_011dc030:
      if (*(uint **)(in_x8 + 8) < *(uint **)(in_x8 + 0x10)) {
        **(uint **)(in_x8 + 8) = uVar2;
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 4;
      }
      else {
        std::__ndk1::
        vector<v8::internal::SerializedData::Reservation,std::__ndk1::allocator<v8::internal::SerializedData::Reservation>>
        ::__emplace_back_slow_path<unsigned_int_const&>(in_x8,puVar1);
      }
    }
    else {
      lVar6 = 0;
      uVar9 = 0;
      do {
        if (*(uint **)(in_x8 + 8) < *(uint **)(in_x8 + 0x10)) {
          **(uint **)(in_x8 + 8) = *(uint *)(lVar3 + lVar6);
          *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 4;
        }
        else {
          std::__ndk1::
          vector<v8::internal::SerializedData::Reservation,std::__ndk1::allocator<v8::internal::SerializedData::Reservation>>
          ::__emplace_back_slow_path<unsigned_int_const&>(in_x8,(uint *)(lVar3 + lVar6));
        }
        lVar3 = *plVar7;
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 4;
        lVar4 = *plVar8 - lVar3;
      } while (uVar9 < (ulong)(lVar4 >> 2));
      puVar1 = (uint *)(in_x0 + lVar5 * 4);
      uVar2 = *puVar1;
      if ((lVar4 == 0) || (uVar2 != 0)) goto LAB_011dc030;
    }
    lVar5 = lVar5 + 1;
    *(uint *)(*(long *)(in_x8 + 8) + -4) = *(uint *)(*(long *)(in_x8 + 8) + -4) | 0x80000000;
    if (lVar5 == 4) {
      local_54 = *(int *)(in_x0 + 0x70) * 0x28;
      if (*(uint **)(in_x8 + 8) < *(uint **)(in_x8 + 0x10)) {
        **(uint **)(in_x8 + 8) = local_54;
        lVar5 = *(long *)(in_x8 + 8) + 4;
        *(long *)(in_x8 + 8) = lVar5;
      }
      else {
        std::__ndk1::
        vector<v8::internal::SerializedData::Reservation,std::__ndk1::allocator<v8::internal::SerializedData::Reservation>>
        ::__emplace_back_slow_path<unsigned_int>(in_x8,&local_54);
        lVar5 = *(long *)(in_x8 + 8);
      }
      *(uint *)(lVar5 + -4) = *(uint *)(lVar5 + -4) | 0x80000000;
      if (*(uint **)(in_x8 + 8) < *(uint **)(in_x8 + 0x10)) {
        **(uint **)(in_x8 + 8) = *(uint *)(in_x0 + 0x74);
        lVar5 = *(long *)(in_x8 + 8) + 4;
        *(long *)(in_x8 + 8) = lVar5;
      }
      else {
        std::__ndk1::
        vector<v8::internal::SerializedData::Reservation,std::__ndk1::allocator<v8::internal::SerializedData::Reservation>>
        ::__emplace_back_slow_path<unsigned_int_const&>(in_x8,(uint *)(in_x0 + 0x74));
        lVar5 = *(long *)(in_x8 + 8);
      }
      *(uint *)(lVar5 + -4) = *(uint *)(lVar5 + -4) | 0x80000000;
      return;
    }
  } while( true );
}

