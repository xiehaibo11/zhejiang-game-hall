package com.xiaomi.push;

public abstract class gn {
    private static long a;
    protected static final java.lang.String a = null;
    public static final java.text.DateFormat a = null;
    private static java.lang.String b;
    private static java.lang.String c;
    private com.xiaomi.push.gr a;
    private java.util.List<com.xiaomi.push.gk> a;
    private final java.util.Map<java.lang.String, java.lang.Object> a;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;

    static {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            java.lang.String r0 = r0.toLowerCase()
            com.xiaomi.push.gn.a = r0
            r0 = 0
            com.xiaomi.push.gn.b = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"
            r0.<init>(r1)
            com.xiaomi.push.gn.a = r0
            java.lang.String r1 = "UTC"
            java.util.TimeZone r1 = java.util.TimeZone.getTimeZone(r1)
            r0.setTimeZone(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 5
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.gn.c = r0
            r0 = 0
            com.xiaomi.push.gn.a = r0
            return
    }

    public gn() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = com.xiaomi.push.gn.b
            r2.d = r0
            r0 = 0
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r2.i = r0
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r2.a = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2.a = r1
            r2.a = r0
            return
    }

    public gn(android.os.Bundle r6) {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = com.xiaomi.push.gn.b
            r5.d = r0
            r0 = 0
            r5.e = r0
            r5.f = r0
            r5.g = r0
            r5.h = r0
            r5.i = r0
            java.util.concurrent.CopyOnWriteArrayList r1 = new java.util.concurrent.CopyOnWriteArrayList
            r1.<init>()
            r5.a = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r5.a = r1
            r5.a = r0
            java.lang.String r0 = "ext_to"
            java.lang.String r0 = r6.getString(r0)
            r5.f = r0
            java.lang.String r0 = "ext_from"
            java.lang.String r0 = r6.getString(r0)
            r5.g = r0
            java.lang.String r0 = "ext_chid"
            java.lang.String r0 = r6.getString(r0)
            r5.h = r0
            java.lang.String r0 = "ext_pkt_id"
            java.lang.String r0 = r6.getString(r0)
            r5.e = r0
            java.lang.String r0 = "ext_exts"
            android.os.Parcelable[] r0 = r6.getParcelableArray(r0)
            if (r0 == 0) goto L68
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.length
            r1.<init>(r2)
            r5.a = r1
            int r1 = r0.length
            r2 = 0
        L54:
            if (r2 >= r1) goto L68
            r3 = r0[r2]
            android.os.Bundle r3 = (android.os.Bundle) r3
            com.xiaomi.push.gk r3 = com.xiaomi.push.gk.a(r3)
            if (r3 == 0) goto L65
            java.util.List<com.xiaomi.push.gk> r4 = r5.a
            r4.add(r3)
        L65:
            int r2 = r2 + 1
            goto L54
        L68:
            java.lang.String r0 = "ext_ERROR"
            android.os.Bundle r6 = r6.getBundle(r0)
            if (r6 == 0) goto L77
            com.xiaomi.push.gr r0 = new com.xiaomi.push.gr
            r0.<init>(r6)
            r5.a = r0
        L77:
            return
    }

    public static synchronized java.lang.String i() {
            java.lang.Class<com.xiaomi.push.gn> r0 = com.xiaomi.push.gn.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = com.xiaomi.push.gn.c     // Catch: java.lang.Throwable -> L21
            r1.append(r2)     // Catch: java.lang.Throwable -> L21
            long r2 = com.xiaomi.push.gn.a     // Catch: java.lang.Throwable -> L21
            r4 = 1
            long r4 = r4 + r2
            com.xiaomi.push.gn.a = r4     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = java.lang.Long.toString(r2)     // Catch: java.lang.Throwable -> L21
            r1.append(r2)     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)
            return r1
        L21:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String q() {
            java.lang.String r0 = com.xiaomi.push.gn.a
            return r0
    }

    public android.os.Bundle a() {
            r6 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = r6.d
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L14
            java.lang.String r1 = r6.d
            java.lang.String r2 = "ext_ns"
            r0.putString(r2, r1)
        L14:
            java.lang.String r1 = r6.g
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L23
            java.lang.String r1 = r6.g
            java.lang.String r2 = "ext_from"
            r0.putString(r2, r1)
        L23:
            java.lang.String r1 = r6.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L32
            java.lang.String r1 = r6.f
            java.lang.String r2 = "ext_to"
            r0.putString(r2, r1)
        L32:
            java.lang.String r1 = r6.e
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L41
            java.lang.String r1 = r6.e
            java.lang.String r2 = "ext_pkt_id"
            r0.putString(r2, r1)
        L41:
            java.lang.String r1 = r6.h
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L50
            java.lang.String r1 = r6.h
            java.lang.String r2 = "ext_chid"
            r0.putString(r2, r1)
        L50:
            com.xiaomi.push.gr r1 = r6.a
            if (r1 == 0) goto L5d
            android.os.Bundle r1 = r1.a()
            java.lang.String r2 = "ext_ERROR"
            r0.putBundle(r2, r1)
        L5d:
            java.util.List<com.xiaomi.push.gk> r1 = r6.a
            if (r1 == 0) goto L8b
            int r1 = r1.size()
            android.os.Bundle[] r1 = new android.os.Bundle[r1]
            r2 = 0
            java.util.List<com.xiaomi.push.gk> r3 = r6.a
            java.util.Iterator r3 = r3.iterator()
        L6e:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L86
            java.lang.Object r4 = r3.next()
            com.xiaomi.push.gk r4 = (com.xiaomi.push.gk) r4
            android.os.Bundle r4 = r4.a()
            if (r4 == 0) goto L6e
            int r5 = r2 + 1
            r1[r2] = r4
            r2 = r5
            goto L6e
        L86:
            java.lang.String r2 = "ext_exts"
            r0.putParcelableArray(r2, r1)
        L8b:
            return r0
    }

    public com.xiaomi.push.gk a(java.lang.String r2) {
            r1 = this;
            r0 = 0
            com.xiaomi.push.gk r2 = r1.a(r2, r0)
            return r2
    }

    public com.xiaomi.push.gk a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            java.util.List<com.xiaomi.push.gk> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.gk r1 = (com.xiaomi.push.gk) r1
            if (r5 == 0) goto L1e
            java.lang.String r2 = r1.b()
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L6
        L1e:
            java.lang.String r2 = r1.a()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L6
            return r1
        L29:
            r4 = 0
            return r4
    }

    public com.xiaomi.push.gr a() {
            r1 = this;
            com.xiaomi.push.gr r0 = r1.a
            return r0
    }

    public synchronized java.lang.Object a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L8
            r2 = 0
            monitor-exit(r1)
            return r2
        L8:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.a     // Catch: java.lang.Throwable -> L10
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return r2
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public abstract java.lang.String a();

    public synchronized java.util.Collection<com.xiaomi.push.gk> a() {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.xiaomi.push.gk> r0 = r2.a     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto Lb
            java.util.List r0 = java.util.Collections.emptyList()     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)
            return r0
        Lb:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L18
            java.util.List<com.xiaomi.push.gk> r1 = r2.a     // Catch: java.lang.Throwable -> L18
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L18
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)     // Catch: java.lang.Throwable -> L18
            monitor-exit(r2)
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public void a(com.xiaomi.push.gk r2) {
            r1 = this;
            java.util.List<com.xiaomi.push.gk> r0 = r1.a
            r0.add(r2)
            return
    }

    public void a(com.xiaomi.push.gr r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public synchronized java.util.Collection<java.lang.String> b() {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.a     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto Lb
            java.util.Set r0 = java.util.Collections.emptySet()     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r2)
            return r0
        Lb:
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Throwable -> L1c
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.a     // Catch: java.lang.Throwable -> L1c
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L1c
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1c
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r2)
            return r0
        L1c:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L9e
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            goto L9e
        L13:
            com.xiaomi.push.gn r5 = (com.xiaomi.push.gn) r5
            com.xiaomi.push.gr r2 = r4.a
            if (r2 == 0) goto L22
            com.xiaomi.push.gr r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L27
            goto L26
        L22:
            com.xiaomi.push.gr r2 = r5.a
            if (r2 == 0) goto L27
        L26:
            return r1
        L27:
            java.lang.String r2 = r4.g
            if (r2 == 0) goto L34
            java.lang.String r3 = r5.g
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L39
            goto L38
        L34:
            java.lang.String r2 = r5.g
            if (r2 == 0) goto L39
        L38:
            return r1
        L39:
            java.util.List<com.xiaomi.push.gk> r2 = r4.a
            java.util.List<com.xiaomi.push.gk> r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L44
            return r1
        L44:
            java.lang.String r2 = r4.e
            if (r2 == 0) goto L51
            java.lang.String r3 = r5.e
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L56
            goto L55
        L51:
            java.lang.String r2 = r5.e
            if (r2 == 0) goto L56
        L55:
            return r1
        L56:
            java.lang.String r2 = r4.h
            if (r2 == 0) goto L63
            java.lang.String r3 = r5.h
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L68
            goto L67
        L63:
            java.lang.String r2 = r5.h
            if (r2 == 0) goto L68
        L67:
            return r1
        L68:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r4.a
            if (r2 == 0) goto L75
            java.util.Map<java.lang.String, java.lang.Object> r3 = r5.a
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L7a
            goto L79
        L75:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r5.a
            if (r2 == 0) goto L7a
        L79:
            return r1
        L7a:
            java.lang.String r2 = r4.f
            if (r2 == 0) goto L87
            java.lang.String r3 = r5.f
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L8c
            goto L8b
        L87:
            java.lang.String r2 = r5.f
            if (r2 == 0) goto L8c
        L8b:
            return r1
        L8c:
            java.lang.String r2 = r4.d
            java.lang.String r5 = r5.d
            if (r2 == 0) goto L99
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L9d
            goto L9c
        L99:
            if (r5 != 0) goto L9c
            goto L9d
        L9c:
            r0 = r1
        L9d:
            return r0
        L9e:
            return r1
    }

    public int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.d
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.hashCode()
            goto Lb
        La:
            r0 = r1
        Lb:
            int r0 = r0 * 31
            java.lang.String r2 = r3.e
            if (r2 == 0) goto L16
            int r2 = r2.hashCode()
            goto L17
        L16:
            r2 = r1
        L17:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.f
            if (r2 == 0) goto L23
            int r2 = r2.hashCode()
            goto L24
        L23:
            r2 = r1
        L24:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.g
            if (r2 == 0) goto L30
            int r2 = r2.hashCode()
            goto L31
        L30:
            r2 = r1
        L31:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.h
            if (r2 == 0) goto L3d
            int r2 = r2.hashCode()
            goto L3e
        L3d:
            r2 = r1
        L3e:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.util.List<com.xiaomi.push.gk> r2 = r3.a
            int r2 = r2.hashCode()
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.util.Map<java.lang.String, java.lang.Object> r2 = r3.a
            int r2 = r2.hashCode()
            int r0 = r0 + r2
            int r0 = r0 * 31
            com.xiaomi.push.gr r2 = r3.a
            if (r2 == 0) goto L5b
            int r1 = r2.hashCode()
        L5b:
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String j() {
            r2 = this;
            java.lang.String r0 = r2.e
            java.lang.String r1 = "ID_NOT_AVAILABLE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            return r0
        Lc:
            java.lang.String r0 = r2.e
            if (r0 != 0) goto L16
            java.lang.String r0 = i()
            r2.e = r0
        L16:
            java.lang.String r0 = r2.e
            return r0
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void k(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void l(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public void m(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public void n(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    protected synchronized java.lang.String o() {
            r6 = this;
            monitor-enter(r6)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r0.<init>()     // Catch: java.lang.Throwable -> L12c
            java.util.Collection r1 = r6.a()     // Catch: java.lang.Throwable -> L12c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L12c
        Le:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto L22
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L12c
            com.xiaomi.push.go r2 = (com.xiaomi.push.go) r2     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = r2.d()     // Catch: java.lang.Throwable -> L12c
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            goto Le
        L22:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r6.a     // Catch: java.lang.Throwable -> L12c
            if (r1 == 0) goto L126
            java.util.Map<java.lang.String, java.lang.Object> r1 = r6.a     // Catch: java.lang.Throwable -> L12c
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Throwable -> L12c
            if (r1 != 0) goto L126
            java.lang.String r1 = "<properties xmlns=\"http://www.jivesoftware.com/xmlns/xmpp/properties\">"
            r0.append(r1)     // Catch: java.lang.Throwable -> L12c
            java.util.Collection r1 = r6.b()     // Catch: java.lang.Throwable -> L12c
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L12c
        L3b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto L121
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L12c
            java.lang.Object r3 = r6.a(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r4 = "<property>"
            r0.append(r4)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r4 = "<name>"
            r0.append(r4)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = com.xiaomi.push.gy.a(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</name>"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "<value type=\""
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            boolean r2 = r3 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto L79
            java.lang.String r2 = "integer\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r3)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
        L74:
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            goto L10d
        L79:
            boolean r2 = r3 instanceof java.lang.Long     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto L88
            java.lang.String r2 = "long\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r3)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
            goto L74
        L88:
            boolean r2 = r3 instanceof java.lang.Float     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto L97
            java.lang.String r2 = "float\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r3)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
            goto L74
        L97:
            boolean r2 = r3 instanceof java.lang.Double     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto La6
            java.lang.String r2 = "double\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r3)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
            goto L74
        La6:
            boolean r2 = r3 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto Lb5
            java.lang.String r2 = "boolean\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            r0.append(r3)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
            goto L74
        Lb5:
            boolean r2 = r3 instanceof java.lang.String     // Catch: java.lang.Throwable -> L12c
            if (r2 == 0) goto Lca
            java.lang.String r2 = "string\">"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = com.xiaomi.push.gy.a(r3)     // Catch: java.lang.Throwable -> L12c
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "</value>"
            goto L74
        Lca:
            r2 = 0
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> Lfe
            r4.<init>()     // Catch: java.lang.Throwable -> Lfb java.lang.Exception -> Lfe
            java.io.ObjectOutputStream r5 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> Lf6 java.lang.Exception -> Lf8
            r5.<init>(r4)     // Catch: java.lang.Throwable -> Lf6 java.lang.Exception -> Lf8
            r5.writeObject(r3)     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            java.lang.String r2 = "java-object\">"
            r0.append(r2)     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            byte[] r2 = r4.toByteArray()     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            java.lang.String r2 = com.xiaomi.push.gy.a(r2)     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            r0.append(r2)     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            java.lang.String r2 = "</value>"
            r0.append(r2)     // Catch: java.lang.Exception -> Lf4 java.lang.Throwable -> L114
            r5.close()     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L12c
        Lf0:
            r4.close()     // Catch: java.lang.Exception -> L10d java.lang.Throwable -> L12c
            goto L10d
        Lf4:
            r2 = move-exception
            goto L102
        Lf6:
            r0 = move-exception
            goto L116
        Lf8:
            r3 = move-exception
            r5 = r2
            goto L101
        Lfb:
            r0 = move-exception
            r4 = r2
            goto L116
        Lfe:
            r3 = move-exception
            r4 = r2
            r5 = r4
        L101:
            r2 = r3
        L102:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L114
            if (r5 == 0) goto L10a
            r5.close()     // Catch: java.lang.Exception -> L10a java.lang.Throwable -> L12c
        L10a:
            if (r4 == 0) goto L10d
            goto Lf0
        L10d:
            java.lang.String r2 = "</property>"
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            goto L3b
        L114:
            r0 = move-exception
            r2 = r5
        L116:
            if (r2 == 0) goto L11b
            r2.close()     // Catch: java.lang.Exception -> L11b java.lang.Throwable -> L12c
        L11b:
            if (r4 == 0) goto L120
            r4.close()     // Catch: java.lang.Exception -> L120 java.lang.Throwable -> L12c
        L120:
            throw r0     // Catch: java.lang.Throwable -> L12c
        L121:
            java.lang.String r1 = "</properties>"
            r0.append(r1)     // Catch: java.lang.Throwable -> L12c
        L126:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L12c
            monitor-exit(r6)
            return r0
        L12c:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public void o(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public java.lang.String p() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }
}
