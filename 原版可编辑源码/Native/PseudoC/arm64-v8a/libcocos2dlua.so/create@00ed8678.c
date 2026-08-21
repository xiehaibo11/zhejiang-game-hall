
/* cocos2d::Show::create() */

Action * cocos2d::Show::create(void)

{
  Action *this;
  
                    /* catch() { ... } // from try @ 00ed7c7c with catch @ 00ed8678 */
                    /* catch() { ... } // from try @ 00ed8258 with catch @ 00ed867c */
                    /* catch() { ... } // from try @ 00ed7ca0 with catch @ 00ed8680 */
                    /* catch() { ... } // from try @ 00ed7d30 with catch @ 00ed8684
                       catch() { ... } // from try @ 00ed7f30 with catch @ 00ed8684
                       catch() { ... } // from try @ 00ed8088 with catch @ 00ed8684
                       catch() { ... } // from try @ 00ed828c with catch @ 00ed8684 */
                    /* catch() { ... } // from try @ 00ed7ee4 with catch @ 00ed8688 */
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ed83b4 with catch @ 00ed8698
                       catch() { ... } // from try @ 00ed8420 with catch @ 00ed8698 */
  if (this != (Action *)0x0) {
                    /* catch() { ... } // from try @ 00ed8180 with catch @ 00ed869c */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00ed7b3c with catch @ 00ed86bc
                       catch() { ... } // from try @ 00ed7bec with catch @ 00ed86bc
                       catch() { ... } // from try @ 00ed7ccc with catch @ 00ed86bc */
    *(undefined ***)this = &PTR__Action_016f7f40;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7fa0;
                    /* catch() { ... } // from try @ 00ed7f94 with catch @ 00ed86c4 */
    Ref::autorelease((Ref *)this);
  }
                    /* catch() { ... } // from try @ 00ed7e64 with catch @ 00ed86c8 */
  return this;
}

