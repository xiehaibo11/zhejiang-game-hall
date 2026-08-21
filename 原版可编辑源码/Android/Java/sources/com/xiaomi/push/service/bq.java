package com.xiaomi.push.service;

import com.xiaomi.push.fh;
import com.xiaomi.push.service.XMPushService.e;

class bq {
    private static int d = 300000;
    private XMPushService a;
    private int b = 0;
    private int c = 0;
    private int a = 500;
    private long a = 0;

    public bq(XMPushService xMPushService) {
        this.a = xMPushService;
    }

    private int a() {
        double d2;
        if (this.b > 8) {
            return 300000;
        }
        double dRandom = (Math.random() * 2.0d) + 1.0d;
        int i = this.b;
        if (i > 4) {
            d2 = 60000.0d;
        } else {
            if (i <= 1) {
                if (this.a == 0) {
                    return 0;
                }
                if (System.currentTimeMillis() - this.a >= 310000) {
                    this.a = 1000;
                    this.c = 0;
                    return 0;
                }
                int i2 = this.a;
                int i3 = d;
                if (i2 >= i3) {
                    return i2;
                }
                int i4 = this.c + 1;
                this.c = i4;
                if (i4 >= 4) {
                    return i3;
                }
                this.a = (int) (((double) i2) * 1.5d);
                return i2;
            }
            d2 = 10000.0d;
        }
        return (int) (dRandom * d2);
    }

    public void a() {
        this.a = System.currentTimeMillis();
        this.a.a(1);
        this.b = 0;
    }

    public void a(boolean z) {
        if (!this.a.a()) {
            com.xiaomi.channel.commonutils.logger.b.c("should not reconnect as no client or network.");
            return;
        }
        if (z) {
            if (!this.a.a(1)) {
                this.b++;
            }
            this.a.a(1);
            XMPushService xMPushService = this.a;
            XMPushService xMPushService2 = this.a;
            xMPushService2.getClass();
            xMPushService.a(xMPushService2.new e());
            return;
        }
        if (this.a.a(1)) {
            return;
        }
        int iA = a();
        this.b++;
        com.xiaomi.channel.commonutils.logger.b.a("schedule reconnect in " + iA + "ms");
        XMPushService xMPushService3 = this.a;
        XMPushService xMPushService4 = this.a;
        xMPushService4.getClass();
        xMPushService3.a(xMPushService4.new e(), (long) iA);
        if (this.b == 2 && fh.a().a()) {
            ap.b();
        }
        if (this.b == 3) {
            ap.a();
        }
    }
}
