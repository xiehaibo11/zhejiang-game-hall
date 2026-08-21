package com.tkay.core.common;

import android.text.TextUtils;
import com.tkay.core.api.AdError;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6312a = t.class.getSimpleName();
    private static volatile t b;
    private Map<String, com.tkay.core.common.f.v> c;
    private List<com.tkay.core.common.f.v> d;
    private final int f = 5;
    private final int g = 500;
    private List<String> e = Collections.synchronizedList(new ArrayList(8));

    public static boolean a(int i) {
        boolean z;
        switch (i) {
            case -1003:
            case -1002:
            case -1001:
            case -1000:
                z = true;
                break;
            default:
                z = false;
                break;
        }
        if (z || ((i < -99 || i >= 200) && i < 400)) {
            return z;
        }
        return true;
    }

    private t() {
    }

    public static t a() {
        if (b == null) {
            synchronized (t.class) {
                if (b == null) {
                    b = new t();
                }
            }
        }
        return b;
    }

    public final synchronized void a(String str, String str2, long j) {
        com.tkay.core.common.f.v vVar = new com.tkay.core.common.f.v();
        vVar.b = 2;
        vVar.d = str;
        vVar.c = str2;
        vVar.f = j;
        new StringBuilder("reSendNow: ").append(vVar.a());
        a(vVar, false);
    }

    private synchronized void a(final com.tkay.core.common.f.v vVar, final boolean z) {
        if (System.currentTimeMillis() > vVar.f) {
            new StringBuilder("resendNoticeUrl: do nothing because offer is out date: ").append(vVar.a());
            this.e.remove(vVar.f6166a);
            if (z) {
                a(vVar);
            }
            return;
        }
        if (this.e.contains(vVar.f6166a)) {
            new StringBuilder("resendNoticeUrl: do nothing because it is loading... ").append(vVar.a());
            return;
        }
        this.e.add(vVar.f6166a);
        if (z) {
            vVar.g++;
            if (vVar.g >= 5) {
                new StringBuilder("resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: ").append(vVar.a());
                a(vVar);
            } else {
                b(vVar);
            }
        } else {
            vVar.g++;
            if (vVar.g >= 5) {
                new StringBuilder("resendNoticeUrl: The number of retries is greater than or equal to the maximum number of retries, start deleting and continue: ").append(vVar.a());
                this.e.remove(vVar.f6166a);
                return;
            }
        }
        new StringBuilder("resendNoticeUrl: start to send notice: ").append(vVar.a());
        new com.tkay.core.common.h.m(vVar).a(0, new com.tkay.core.common.h.k() { // from class: com.tkay.core.common.t.1
            @Override // com.tkay.core.common.h.k
            public final void onLoadStart(int i) {
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadFinish(int i, Object obj) {
                String str = t.f6312a;
                new StringBuilder("resendNoticeUrl:  send notice success: ").append(vVar.a());
                synchronized (t.this) {
                    t.this.e.remove(vVar.f6166a);
                    if (z) {
                        t.this.a(vVar);
                    }
                }
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadError(int i, String str, AdError adError) {
                String str2 = t.f6312a;
                new StringBuilder("resendNoticeUrl:  send notice failed: ").append(vVar.a());
                synchronized (t.this) {
                    t.this.e.remove(vVar.f6166a);
                    if (!z) {
                        t.this.b(vVar);
                    }
                }
            }

            @Override // com.tkay.core.common.h.k
            public final void onLoadCanceled(int i) {
                synchronized (t.this) {
                    t.this.e.remove(vVar.f6166a);
                }
            }
        });
    }

    public final synchronized void b() {
        try {
            c();
            List<com.tkay.core.common.f.v> listSynchronizedList = Collections.synchronizedList(new ArrayList(this.d));
            if (listSynchronizedList != null && listSynchronizedList.size() > 0) {
                for (com.tkay.core.common.f.v vVar : listSynchronizedList) {
                    new StringBuilder("tryToReSendNoticeUrl: ").append(vVar.a());
                    a(vVar, true);
                }
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002e A[Catch: all -> 0x0046, TryCatch #0 {, blocks: (B:11:0x002a, B:13:0x002e, B:14:0x0035, B:16:0x0039, B:10:0x0027, B:3:0x0001, B:5:0x0005, B:7:0x0009), top: B:22:0x0001, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0039 A[Catch: all -> 0x0046, TRY_LEAVE, TryCatch #0 {, blocks: (B:11:0x002a, B:13:0x002e, B:14:0x0035, B:16:0x0039, B:10:0x0027, B:3:0x0001, B:5:0x0005, B:7:0x0009), top: B:22:0x0001, inners: #1 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized void c() {
        /*
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r2.c     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L2a
            java.util.List<com.tkay.core.common.f.v> r0 = r2.d     // Catch: java.lang.Throwable -> L26
            if (r0 != 0) goto L2a
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L26
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.i r0 = com.tkay.core.common.c.i.a(r0)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.c.i$a r0 = r0.c()     // Catch: java.lang.Throwable -> L26
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r1 = r0.b     // Catch: java.lang.Throwable -> L26
            r2.c = r1     // Catch: java.lang.Throwable -> L26
            java.util.List<com.tkay.core.common.f.v> r0 = r0.f6104a     // Catch: java.lang.Throwable -> L26
            r2.d = r0     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L46
        L2a:
            java.util.Map<java.lang.String, com.tkay.core.common.f.v> r0 = r2.c     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto L35
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            r2.c = r0     // Catch: java.lang.Throwable -> L46
        L35:
            java.util.List<com.tkay.core.common.f.v> r0 = r2.d     // Catch: java.lang.Throwable -> L46
            if (r0 != 0) goto L44
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L46
            r0.<init>()     // Catch: java.lang.Throwable -> L46
            java.util.List r0 = java.util.Collections.synchronizedList(r0)     // Catch: java.lang.Throwable -> L46
            r2.d = r0     // Catch: java.lang.Throwable -> L46
        L44:
            monitor-exit(r2)
            return
        L46:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.t.c():void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(com.tkay.core.common.f.v vVar) {
        new StringBuilder("delete: ").append(vVar.a());
        this.c.remove(vVar.f6166a);
        this.d.remove(vVar);
        com.tkay.core.common.c.i.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).b(vVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void b(com.tkay.core.common.f.v vVar) {
        if (TextUtils.isEmpty(vVar.f6166a)) {
            vVar.e = System.currentTimeMillis();
            vVar.f6166a = com.tkay.core.common.l.f.a(vVar.d + vVar.e);
            this.c.put(vVar.f6166a, vVar);
            this.d.add(vVar);
        }
        new StringBuilder("insertOrUpdate: ").append(vVar.a());
        com.tkay.core.common.c.i.a(com.tkay.core.common.c.c.a(com.tkay.core.common.b.m.a().f())).a(vVar);
        if (this.d.size() > 500) {
            com.tkay.core.common.f.v vVar2 = this.d.get(0);
            new StringBuilder("insertOrUpdate,  exceeded the maximum number of records, start to delete: ").append(vVar.a());
            this.e.remove(vVar.f6166a);
            a(vVar2);
        }
    }
}
