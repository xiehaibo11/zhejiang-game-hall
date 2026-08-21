package com.huawei.hms.push;

public class k {
    public java.lang.String A;
    public int B;
    public java.lang.String C;
    public java.lang.String D;
    public java.lang.String E;
    public java.lang.String F;
    public java.lang.String a;
    public int b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public java.lang.String l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public java.lang.String p;
    public java.lang.String q;
    public java.lang.String r;
    public java.lang.String s;
    public int t;
    public java.lang.String u;
    public java.lang.String v;
    public java.lang.String w;
    public int x;
    public int y;
    public java.lang.String z;

    public k(byte[] r3, byte[] r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.a = r0
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r2.h = r0
            r2.i = r0
            r2.j = r0
            r2.k = r0
            r2.q = r0
            com.huawei.hms.push.n r1 = com.huawei.hms.push.n.a
            int r1 = r1.ordinal()
            r2.t = r1
            r2.u = r0
            r2.v = r0
            r2.w = r0
            r1 = 0
            r2.x = r1
            r2.y = r1
            r2.A = r0
            r2.C = r0
            r2.E = r0
            r2.F = r0
            java.lang.String r0 = new java.lang.String
            java.nio.charset.Charset r1 = com.huawei.hms.push.w.a
            r0.<init>(r3, r1)
            r2.r = r0
            java.lang.String r3 = new java.lang.String
            java.nio.charset.Charset r0 = com.huawei.hms.push.w.a
            r3.<init>(r4, r0)
            r2.s = r3
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public final org.json.JSONObject a(org.json.JSONObject r3) throws org.json.JSONException {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "msgContent"
            r0.put(r1, r3)
            java.lang.String r3 = r2.a
            java.lang.String r1 = "group"
            r0.put(r1, r3)
            java.lang.String r3 = r2.A
            java.lang.String r1 = "tag"
            r0.put(r1, r3)
            int r3 = r2.x
            java.lang.String r1 = "autoCancel"
            r0.put(r1, r3)
            int r3 = r2.y
            java.lang.String r1 = "visibility"
            r0.put(r1, r3)
            java.lang.String r3 = r2.z
            java.lang.String r1 = "when"
            r0.put(r1, r3)
            return r0
    }

    public final org.json.JSONObject a(org.json.JSONObject r4, org.json.JSONObject r5) throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.f
            java.lang.String r2 = "dispPkgName"
            r0.put(r2, r1)
            java.lang.String r1 = r3.e
            java.lang.String r2 = "msgId"
            r0.put(r2, r1)
            java.lang.String r1 = r3.d
            java.lang.String r2 = "ap"
            r0.put(r2, r1)
            int r1 = r3.B
            java.lang.String r2 = "notifyId"
            r0.put(r2, r1)
            java.lang.String r1 = "psContent"
            r0.put(r1, r4)
            java.lang.String r4 = "notifyDetail"
            r0.put(r4, r5)
            java.lang.String r4 = r3.D
            java.lang.String r5 = "ticker"
            r0.put(r5, r4)
            java.lang.String r4 = r3.C
            java.lang.String r5 = "data"
            r0.put(r5, r4)
            return r0
    }

    public void a(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.F
            return r0
    }

    public final org.json.JSONObject b(org.json.JSONObject r4) throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r3.g
            java.lang.String r2 = "cmd"
            r0.put(r2, r1)
            java.lang.String r1 = r3.h
            java.lang.String r2 = "content"
            r0.put(r2, r1)
            java.lang.String r1 = r3.i
            java.lang.String r2 = "notifyIcon"
            r0.put(r2, r1)
            java.lang.String r1 = r3.j
            java.lang.String r2 = "notifyTitle"
            r0.put(r2, r1)
            java.lang.String r1 = r3.k
            java.lang.String r2 = "notifySummary"
            r0.put(r2, r1)
            java.lang.String r1 = "param"
            r0.put(r1, r4)
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final void c(org.json.JSONObject r5) throws org.json.JSONException {
            r4 = this;
            java.lang.String r0 = "ap"
            boolean r1 = r5.has(r0)
            if (r1 == 0) goto L3f
            java.lang.String r5 = r5.getString(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            r3 = 48
            if (r1 != 0) goto L39
            int r1 = r5.length()
            if (r1 >= r3) goto L39
            int r1 = r5.length()
            int r3 = r3 - r1
        L25:
            if (r2 >= r3) goto L2f
            java.lang.String r1 = "0"
            r0.append(r1)
            int r2 = r2 + 1
            goto L25
        L2f:
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.d = r5
            goto L3f
        L39:
            java.lang.String r5 = r5.substring(r2, r3)
            r4.d = r5
        L3f:
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public final boolean d(org.json.JSONObject r4) throws org.json.JSONException {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "acn"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L12
            java.lang.String r1 = r4.getString(r1)
            r3.m = r1
        L12:
            java.lang.String r1 = "intentUri"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L20
            java.lang.String r1 = r4.getString(r1)
            r3.c = r1
        L20:
            java.lang.String r1 = "appPackageName"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L30
            java.lang.String r4 = r4.getString(r1)
            r3.l = r4
            r4 = 1
            return r4
        L30:
            java.lang.String r4 = "PushSelfShowLog"
            java.lang.String r1 = "appPackageName is null"
            com.huawei.hms.support.log.HMSLog.d(r4, r1)
            return r0
    }

    public int e() {
            r1 = this;
            int r0 = r1.x
            return r0
    }

    public final boolean e(org.json.JSONObject r3) throws org.json.JSONException {
            r2 = this;
            java.lang.String r0 = "msgId"
            boolean r1 = r3.has(r0)
            if (r1 == 0) goto L27
            java.lang.Object r3 = r3.get(r0)
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L15
            java.lang.String r3 = (java.lang.String) r3
            r2.e = r3
            goto L25
        L15:
            boolean r0 = r3 instanceof java.lang.Integer
            if (r0 == 0) goto L25
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r2.e = r3
        L25:
            r3 = 1
            return r3
        L27:
            java.lang.String r3 = "PushSelfShowLog"
            java.lang.String r0 = "msgId == null"
            com.huawei.hms.support.log.HMSLog.i(r3, r0)
            r3 = 0
            return r3
    }

    public int f() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public final boolean f(org.json.JSONObject r4) {
            r3 = this;
            java.lang.String r0 = "style"
            java.lang.String r1 = "PushSelfShowLog"
            java.lang.String r2 = "enter parseNotifyParam"
            com.huawei.hms.support.log.HMSLog.d(r1, r2)
            java.lang.String r2 = "notifyDetail"
            org.json.JSONObject r4 = r4.getJSONObject(r2)     // Catch: org.json.JSONException -> L35
            boolean r2 = r4.has(r0)     // Catch: org.json.JSONException -> L35
            if (r2 == 0) goto L1b
            int r0 = r4.getInt(r0)     // Catch: org.json.JSONException -> L35
            r3.t = r0     // Catch: org.json.JSONException -> L35
        L1b:
            java.lang.String r0 = "bigTitle"
            java.lang.String r0 = r4.optString(r0)     // Catch: org.json.JSONException -> L35
            r3.u = r0     // Catch: org.json.JSONException -> L35
            java.lang.String r0 = "bigContent"
            java.lang.String r0 = r4.optString(r0)     // Catch: org.json.JSONException -> L35
            r3.v = r0     // Catch: org.json.JSONException -> L35
            java.lang.String r0 = "icon"
            java.lang.String r4 = r4.optString(r0)     // Catch: org.json.JSONException -> L35
            r3.E = r4     // Catch: org.json.JSONException -> L35
            r4 = 1
            return r4
        L35:
            r4 = move-exception
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.i(r1, r4)
            r4 = 0
            return r4
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.v
            return r0
    }

    public final void g(org.json.JSONObject r4) {
            r3 = this;
            java.lang.String r0 = "group"
            java.lang.String r0 = r4.optString(r0)
            r3.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NOTIFY_GROUP:"
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.String r0 = "autoCancel"
            r2 = 1
            int r0 = r4.optInt(r0, r2)
            r3.x = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "autoCancel: "
            r0.append(r2)
            int r2 = r3.x
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.String r0 = "visibility"
            r1 = 0
            int r0 = r4.optInt(r0, r1)
            r3.y = r0
            java.lang.String r0 = "when"
            java.lang.String r0 = r4.optString(r0)
            r3.z = r0
            java.lang.String r0 = "tag"
            java.lang.String r4 = r4.optString(r0)
            r3.A = r4
            return
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.u
            return r0
    }

    public final boolean h(org.json.JSONObject r4) {
            r3 = this;
            java.lang.String r0 = "autoClear"
            java.lang.String r1 = "param"
            r2 = 0
            org.json.JSONObject r4 = r4.getJSONObject(r1)     // Catch: java.lang.Exception -> L4e
            boolean r1 = r4.has(r0)     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L16
            int r0 = r4.getInt(r0)     // Catch: java.lang.Exception -> L4e
            r3.b = r0     // Catch: java.lang.Exception -> L4e
            goto L18
        L16:
            r3.b = r2     // Catch: java.lang.Exception -> L4e
        L18:
            java.lang.String r0 = "app"
            java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L4e
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L4e
            if (r0 != 0) goto L49
            java.lang.String r0 = "cosa"
            java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L4e
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L2d
            goto L49
        L2d:
            java.lang.String r0 = "url"
            java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L4e
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L3b
            r3.k(r4)     // Catch: java.lang.Exception -> L4e
            goto L4c
        L3b:
            java.lang.String r0 = "rp"
            java.lang.String r1 = r3.g     // Catch: java.lang.Exception -> L4e
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L4c
            r3.j(r4)     // Catch: java.lang.Exception -> L4e
            goto L4c
        L49:
            r3.d(r4)     // Catch: java.lang.Exception -> L4e
        L4c:
            r4 = 1
            return r4
        L4e:
            r4 = move-exception
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "ParseParam error "
            com.huawei.hms.support.log.HMSLog.e(r0, r1, r4)
            return r2
    }

    public java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final boolean i(org.json.JSONObject r4) throws org.json.JSONException {
            r3 = this;
            java.lang.String r0 = "psContent"
            boolean r1 = r4.has(r0)
            r2 = 0
            if (r1 == 0) goto L59
            org.json.JSONObject r4 = r4.getJSONObject(r0)
            java.lang.String r0 = "cmd"
            java.lang.String r0 = r4.getString(r0)
            r3.g = r0
            java.lang.String r0 = "content"
            java.lang.String r0 = r4.optString(r0)
            r3.h = r0
            java.lang.String r0 = "notifyIcon"
            java.lang.String r0 = r4.optString(r0)
            r3.i = r0
            java.lang.String r0 = "notifyTitle"
            java.lang.String r0 = r4.optString(r0)
            r3.j = r0
            java.lang.String r0 = "notifySummary"
            java.lang.String r0 = r4.optString(r0)
            r3.k = r0
            java.lang.String r0 = "ticker"
            java.lang.String r0 = r4.optString(r0)
            r3.D = r0
            java.lang.String r0 = "notifyDetail"
            boolean r0 = r4.has(r0)
            if (r0 == 0) goto L4c
            boolean r0 = r3.f(r4)
            if (r0 != 0) goto L4c
            return r2
        L4c:
            java.lang.String r0 = "param"
            boolean r0 = r4.has(r0)
            if (r0 == 0) goto L59
            boolean r4 = r3.h(r4)
            return r4
        L59:
            return r2
    }

    public java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final boolean j(org.json.JSONObject r5) throws org.json.JSONException {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "appPackageName"
            boolean r2 = r5.has(r1)
            if (r2 == 0) goto L12
            java.lang.String r1 = r5.getString(r1)
            r4.l = r1
        L12:
            java.lang.String r1 = "rpt"
            boolean r2 = r5.has(r1)
            if (r2 == 0) goto L3e
            java.lang.String r2 = "rpl"
            boolean r3 = r5.has(r2)
            if (r3 == 0) goto L3e
            java.lang.String r0 = r5.getString(r2)
            r4.o = r0
            java.lang.String r0 = r5.getString(r1)
            r4.p = r0
            java.lang.String r0 = "rpct"
            boolean r1 = r5.has(r0)
            if (r1 == 0) goto L3c
            java.lang.String r5 = r5.getString(r0)
            r4.q = r5
        L3c:
            r5 = 1
            return r5
        L3e:
            java.lang.String r5 = "PushSelfShowLog"
            java.lang.String r1 = "rpl or rpt is null"
            com.huawei.hms.support.log.HMSLog.d(r5, r1)
            return r0
    }

    public java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final boolean k(org.json.JSONObject r4) throws org.json.JSONException {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "url"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L4c
            java.lang.String r0 = r4.getString(r1)
            r3.n = r0
            java.lang.String r0 = "appPackageName"
            boolean r1 = r4.has(r0)
            if (r1 == 0) goto L20
            java.lang.String r0 = r4.getString(r0)
            r3.l = r0
        L20:
            java.lang.String r0 = "rpt"
            boolean r1 = r4.has(r0)
            if (r1 == 0) goto L4a
            java.lang.String r1 = "rpl"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L4a
            java.lang.String r1 = r4.getString(r1)
            r3.o = r1
            java.lang.String r0 = r4.getString(r0)
            r3.p = r0
            java.lang.String r0 = "rpct"
            boolean r1 = r4.has(r0)
            if (r1 == 0) goto L4a
            java.lang.String r4 = r4.getString(r0)
            r3.q = r4
        L4a:
            r4 = 1
            return r4
        L4c:
            java.lang.String r4 = "PushSelfShowLog"
            java.lang.String r1 = "url is null"
            com.huawei.hms.support.log.HMSLog.d(r4, r1)
            return r0
    }

    public java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String m() {
            r1 = this;
            java.lang.String r0 = r1.E
            return r0
    }

    public java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public byte[] o() {
            r3 = this;
            org.json.JSONObject r0 = r3.v()     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r0 = r3.b(r0)     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r1 = r3.r()     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r0 = r3.a(r0, r1)     // Catch: org.json.JSONException -> L1f
            org.json.JSONObject r0 = r3.a(r0)     // Catch: org.json.JSONException -> L1f
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L1f
            java.nio.charset.Charset r1 = com.huawei.hms.push.w.a     // Catch: org.json.JSONException -> L1f
            byte[] r0 = r0.getBytes(r1)     // Catch: org.json.JSONException -> L1f
            return r0
        L1f:
            r0 = move-exception
            java.lang.String r1 = "PushSelfShowLog"
            java.lang.String r2 = "getMsgData failed JSONException:"
            com.huawei.hms.support.log.HMSLog.e(r1, r2, r0)
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    public java.lang.String p() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "msgId ="
            r0.append(r1)
            java.lang.String r1 = r2.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.String r0 = r2.e
            return r0
    }

    public java.lang.String q() {
            r1 = this;
            java.lang.String r0 = r1.A
            return r0
    }

    public final org.json.JSONObject r() throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.t
            java.lang.String r2 = "style"
            r0.put(r2, r1)
            java.lang.String r1 = r3.u
            java.lang.String r2 = "bigTitle"
            r0.put(r2, r1)
            java.lang.String r1 = r3.v
            java.lang.String r2 = "bigContent"
            r0.put(r2, r1)
            java.lang.String r1 = r3.w
            java.lang.String r2 = "bigPic"
            r0.put(r2, r1)
            return r0
    }

    public int s() {
            r1 = this;
            int r0 = r1.B
            return r0
    }

    public java.lang.String t() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public java.lang.String u() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public final org.json.JSONObject v() throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.b
            java.lang.String r2 = "autoClear"
            r0.put(r2, r1)
            java.lang.String r1 = r3.n
            java.lang.String r2 = "url"
            r0.put(r2, r1)
            java.lang.String r1 = r3.o
            java.lang.String r2 = "rpl"
            r0.put(r2, r1)
            java.lang.String r1 = r3.p
            java.lang.String r2 = "rpt"
            r0.put(r2, r1)
            java.lang.String r1 = r3.q
            java.lang.String r2 = "rpct"
            r0.put(r2, r1)
            java.lang.String r1 = r3.l
            java.lang.String r2 = "appPackageName"
            r0.put(r2, r1)
            java.lang.String r1 = r3.m
            java.lang.String r2 = "acn"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c
            java.lang.String r2 = "intentUri"
            r0.put(r2, r1)
            return r0
    }

    public int w() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public java.lang.String x() {
            r1 = this;
            java.lang.String r0 = r1.D
            return r0
    }

    public byte[] y() {
            r2 = this;
            java.lang.String r0 = r2.s
            java.nio.charset.Charset r1 = com.huawei.hms.push.w.a
            byte[] r0 = r0.getBytes(r1)
            return r0
    }

    public boolean z() {
            r5 = this;
            java.lang.String r0 = "PushSelfShowLog"
            r1 = 0
            java.lang.String r2 = r5.r     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            if (r2 == 0) goto L11
            java.lang.String r2 = "msg is null"
            com.huawei.hms.support.log.HMSLog.d(r0, r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            return r1
        L11:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            java.lang.String r3 = r5.r     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r2.<init>(r3)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.g(r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            java.lang.String r3 = "msgContent"
            org.json.JSONObject r2 = r2.getJSONObject(r3)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            boolean r3 = r5.e(r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            if (r3 != 0) goto L28
            return r1
        L28:
            java.lang.String r3 = "dispPkgName"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.f = r3     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.c(r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            java.lang.String r3 = "notifyId"
            r4 = -1
            int r3 = r2.optInt(r3, r4)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.B = r3     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            java.lang.String r3 = "data"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.C = r3     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            java.lang.String r3 = "analyticInfo"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            r5.F = r3     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            boolean r0 = r5.i(r2)     // Catch: java.lang.Exception -> L51 org.json.JSONException -> L5a
            return r0
        L51:
            r2 = move-exception
            java.lang.String r2 = r2.toString()
            com.huawei.hms.support.log.HMSLog.d(r0, r2)
            return r1
        L5a:
            java.lang.String r2 = "parse message exception."
            com.huawei.hms.support.log.HMSLog.d(r0, r2)
            return r1
    }
}
