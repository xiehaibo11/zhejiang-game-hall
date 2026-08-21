
/* v8::platform::tracing::TraceObject::Initialize(char, unsigned char const*, char const*, char
   const*, unsigned long, unsigned long, int, char const**, unsigned char const*, unsigned long
   const*, std::__ndk1::unique_ptr<v8::ConvertableToTraceFormat,
   std::__ndk1::default_delete<v8::ConvertableToTraceFormat> >*, unsigned int, long, long) */

void __thiscall
v8::platform::tracing::TraceObject::Initialize
          (TraceObject *this,char param_1,uchar *param_2,char *param_3,char *param_4,ulong param_5,
          ulong param_6,int param_7,char **param_8,uchar *param_9,ulong *param_10,
          unique_ptr *param_11,uint param_12,long param_13,long param_14)

{
  TraceObject *pTVar1;
  TraceObject TVar2;
  undefined4 uVar3;
  long *plVar4;
  size_t sVar5;
  void *__dest;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  char local_64 [4];
  
  uVar3 = base::OS::GetCurrentProcessId();
  *(undefined4 *)this = uVar3;
  uVar3 = base::OS::GetCurrentThreadId();
  *(undefined4 *)(this + 4) = uVar3;
  this[8] = (TraceObject)param_1;
  *(char **)(this + 0x10) = param_3;
  *(char **)(this + 0x18) = param_4;
  *(uchar **)(this + 0x20) = param_2;
  *(ulong *)(this + 0x28) = param_5;
  *(uint *)(this + 0x80) = param_12;
  *(ulong *)(this + 0x30) = param_6;
  iVar11 = param_7;
  if (1 < param_7) {
    iVar11 = 2;
  }
  *(long *)(this + 0x88) = param_13;
  *(long *)(this + 0x90) = param_14;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(int *)(this + 0x38) = iVar11;
  if (0 < param_7) {
    lVar10 = 0;
    lVar12 = 0x50;
    do {
      *(undefined8 *)(this + lVar10 + 0x40) = *(undefined8 *)((long)param_8 + lVar10);
      *(undefined8 *)(this + lVar10 + 0x58) = *(undefined8 *)((long)param_10 + lVar10);
      this[lVar12] = *(TraceObject *)(param_9 + lVar12 + -0x50);
      if (param_9[lVar12 + -0x50] == '\b') {
        uVar7 = *(undefined8 *)(param_11 + lVar10);
        *(undefined8 *)(param_11 + lVar10) = 0;
        plVar4 = *(long **)(this + lVar10 + 0x68);
        *(undefined8 *)(this + lVar10 + 0x68) = uVar7;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      iVar11 = *(int *)(this + 0x38);
      lVar6 = lVar12 + -0x4f;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 8;
    } while (lVar6 < iVar11);
  }
  if ((param_12 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (param_3 == (char *)0x0) {
      lVar12 = 0;
      if (param_4 == (char *)0x0) goto LAB_0147a36c;
LAB_0147a34c:
      sVar5 = strlen(param_4);
      lVar10 = sVar5 + 1;
    }
    else {
      sVar5 = strlen(param_3);
      lVar12 = sVar5 + 1;
      if (param_4 != (char *)0x0) goto LAB_0147a34c;
LAB_0147a36c:
      lVar10 = 0;
    }
    uVar8 = lVar10 + lVar12;
    if (*(int *)(this + 0x38) < 1) goto LAB_0147a430;
    iVar11 = *(int *)(this + 0x38);
    lVar12 = 0;
    do {
      if (*(char **)(this + lVar12 * 8 + 0x40) == (char *)0x0) {
        lVar10 = 0;
      }
      else {
        sVar5 = strlen(*(char **)(this + lVar12 * 8 + 0x40));
        lVar10 = sVar5 + 1;
      }
      uVar8 = lVar10 + uVar8;
      if (this[lVar12 + 0x50] == (TraceObject)0x6) {
        this[lVar12 + 0x50] = (TraceObject)0x7;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar11);
  }
  if (0 < iVar11) {
    lVar12 = 0;
    do {
      TVar2 = this[lVar12 + 0x50];
      local_64[lVar12] = TVar2 == (TraceObject)0x7;
      if (TVar2 == (TraceObject)0x7) {
        if (*(char **)(this + lVar12 * 8 + 0x58) == (char *)0x0) {
          lVar10 = 0;
        }
        else {
          sVar5 = strlen(*(char **)(this + lVar12 * 8 + 0x58));
          lVar10 = sVar5 + 1;
        }
        uVar8 = lVar10 + uVar8;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar11);
  }
LAB_0147a430:
  if (uVar8 != 0) {
    if (*(void **)(this + 0x78) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x78));
    }
    __dest = operator_new__(uVar8);
    *(void **)(this + 0x78) = __dest;
    if ((param_12 & 1) == 0) {
      iVar11 = *(int *)(this + 0x38);
    }
    else {
      pcVar9 = *(char **)(this + 0x10);
      if (pcVar9 != (char *)0x0) {
        sVar5 = strlen(pcVar9);
        memcpy(__dest,pcVar9,sVar5 + 1);
        *(void **)(this + 0x10) = __dest;
        __dest = (void *)((long)__dest + sVar5 + 1);
      }
      pcVar9 = *(char **)(this + 0x18);
      if (pcVar9 != (char *)0x0) {
        sVar5 = strlen(pcVar9);
        memcpy(__dest,pcVar9,sVar5 + 1);
        *(void **)(this + 0x18) = __dest;
        __dest = (void *)((long)__dest + sVar5 + 1);
      }
      iVar11 = *(int *)(this + 0x38);
      if (iVar11 < 1) {
        return;
      }
      lVar12 = 0;
      pTVar1 = this + 0x40;
      pcVar9 = *(char **)pTVar1;
      while( true ) {
        if (pcVar9 != (char *)0x0) {
          sVar5 = strlen(pcVar9);
          memcpy(__dest,pcVar9,sVar5 + 1);
          *(void **)pTVar1 = __dest;
          iVar11 = *(int *)(this + 0x38);
          __dest = (void *)((long)__dest + sVar5 + 1);
        }
        lVar12 = lVar12 + 1;
        pTVar1 = pTVar1 + 8;
        if (iVar11 <= lVar12) break;
        pcVar9 = *(char **)pTVar1;
      }
    }
    if (0 < iVar11) {
      pTVar1 = this + 0x58;
      lVar12 = 0;
      while( true ) {
        if ((local_64[0] != '\0') && (pcVar9 = *(char **)pTVar1, pcVar9 != (char *)0x0)) {
          sVar5 = strlen(pcVar9);
          memcpy(__dest,pcVar9,sVar5 + 1);
          *(void **)pTVar1 = __dest;
          iVar11 = *(int *)(this + 0x38);
          __dest = (void *)((long)__dest + sVar5 + 1);
        }
        pTVar1 = pTVar1 + 8;
        if ((long)iVar11 <= lVar12 + 1) break;
        local_64[0] = local_64[lVar12 + 1];
        lVar12 = lVar12 + 1;
      }
    }
  }
  return;
}

