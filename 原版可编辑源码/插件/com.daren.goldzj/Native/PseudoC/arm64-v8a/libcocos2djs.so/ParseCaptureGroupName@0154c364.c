
/* v8::internal::RegExpParser::ParseCaptureGroupName() */

vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> * __thiscall
v8::internal::RegExpParser::ParseCaptureGroupName(RegExpParser *this)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  Zone *this_00;
  ulong uVar5;
  long lVar6;
  vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> *this_01;
  undefined8 uVar7;
  ushort *puVar8;
  char *pcVar9;
  uint uVar10;
  char *local_50;
  long lStack_48;
  uint local_24;
  
  this_00 = *(Zone **)(this + 8);
  this_01 = *(vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> **)(this_00 + 0x10)
  ;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x20) {
    this_01 = (vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> *)
              Zone::NewExpand(this_00,0x20);
  }
  else {
    *(vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> **)(this_00 + 0x10) =
         this_01 + 0x20;
  }
  uVar7 = *(undefined8 *)(this + 8);
  bVar3 = true;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)(this_01 + 8) = 0;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x18) = uVar7;
  do {
    uVar10 = *(uint *)(this + 0x38);
    local_24 = uVar10;
    Advance(this);
    if (uVar10 == 0x5c) {
      if (*(int *)(this + 0x38) != 0x75) {
LAB_0154c50c:
        pcVar9 = "Invalid capture group name";
        uVar7 = 0x1b;
LAB_0154c518:
        iVar4 = __strlen_chk(pcVar9,uVar7);
        if (this[0x51] == (RegExpParser)0x0) {
          lStack_48 = (long)iVar4;
          this[0x51] = (RegExpParser)0x1;
          local_50 = pcVar9;
          lVar6 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_50,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(location_) != nullptr");
          }
          **(long **)(this + 0x10) = lVar6;
          *(undefined4 *)(this + 0x38) = 0x200000;
          *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
        }
        return (vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>> *)0x0;
      }
      Advance(this);
      uVar5 = ParseUnicodeEscape(this,(int *)&local_24);
      if ((uVar5 & 1) == 0) {
        pcVar9 = "Invalid Unicode escape sequence";
        uVar7 = 0x20;
        goto LAB_0154c518;
      }
      uVar10 = local_24;
      if (local_24 == 0x5c) goto LAB_0154c50c;
    }
    uVar1 = (ushort)uVar10;
    if (bVar3) {
      if (uVar10 < 0x80) {
        if (((&DAT_01a4b80b)[uVar10] & 1) != 0) goto LAB_0154c484;
        goto LAB_0154c50c;
      }
      if ((0xffff < (int)uVar10) || (uVar5 = unibrow::ID_Start::Is(uVar10), (uVar5 & 1) == 0))
      goto LAB_0154c50c;
LAB_0154c47c:
      if (uVar10 >> 0x10 == 0) goto LAB_0154c484;
      uVar2 = (ushort)(uVar10 + 0xf0000 >> 10);
      local_50 = (char *)(CONCAT62(local_50._2_6_,uVar2) & 0xffffffffffff03ff | 0xd800);
      if (*(ushort **)(this_01 + 8) < *(ushort **)(this_01 + 0x10)) {
        **(ushort **)(this_01 + 8) = uVar2 & 0x3ff | 0xd800;
        puVar8 = (ushort *)(*(long *)(this_01 + 8) + 2);
        *(ushort **)(this_01 + 8) = puVar8;
      }
      else {
        std::__ndk1::vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>>::
        __push_back_slow_path<unsigned_short>(this_01,(ushort *)&local_50);
        puVar8 = *(ushort **)(this_01 + 8);
      }
      local_50 = (char *)(CONCAT62(local_50._2_6_,uVar1) & 0xffffffffffff03ff | 0xdc00);
      if (*(ushort **)(this_01 + 0x10) <= puVar8) goto LAB_0154c3b8;
      *puVar8 = uVar1 & 0x3ff | 0xdc00;
LAB_0154c4f8:
      bVar3 = false;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 2;
    }
    else {
      if (uVar10 == 0x3e) {
        return this_01;
      }
      if (0x7f < uVar10) {
        if (((int)uVar10 < 0x10000) &&
           ((uVar5 = unibrow::ID_Start::Is(uVar10), (uVar5 & 1) != 0 ||
            (uVar5 = unibrow::ID_Continue::Is(uVar10), (uVar5 & 1) != 0)))) goto LAB_0154c47c;
        goto LAB_0154c50c;
      }
      if (((byte)(&DAT_01a4b80b)[uVar10] >> 1 & 1) == 0) goto LAB_0154c50c;
LAB_0154c484:
      local_50 = (char *)CONCAT62(local_50._2_6_,uVar1);
      if (*(ushort **)(this_01 + 8) < *(ushort **)(this_01 + 0x10)) {
        **(ushort **)(this_01 + 8) = uVar1;
        goto LAB_0154c4f8;
      }
LAB_0154c3b8:
      std::__ndk1::vector<unsigned_short,v8::internal::ZoneAllocator<unsigned_short>>::
      __push_back_slow_path<unsigned_short>(this_01,(ushort *)&local_50);
      bVar3 = false;
    }
  } while( true );
}

