
/* btConvexInternalAabbCachingShape::recalcLocalAabb() */

void __thiscall
btConvexInternalAabbCachingShape::recalcLocalAabb(btConvexInternalAabbCachingShape *this)

{
  int iVar1;
  float fVar2;
  float local_90 [5];
  float local_7c;
  float local_68;
  float local_60;
  float local_4c;
  float local_38;
  
  this[0x60] = (btConvexInternalAabbCachingShape)0x1;
  if (((DAT_01795390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795390), iVar1 != 0)) {
    DAT_01795398 = 0x3f800000;
    DAT_017953ac = 0x3f800000;
    DAT_017953c0 = 0x3f800000;
    DAT_017953a4 = 0;
    DAT_0179539c = 0;
    DAT_017953b0 = 0;
    DAT_017953b8 = 0;
    DAT_017953d4 = 0;
    DAT_017953cc = 0;
    DAT_017953e0 = 0;
    DAT_017953e8 = 0;
    DAT_017953c8 = 0xbf800000;
    DAT_017953dc = 0xbf800000;
    DAT_017953f0 = 0xbf800000;
    __cxa_guard_release(&DAT_01795390);
  }
  memset(local_90,0,0x60);
  (**(code **)(*(long *)this + 0x98))(this,&DAT_01795398,local_90,6);
  fVar2 = *(float *)(this + 0x38);
  *(float *)(this + 0x50) = local_90[0] + fVar2;
  *(float *)(this + 0x40) = local_60 - fVar2;
  *(float *)(this + 0x54) = local_7c + fVar2;
  *(float *)(this + 0x44) = local_4c - fVar2;
  *(float *)(this + 0x58) = local_68 + fVar2;
  *(float *)(this + 0x48) = local_38 - fVar2;
  return;
}

