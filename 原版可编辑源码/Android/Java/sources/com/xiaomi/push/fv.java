package com.xiaomi.push;

import java.util.Date;

class fv implements fz {
    final fu a;

    fv(fu fuVar) {
        this.a = fuVar;
    }

    @Override
    public void a(fw fwVar) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.a.a.format(new Date()) + " Connection started (" + this.a.a.hashCode() + ")");
    }

    @Override
    public void a(fw fwVar, int i, Exception exc) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.a.a.format(new Date()) + " Connection closed (" + this.a.a.hashCode() + ")");
    }

    @Override
    public void a(fw fwVar, Exception exc) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.a.a.format(new Date()) + " Reconnection failed due to an exception (" + this.a.a.hashCode() + ")");
        exc.printStackTrace();
    }

    @Override
    public void b(fw fwVar) {
        com.xiaomi.channel.commonutils.logger.b.c("[Slim] " + this.a.a.format(new Date()) + " Connection reconnected (" + this.a.a.hashCode() + ")");
    }
}
