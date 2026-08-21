
/* cocos2d::network::SocketIO::getInstance() */

void cocos2d::network::SocketIO::getInstance(void)

{
  if ((_inst == (undefined8 *)0x0) &&
     (_inst = operator_new(0x30,(nothrow_t *)&std::nothrow), _inst != (undefined8 *)0x0)) {
    _inst[4] = 0;
    _inst[3] = 0;
    _inst[2] = 0;
    _inst[1] = 0;
    *_inst = &PTR__SocketIO_01c6bed8;
                    /* try { // try from 009e3d54 to 00ae3db3 has its CatchHandler @ 009e3c64 */
    *(undefined4 *)(_inst + 5) = 0x3f800000;
  }
  return;
}

