package com.tkay.core.common.res;

import com.huawei.hms.framework.common.ContainerUtils;
import java.util.LinkedHashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class c<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final LinkedHashMap<K, V> f6303a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;

    private static V b() {
        return null;
    }

    protected int a(K k, V v) {
        return 1;
    }

    protected void a(boolean z, K k, V v, V v2) {
    }

    public c(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        this.c = i;
        this.f6303a = new LinkedHashMap<>(0, 0.75f, true);
    }

    private void a(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("maxSize <= 0");
        }
        synchronized (this) {
            this.c = i;
        }
        b(i);
    }

    public final V a(K k) {
        if (k == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            V v = this.f6303a.get(k);
            if (v != null) {
                this.g++;
                return v;
            }
            this.h++;
            return null;
        }
    }

    public final V b(K k, V v) {
        V vPut;
        if (k == null) {
            throw new NullPointerException("key == null || value == null");
        }
        synchronized (this) {
            this.d++;
            this.b += c(k, v);
            vPut = this.f6303a.put(k, v);
            if (vPut != null) {
                this.b -= c(k, vPut);
            }
        }
        if (vPut != null) {
            a(false, k, vPut, v);
        }
        b(this.c);
        return vPut;
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x005c, code lost:
    
        r5.b = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x008f, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results! --> size: " + r5.b + ", map.isEmpty(): " + r5.f6303a.isEmpty());
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(int r6) {
        /*
            r5 = this;
        L0:
            monitor-enter(r5)
            int r0 = r5.b     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            if (r0 < 0) goto L5b
            java.util.LinkedHashMap<K, V> r0 = r5.f6303a     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            if (r0 == 0) goto L11
            int r0 = r5.b     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            if (r0 != 0) goto L5b
        L11:
            int r0 = r5.b     // Catch: java.lang.Throwable -> L90
            if (r0 > r6) goto L17
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            return
        L17:
            java.util.LinkedHashMap<K, V> r0 = r5.f6303a     // Catch: java.lang.Throwable -> L90
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L90
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L90
            r1 = 0
            if (r0 <= 0) goto L35
            java.util.LinkedHashMap<K, V> r0 = r5.f6303a     // Catch: java.lang.Throwable -> L90
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L90
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L90
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Throwable -> L90
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L90
            goto L36
        L35:
            r0 = r1
        L36:
            if (r0 != 0) goto L3a
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            return
        L3a:
            java.lang.Object r2 = r0.getKey()     // Catch: java.lang.Throwable -> L90
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> L90
            java.util.LinkedHashMap<K, V> r3 = r5.f6303a     // Catch: java.lang.Throwable -> L90
            r3.remove(r2)     // Catch: java.lang.Throwable -> L90
            int r3 = r5.b     // Catch: java.lang.Throwable -> L90
            int r4 = r5.c(r2, r0)     // Catch: java.lang.Throwable -> L90
            int r3 = r3 - r4
            r5.b = r3     // Catch: java.lang.Throwable -> L90
            int r3 = r5.f     // Catch: java.lang.Throwable -> L90
            r4 = 1
            int r3 = r3 + r4
            r5.f = r3     // Catch: java.lang.Throwable -> L90
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            r5.a(r4, r2, r0, r1)
            goto L0
        L5b:
            r6 = 0
            r5.b = r6     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            r0.<init>()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.Class r1 = r5.getClass()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            r0.append(r1)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.String r1 = ".sizeOf() is reporting inconsistent results! --> size: "
            r0.append(r1)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            int r1 = r5.b     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            r0.append(r1)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.String r1 = ", map.isEmpty(): "
            r0.append(r1)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.util.LinkedHashMap<K, V> r1 = r5.f6303a     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            r0.append(r1)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            throw r6     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
        L90:
            r6 = move-exception
            goto L98
        L92:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L90
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L90
            return
        L98:
            monitor-exit(r5)
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.res.c.b(int):void");
    }

    private V b(K k) {
        V vRemove;
        if (k == null) {
            throw new NullPointerException("key == null");
        }
        synchronized (this) {
            vRemove = this.f6303a.remove(k);
            if (vRemove != null) {
                this.b -= c(k, vRemove);
            }
        }
        if (vRemove != null) {
            a(false, k, vRemove, null);
        }
        return vRemove;
    }

    private int c(K k, V v) {
        int iA = a(k, v);
        if (iA >= 0) {
            return iA;
        }
        throw new IllegalStateException("Negative size: " + k + ContainerUtils.KEY_VALUE_DELIMITER + v);
    }

    public final void a() {
        b(-1);
    }

    private synchronized int c() {
        return this.b;
    }

    private synchronized int d() {
        return this.c;
    }

    private synchronized int e() {
        return this.g;
    }

    private synchronized int f() {
        return this.h;
    }

    private synchronized int g() {
        return this.e;
    }

    private synchronized int h() {
        return this.d;
    }

    private synchronized int i() {
        return this.f;
    }

    private synchronized Map<K, V> j() {
        return new LinkedHashMap(this.f6303a);
    }

    public final synchronized String toString() {
        int i;
        i = this.g + this.h;
        return String.format("LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]", Integer.valueOf(this.c), Integer.valueOf(this.g), Integer.valueOf(this.h), Integer.valueOf(i != 0 ? (this.g * 100) / i : 0));
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x0082, code lost:
    
        throw new java.lang.IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results!");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void k() {
        /*
            r6 = this;
            java.util.LinkedHashMap<K, V> r0 = r6.f6303a
            monitor-enter(r0)
        L3:
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L86
            int r1 = r6.b     // Catch: java.lang.Throwable -> L83
            if (r1 < 0) goto L64
            java.util.LinkedHashMap<K, V> r1 = r6.f6303a     // Catch: java.lang.Throwable -> L83
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L83
            if (r1 == 0) goto L14
            int r1 = r6.b     // Catch: java.lang.Throwable -> L83
            if (r1 != 0) goto L64
        L14:
            int r1 = r6.b     // Catch: java.lang.Throwable -> L83
            if (r1 != 0) goto L1a
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L83
            goto L3c
        L1a:
            java.util.LinkedHashMap<K, V> r1 = r6.f6303a     // Catch: java.lang.Throwable -> L83
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L83
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L83
            r2 = 0
            if (r1 <= 0) goto L38
            java.util.LinkedHashMap<K, V> r1 = r6.f6303a     // Catch: java.lang.Throwable -> L83
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L83
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L83
            java.lang.Object r1 = r1.next()     // Catch: java.lang.Throwable -> L83
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L83
            goto L39
        L38:
            r1 = r2
        L39:
            if (r1 != 0) goto L43
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L83
        L3c:
            java.util.LinkedHashMap<K, V> r1 = r6.f6303a     // Catch: java.lang.Throwable -> L86
            r1.clear()     // Catch: java.lang.Throwable -> L86
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L86
            return
        L43:
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Throwable -> L83
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L83
            java.util.LinkedHashMap<K, V> r4 = r6.f6303a     // Catch: java.lang.Throwable -> L83
            r4.remove(r3)     // Catch: java.lang.Throwable -> L83
            int r4 = r6.b     // Catch: java.lang.Throwable -> L83
            int r5 = r6.c(r3, r1)     // Catch: java.lang.Throwable -> L83
            int r4 = r4 - r5
            r6.b = r4     // Catch: java.lang.Throwable -> L83
            int r4 = r6.f     // Catch: java.lang.Throwable -> L83
            r5 = 1
            int r4 = r4 + r5
            r6.f = r4     // Catch: java.lang.Throwable -> L83
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L83
            r6.a(r5, r3, r1, r2)     // Catch: java.lang.Throwable -> L86
            goto L3
        L64:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L83
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L83
            r2.<init>()     // Catch: java.lang.Throwable -> L83
            java.lang.Class r3 = r6.getClass()     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L83
            r2.append(r3)     // Catch: java.lang.Throwable -> L83
            java.lang.String r3 = ".sizeOf() is reporting inconsistent results!"
            r2.append(r3)     // Catch: java.lang.Throwable -> L83
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L83
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L83
            throw r1     // Catch: java.lang.Throwable -> L83
        L83:
            r1 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L86
            throw r1     // Catch: java.lang.Throwable -> L86
        L86:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.res.c.k():void");
    }
}
