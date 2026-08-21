package com.igexin.push.core;

import android.content.ContentValues;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class n {
    private static volatile n e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f2579a = new Object();
    private final Map<String, Object> c = new HashMap();
    private final ExecutorService d = new ThreadPoolExecutor(0, 1, 30, TimeUnit.SECONDS, new LinkedBlockingQueue());
    private boolean b = false;

    private n() {
        b();
    }

    public static n a() {
        if (e == null) {
            synchronized (n.class) {
                if (e == null) {
                    e = new n();
                }
            }
        }
        return e;
    }

    private void b() {
        new Thread(new o(this), "MessageTaskIDPreferences-load").start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0063 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void c() throws java.lang.Throwable {
        /*
            r7 = this;
            java.lang.Object r0 = r7.f2579a
            monitor-enter(r0)
            boolean r1 = r7.b     // Catch: java.lang.Throwable -> La4
            if (r1 == 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            return
        L9:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            r0 = 0
            r1 = 1
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4 = 604800000(0x240c8400, double:2.988109026E-315)
            long r2 = r2 - r4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4.<init>()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r5 = " createtime >= "
            r4.append(r5)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            r4.append(r2)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            com.igexin.push.b.b r3 = r3.k()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            java.lang.String r4 = "message"
            java.lang.String r5 = "taskid"
            java.lang.String[] r5 = new java.lang.String[]{r5}     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            android.database.Cursor r2 = r3.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L90
            if (r2 == 0) goto L58
            int r3 = r2.getCount()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            if (r3 > 0) goto L42
            goto L58
        L42:
            boolean r3 = r2.moveToNext()     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            if (r3 == 0) goto L60
            java.util.Map<java.lang.String, java.lang.Object> r3 = r7.c     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            java.lang.String r4 = "taskid"
            int r4 = r2.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            java.lang.String r4 = r2.getString(r4)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            goto L42
        L58:
            java.lang.String r0 = "MessageTaskIDPreference|db cnt = 0"
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L74 java.lang.Exception -> L76
        L60:
            java.lang.Object r0 = r7.f2579a
            monitor-enter(r0)
            r7.b = r1     // Catch: java.lang.Throwable -> L71
            java.lang.Object r1 = r7.f2579a     // Catch: java.lang.Throwable -> L71
            r1.notifyAll()     // Catch: java.lang.Throwable -> L71
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto La0
            r2.close()     // Catch: java.lang.Throwable -> La0
            goto La0
        L71:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            throw r1
        L74:
            r0 = move-exception
            goto L7c
        L76:
            r0 = r2
            goto L90
        L78:
            r2 = move-exception
            r6 = r2
            r2 = r0
            r0 = r6
        L7c:
            java.lang.Object r3 = r7.f2579a
            monitor-enter(r3)
            r7.b = r1     // Catch: java.lang.Throwable -> L8d
            java.lang.Object r1 = r7.f2579a     // Catch: java.lang.Throwable -> L8d
            r1.notifyAll()     // Catch: java.lang.Throwable -> L8d
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8d
            if (r2 == 0) goto L8c
            r2.close()     // Catch: java.lang.Throwable -> L8c
        L8c:
            throw r0
        L8d:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8d
            throw r0
        L90:
            java.lang.Object r2 = r7.f2579a
            monitor-enter(r2)
            r7.b = r1     // Catch: java.lang.Throwable -> La1
            java.lang.Object r1 = r7.f2579a     // Catch: java.lang.Throwable -> La1
            r1.notifyAll()     // Catch: java.lang.Throwable -> La1
            monitor-exit(r2)     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto La0
            r0.close()     // Catch: java.lang.Throwable -> La0
        La0:
            return
        La1:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> La1
            throw r0
        La4:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La4
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.n.c():void");
    }

    private void d() {
        synchronized (this.f2579a) {
            while (!this.b) {
                try {
                    this.f2579a.wait();
                } catch (InterruptedException unused) {
                }
            }
        }
    }

    public void a(String str, ContentValues contentValues) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        d();
        synchronized (this.f2579a) {
            this.c.put(str, null);
        }
        this.d.execute(new p(this, contentValues));
    }

    public boolean a(String str) {
        boolean zContainsKey;
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        d();
        synchronized (this.f2579a) {
            zContainsKey = this.c.containsKey(str);
        }
        return zContainsKey;
    }

    public void b(String str, ContentValues contentValues) {
        if (a(str)) {
            this.d.execute(new q(this, contentValues, str));
        }
    }
}
