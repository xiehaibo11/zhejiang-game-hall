
/* void rapidjson::UTF8<char>::Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,
   rapidjson::UTF8<char>, rapidjson::CrtAllocator>::StackStream<char>
   >(rapidjson::GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>::StackStream<char>&, unsigned int) */

void rapidjson::UTF8<char>::
     Encode<rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator>::StackStream<char>>
               (StackStream *param_1,uint param_2)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  
                    /* try { // try from 00a5ced4 to 00b5cf3b has its CatchHandler @ 00a5d13c */
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    plVar7 = *(long **)param_1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
                    /* catch() { ... } // from try @ 00a5ce40 with catch @ 00a5d0e4 */
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
                    /* catch() { ... } // from try @ 00a5cd94 with catch @ 00a5d13c
                       catch() { ... } // from try @ 00a5ced4 with catch @ 00a5d13c
                       catch() { ... } // from try @ 00a5d024 with catch @ 00a5d13c */
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
                    /* catch() { ... } // from try @ 00a5ce38 with catch @ 00a5d0f4 */
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
                    /* catch() { ... } // from try @ 00a5ce2c with catch @ 00a5d0f8
                       catch() { ... } // from try @ 00a5ceac with catch @ 00a5d0f8 */
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
                    /* try { // try from 00a5d194 to 00b5d1e7 has its CatchHandler @ 00a5d194
                       catch() { ... } // from try @ 00a5d194 with catch @ 00a5d194
                       catch() { ... } // from try @ 00a5d2c4 with catch @ 00a5d194 */
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = bVar1;
  }
  else if (param_2 < 0x800) {
    plVar7 = *(long **)param_1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
                    /* catch() { ... } // from try @ 00a5ce08 with catch @ 00a5d0fc
                       catch() { ... } // from try @ 00a5cfd0 with catch @ 00a5d0fc */
      pvVar2 = (void *)plVar7[2];
                    /* catch() { ... } // from try @ 00a5cdf0 with catch @ 00a5d100
                       catch() { ... } // from try @ 00a5cf88 with catch @ 00a5d100 */
                    /* catch() { ... } // from try @ 00a5cdc8 with catch @ 00a5d104 */
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
                    /* catch() { ... } // from try @ 00a5cdd8 with catch @ 00a5d10c
                       catch() { ... } // from try @ 00a5cf40 with catch @ 00a5d10c */
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
                    /* try { // try from 00a5d2c4 to 00b5d3a7 has its CatchHandler @ 00a5d194 */
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
                    /* catch() { ... } // from try @ 00a5d214 with catch @ 00a5d338 */
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
                    /* catch() { ... } // from try @ 00a5d208 with catch @ 00a5d33c */
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
                    /* catch() { ... } // from try @ 00a5d1e8 with catch @ 00a5d340 */
      pbVar5 = pbVar4 + 1;
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = (byte)(param_2 >> 6) | 0xc0;
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
                    /* try { // try from 00a5cf40 to 00b5cf83 has its CatchHandler @ 00a5d10c */
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
                    /* catch() { ... } // from try @ 00a5cd88 with catch @ 00a5d124 */
                    /* catch() { ... } // from try @ 00a5cd7c with catch @ 00a5d128 */
                    /* catch() { ... } // from try @ 00a5cd5c with catch @ 00a5d12c */
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
                    /* catch() { ... } // from try @ 00a5d220 with catch @ 00a5d350 */
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  else if (param_2 >> 0x10 == 0) {
    plVar7 = *(long **)param_1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
                    /* try { // try from 00a5cf88 to 00b5cfcb has its CatchHandler @ 00a5d100 */
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
                    /* try { // try from 00a5d3a8 to 00b5d3ff has its CatchHandler @ 00a5d3a8
                       catch() { ... } // from try @ 00a5d3a8 with catch @ 00a5d3a8
                       catch() { ... } // from try @ 00a5d658 with catch @ 00a5d3a8 */
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = (byte)(param_2 >> 0xc) | 0xe0;
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      pbVar5 = pbVar4 + 1;
                    /* try { // try from 00a5d588 to 00b5d5cb has its CatchHandler @ 00a5d6d0 */
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
    }
    plVar7[3] = (long)pbVar5;
                    /* try { // try from 00a5cfd0 to 00b5d013 has its CatchHandler @ 00a5d0fc */
    *pbVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
                    /* try { // try from 00a5d1e8 to 00b5d1ff has its CatchHandler @ 00a5d340 */
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
                    /* try { // try from 00a5d400 to 00b5d417 has its CatchHandler @ 00a5d728 */
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
                    /* try { // try from 00a5d420 to 00b5d42b has its CatchHandler @ 00a5d724 */
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
                    /* try { // try from 00a5d42c to 00b5d437 has its CatchHandler @ 00a5d720 */
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  else {
    plVar7 = *(long **)param_1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
                    /* try { // try from 00a5d208 to 00b5d213 has its CatchHandler @ 00a5d33c */
      pvVar2 = (void *)plVar7[2];
                    /* try { // try from 00a5d214 to 00b5d21f has its CatchHandler @ 00a5d338 */
      if (pvVar2 == (void *)0x0) {
                    /* try { // try from 00a5d438 to 00b5d4ef has its CatchHandler @ 00a5d738 */
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
                    /* try { // try from 00a5d220 to 00b5d2c3 has its CatchHandler @ 00a5d350 */
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
    }
    plVar7[3] = (long)pbVar5;
                    /* try { // try from 00a5d024 to 00b5d05f has its CatchHandler @ 00a5d13c */
    *pbVar4 = (byte)(param_2 >> 0x12) | 0xf0;
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      pbVar5 = pbVar4 + 1;
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
                    /* try { // try from 00a5d060 to 00b5d193 has its CatchHandler @ 00a5cd08 */
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
                    /* try { // try from 00a5d61c to 00b5d657 has its CatchHandler @ 00a5d738 */
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      pbVar5 = pbVar4 + 1;
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    plVar7 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar7[3];
    pbVar6 = (byte *)plVar7[4];
    pbVar5 = pbVar4 + 1;
    if (pbVar6 < pbVar5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
                    /* try { // try from 00a5d510 to 00b5d52b has its CatchHandler @ 00a5d6d0 */
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        pbVar6 = (byte *)plVar7[5];
      }
      else {
        pbVar6 = pbVar6 + (((ulong)(pbVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar8 = (long)pbVar4 - (long)pvVar2;
      if (pbVar6 < (byte *)(lVar8 + 1U)) {
        pbVar6 = (byte *)(lVar8 + 1);
      }
      if (pbVar6 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
                    /* try { // try from 00a5d540 to 00b5d583 has its CatchHandler @ 00a5d738 */
        pvVar2 = realloc(pvVar2,(size_t)pbVar6);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar8);
      plVar7[2] = (long)pvVar2;
      plVar7[3] = (long)pbVar4;
      plVar7[4] = (long)((long)pvVar2 + (long)pbVar6);
      pbVar5 = pbVar4 + 1;
                    /* try { // try from 00a5d658 to 00b5d78f has its CatchHandler @ 00a5d3a8 */
    }
    plVar7[3] = (long)pbVar5;
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
                    /* catch() { ... } // from try @ 00a5ce90 with catch @ 00a5d0d4 */
                    /* catch() { ... } // from try @ 00a5ce88 with catch @ 00a5d0d8 */
                    /* catch() { ... } // from try @ 00a5ce68 with catch @ 00a5d0dc */
                    /* catch() { ... } // from try @ 00a5ce60 with catch @ 00a5d0e0 */
  return;
}

