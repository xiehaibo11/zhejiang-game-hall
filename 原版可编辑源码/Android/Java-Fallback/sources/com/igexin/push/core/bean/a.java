package com.igexin.push.core.bean;

public class a {
    public java.lang.String a;
    public java.lang.String b;
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
    public long n;

    public a() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "open"
            r2.f = r0
            java.lang.String r0 = com.igexin.push.core.d.e
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.f
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.f = r0
        L25:
            java.lang.String r0 = "4.6.4.0"
            r2.e = r0
            java.lang.String r0 = com.igexin.push.core.d.x
            r2.b = r0
            java.lang.String r0 = com.igexin.push.core.d.w
            r2.c = r0
            java.lang.String r0 = com.igexin.push.core.d.z
            r2.d = r0
            java.lang.String r0 = com.igexin.push.core.d.y
            r2.a = r0
            java.lang.String r0 = "ANDROID"
            r2.h = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "android"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.j = r0
            java.lang.String r0 = "MDP"
            r2.k = r0
            java.lang.String r0 = com.igexin.push.core.d.A
            r2.g = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.n = r0
            java.lang.String r0 = com.igexin.push.core.d.B
            r2.l = r0
            java.lang.String r0 = com.igexin.push.util.j.a()
            r2.m = r0
            android.content.Context r0 = com.igexin.push.core.d.g
            boolean r0 = com.igexin.assist.sdk.a.h(r0)
            if (r0 == 0) goto L8f
            boolean r0 = com.igexin.push.config.j.u
            if (r0 == 0) goto L8f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "FCM-"
            r0.append(r1)
            java.lang.String r1 = r2.m
            if (r1 != 0) goto L86
            java.lang.String r1 = ""
        L86:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.m = r0
        L8f:
            return
    }

    public static java.lang.String a(com.igexin.push.core.bean.a r4) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r4.a
            java.lang.String r2 = ""
            if (r1 != 0) goto Lc
            r1 = r2
        Lc:
            java.lang.String r3 = "model"
            r0.put(r3, r1)
            java.lang.String r1 = r4.b
            if (r1 != 0) goto L16
            r1 = r2
        L16:
            java.lang.String r3 = "sim"
            r0.put(r3, r1)
            java.lang.String r1 = r4.c
            if (r1 != 0) goto L20
            r1 = r2
        L20:
            java.lang.String r3 = "imei"
            r0.put(r3, r1)
            java.lang.String r1 = r4.d
            if (r1 != 0) goto L2a
            r1 = r2
        L2a:
            java.lang.String r3 = "mac"
            r0.put(r3, r1)
            java.lang.String r1 = r4.e
            if (r1 != 0) goto L34
            r1 = r2
        L34:
            java.lang.String r3 = "version"
            r0.put(r3, r1)
            java.lang.String r1 = r4.f
            if (r1 != 0) goto L3e
            r1 = r2
        L3e:
            java.lang.String r3 = "channelid"
            r0.put(r3, r1)
            java.lang.String r1 = "type"
            java.lang.String r3 = "ANDROID"
            r0.put(r1, r3)
            java.lang.String r1 = r4.k
            if (r1 != 0) goto L4f
            r1 = r2
        L4f:
            java.lang.String r3 = "app"
            r0.put(r3, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "ANDROID-"
            r1.append(r3)
            java.lang.String r3 = r4.g
            if (r3 != 0) goto L63
            r3 = r2
        L63:
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "deviceid"
            r0.put(r3, r1)
            java.lang.String r1 = r4.l
            if (r1 != 0) goto L74
            r1 = r2
        L74:
            java.lang.String r3 = "device_token"
            r0.put(r3, r1)
            java.lang.String r1 = r4.m
            if (r1 != 0) goto L7e
            r1 = r2
        L7e:
            java.lang.String r3 = "brand"
            r0.put(r3, r1)
            java.lang.String r1 = r4.j
            if (r1 != 0) goto L88
            r1 = r2
        L88:
            java.lang.String r3 = "system_version"
            r0.put(r3, r1)
            java.lang.String r1 = r4.i
            if (r1 != 0) goto L92
            r1 = r2
        L92:
            java.lang.String r3 = "cell"
            r0.put(r3, r1)
            java.lang.String r1 = "aid"
            r0.put(r1, r2)
            java.lang.String r1 = "adid"
            r0.put(r1, r2)
            com.igexin.push.core.x r1 = com.igexin.push.core.x.a()
            android.content.Context r3 = com.igexin.push.core.d.g
            java.lang.Class r1 = r1.c(r3)
            java.lang.String r1 = r1.getName()
            java.lang.String r3 = com.igexin.push.core.CoreConsts.n
            boolean r3 = r3.equals(r1)
            if (r3 != 0) goto Lbc
            java.lang.String r3 = "us"
            r0.put(r3, r1)
        Lbc:
            com.igexin.push.core.x r1 = com.igexin.push.core.x.a()
            android.content.Context r3 = com.igexin.push.core.d.g
            java.lang.String r1 = r1.e(r3)
            java.lang.String r3 = "ua"
            r0.put(r3, r1)
            java.lang.String r1 = "oaid"
            r0.put(r1, r2)
            android.content.Context r1 = com.igexin.push.core.d.g
            boolean r1 = com.igexin.push.util.a.b(r1)
            java.lang.String r2 = "notification_enabled"
            r0.put(r2, r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "action"
            java.lang.String r3 = "addphoneinfo"
            r1.put(r2, r3)
            long r2 = r4.n
            java.lang.String r4 = java.lang.String.valueOf(r2)
            java.lang.String r2 = "id"
            r1.put(r2, r4)
            java.lang.String r4 = "info"
            r1.put(r4, r0)
            java.lang.String r4 = r1.toString()
            return r4
    }
}
