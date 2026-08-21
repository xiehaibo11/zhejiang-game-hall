package com.igexin.push.d;

public class f implements i {
    @Override
    public long a() {
        long j;
        long j2;
        long j3;
        boolean zA = com.igexin.push.util.a.a(System.currentTimeMillis());
        boolean zA2 = com.igexin.push.util.a.a();
        com.igexin.push.core.d.i = com.igexin.push.util.a.f();
        com.igexin.b.a.c.b.a("NormalModel|isPushOn = " + com.igexin.push.core.d.k + " checkIsSilentTime = " + zA + " isBlockEndTime = " + zA2 + " isNetworkAvailable = " + com.igexin.push.core.d.i, new Object[0]);
        if (!com.igexin.push.core.d.i || !com.igexin.push.core.d.k || zA || !zA2) {
            com.igexin.b.a.c.b.a("NormalModel|reconnect stop, interval= 20min ++++", new Object[0]);
            return 1200000L;
        }
        if (com.igexin.push.core.d.F <= 0) {
            j3 = 100;
        } else {
            if (com.igexin.push.core.d.F <= com.heytap.mcssdk.constant.a.q) {
                j = com.igexin.push.core.d.F;
                j2 = 500;
            } else if (com.igexin.push.core.d.F <= 30000) {
                j = com.igexin.push.core.d.F;
                j2 = 1500;
            } else {
                j = com.igexin.push.core.d.F;
                j2 = 120000;
            }
            j3 = j + j2;
        }
        com.igexin.push.core.d.F = j3;
        if (com.igexin.push.core.d.F > 1200000) {
            com.igexin.push.core.d.F = 1200000L;
        }
        long j4 = com.igexin.push.core.d.F;
        com.igexin.b.a.c.b.a("NormalModel|after add auto reconnect delay time = " + j4, new Object[0]);
        return j4;
    }
}
