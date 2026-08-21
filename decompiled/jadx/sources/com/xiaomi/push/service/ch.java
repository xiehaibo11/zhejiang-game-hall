package com.xiaomi.push.service;

import com.xiaomi.push.hj;
import com.xiaomi.push.ii;
import com.xiaomi.push.it;

/* JADX INFO: loaded from: classes4.dex */
final class ch implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ii f8359a;

    ch(ii iiVar) {
        this.f8359a = iiVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        byte[] bArrA = it.a(ah.a(this.f8359a.c(), this.f8359a.b(), this.f8359a, hj.Notification));
        if (cg.f8358a instanceof XMPushService) {
            ((XMPushService) cg.f8358a).a(this.f8359a.c(), bArrA, true);
        } else {
            com.xiaomi.channel.commonutils.logger.b.m43a("UNDatas UploadNotificationDatas failed because not xmsf");
        }
    }
}
