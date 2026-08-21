package com.xiaomi.push.service;

/* JADX INFO: loaded from: classes4.dex */
class cm implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ XMPushService f8364a;

    cm(XMPushService xMPushService) {
        this.f8364a = xMPushService;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f8364a.f874a = true;
        try {
            com.xiaomi.channel.commonutils.logger.b.m43a("try to trigger the wifi digest broadcast.");
            Object systemService = this.f8364a.getApplicationContext().getSystemService("MiuiWifiService");
            if (systemService != null) {
                com.xiaomi.push.bk.b(systemService, "sendCurrentWifiDigestInfo", new Object[0]);
            }
        } catch (Throwable unused) {
        }
    }
}
