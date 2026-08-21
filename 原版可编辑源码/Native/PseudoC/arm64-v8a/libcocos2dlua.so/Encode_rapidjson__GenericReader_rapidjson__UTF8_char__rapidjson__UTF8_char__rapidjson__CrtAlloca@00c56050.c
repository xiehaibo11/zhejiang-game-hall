
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
  long *plVar6;
  long lVar7;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    plVar6 = *(long **)param_1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = bVar1;
  }
  else if (param_2 < 0x800) {
    plVar6 = *(long **)param_1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 6) | 0xc0;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  else if (param_2 >> 0x10 == 0) {
    plVar6 = *(long **)param_1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 0xc) | 0xe0;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  else {
    plVar6 = *(long **)param_1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 0x12) | 0xf0;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    plVar6 = *(long **)param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    pbVar4 = (byte *)plVar6[3];
    pbVar5 = (byte *)plVar6[4];
    if (pbVar5 < pbVar4 + 1) {
      pvVar2 = (void *)plVar6[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar6 == 0) {
          pvVar3 = operator_new(1);
          *plVar6 = (long)pvVar3;
          plVar6[1] = (long)pvVar3;
        }
        pbVar5 = (byte *)plVar6[5];
      }
      else {
        pbVar5 = pbVar5 + (((ulong)(pbVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      lVar7 = (long)pbVar4 - (long)pvVar2;
      if (pbVar5 < (byte *)(lVar7 + 1U)) {
        pbVar5 = (byte *)(lVar7 + 1);
      }
      if (pbVar5 == (byte *)0x0) {
        free(pvVar2);
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(pvVar2,(size_t)pbVar5);
      }
      pbVar4 = (byte *)((long)pvVar2 + lVar7);
      plVar6[2] = (long)pvVar2;
      plVar6[3] = (long)pbVar4;
      plVar6[4] = (long)((long)pvVar2 + (long)pbVar5);
    }
    plVar6[3] = (long)(pbVar4 + 1);
    *pbVar4 = bVar1 & 0x3f | 0x80;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

