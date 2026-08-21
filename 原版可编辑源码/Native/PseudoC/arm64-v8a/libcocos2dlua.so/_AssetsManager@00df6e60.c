
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::AssetsManager::~AssetsManager() */

void __thiscall cocos2d::extension::AssetsManager::~AssetsManager(AssetsManager *this)

{
  AssetsManager AVar1;
  Downloader *this_00;
  
                    /* try { // try from 00df6e74 to 00ef6e7f has its CatchHandler @ 00df701c */
  *(undefined ***)this = &PTR__AssetsManager_016e7648;
  if ((this[0x389] != (AssetsManager)0x0) && (*(long **)(this + 0x380) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x380) + 8))();
  }
                    /* try { // try from 00df6e9c to 00ef6eaf has its CatchHandler @ 00df6f94 */
  this_00 = *(Downloader **)(this + 0x370);
  if (this_00 != (Downloader *)0x0) {
    network::Downloader::~Downloader(this_00);
                    /* try { // try from 00df6eb0 to 00ef70ab has its CatchHandler @ 00df6d5c */
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x370) = 0;
  if (((byte)this[0x358] & 1) == 0) {
    AVar1 = this[0x340];
  }
  else {
    operator_delete(*(void **)(this + 0x368));
    AVar1 = this[0x340];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x328];
  }
  else {
    operator_delete(*(void **)(this + 0x350));
    AVar1 = this[0x328];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x310];
  }
  else {
    operator_delete(*(void **)(this + 0x338));
    AVar1 = this[0x310];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x2f8];
  }
  else {
    operator_delete(*(void **)(this + 800));
    AVar1 = this[0x2f8];
  }
  if (((byte)AVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x308));
  }
  Node::~Node((Node *)this);
  return;
}

