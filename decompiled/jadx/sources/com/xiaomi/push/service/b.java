package com.xiaomi.push.service;

import com.tencent.connect.common.Constants;
import com.xiaomi.push.al;
import com.xiaomi.push.hj;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes4.dex */
public class b extends al.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ii f8324a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private WeakReference<XMPushService> f932a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private boolean f933a;

    public b(ii iiVar, WeakReference<XMPushService> weakReference, boolean z) {
        this.f933a = false;
        this.f8324a = iiVar;
        this.f932a = weakReference;
        this.f933a = z;
    }

    @Override // com.xiaomi.push.al.a
    /* JADX INFO: renamed from: a */
    public String mo162a() {
        return Constants.VIA_REPORT_TYPE_DATALINE;
    }

    @Override // java.lang.Runnable
    public void run() {
        XMPushService xMPushService;
        WeakReference<XMPushService> weakReference = this.f932a;
        if (weakReference == null || this.f8324a == null || (xMPushService = weakReference.get()) == null) {
            return;
        }
        this.f8324a.a(bd.a());
        this.f8324a.a(false);
        com.xiaomi.channel.commonutils.logger.b.c("MoleInfo aw_ping : send aw_Ping msg " + this.f8324a.m493a());
        try {
            String strC = this.f8324a.c();
            xMPushService.a(strC, it.a(ah.a(strC, this.f8324a.b(), this.f8324a, hj.Notification)), this.f933a);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d("MoleInfo aw_ping : send help app ping error" + e.toString());
        }
    }
}
