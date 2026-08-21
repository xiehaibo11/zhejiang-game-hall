package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: SameOptimizedController.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ab {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile ConcurrentHashMap<String, Boolean> f3512a;
    private volatile ConcurrentHashMap<String, Integer> b;
    private volatile com.mbridge.msdk.c.a c;
    private volatile JSONObject d;
    private final Object e;
    private final Object f;
    private final Object g;
    private String h;

    private ab() {
        this.e = new Object();
        this.f = new Object();
        this.g = new Object();
    }

    public static ab a() {
        return a.f3513a;
    }

    public final int a(String str, int i) {
        Integer numValueOf;
        try {
            if (TextUtils.isEmpty(str)) {
                return i;
            }
            ConcurrentHashMap<String, Integer> concurrentHashMapD = d();
            Integer numB = b(str, concurrentHashMapD);
            if (numB != null) {
                return numB.intValue();
            }
            try {
                numValueOf = Integer.valueOf(b(str, i));
            } catch (Exception unused) {
                numValueOf = Integer.valueOf(i);
            }
            concurrentHashMapD.put(str, numValueOf);
            return numValueOf.intValue();
        } catch (Exception unused2) {
            return i;
        }
    }

    public final boolean a(String str, boolean z) {
        Boolean boolValueOf;
        try {
            if (TextUtils.isEmpty(str)) {
                return z;
            }
            ConcurrentHashMap<String, Boolean> concurrentHashMapC = c();
            Boolean boolA = a(str, concurrentHashMapC);
            if (boolA != null) {
                return boolA.booleanValue();
            }
            try {
                boolValueOf = Boolean.valueOf(b(str, z));
            } catch (Exception unused) {
                boolValueOf = Boolean.valueOf(z);
            }
            concurrentHashMapC.put(str, boolValueOf);
            return boolValueOf.booleanValue();
        } catch (Exception unused2) {
            return z;
        }
    }

    private static Boolean a(String str, ConcurrentHashMap<String, Boolean> concurrentHashMap) {
        try {
            return concurrentHashMap.get(str);
        } catch (Exception unused) {
            return null;
        }
    }

    private static Integer b(String str, ConcurrentHashMap<String, Integer> concurrentHashMap) {
        try {
            return concurrentHashMap.get(str);
        } catch (Exception unused) {
            return null;
        }
    }

    private boolean b(String str, boolean z) {
        if (b()) {
            return z;
        }
        try {
            return this.d.optInt(str, z ? 1 : 0) != 0;
        } catch (Exception unused) {
            return z;
        }
    }

    private int b(String str, int i) {
        if (b()) {
            return i;
        }
        try {
            return this.d.optInt(str, i);
        } catch (Exception unused) {
            return i;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x003e A[Catch: all -> 0x0051, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0009, B:18:0x003a, B:20:0x003e, B:21:0x0046, B:11:0x0016, B:13:0x001e, B:14:0x002a, B:17:0x0038), top: B:31:0x0003, inners: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0016 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean b() {
        /*
            r5 = this;
            java.lang.Object r0 = r5.g
            monitor-enter(r0)
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L16
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            int r1 = r1.aY()     // Catch: java.lang.Throwable -> L51
            if (r1 != r3) goto L13
            r1 = r3
            goto L14
        L13:
            r1 = r2
        L14:
            if (r1 == 0) goto L3a
        L16:
            java.lang.String r1 = r5.h     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            if (r1 == 0) goto L2a
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            java.lang.String r4 = "sdk_app_id"
            java.lang.String r1 = r1.b(r4)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            r5.h = r1     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
        L2a:
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            java.lang.String r4 = r5.h     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            com.mbridge.msdk.c.a r1 = r1.g(r4)     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            r5.c = r1     // Catch: java.lang.Exception -> L37 java.lang.Throwable -> L51
            goto L3a
        L37:
            r1 = 0
            r5.c = r1     // Catch: java.lang.Throwable -> L51
        L3a:
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L46
            com.mbridge.msdk.c.a r1 = r5.c     // Catch: java.lang.Throwable -> L51
            org.json.JSONObject r1 = r1.s()     // Catch: java.lang.Throwable -> L51
            r5.d = r1     // Catch: java.lang.Throwable -> L51
        L46:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            com.mbridge.msdk.c.a r0 = r5.c
            if (r0 == 0) goto L4f
            org.json.JSONObject r0 = r5.d
            if (r0 != 0) goto L50
        L4f:
            r2 = r3
        L50:
            return r2
        L51:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L51
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.ab.b():boolean");
    }

    private ConcurrentHashMap<String, Boolean> c() {
        synchronized (this.e) {
            if (this.f3512a == null) {
                this.f3512a = new ConcurrentHashMap<>();
            }
        }
        return this.f3512a;
    }

    private ConcurrentHashMap<String, Integer> d() {
        synchronized (this.f) {
            if (this.b == null) {
                this.b = new ConcurrentHashMap<>();
            }
        }
        return this.b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: compiled from: SameOptimizedController.java */
    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final ab f3513a = new ab();
    }
}
