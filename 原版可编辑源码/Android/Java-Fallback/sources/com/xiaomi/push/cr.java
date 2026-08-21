package com.xiaomi.push;

public class cr {
    private double a;
    private long a;
    public java.lang.String a;
    private java.util.ArrayList<com.xiaomi.push.da> a;
    private long b;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    protected java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;

    public cr(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = ""
            r3.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r3.a = r0
            r0 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            r3.a = r0
            java.lang.String r0 = "s.mi1.cc"
            r3.j = r0
            r0 = 86400000(0x5265c00, double:4.2687272E-316)
            r3.b = r0
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3e
            long r0 = java.lang.System.currentTimeMillis()
            r3.a = r0
            java.util.ArrayList<com.xiaomi.push.da> r0 = r3.a
            com.xiaomi.push.da r1 = new com.xiaomi.push.da
            r2 = -1
            r1.<init>(r4, r2)
            r0.add(r1)
            java.lang.String r0 = com.xiaomi.push.cv.a()
            r3.a = r0
            r3.b = r4
            return
        L3e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the host is empty"
            r4.<init>(r0)
            throw r4
    }

    private synchronized void c(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.ArrayList<com.xiaomi.push.da> r0 = r2.a     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L21
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L1f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L21
            com.xiaomi.push.da r1 = (com.xiaomi.push.da) r1     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = r1.a     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.equals(r1, r3)     // Catch: java.lang.Throwable -> L21
            if (r1 == 0) goto L7
            r0.remove()     // Catch: java.lang.Throwable -> L21
            goto L7
        L1f:
            monitor-exit(r2)
            return
        L21:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized com.xiaomi.push.cr a(org.json.JSONObject r4) {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = "net"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.a = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "ttl"
            long r0 = r4.getLong(r0)     // Catch: java.lang.Throwable -> L7b
            r3.b = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "pct"
            double r0 = r4.getDouble(r0)     // Catch: java.lang.Throwable -> L7b
            r3.a = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "ts"
            long r0 = r4.getLong(r0)     // Catch: java.lang.Throwable -> L7b
            r3.a = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "city"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.d = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "prv"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.c = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "cty"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.g = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "isp"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.e = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "ip"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.f = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "host"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.b = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "xf"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L7b
            r3.h = r0     // Catch: java.lang.Throwable -> L7b
            java.lang.String r0 = "fbs"
            org.json.JSONArray r4 = r4.getJSONArray(r0)     // Catch: java.lang.Throwable -> L7b
            r0 = 0
        L60:
            int r1 = r4.length()     // Catch: java.lang.Throwable -> L7b
            if (r0 >= r1) goto L79
            com.xiaomi.push.da r1 = new com.xiaomi.push.da     // Catch: java.lang.Throwable -> L7b
            r1.<init>()     // Catch: java.lang.Throwable -> L7b
            org.json.JSONObject r2 = r4.getJSONObject(r0)     // Catch: java.lang.Throwable -> L7b
            com.xiaomi.push.da r1 = r1.a(r2)     // Catch: java.lang.Throwable -> L7b
            r3.a(r1)     // Catch: java.lang.Throwable -> L7b
            int r0 = r0 + 1
            goto L60
        L79:
            monitor-exit(r3)
            return r3
        L7b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized java.lang.String a() {
            r3 = this;
            monitor-enter(r3)
            java.lang.String r0 = r3.i     // Catch: java.lang.Throwable -> L3f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3f
            if (r0 != 0) goto Ld
            java.lang.String r0 = r3.i     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r3)
            return r0
        Ld:
            java.lang.String r0 = r3.e     // Catch: java.lang.Throwable -> L3f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3f
            if (r0 == 0) goto L19
            java.lang.String r0 = "hardcode_isp"
            monitor-exit(r3)
            return r0
        L19:
            r0 = 5
            java.lang.String[] r0 = new java.lang.String[r0]     // Catch: java.lang.Throwable -> L3f
            r1 = 0
            java.lang.String r2 = r3.e     // Catch: java.lang.Throwable -> L3f
            r0[r1] = r2     // Catch: java.lang.Throwable -> L3f
            r1 = 1
            java.lang.String r2 = r3.c     // Catch: java.lang.Throwable -> L3f
            r0[r1] = r2     // Catch: java.lang.Throwable -> L3f
            r1 = 2
            java.lang.String r2 = r3.d     // Catch: java.lang.Throwable -> L3f
            r0[r1] = r2     // Catch: java.lang.Throwable -> L3f
            r1 = 3
            java.lang.String r2 = r3.g     // Catch: java.lang.Throwable -> L3f
            r0[r1] = r2     // Catch: java.lang.Throwable -> L3f
            r1 = 4
            java.lang.String r2 = r3.f     // Catch: java.lang.Throwable -> L3f
            r0[r1] = r2     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "_"
            java.lang.String r0 = com.xiaomi.push.bp.a(r0, r1)     // Catch: java.lang.Throwable -> L3f
            r3.i = r0     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r3)
            return r0
        L3f:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public synchronized java.util.ArrayList<java.lang.String> a() {
            r1 = this;
            monitor-enter(r1)
            r0 = 0
            java.util.ArrayList r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return r0
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public java.util.ArrayList<java.lang.String> a(java.lang.String r8) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L5f
            java.net.URL r0 = new java.net.URL
            r0.<init>(r8)
            java.lang.String r8 = r0.getHost()
            java.lang.String r1 = r7.b
            boolean r8 = android.text.TextUtils.equals(r8, r1)
            if (r8 == 0) goto L57
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            r1 = 1
            java.util.ArrayList r1 = r7.a(r1)
            java.util.Iterator r1 = r1.iterator()
        L25:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L56
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            int r3 = r0.getPort()
            com.xiaomi.push.ct r2 = com.xiaomi.push.ct.a(r2, r3)
            java.net.URL r3 = new java.net.URL
            java.lang.String r4 = r0.getProtocol()
            java.lang.String r5 = r2.a()
            int r2 = r2.a()
            java.lang.String r6 = r0.getFile()
            r3.<init>(r4, r5, r2, r6)
            java.lang.String r2 = r3.toString()
            r8.add(r2)
            goto L25
        L56:
            return r8
        L57:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the url is not supported by the fallback"
            r8.<init>(r0)
            throw r8
        L5f:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the url is empty."
            r8.<init>(r0)
            throw r8
    }

    public synchronized java.util.ArrayList<java.lang.String> a(boolean r9) {
            r8 = this;
            monitor-enter(r8)
            java.util.ArrayList<com.xiaomi.push.da> r0 = r8.a     // Catch: java.lang.Throwable -> L3e
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3e
            com.xiaomi.push.da[] r1 = new com.xiaomi.push.da[r0]     // Catch: java.lang.Throwable -> L3e
            java.util.ArrayList<com.xiaomi.push.da> r2 = r8.a     // Catch: java.lang.Throwable -> L3e
            r2.toArray(r1)     // Catch: java.lang.Throwable -> L3e
            java.util.Arrays.sort(r1)     // Catch: java.lang.Throwable -> L3e
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            r3 = 0
            r4 = r3
        L18:
            if (r4 >= r0) goto L3c
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L3e
            if (r9 == 0) goto L24
            java.lang.String r5 = r5.a     // Catch: java.lang.Throwable -> L3e
        L20:
            r2.add(r5)     // Catch: java.lang.Throwable -> L3e
            goto L39
        L24:
            java.lang.String r6 = r5.a     // Catch: java.lang.Throwable -> L3e
            java.lang.String r7 = ":"
            int r6 = r6.indexOf(r7)     // Catch: java.lang.Throwable -> L3e
            r7 = -1
            if (r6 == r7) goto L36
            java.lang.String r5 = r5.a     // Catch: java.lang.Throwable -> L3e
            java.lang.String r5 = r5.substring(r3, r6)     // Catch: java.lang.Throwable -> L3e
            goto L20
        L36:
            java.lang.String r5 = r5.a     // Catch: java.lang.Throwable -> L3e
            goto L20
        L39:
            int r4 = r4 + 1
            goto L18
        L3c:
            monitor-exit(r8)
            return r2
        L3e:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public synchronized org.json.JSONObject a() {
            r4 = this;
            monitor-enter(r4)
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L79
            r0.<init>()     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "net"
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "ttl"
            long r2 = r4.b     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "pct"
            double r2 = r4.a     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "ts"
            long r2 = r4.a     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "city"
            java.lang.String r2 = r4.d     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "prv"
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "cty"
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "isp"
            java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "ip"
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "host"
            java.lang.String r2 = r4.b     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            java.lang.String r1 = "xf"
            java.lang.String r2 = r4.h     // Catch: java.lang.Throwable -> L79
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L79
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L79
            r1.<init>()     // Catch: java.lang.Throwable -> L79
            java.util.ArrayList<com.xiaomi.push.da> r2 = r4.a     // Catch: java.lang.Throwable -> L79
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L79
        L5e:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L79
            if (r3 == 0) goto L72
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L79
            com.xiaomi.push.da r3 = (com.xiaomi.push.da) r3     // Catch: java.lang.Throwable -> L79
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Throwable -> L79
            r1.put(r3)     // Catch: java.lang.Throwable -> L79
            goto L5e
        L72:
            java.lang.String r2 = "fbs"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> L79
            monitor-exit(r4)
            return r0
        L79:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public void a(double r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(long r4) {
            r3 = this;
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L9
            r3.b = r4
            return
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "the duration is invalid "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    synchronized void a(com.xiaomi.push.da r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r2.a     // Catch: java.lang.Throwable -> Ld
            r1.c(r0)     // Catch: java.lang.Throwable -> Ld
            java.util.ArrayList<com.xiaomi.push.da> r0 = r1.a     // Catch: java.lang.Throwable -> Ld
            r0.add(r2)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r1)
            return
        Ld:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void a(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            com.xiaomi.push.da r0 = new com.xiaomi.push.da     // Catch: java.lang.Throwable -> Lb
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Lb
            r1.a(r0)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public void a(java.lang.String r9, int r10, long r11, long r13, java.lang.Exception r15) {
            r8 = this;
            com.xiaomi.push.cq r7 = new com.xiaomi.push.cq
            r0 = r7
            r1 = r10
            r2 = r11
            r4 = r13
            r6 = r15
            r0.<init>(r1, r2, r4, r6)
            r8.a(r9, r7)
            return
    }

    public void a(java.lang.String r8, long r9, long r11) {
            r7 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> Lf
            r0.<init>(r8)     // Catch: java.net.MalformedURLException -> Lf
            java.lang.String r2 = r0.getHost()     // Catch: java.net.MalformedURLException -> Lf
            r1 = r7
            r3 = r9
            r5 = r11
            r1.b(r2, r3, r5)     // Catch: java.net.MalformedURLException -> Lf
        Lf:
            return
    }

    public void a(java.lang.String r9, long r10, long r12, java.lang.Exception r14) {
            r8 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L10
            r0.<init>(r9)     // Catch: java.net.MalformedURLException -> L10
            java.lang.String r2 = r0.getHost()     // Catch: java.net.MalformedURLException -> L10
            r1 = r8
            r3 = r10
            r5 = r12
            r7 = r14
            r1.b(r2, r3, r5, r7)     // Catch: java.net.MalformedURLException -> L10
        L10:
            return
    }

    public synchronized void a(java.lang.String r4, com.xiaomi.push.cq r5) {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList<com.xiaomi.push.da> r0 = r3.a     // Catch: java.lang.Throwable -> L20
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L20
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L20
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L20
            com.xiaomi.push.da r1 = (com.xiaomi.push.da) r1     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r1.a     // Catch: java.lang.Throwable -> L20
            boolean r2 = android.text.TextUtils.equals(r4, r2)     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L7
            r1.a(r5)     // Catch: java.lang.Throwable -> L20
        L1e:
            monitor-exit(r3)
            return
        L20:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void a(java.lang.String[] r6) {
            r5 = this;
            monitor-enter(r5)
            java.util.ArrayList<com.xiaomi.push.da> r0 = r5.a     // Catch: java.lang.Throwable -> L5c
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L5c
            int r0 = r0 + (-1)
        L9:
            r1 = 0
            if (r0 < 0) goto L2d
            int r2 = r6.length     // Catch: java.lang.Throwable -> L5c
        Ld:
            if (r1 >= r2) goto L2a
            r3 = r6[r1]     // Catch: java.lang.Throwable -> L5c
            java.util.ArrayList<com.xiaomi.push.da> r4 = r5.a     // Catch: java.lang.Throwable -> L5c
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L5c
            com.xiaomi.push.da r4 = (com.xiaomi.push.da) r4     // Catch: java.lang.Throwable -> L5c
            java.lang.String r4 = r4.a     // Catch: java.lang.Throwable -> L5c
            boolean r3 = android.text.TextUtils.equals(r4, r3)     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L27
            java.util.ArrayList<com.xiaomi.push.da> r1 = r5.a     // Catch: java.lang.Throwable -> L5c
            r1.remove(r0)     // Catch: java.lang.Throwable -> L5c
            goto L2a
        L27:
            int r1 = r1 + 1
            goto Ld
        L2a:
            int r0 = r0 + (-1)
            goto L9
        L2d:
            java.util.ArrayList<com.xiaomi.push.da> r0 = r5.a     // Catch: java.lang.Throwable -> L5c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L5c
            r2 = r1
        L34:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L47
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L5c
            com.xiaomi.push.da r3 = (com.xiaomi.push.da) r3     // Catch: java.lang.Throwable -> L5c
            int r4 = r3.a     // Catch: java.lang.Throwable -> L5c
            if (r4 <= r2) goto L34
            int r2 = r3.a     // Catch: java.lang.Throwable -> L5c
            goto L34
        L47:
            int r0 = r6.length     // Catch: java.lang.Throwable -> L5c
            if (r1 >= r0) goto L5a
            com.xiaomi.push.da r0 = new com.xiaomi.push.da     // Catch: java.lang.Throwable -> L5c
            r3 = r6[r1]     // Catch: java.lang.Throwable -> L5c
            int r4 = r6.length     // Catch: java.lang.Throwable -> L5c
            int r4 = r4 + r2
            int r4 = r4 - r1
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L5c
            r5.a(r0)     // Catch: java.lang.Throwable -> L5c
            int r1 = r1 + 1
            goto L47
        L5a:
            monitor-exit(r5)
            return
        L5c:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public boolean a() {
            r2 = this;
            java.lang.String r0 = r2.a
            java.lang.String r1 = com.xiaomi.push.cv.a()
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            return r0
    }

    public boolean a(com.xiaomi.push.cr r2) {
            r1 = this;
            java.lang.String r0 = r1.a
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r0, r2)
            return r2
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void b(java.lang.String r9, long r10, long r12) {
            r8 = this;
            r2 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r3 = r10
            r5 = r12
            r0.a(r1, r2, r3, r5, r7)
            return
    }

    public void b(java.lang.String r9, long r10, long r12, java.lang.Exception r14) {
            r8 = this;
            r2 = -1
            r0 = r8
            r1 = r9
            r3 = r10
            r5 = r12
            r7 = r14
            r0.a(r1, r2, r3, r5, r7)
            return
    }

    public boolean b() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.a
            long r0 = r0 - r2
            long r2 = r4.b
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    boolean c() {
            r8 = this;
            long r0 = r8.b
            r2 = 864000000(0x337f9800, double:4.26872718E-315)
            int r4 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r4 >= 0) goto La
            goto Lb
        La:
            r0 = r2
        Lb:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r8.a
            long r6 = r2 - r4
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 > 0) goto L2b
            long r2 = r2 - r4
            long r0 = r8.b
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L29
            java.lang.String r0 = r8.a
            java.lang.String r1 = "WIFI-"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L29
            goto L2b
        L29:
            r0 = 0
            goto L2c
        L2b:
            r0 = 1
        L2c:
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.util.ArrayList<com.xiaomi.push.da> r2 = r4.a
            java.util.Iterator r2 = r2.iterator()
        L1c:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L33
            java.lang.Object r3 = r2.next()
            com.xiaomi.push.da r3 = (com.xiaomi.push.da) r3
            r0.append(r1)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
            goto L1c
        L33:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
