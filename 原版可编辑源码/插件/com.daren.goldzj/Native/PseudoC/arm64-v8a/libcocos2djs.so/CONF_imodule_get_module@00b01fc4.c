
CONF_MODULE * CONF_imodule_get_module(CONF_IMODULE *md)

{
                    /* try { // try from 00b01fc8 to 00c01fd3 has its CatchHandler @ 00b02014 */
  return *(CONF_MODULE **)md;
}

