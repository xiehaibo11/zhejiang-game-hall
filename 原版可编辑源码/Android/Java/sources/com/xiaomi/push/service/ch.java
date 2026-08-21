package com.xiaomi.push.service;

import com.xiaomi.push.hj;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;

final class ch implements Runnable {
    final ii a;

    ch(ii iiVar) {
        this.a = iiVar;
    }

    @Override
    public void run() {
        byte[] bArrA = it.a(ah.a(this.a.c(), this.a.b(), this.a, hj.i));
        if (cg.a instanceof XMPushService) {
            ((XMPushService) cg.a).a(this.a.c(), bArrA, true);
        } else {
            com.xiaomi.channel.commonutils.logger.b.a("UNDatas UploadNotificationDatas failed because not xmsf");
        }
    }
}
