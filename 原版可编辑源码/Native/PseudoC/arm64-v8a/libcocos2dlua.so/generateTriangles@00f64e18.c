
/* cocos2d::AutoPolygon::generateTriangles(cocos2d::Rect const&, float, float) */

void __thiscall
cocos2d::AutoPolygon::generateTriangles(AutoPolygon *this,Rect *param_1,float param_2,float param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  AutoPolygon *pAVar2;
  long lVar3;
  bool bVar4;
  undefined8 *in_x8;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvStack_98;
  int local_90;
  undefined4 uStack_8c;
  void *local_80;
  void *pvStack_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  getRealRect(this);
  fVar7 = local_64;
  if (local_64 + local_5c <= local_64) {
    fVar11 = 0.0;
LAB_00f64f2c:
    marchSquare(this,(Vec2 *)&local_68,param_3);
    reduce((vector *)this,(Rect *)&local_80,param_2);
    if (local_80 != (void *)0x0) {
      pvStack_78 = local_80;
      operator_delete(local_80);
    }
    local_80 = (void *)CONCAT44(fVar7,fVar11);
    expand((vector *)this,(Rect *)&local_80,param_2);
    if (local_80 != (void *)0x0) {
      pvStack_78 = local_80;
      operator_delete(local_80);
    }
    local_80 = (void *)CONCAT44(fVar7,fVar11);
    pvStack_78 = pvStack_98;
    triangulate((vector *)this);
    if (local_90 != 0) {
      pfVar5 = (float *)CONCAT44(fVar7,fVar11);
      fVar8 = *(float *)(this + 0x30);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x2c));
      pfVar6 = pfVar5 + (long)local_90 * 6;
      do {
        pfVar5[4] = (local_68 + fVar8 * *pfVar5) / fVar9;
        pfVar5[5] = ((local_64 + local_5c) - fVar8 * pfVar5[1]) / fVar10;
        pfVar5 = pfVar5 + 6;
      } while (pfVar5 != pfVar6);
    }
    *(undefined1 *)(in_x8 + 3) = 1;
    Rect::Rect((Rect *)((long)in_x8 + 0x1c),(Rect *)Rect::ZERO);
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x8 + 6);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(this_00,"");
    in_x8[2] = CONCAT44(uStack_8c,local_90);
    in_x8[1] = pvStack_98;
    *in_x8 = CONCAT44(fVar7,fVar11);
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x10)) {
      uVar1 = *(ulong *)(this + 0x18);
      pAVar2 = *(AutoPolygon **)(this + 0x20);
      if (((byte)this[0x10] & 1) == 0) {
        pAVar2 = this + 0x11;
        uVar1 = (ulong)((byte)this[0x10] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pAVar2,uVar1);
    }
    Rect::operator=((Rect *)((long)in_x8 + 0x1c),(Rect *)&local_68);
    if (local_80 != (void *)0x0) {
      pvStack_78 = local_80;
      operator_delete(local_80);
    }
    if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  do {
    fVar11 = local_68;
    if (local_60 + local_68 <= local_68) {
      bVar4 = false;
    }
    else {
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                               (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar7 +
                                                             (int)local_68) * 4)));
      if (param_3 < fVar8) {
LAB_00f64f24:
        fVar7 = fVar7 + 1.0;
        goto LAB_00f64f2c;
      }
      bVar4 = false;
      while (fVar11 = fVar11 + 1.0, fVar11 < local_60 + local_68) {
        fVar8 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                                 (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar7 +
                                                               (int)fVar11) * 4)));
        bVar4 = (bool)(bVar4 | param_3 < fVar8);
        if (param_3 < fVar8) goto LAB_00f64f24;
      }
    }
    fVar7 = fVar7 + 1.0;
    if ((local_64 + local_5c <= fVar7) || (bVar4)) goto LAB_00f64f2c;
  } while( true );
}

