
/* MyXMLVisitor::getShadow() const */

void MyXMLVisitor::getShadow(void)

{
  undefined2 uVar1;
  long lVar2;
  long in_x0;
  undefined1 *in_x8;
  long lVar3;
  Size aSStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x10);
  do {
    if (lVar3 == *(long *)(in_x0 + 8)) {
      cocos2d::Size::Size(aSStack_40,2.0,-2.0);
      *in_x8 = 0;
      uVar1 = cocos2d::Color3B::BLACK;
      in_x8[3] = DAT_01792444;
      *(undefined2 *)(in_x8 + 1) = uVar1;
      cocos2d::Size::Size((Size *)(in_x8 + 4),aSStack_40);
      *(undefined4 *)(in_x8 + 0xc) = 0;
LAB_00dd1884:
      if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (*(int *)(lVar3 + -0x20) == 2) {
      *in_x8 = 1;
      uVar1 = *(undefined2 *)(lVar3 + -0x14);
      in_x8[3] = *(undefined1 *)(lVar3 + -0x12);
      *(undefined2 *)(in_x8 + 1) = uVar1;
      cocos2d::Size::Size((Size *)(in_x8 + 4),(Size *)(lVar3 + -0x10));
      *(undefined4 *)(in_x8 + 0xc) = *(undefined4 *)(lVar3 + -8);
      goto LAB_00dd1884;
    }
    lVar3 = lVar3 + -0x60;
  } while( true );
}

