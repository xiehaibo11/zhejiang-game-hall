package com.xiaomi.push;

import android.content.Context;
import com.xiaomi.push.service.XMJobService;

/* JADX INFO: loaded from: classes4.dex */
public final class eu {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static a f340a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final String f341a = XMJobService.class.getCanonicalName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f8140a = 0;

    interface a {
        void a();

        void a(boolean z);

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        boolean mo329a();
    }

    public static synchronized void a() {
        if (f340a == null) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("[Alarm] stop alarm.");
        f340a.a();
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0048  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x007e A[EDGE_INSN: B:49:0x007e->B:30:0x007e BREAK  A[LOOP:0: B:11:0x0032->B:27:0x0078], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(android.content.Context r9) {
        /*
            Method dump skipped, instruction units count: 212
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.eu.a(android.content.Context):void");
    }

    public static synchronized void a(Context context, int i) {
        int i2 = f8140a;
        if (!"com.xiaomi.xmsf".equals(context.getPackageName())) {
            if (i == 2) {
                f8140a = 2;
            } else {
                f8140a = 0;
            }
        }
        if (i2 != f8140a && f8140a == 2) {
            a();
            f340a = new ex(context);
        }
    }

    public static synchronized void a(boolean z) {
        if (f340a == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("timer is not initialized");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("[Alarm] register alarm. (" + z + ")");
        f340a.a(z);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static synchronized boolean m328a() {
        if (f340a == null) {
            return false;
        }
        return f340a.mo329a();
    }
}
