package com.xiaomi.push.service;

import com.xiaomi.push.dx;
import com.xiaomi.push.fx;
import com.xiaomi.push.ga;
import java.util.Map;

class cp extends fx {
    final XMPushService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    cp(XMPushService xMPushService, Map map, int i, String str, ga gaVar) {
        super(map, i, str, gaVar);
        this.a = xMPushService;
    }

    @Override
    public byte[] a() {
        try {
            dx.b bVar = new dx.b();
            bVar.a(bv.a().a());
            return bVar.a();
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("getOBBString err: " + e.toString());
            return null;
        }
    }
}
