
/* v8::internal::Serializer::ObjectSerializer::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitPointers
          (ObjectSerializer *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uchar local_70 [4];
  uchar local_6c [4];
  uchar local_68 [4];
  uchar local_64 [4];
  
  do {
    if (param_4 <= param_3) {
      return;
    }
    for (; param_3 < param_4; param_3 = param_3 + 1) {
      if ((*param_3 & 1) != 0) {
        OutputRawData(this,(ulong)param_3);
        break;
      }
    }
    for (; (param_3 < param_4 && (*param_3 == 3)); param_3 = param_3 + 1) {
      pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
      local_64[0] = '#';
      if (*(undefined1 **)(pvVar4 + 8) == *(undefined1 **)(pvVar4 + 0x10)) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
        __push_back_slow_path<unsigned_char_const&>(pvVar4,local_64);
      }
      else {
        **(undefined1 **)(pvVar4 + 8) = 0x23;
        *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 1;
      }
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 4;
    }
    while (param_3 < param_4) {
      uVar2 = *param_3;
      if ((uVar2 == 3) || ((uVar2 & 1) == 0)) break;
      uVar7 = (ulong)uVar2 & 0xfffffffffffffffd;
      puVar1 = param_3 + 1;
      uVar10 = uVar7 | (ulong)param_3 & 0xffffffff00000000;
      if (puVar1 < param_4) {
        lVar5 = *(long *)(this + 8);
        lVar6 = **(long **)(lVar5 + 0x90);
        uVar3 = (int)(*(long **)(lVar5 + 0x90))[1] - 1;
        uVar7 = (ulong)(uVar3 & (uint)uVar7);
        lVar9 = lVar6 + uVar7 * 0x18;
        if ((*(char *)(lVar9 + 0x10) != '\0') && (*(ulong *)(lVar6 + uVar7 * 0x18) != uVar10)) {
          do {
            uVar7 = (ulong)((int)uVar7 + 1U & uVar3);
            if (*(char *)(lVar6 + uVar7 * 0x18 + 0x10) == '\0') break;
          } while (*(ulong *)(lVar6 + uVar7 * 0x18) != uVar10);
          lVar9 = lVar6 + uVar7 * 0x18;
        }
        if ((((lVar9 == 0) || (*(char *)(lVar9 + 0x10) == '\0')) || (0x1d6 < *(ushort *)(lVar9 + 8))
            ) || (uVar2 != *puVar1)) goto LAB_011ee5a4;
        uVar7 = 8;
        do {
          uVar8 = uVar7;
          puVar1 = (uint *)((long)param_3 + uVar8);
          if (param_4 <= puVar1) break;
          uVar7 = uVar8 + 4;
        } while (*puVar1 == uVar2);
        iVar11 = (int)(uVar8 >> 2);
        pvVar4 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(lVar5 + 0x50);
        *(int *)(this + 0x20) = *(int *)(this + 0x20) + (int)uVar8;
        param_3 = puVar1;
        if (iVar11 < 0x12) {
          local_68[0] = (char)(uVar8 >> 2) + '~';
          if (*(uchar **)(lVar5 + 0x58) == *(uchar **)(lVar5 + 0x60)) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
            __push_back_slow_path<unsigned_char_const&>(pvVar4,local_68);
          }
          else {
            **(uchar **)(lVar5 + 0x58) = local_68[0];
            *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
          }
        }
        else {
          local_6c[0] = '\x1b';
          if (*(undefined1 **)(lVar5 + 0x58) == *(undefined1 **)(lVar5 + 0x60)) {
            std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
            __push_back_slow_path<unsigned_char_const&>(pvVar4,local_6c);
          }
          else {
            **(undefined1 **)(lVar5 + 0x58) = 0x1b;
            *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
          }
          SnapshotByteSink::PutInt((ulong)pvVar4,(char *)(long)(iVar11 + -0x12));
        }
      }
      else {
LAB_011ee5a4:
        *(int *)(this + 0x20) = *(int *)(this + 0x20) + 4;
        param_3 = puVar1;
      }
      if (((ulong)uVar2 & 3) == 3) {
        pvVar4 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
        local_70[0] = '$';
        if (*(undefined1 **)(pvVar4 + 8) == *(undefined1 **)(pvVar4 + 0x10)) {
          std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
          __push_back_slow_path<unsigned_char_const&>(pvVar4,local_70);
        }
        else {
          **(undefined1 **)(pvVar4 + 8) = 0x24;
          *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 1;
        }
      }
      (**(code **)(**(long **)(this + 8) + 0x28))(*(long **)(this + 8),uVar10);
    }
  } while( true );
}

