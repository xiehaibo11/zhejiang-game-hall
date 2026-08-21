
/* universe::network::Proxy33::translateMessage(universe::network::Touchbar&,
   universe::network::IncludeHistory&) */

void __thiscall
universe::network::Proxy33::translateMessage
          (Proxy33 *this,Touchbar *param_1,IncludeHistory *param_2)

{
  int *__dest;
  long lVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  IncludeHistory *pIVar9;
  OStream aOStack_b0 [24];
  OStream aOStack_98 [24];
  undefined **local_80;
  undefined8 local_78;
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = &PTR__Background_016a2428;
  local_78 = 0;
  local_70 = 0;
  OStream::OStream(aOStack_98,(char *)0x0,0);
  if (0xb < (ulong)(*(long *)param_1 - *(long *)(param_1 + 8))) {
    do {
      pcVar2 = (char *)Translated::getInstance();
      Translated::log(pcVar2,"readable = %d",*(long *)param_1 - *(long *)(param_1 + 8));
      OStream::fastSet(aOStack_98,(char *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)),0xc);
      (*(code *)local_80[4])(&local_80);
      (*(code *)local_80[3])(&local_80,aOStack_98);
      OStream::OStream(aOStack_b0,aOStack_98);
      OStream::~OStream(aOStack_b0);
      OStream::fastSet(aOStack_98,(char *)0x0,0);
      lVar7 = 0xc;
      if ((local_78 & 0x10) != 0) {
        lVar7 = 0x10;
      }
      uVar5 = *(long *)param_1 - *(long *)(param_1 + 8);
      if (uVar5 < lVar7 + (local_78 >> 0x10 & 0xffff)) break;
      if (0xb < uVar5) {
        uVar5 = 0xc;
      }
      if (uVar5 != 0) {
        *(ulong *)(param_1 + 8) = uVar5 + *(long *)(param_1 + 8);
      }
      if (IncludeSymbols::getInstance()::s_MessagePool == (IncludeSymbols *)0x0) {
        IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
        *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
      }
      piVar3 = (int *)IncludeSymbols::obtain(IncludeSymbols::getInstance()::s_MessagePool);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[0] = 1;
        piVar3[1] = 0;
        piVar3[4] = (uint)local_78._6_2_;
        piVar3[5] = local_70;
        piVar3[6] = (uint)local_78._4_2_;
        uVar5 = local_78 >> 0x10 & 0xffff;
        *(ulong *)(piVar3 + 8) = uVar5;
        if (((byte)local_78 >> 4 & 1) != 0) {
          OStream::fastSet(aOStack_98,(char *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)),4
                          );
          OStream::operator>>(aOStack_98,(uint *)(piVar3 + 0xb));
          OStream::fastSet(aOStack_98,(char *)0x0,0);
          uVar5 = *(long *)param_1 - *(long *)(param_1 + 8);
          if (3 < uVar5) {
            uVar5 = 4;
          }
          if (uVar5 != 0) {
            *(ulong *)(param_1 + 8) = uVar5 + *(long *)(param_1 + 8);
          }
          uVar5 = *(ulong *)(piVar3 + 8);
        }
        if (uVar5 != 0) {
          __dest = piVar3 + 0xc;
          __n = *(long *)param_1 - *(long *)(param_1 + 8);
          if (uVar5 <= __n) {
            __n = uVar5;
          }
          if (__n != 0) {
            memcpy(__dest,(void *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 8)),__n);
            *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
          }
          if ((local_78 & 1) != 0) {
            Encryption::decrypt((Encryption *)(this + 8),(uchar *)__dest,(uchar *)__dest,
                                *(ulong *)(piVar3 + 8),(uchar *)0x0,(int *)0x0);
          }
        }
        lVar7 = (long)*piVar3;
        if (*piVar3 < 4) {
          lVar4 = *(long *)(param_2 + lVar7 * 0x30 + 8);
          pIVar9 = param_2 + lVar7 * 0x30 + 0x28;
          lVar6 = *(long *)pIVar9;
          uVar5 = 0;
          if (*(long *)(param_2 + lVar7 * 0x30 + 0x10) - lVar4 != 0) {
            uVar5 = (*(long *)(param_2 + lVar7 * 0x30 + 0x10) - lVar4) * 0x40 - 1;
          }
          uVar8 = lVar6 + *(long *)(param_2 + lVar7 * 0x30 + 0x20);
          if (uVar5 == uVar8) {
            std::__ndk1::
            deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
            ::__add_back_capacity
                      ((deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
                        *)(param_2 + lVar7 * 0x30));
            lVar6 = *(long *)pIVar9;
            lVar4 = *(long *)(param_2 + lVar7 * 0x30 + 8);
            uVar8 = *(long *)(param_2 + lVar7 * 0x30 + 0x20) + lVar6;
          }
          *(int **)(*(long *)(lVar4 + (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8) =
               piVar3;
          *(long *)pIVar9 = lVar6 + 1;
        }
        else {
          operator_delete(piVar3);
        }
      }
    } while (0xb < (ulong)(*(long *)param_1 - *(long *)(param_1 + 8)));
  }
  OStream::~OStream(aOStack_98);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

