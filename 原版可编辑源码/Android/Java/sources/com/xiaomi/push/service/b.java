package com.xiaomi.push.service;

import com.tencent.connect.common.Constants;
import com.xiaomi.push.al;
import com.xiaomi.push.hj;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import java.lang.ref.WeakReference;

public class b extends al.a {
    private ii a;
    private WeakReference<XMPushService> a;
    private boolean a;

    public b(ii iiVar, WeakReference<XMPushService> weakReference, boolean z) {
        this.a = false;
        this.a = iiVar;
        this.a = weakReference;
        this.a = z;
    }

    @Override
    public String a() {
        return Constants.VIA_REPORT_TYPE_DATALINE;
    }

    @Override
    public void run() {
        XMPushService xMPushService;
        WeakReference<XMPushService> weakReference = this.a;
        if (weakReference == null || this.a == null || (xMPushService = weakReference.get()) == null) {
            return;
        }
        this.a.a(bd.a());
        this.a.a(false);
        com.xiaomi.channel.commonutils.logger.b.c("MoleInfo aw_ping : send aw_Ping msg " + this.a.a());
        try {
            String strC = this.a.c();
            xMPushService.a(strC, it.a(ah.a(strC, this.a.b(), this.a, hj.i)), this.a);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("MoleInfo aw_ping : send help app ping error" + e.toString());
        }
    }
}
