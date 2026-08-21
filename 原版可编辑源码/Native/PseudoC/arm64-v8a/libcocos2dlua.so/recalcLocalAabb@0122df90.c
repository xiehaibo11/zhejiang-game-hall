
/* btPolyhedralConvexAabbCachingShape::recalcLocalAabb() */

void __thiscall
btPolyhedralConvexAabbCachingShape::recalcLocalAabb(btPolyhedralConvexAabbCachingShape *this)

{
  int iVar1;
  float fVar2;
  float local_90 [5];
  float local_7c;
  float local_68;
  float local_60;
  float local_4c;
  float local_38;
  
  this[0x68] = (btPolyhedralConvexAabbCachingShape)0x1;
  if (((DAT_01795400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795400), iVar1 != 0)) {
    DAT_01795408 = 0x3f800000;
    DAT_0179541c = 0x3f800000;
    DAT_01795430 = 0x3f800000;
    DAT_01795414 = 0;
    DAT_0179540c = 0;
    DAT_01795420 = 0;
    DAT_01795428 = 0;
    DAT_01795444 = 0;
    DAT_0179543c = 0;
    DAT_01795450 = 0;
    DAT_01795458 = 0;
    DAT_01795438 = 0xbf800000;
    DAT_0179544c = 0xbf800000;
    DAT_01795460 = 0xbf800000;
    __cxa_guard_release(&DAT_01795400);
  }
  memset(local_90,0,0x60);
  (**(code **)(*(long *)this + 0x98))(this,&DAT_01795408,local_90,6);
  fVar2 = *(float *)(this + 0x38);
  *(float *)(this + 0x58) = local_90[0] + fVar2;
  *(float *)(this + 0x48) = local_60 - fVar2;
  *(float *)(this + 0x5c) = local_7c + fVar2;
  *(float *)(this + 0x4c) = local_4c - fVar2;
  *(float *)(this + 0x60) = local_68 + fVar2;
  *(float *)(this + 0x50) = local_38 - fVar2;
  return;
}

