package com.qihoo360.replugin;

import android.os.IBinder;
import android.text.TextUtils;
import java.util.concurrent.ConcurrentHashMap;

public class g {
    private static g a;
    private ConcurrentHashMap<String, IBinder> b;

    public g() {
        this.b = new ConcurrentHashMap();
    }

    public static g a() {
        g r0 = a;
        if (r0 == null) goto L6;
        return r0;
    L6:
        monitor-enter(g.class);
    L13:
        th = move-exception;
        throw th;
    L8:
        if (a != null) goto L10;
        a = new g();     // Catch: Throwable -> L13
    L10:
        monitor-exit(g.class);     // Catch: Throwable -> L13
        return a;
    }

    public IBinder a(String r4) {
        if (TextUtils.isEmpty(r4) == true) goto L16;
        IBinder r0 = this.b.get(r4);
        if (r0 != null) goto L8;
        return null;
    L8:
        if (r0.isBinderAlive() == true) goto L10;
    L13:
        this.b.remove(r4);
        return null;
    L10:
        if (r0.pingBinder() == false) goto L13;
        return r0;
    L16:
        throw new IllegalArgumentException("service name can not value null");
    }

    public void a(String r2, IBinder r3) {
        this.b.put(r2, r3);
    }
}
