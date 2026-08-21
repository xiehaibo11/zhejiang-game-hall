
/* cocos2d::ParticleData::init(int) */

bool __thiscall cocos2d::ParticleData::init(ParticleData *this,int param_1)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  void *pvVar23;
  void *pvVar24;
  void *pvVar25;
  ulong __size;
  
  __size = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
  *(int *)(this + 0xd0) = param_1;
  pvVar2 = malloc(__size);
  *(void **)this = pvVar2;
  pvVar2 = malloc(__size);
  *(void **)(this + 8) = pvVar2;
  pvVar2 = malloc(__size);
  *(void **)(this + 0x10) = pvVar2;
  pvVar3 = malloc(__size);
  *(void **)(this + 0x18) = pvVar3;
  pvVar4 = malloc(__size);
  *(void **)(this + 0x20) = pvVar4;
  pvVar5 = malloc(__size);
  *(void **)(this + 0x28) = pvVar5;
  pvVar6 = malloc(__size);
                    /* try { // try from 00f30d9c to 010310a3 has its CatchHandler @ 00f30d9c
                       catch() { ... } // from try @ 00f30d9c with catch @ 00f30d9c
                       catch() { ... } // from try @ 00f310ac with catch @ 00f30d9c
                       catch() { ... } // from try @ 00f31120 with catch @ 00f30d9c */
  *(void **)(this + 0x30) = pvVar6;
  pvVar7 = malloc(__size);
  *(void **)(this + 0x38) = pvVar7;
  pvVar8 = malloc(__size);
  *(void **)(this + 0x40) = pvVar8;
  pvVar9 = malloc(__size);
  *(void **)(this + 0x48) = pvVar9;
  pvVar10 = malloc(__size);
  *(void **)(this + 0x50) = pvVar10;
  pvVar11 = malloc(__size);
  *(void **)(this + 0x58) = pvVar11;
  pvVar12 = malloc(__size);
  *(void **)(this + 0x60) = pvVar12;
  pvVar13 = malloc(__size);
  *(void **)(this + 0x68) = pvVar13;
  pvVar14 = malloc(__size);
  *(void **)(this + 0x70) = pvVar14;
  pvVar15 = malloc(__size);
  *(void **)(this + 0x78) = pvVar15;
  pvVar16 = malloc(__size);
  *(void **)(this + 0x80) = pvVar16;
  pvVar17 = malloc(__size);
  *(void **)(this + 0x88) = pvVar17;
  pvVar18 = malloc(__size);
  *(void **)(this + 0x90) = pvVar18;
  pvVar19 = malloc(__size);
  *(void **)(this + 0x98) = pvVar19;
  pvVar20 = malloc(__size);
  *(void **)(this + 0xa0) = pvVar20;
  pvVar21 = malloc(__size);
  *(void **)(this + 0xa8) = pvVar21;
  pvVar22 = malloc(__size);
  *(void **)(this + 0xb0) = pvVar22;
  pvVar23 = malloc(__size);
  *(void **)(this + 0xb8) = pvVar23;
  pvVar24 = malloc(__size);
  *(void **)(this + 200) = pvVar24;
  pvVar25 = malloc(__size);
  *(void **)(this + 0xc0) = pvVar25;
  if ((((((*(long *)this == 0) || (*(long *)(this + 8) == 0)) || (pvVar3 == (void *)0x0)) ||
       (((pvVar2 == (void *)0x0 || (pvVar4 == (void *)0x0)) ||
        ((pvVar5 == (void *)0x0 || ((pvVar6 == (void *)0x0 || (pvVar7 == (void *)0x0)))))))) ||
      (((pvVar8 == (void *)0x0 ||
        ((((((pvVar9 == (void *)0x0 || (pvVar10 == (void *)0x0)) || (pvVar11 == (void *)0x0)) ||
           ((pvVar12 == (void *)0x0 || (pvVar13 == (void *)0x0)))) ||
          ((pvVar14 == (void *)0x0 || ((pvVar15 == (void *)0x0 || (pvVar16 == (void *)0x0)))))) ||
         (pvVar17 == (void *)0x0)))) ||
       (((pvVar18 == (void *)0x0 || (pvVar19 == (void *)0x0)) || (pvVar20 == (void *)0x0)))))) ||
     (((pvVar21 == (void *)0x0 || (pvVar22 == (void *)0x0)) || (pvVar23 == (void *)0x0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = pvVar25 != (void *)0x0 && pvVar24 != (void *)0x0;
  }
  return bVar1;
}

