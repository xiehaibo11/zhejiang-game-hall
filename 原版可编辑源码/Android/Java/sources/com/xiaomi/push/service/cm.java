package com.xiaomi.push.service;

class cm implements Runnable {
    final XMPushService a;

    cm(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    @Override
    public void run() {
        this.a.a = true;
        try {
            com.xiaomi.channel.commonutils.logger.b.a("try to trigger the wifi digest broadcast.");
            Object systemService = this.a.getApplicationContext().getSystemService("MiuiWifiService");
            if (systemService != null) {
                com.xiaomi.push.bk.b(systemService, "sendCurrentWifiDigestInfo", new Object[0]);
            }
        } catch (Throwable unused) {
        }
    }
}
