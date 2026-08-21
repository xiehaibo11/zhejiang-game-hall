package com.xiaomi.push.service;

import com.xiaomi.push.service.bx;
import java.util.Iterator;

class by implements Runnable {
    final bx a;

    by(bx bxVar) {
        this.a = bxVar;
    }

    @Override
    public void run() {
        try {
            Iterator it = this.a.a.values().iterator();
            while (it.hasNext()) {
                ((bx.a) it.next()).run();
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("Sync job exception :" + e.getMessage());
        }
        this.a.a = false;
    }
}
