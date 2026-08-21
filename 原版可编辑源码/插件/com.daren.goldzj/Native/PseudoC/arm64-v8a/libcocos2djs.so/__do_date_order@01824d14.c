
/* std::__ndk1::__time_get_storage<wchar_t>::__do_date_order() const */

undefined8 __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__do_date_order(__time_get_storage<wchar_t> *this)

{
  __time_get_storage<wchar_t> _Var1;
  __time_get_storage<wchar_t> *p_Var2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  __time_get_storage<wchar_t> *p_Var7;
  
  _Var1 = this[0x3f8];
  p_Var2 = this + 0x3fc;
  uVar4 = 2;
  uVar3 = (ulong)((byte)_Var1 >> 1);
  while( true ) {
    uVar6 = uVar3;
    if (((byte)_Var1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x400);
    }
    if (uVar6 <= uVar4 - 2) break;
    p_Var7 = p_Var2;
    if (((byte)_Var1 & 1) != 0) {
      p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
    }
    if (*(int *)(p_Var7 + (ulong)(uVar4 - 2) * 4) == 0x25) break;
    uVar4 = uVar4 + 1;
  }
  p_Var7 = p_Var2;
  if (((byte)_Var1 & 1) != 0) {
    p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
  }
  switch(*(undefined4 *)(p_Var7 + (ulong)(uVar4 - 1) * 4)) {
  case 0x59:
  case 0x79:
    while( true ) {
      uVar5 = (ulong)uVar4;
      uVar6 = uVar3;
      if (((byte)_Var1 & 1) != 0) {
        uVar6 = *(ulong *)(this + 0x400);
      }
      if (uVar6 <= uVar5) break;
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
      uVar4 = uVar4 + 1;
    }
    uVar6 = uVar3;
    if (((byte)_Var1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x400);
    }
    if (uVar6 != uVar5) {
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 100) {
        uVar4 = uVar4 + 2;
        while( true ) {
          uVar5 = (ulong)uVar4;
          uVar6 = uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar6 = *(ulong *)(this + 0x400);
          }
          if (uVar6 <= uVar5) break;
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
          uVar4 = uVar4 + 1;
        }
        if (((byte)_Var1 & 1) != 0) {
          uVar3 = *(ulong *)(this + 0x400);
        }
        if (uVar3 != uVar5) {
          if (((byte)_Var1 & 1) != 0) {
            p_Var2 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var2 + (ulong)(uVar4 + 1) * 4) == 0x6d) {
            return 4;
          }
        }
      }
      else if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 0x6d) {
        uVar4 = uVar4 + 2;
        while( true ) {
          uVar5 = (ulong)uVar4;
          uVar6 = uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar6 = *(ulong *)(this + 0x400);
          }
          if (uVar6 <= uVar5) break;
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
          uVar4 = uVar4 + 1;
        }
        if (((byte)_Var1 & 1) != 0) {
          uVar3 = *(ulong *)(this + 0x400);
        }
        if (uVar3 != uVar5) {
          if (((byte)_Var1 & 1) != 0) {
            p_Var2 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var2 + (ulong)(uVar4 + 1) * 4) == 100) {
            return 3;
          }
        }
      }
    }
    break;
  case 100:
    while( true ) {
      uVar5 = (ulong)uVar4;
      uVar6 = uVar3;
      if (((byte)_Var1 & 1) != 0) {
        uVar6 = *(ulong *)(this + 0x400);
      }
      if (uVar6 <= uVar5) break;
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
      uVar4 = uVar4 + 1;
    }
    uVar6 = uVar3;
    if (((byte)_Var1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x400);
    }
    if (uVar6 != uVar5) {
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 0x6d) {
        uVar4 = uVar4 + 2;
        while( true ) {
          uVar5 = (ulong)uVar4;
          uVar6 = uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar6 = *(ulong *)(this + 0x400);
          }
          if (uVar6 <= uVar5) break;
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
          uVar4 = uVar4 + 1;
        }
        if (((byte)_Var1 & 1) != 0) {
          uVar3 = *(ulong *)(this + 0x400);
        }
        if (uVar3 != uVar5) {
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 0x79) {
            return 1;
          }
          if (((byte)_Var1 & 1) != 0) {
            p_Var2 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var2 + (ulong)(uVar4 + 1) * 4) == 0x59) {
            return 1;
          }
        }
      }
    }
    break;
  case 0x6d:
    while( true ) {
      uVar5 = (ulong)uVar4;
      uVar6 = uVar3;
      if (((byte)_Var1 & 1) != 0) {
        uVar6 = *(ulong *)(this + 0x400);
      }
      if (uVar6 <= uVar5) break;
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
      uVar4 = uVar4 + 1;
    }
    uVar6 = uVar3;
    if (((byte)_Var1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x400);
    }
    if (uVar6 != uVar5) {
      p_Var7 = p_Var2;
      if (((byte)_Var1 & 1) != 0) {
        p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
      }
      if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 100) {
        uVar4 = uVar4 + 2;
        while( true ) {
          uVar5 = (ulong)uVar4;
          uVar6 = uVar3;
          if (((byte)_Var1 & 1) != 0) {
            uVar6 = *(ulong *)(this + 0x400);
          }
          if (uVar6 <= uVar5) break;
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + uVar5 * 4) == 0x25) break;
          uVar4 = uVar4 + 1;
        }
        if (((byte)_Var1 & 1) != 0) {
          uVar3 = *(ulong *)(this + 0x400);
        }
        if (uVar3 != uVar5) {
          p_Var7 = p_Var2;
          if (((byte)_Var1 & 1) != 0) {
            p_Var7 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var7 + (ulong)(uVar4 + 1) * 4) == 0x79) {
            return 2;
          }
          if (((byte)_Var1 & 1) != 0) {
            p_Var2 = *(__time_get_storage<wchar_t> **)(this + 0x408);
          }
          if (*(int *)(p_Var2 + (ulong)(uVar4 + 1) * 4) == 0x59) {
            return 2;
          }
        }
      }
    }
  }
  return 0;
}

