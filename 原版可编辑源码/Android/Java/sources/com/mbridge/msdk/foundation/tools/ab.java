package com.mbridge.msdk.foundation.tools;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

public final class ab {
    private volatile ConcurrentHashMap<String, Boolean> a;
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
        return a.a;
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
    */
    private boolean b() {
        synchronized (this.g) {
            if (this.c == null) {
                try {
                    if (TextUtils.isEmpty(this.h)) {
                        this.h = com.mbridge.msdk.foundation.a.a.a.a().b(MBridgeConstans.SDK_APP_ID);
                    }
                    this.c = com.mbridge.msdk.c.b.a().g(this.h);
                } catch (Exception unused) {
                    this.c = null;
                }
                if (this.c != null) {
                    this.d = this.c.s();
                }
            } else {
                if (!(this.c.aY() == 1)) {
                    if (this.c != null) {
                    }
                }
            }
        }
        return this.c == null || this.d == null;
    }

    private ConcurrentHashMap<String, Boolean> c() {
        synchronized (this.e) {
            if (this.a == null) {
                this.a = new ConcurrentHashMap<>();
            }
        }
        return this.a;
    }

    private ConcurrentHashMap<String, Integer> d() {
        synchronized (this.f) {
            if (this.b == null) {
                this.b = new ConcurrentHashMap<>();
            }
        }
        return this.b;
    }

    private static final class a {
        private static final ab a = new ab();
    }
}
