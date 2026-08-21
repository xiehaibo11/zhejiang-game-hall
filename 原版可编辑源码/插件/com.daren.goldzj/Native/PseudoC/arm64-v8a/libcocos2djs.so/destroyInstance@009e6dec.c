
/* cocos2d::network::SocketIO::destroyInstance() */

void cocos2d::network::SocketIO::destroyInstance(void)

{
                    /* try { // try from 009e6df0 to 00ae6e33 has its CatchHandler @ 009e6e48 */
  if (_inst != (long *)0x0) {
    (**(code **)(*_inst + 8))();
  }
  _inst = (long *)0x0;
  return;
}

