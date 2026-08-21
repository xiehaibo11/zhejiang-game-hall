package com.tkay.core.common.res;

public class c<K, V> {
    private final java.util.LinkedHashMap<K, V> a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;

    public c(int r4) {
            r3 = this;
            r3.<init>()
            if (r4 <= 0) goto L13
            r3.c = r4
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r0 = 0
            r1 = 1061158912(0x3f400000, float:0.75)
            r2 = 1
            r4.<init>(r0, r1, r2)
            r3.a = r4
            return
        L13:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "maxSize <= 0"
            r4.<init>(r0)
            throw r4
    }

    private void a(int r2) {
            r1 = this;
            if (r2 <= 0) goto Ld
            monitor-enter(r1)
            r1.c = r2     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La
            r1.b(r2)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "maxSize <= 0"
            r2.<init>(r0)
            throw r2
    }

    private static V b() {
            r0 = 0
            return r0
    }

    private V b(K r4) {
            r3 = this;
            if (r4 == 0) goto L20
            monitor-enter(r3)
            java.util.LinkedHashMap<K, V> r0 = r3.a     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r0 = r0.remove(r4)     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L14
            int r1 = r3.b     // Catch: java.lang.Throwable -> L1d
            int r2 = r3.c(r4, r0)     // Catch: java.lang.Throwable -> L1d
            int r1 = r1 - r2
            r3.b = r1     // Catch: java.lang.Throwable -> L1d
        L14:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L1c
            r1 = 0
            r2 = 0
            r3.a(r1, r4, r0, r2)
        L1c:
            return r0
        L1d:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L20:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r4.<init>(r0)
            throw r4
    }

    private void b(int r6) {
            r5 = this;
        L0:
            monitor-enter(r5)
            int r0 = r5.b     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
            if (r0 < 0) goto L5b
            java.util.LinkedHashMap<K, V> r0 = r5.a     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
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
            java.util.LinkedHashMap<K, V> r0 = r5.a     // Catch: java.lang.Throwable -> L90
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L90
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L90
            r1 = 0
            if (r0 <= 0) goto L35
            java.util.LinkedHashMap<K, V> r0 = r5.a     // Catch: java.lang.Throwable -> L90
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
            java.util.LinkedHashMap<K, V> r3 = r5.a     // Catch: java.lang.Throwable -> L90
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
            java.util.LinkedHashMap<K, V> r1 = r5.a     // Catch: java.lang.Throwable -> L90 java.lang.Exception -> L92
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
    }

    private synchronized int c() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.b     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private int c(K r4, V r5) {
            r3 = this;
            int r0 = r3.a(r4, r5)
            if (r0 < 0) goto L7
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Negative size: "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = "="
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private synchronized int d() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.c     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized int e() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.g     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized int f() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.h     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized int g() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.e     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized int h() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.d     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized int i() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.f     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private synchronized java.util.Map<K, V> j() {
            r2 = this;
            monitor-enter(r2)
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap     // Catch: java.lang.Throwable -> La
            java.util.LinkedHashMap<K, V> r1 = r2.a     // Catch: java.lang.Throwable -> La
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La
            monitor-exit(r2)
            return r0
        La:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private void k() {
            r6 = this;
            java.util.LinkedHashMap<K, V> r0 = r6.a
            monitor-enter(r0)
        L3:
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L86
            int r1 = r6.b     // Catch: java.lang.Throwable -> L83
            if (r1 < 0) goto L64
            java.util.LinkedHashMap<K, V> r1 = r6.a     // Catch: java.lang.Throwable -> L83
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
            java.util.LinkedHashMap<K, V> r1 = r6.a     // Catch: java.lang.Throwable -> L83
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> L83
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L83
            r2 = 0
            if (r1 <= 0) goto L38
            java.util.LinkedHashMap<K, V> r1 = r6.a     // Catch: java.lang.Throwable -> L83
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
            java.util.LinkedHashMap<K, V> r1 = r6.a     // Catch: java.lang.Throwable -> L86
            r1.clear()     // Catch: java.lang.Throwable -> L86
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L86
            return
        L43:
            java.lang.Object r3 = r1.getKey()     // Catch: java.lang.Throwable -> L83
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L83
            java.util.LinkedHashMap<K, V> r4 = r6.a     // Catch: java.lang.Throwable -> L83
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
    }

    protected int a(K r1, V r2) {
            r0 = this;
            r1 = 1
            return r1
    }

    public final V a(K r2) {
            r1 = this;
            if (r2 == 0) goto L1f
            monitor-enter(r1)
            java.util.LinkedHashMap<K, V> r0 = r1.a     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L13
            int r0 = r1.g     // Catch: java.lang.Throwable -> L1c
            int r0 = r0 + 1
            r1.g = r0     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1c
            return r2
        L13:
            int r2 = r1.h     // Catch: java.lang.Throwable -> L1c
            int r2 = r2 + 1
            r1.h = r2     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1c
            r2 = 0
            return r2
        L1c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1f:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    public final void a() {
            r1 = this;
            r0 = -1
            r1.b(r0)
            return
    }

    protected void a(boolean r1, K r2, V r3, V r4) {
            r0 = this;
            return
    }

    public final V b(K r4, V r5) {
            r3 = this;
            if (r4 == 0) goto L33
            monitor-enter(r3)
            int r0 = r3.d     // Catch: java.lang.Throwable -> L30
            int r0 = r0 + 1
            r3.d = r0     // Catch: java.lang.Throwable -> L30
            int r0 = r3.b     // Catch: java.lang.Throwable -> L30
            int r1 = r3.c(r4, r5)     // Catch: java.lang.Throwable -> L30
            int r0 = r0 + r1
            r3.b = r0     // Catch: java.lang.Throwable -> L30
            java.util.LinkedHashMap<K, V> r0 = r3.a     // Catch: java.lang.Throwable -> L30
            java.lang.Object r0 = r0.put(r4, r5)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L23
            int r1 = r3.b     // Catch: java.lang.Throwable -> L30
            int r2 = r3.c(r4, r0)     // Catch: java.lang.Throwable -> L30
            int r1 = r1 - r2
            r3.b = r1     // Catch: java.lang.Throwable -> L30
        L23:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2a
            r1 = 0
            r3.a(r1, r4, r0, r5)
        L2a:
            int r4 = r3.c
            r3.b(r4)
            return r0
        L30:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
        L33:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.String r5 = "key == null || value == null"
            r4.<init>(r5)
            throw r4
    }

    public final synchronized java.lang.String toString() {
            r5 = this;
            monitor-enter(r5)
            int r0 = r5.g     // Catch: java.lang.Throwable -> L3c
            int r1 = r5.h     // Catch: java.lang.Throwable -> L3c
            int r0 = r0 + r1
            r1 = 0
            if (r0 == 0) goto Lf
            int r2 = r5.g     // Catch: java.lang.Throwable -> L3c
            int r2 = r2 * 100
            int r2 = r2 / r0
            goto L10
        Lf:
            r2 = r1
        L10:
            java.lang.String r0 = "LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]"
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3c
            int r4 = r5.c     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3c
            r3[r1] = r4     // Catch: java.lang.Throwable -> L3c
            r1 = 1
            int r4 = r5.g     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3c
            r3[r1] = r4     // Catch: java.lang.Throwable -> L3c
            r1 = 2
            int r4 = r5.h     // Catch: java.lang.Throwable -> L3c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L3c
            r3[r1] = r4     // Catch: java.lang.Throwable -> L3c
            r1 = 3
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L3c
            r3[r1] = r2     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = java.lang.String.format(r0, r3)     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r5)
            return r0
        L3c:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }
}
