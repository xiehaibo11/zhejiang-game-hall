package com.tkay.expressad.foundation.g.a;

public final class d implements com.tkay.expressad.foundation.g.a.e<java.lang.String, org.json.JSONObject> {
    private final java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> a;
    private final int b;
    private int c;

    public d() {
            r4 = this;
            r4.<init>()
            r0 = 1000(0x3e8, float:1.401E-42)
            r4.b = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r1 = 0
            r2 = 1061158912(0x3f400000, float:0.75)
            r3 = 1
            r0.<init>(r1, r2, r3)
            r4.a = r0
            return
    }

    private void a(int r3) {
            r2 = this;
        L0:
            monitor-enter(r2)
            int r0 = r2.c     // Catch: java.lang.Throwable -> L69
            if (r0 < 0) goto L4a
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r2.a     // Catch: java.lang.Throwable -> L69
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L69
            if (r0 == 0) goto L11
            int r0 = r2.c     // Catch: java.lang.Throwable -> L69
            if (r0 != 0) goto L4a
        L11:
            int r0 = r2.c     // Catch: java.lang.Throwable -> L69
            if (r0 <= r3) goto L48
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r2.a     // Catch: java.lang.Throwable -> L69
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L69
            if (r0 == 0) goto L1e
            goto L48
        L1e:
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r2.a     // Catch: java.lang.Throwable -> L69
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L69
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L69
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Throwable -> L69
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L69
            if (r0 != 0) goto L32
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L69
            return
        L32:
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L69
            r0.getValue()     // Catch: java.lang.Throwable -> L69
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r2.a     // Catch: java.lang.Throwable -> L46
            r0.remove(r1)     // Catch: java.lang.Throwable -> L46
            int r0 = r2.c     // Catch: java.lang.Throwable -> L46
            int r0 = r0 + (-1)
            r2.c = r0     // Catch: java.lang.Throwable -> L46
        L46:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L69
            goto L0
        L48:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L69
            return
        L4a:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L69
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L69
            r0.<init>()     // Catch: java.lang.Throwable -> L69
            java.lang.Class r1 = r2.getClass()     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L69
            r0.append(r1)     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = ".sizeOf() is reporting inconsistent results!"
            r0.append(r1)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L69
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L69
            throw r3     // Catch: java.lang.Throwable -> L69
        L69:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void b(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L18
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r1.a     // Catch: java.lang.Throwable -> L15
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L15
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> L15
            if (r2 == 0) goto L13
            int r2 = r1.c     // Catch: java.lang.Throwable -> L15
            int r2 = r2 + (-1)
            r1.c = r2     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L18:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    private static int c() {
            r0 = 1
            return r0
    }

    @Override
    public final java.util.Collection<java.lang.String> a() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> Le
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r1 = r2.a     // Catch: java.lang.Throwable -> Le
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final org.json.JSONObject a(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L10
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r1.a     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Ld
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Ld
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L10:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L1a
            monitor-enter(r1)
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r1.a     // Catch: java.lang.Throwable -> L17
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L17
            org.json.JSONObject r2 = (org.json.JSONObject) r2     // Catch: java.lang.Throwable -> L17
            if (r2 == 0) goto L15
            int r2 = r1.c     // Catch: java.lang.Throwable -> L17
            int r2 = r2 + (-1)
            r1.c = r2     // Catch: java.lang.Throwable -> L17
        L15:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1a:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "key == null"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final boolean a(java.lang.String r1, org.json.JSONObject r2) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            org.json.JSONObject r2 = (org.json.JSONObject) r2
            boolean r1 = r0.a(r1, r2)
            return r1
    }

    public final boolean a(java.lang.String r3, org.json.JSONObject r4) {
            r2 = this;
            if (r3 == 0) goto L24
            if (r4 == 0) goto L24
            monitor-enter(r2)
            int r0 = r2.c     // Catch: java.lang.Throwable -> L21
            r1 = 1
            int r0 = r0 + r1
            r2.c = r0     // Catch: java.lang.Throwable -> L21
            java.util.LinkedHashMap<java.lang.String, org.json.JSONObject> r0 = r2.a     // Catch: java.lang.Throwable -> L21
            java.lang.Object r3 = r0.put(r3, r4)     // Catch: java.lang.Throwable -> L21
            org.json.JSONObject r3 = (org.json.JSONObject) r3     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L1a
            int r3 = r2.c     // Catch: java.lang.Throwable -> L21
            int r3 = r3 - r1
            r2.c = r3     // Catch: java.lang.Throwable -> L21
        L1a:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L21
            int r3 = r2.b
            r2.a(r3)
            return r1
        L21:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L24:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "key == null || value == null"
            r3.<init>(r4)
            throw r3
    }

    @Override
    public final org.json.JSONObject b(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            org.json.JSONObject r1 = r0.a(r1)
            return r1
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = -1
            r1.a(r0)
            return
    }

    public final synchronized java.lang.String toString() {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = "LruCache[maxSize=%d]"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L15
            r2 = 0
            int r3 = r4.b     // Catch: java.lang.Throwable -> L15
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L15
            r1[r2] = r3     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = java.lang.String.format(r0, r1)     // Catch: java.lang.Throwable -> L15
            monitor-exit(r4)
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
