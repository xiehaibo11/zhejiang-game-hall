
/* fairygui::GList::handleScroll(bool) */

void __thiscall fairygui::GList::handleScroll(GList *this,bool param_1)

{
  ulong uVar1;
  
  if (this[0x35c] == (GList)0x0) {
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 2:
      uVar1 = handleScroll1(this,param_1);
      if ((((((uVar1 & 1) != 0) && (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
           (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
          (((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
            (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
           ((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
            ((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)))))))) &&
         (((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
           ((((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
              (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
             (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
            ((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)))))) &&
          ((((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
             ((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
              (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)))) &&
            (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)) &&
           ((uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0 &&
            (uVar1 = handleScroll1(this,false), (uVar1 & 1) != 0)))))))) {
        handleScroll1(this,false);
      }
      handleArchOrder1(this);
      break;
    case 1:
    case 3:
      uVar1 = handleScroll2(this,param_1);
      if ((((((((uVar1 & 1) != 0) && (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
             (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
            ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)))) &&
           ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
            ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)))))) &&
          (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
         (((((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
            (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
           (((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
             (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)) &&
            ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
             ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
              (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)))))))) &&
          ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
           ((uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0 &&
            (uVar1 = handleScroll2(this,false), (uVar1 & 1) != 0)))))))) {
        handleScroll2(this,false);
      }
      handleArchOrder2(this);
      break;
    default:
      handleScroll3(this,param_1);
    }
    this[600] = (GList)0x0;
  }
  return;
}

