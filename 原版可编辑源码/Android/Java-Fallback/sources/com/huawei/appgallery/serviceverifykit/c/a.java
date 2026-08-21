package com.huawei.appgallery.serviceverifykit.c;

public class a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.util.Map<java.lang.String, java.lang.String[]> f;
    private java.util.Map<java.lang.String, java.lang.Integer> g;
    private int h;
    private java.util.List<java.lang.String> i;
    private java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b> j;
    private int k;
    private java.lang.String l;
    private java.lang.String m;
    private android.content.Intent n;
    private com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType o;
    private int p;
    private int q;
    private int r;
    private int s;
    private android.content.Context t;
    private java.lang.String u;

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.i = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.j = r0
            r0 = 0
            r1.k = r0
            r1.p = r0
            r1.q = r0
            r1.r = r0
            r1.s = r0
            r1.t = r2
            return
    }

    private int a(android.os.Bundle r5, int r6) {
            r4 = this;
            java.lang.String r0 = "ag.application.base_priority"
            boolean r1 = r5.containsKey(r0)
            if (r1 == 0) goto L32
            int r5 = r5.getInt(r0)     // Catch: java.lang.Exception -> Le
            int r6 = r6 + r5
            goto L34
        Le:
            com.huawei.appgallery.serviceverifykit.d.d.b r1 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "skip package "
            r2.append(r3)
            java.lang.String r5 = r5.getString(r0)
            r2.append(r5)
            java.lang.String r5 = " is not number"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.String r0 = "MatchAppFinder"
            r1.a(r0, r5)
            int r6 = r6 + 1000
            return r6
        L32:
            int r6 = r6 + 1000
        L34:
            return r6
    }

    private int a(android.os.Bundle r7, int r8, java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b> r9) {
            r6 = this;
            java.util.Iterator r9 = r9.iterator()
            r0 = 0
            r1 = 1
            r2 = r0
        L7:
            boolean r3 = r9.hasNext()
            if (r3 == 0) goto L68
            java.lang.Object r3 = r9.next()
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$b r3 = (com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b) r3
            if (r8 != r1) goto L38
            java.lang.String r2 = r3.a()
            boolean r2 = r7.containsKey(r2)
            if (r2 == 0) goto L37
            java.lang.String r2 = r3.a()
            java.lang.Object r2 = r7.get(r2)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = r3.b()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L37
            r2 = r1
            goto L7
        L37:
            return r0
        L38:
            r4 = 2
            if (r8 != r4) goto L5e
            java.lang.String r4 = r3.a()
            boolean r4 = r7.containsKey(r4)
            if (r4 == 0) goto L7
            java.lang.String r4 = r3.a()
            java.lang.Object r4 = r7.get(r4)
            java.lang.String r4 = r4.toString()
            java.lang.String r3 = r3.b()
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L7
            int r2 = r2 + 1
            goto L7
        L5e:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r4 = "MatchAppFinder"
            java.lang.String r5 = "error input preferred package name"
            r3.a(r4, r5)
            goto L7
        L68:
            return r2
    }

    private int a(android.os.Bundle r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = r1.l
            boolean r0 = r2.containsKey(r0)
            if (r0 == 0) goto L18
            java.lang.String r0 = r1.l
            java.lang.String r2 = r2.getString(r0)
            boolean r2 = r2.equalsIgnoreCase(r3)
            if (r2 == 0) goto L16
            r2 = 1
            goto L19
        L16:
            r2 = -1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    private int a(java.lang.String r3, java.util.List<java.lang.String> r4) {
            r2 = this;
            java.util.Iterator r4 = r4.iterator()
            r0 = 0
        L5:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r4.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L5
            r0 = 1
            goto L5
        L19:
            return r0
    }

    private com.huawei.appgallery.serviceverifykit.a.a a(android.content.pm.PackageInfo r11, java.lang.String r12, java.lang.String r13, int r14) {
            r10 = this;
            android.content.pm.ApplicationInfo r11 = r11.applicationInfo
            android.os.Bundle r11 = r11.metaData
            r0 = 0
            java.lang.String r1 = "MatchAppFinder"
            if (r11 != 0) goto L25
            com.huawei.appgallery.serviceverifykit.d.d.b r11 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "skip package "
            r12.append(r14)
            r12.append(r13)
            java.lang.String r13 = " for metadata is null"
        L1a:
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            r11.a(r1, r12)
            return r0
        L25:
            java.lang.String r2 = r10.u
            int r7 = r10.a(r11, r2)
            java.lang.String r2 = r10.d
            boolean r2 = r11.containsKey(r2)
            if (r2 != 0) goto L61
            java.lang.String r2 = r10.e
            boolean r2 = r11.containsKey(r2)
            if (r2 == 0) goto L3c
            goto L61
        L3c:
            boolean r12 = r10.a(r13, r12)
            if (r12 == 0) goto L54
            r12 = 1
            r10.q = r12
            java.util.Map<java.lang.String, java.lang.Integer> r12 = r10.g
            java.lang.Object r12 = r12.get(r13)
            java.lang.Integer r12 = (java.lang.Integer) r12
            int r12 = r12.intValue()
            r10.p = r12
            goto L73
        L54:
            com.huawei.appgallery.serviceverifykit.d.d.b r11 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "Legacy is false, packageName is "
        L5d:
            r12.append(r14)
            goto L1a
        L61:
            boolean r12 = r10.a(r11, r13, r12)
            if (r12 != 0) goto L71
            com.huawei.appgallery.serviceverifykit.d.d.b r11 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r14 = "checkSinger failed, packageName is "
            goto L5d
        L71:
            r10.p = r14
        L73:
            java.util.List<java.lang.String> r12 = r10.i
            boolean r12 = r12.isEmpty()
            if (r12 != 0) goto L83
            java.util.List<java.lang.String> r12 = r10.i
            int r12 = r10.a(r13, r12)
            r10.r = r12
        L83:
            java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$b> r12 = r10.j
            boolean r12 = r12.isEmpty()
            if (r12 != 0) goto L95
            int r12 = r10.k
            java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$b> r14 = r10.j
            int r12 = r10.a(r11, r12, r14)
            r10.s = r12
        L95:
            int r12 = r10.p
            int r5 = r10.a(r11, r12)
            com.huawei.appgallery.serviceverifykit.a.a r11 = new com.huawei.appgallery.serviceverifykit.a.a
            int r6 = r10.q
            int r8 = r10.r
            int r9 = r10.s
            r3 = r11
            r4 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9)
            return r11
    }

    private java.lang.String a(android.content.pm.ResolveInfo r3) {
            r2 = this;
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r0 = r2.o
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.ACTIVITY
            if (r0 == r1) goto L10
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.BROADCAST
            if (r0 != r1) goto Lb
            goto L10
        Lb:
            android.content.pm.ServiceInfo r3 = r3.serviceInfo
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo
            goto L14
        L10:
            android.content.pm.ActivityInfo r3 = r3.activityInfo
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo
        L14:
            java.lang.String r3 = r3.packageName
            return r3
    }

    private static java.lang.String a(java.lang.String r8) {
            java.lang.String r0 = ""
            java.lang.String r1 = "MatchAppFinder"
            java.lang.String r2 = "android.os.SystemProperties"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            java.lang.String r3 = "get"
            r4 = 1
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            r4[r7] = r8     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            java.lang.Object r8 = r2.invoke(r3, r4)     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L24 java.lang.ClassNotFoundException -> L2c
            return r8
        L24:
            com.huawei.appgallery.serviceverifykit.d.d.b r8 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r2 = "getSystemProperties Exception while getting system property"
        L28:
            r8.a(r1, r2)
            return r0
        L2c:
            com.huawei.appgallery.serviceverifykit.d.d.b r8 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r2 = "getSystemProperties ClassNotFoundException"
            goto L28
    }

    private java.util.List<android.content.pm.ResolveInfo> a(android.content.pm.PackageManager r3) {
            r2 = this;
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r0 = r2.o
            if (r0 != 0) goto L12
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = r2.a
            r0.<init>(r1)
        Lb:
            int r1 = r2.h
            java.util.List r3 = r3.queryIntentServices(r0, r1)
            goto L2f
        L12:
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.ACTIVITY
            if (r0 != r1) goto L1f
            android.content.Intent r0 = r2.n
            int r1 = r2.h
            java.util.List r3 = r3.queryIntentActivities(r0, r1)
            goto L2f
        L1f:
            com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit$Builder$ComponentType r1 = com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType.BROADCAST
            if (r0 != r1) goto L2c
            android.content.Intent r0 = r2.n
            int r1 = r2.h
            java.util.List r3 = r3.queryBroadcastReceivers(r0, r1)
            goto L2f
        L2c:
            android.content.Intent r0 = r2.n
            goto Lb
        L2f:
            return r3
    }

    private java.util.List<com.huawei.appgallery.serviceverifykit.a.a> a(java.util.List<android.content.pm.ResolveInfo> r9, android.content.pm.PackageManager r10, int r11) {
            r8 = this;
            java.lang.String r0 = "MatchAppFinder"
            java.lang.String r1 = "skip package "
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r9 = r9.iterator()
        Ld:
            boolean r3 = r9.hasNext()
            if (r3 == 0) goto Laf
            java.lang.Object r3 = r9.next()
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            java.lang.String r4 = r8.a(r3)
            android.content.pm.PackageInfo r5 = r10.getPackageInfo(r4, r11)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L94
            android.content.pm.ApplicationInfo r6 = r5.applicationInfo
            if (r6 != 0) goto L36
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = " for ApplicationInfo is null"
            goto La3
        L36:
            android.content.pm.Signature[] r6 = r5.signatures
            if (r6 == 0) goto L84
            int r7 = r6.length
            if (r7 > 0) goto L3e
            goto L84
        L3e:
            r7 = 0
            r6 = r6[r7]
            byte[] r6 = r6.toByteArray()
            int r7 = r6.length
            if (r7 != 0) goto L58
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = " for sign is empty"
            goto La3
        L58:
            java.lang.String r7 = "SHA-256"
            java.security.MessageDigest r7 = java.security.MessageDigest.getInstance(r7)     // Catch: java.security.NoSuchAlgorithmException -> L74
            byte[] r6 = r7.digest(r6)     // Catch: java.security.NoSuchAlgorithmException -> L74
            r7 = 1
            java.lang.String r6 = com.huawei.appgallery.serviceverifykit.d.b.b(r6, r7)
            int r3 = r3.priority
            com.huawei.appgallery.serviceverifykit.a.a r3 = r8.a(r5, r6, r4, r3)
            if (r3 != 0) goto L70
            goto Ld
        L70:
            r2.add(r3)
            goto Ld
        L74:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = " for AlgorithmException"
            goto La3
        L84:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = " for no sign"
            goto La3
        L94:
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r4)
            java.lang.String r4 = " for PackageInfo is null"
        La3:
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.a(r0, r4)
            goto Ld
        Laf:
            return r2
    }

    private boolean a(android.os.Bundle r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r0 = r3.d
            boolean r0 = r4.containsKey(r0)
            r1 = 0
            java.lang.String r2 = "MatchAppFinder"
            if (r0 == 0) goto L44
            java.lang.String r0 = r3.e
            boolean r0 = r4.containsKey(r0)
            if (r0 != 0) goto L14
            goto L44
        L14:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = "&"
            r0.append(r5)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            java.lang.String r6 = r3.d
            java.lang.String r6 = r4.getString(r6)
            java.lang.String r0 = r3.e
            java.lang.String r4 = r4.getString(r0)
            boolean r4 = r3.a(r5, r6, r4)
            if (r4 != 0) goto L42
            com.huawei.appgallery.serviceverifykit.d.d.b r4 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r5 = "checkSinger failed"
        L3e:
            r4.a(r2, r5)
            return r1
        L42:
            r4 = 1
            return r4
        L44:
            com.huawei.appgallery.serviceverifykit.d.d.b r4 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "skip package "
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = " for no signer or no certChain"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            goto L3e
    }

    private boolean a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.util.Map<java.lang.String, java.lang.String[]> r0 = r4.f
            boolean r0 = r0.containsKey(r5)
            r1 = 0
            if (r0 == 0) goto L24
            java.util.Map<java.lang.String, java.lang.String[]> r0 = r4.f
            java.lang.Object r5 = r0.get(r5)
            java.lang.String[] r5 = (java.lang.String[]) r5
            if (r5 == 0) goto L24
            int r0 = r5.length
            r2 = r1
        L15:
            if (r2 >= r0) goto L24
            r3 = r5[r2]
            boolean r3 = r6.equals(r3)
            if (r3 == 0) goto L21
            r5 = 1
            return r5
        L21:
            int r2 = r2 + 1
            goto L15
        L24:
            return r1
    }

    private boolean a(java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            r1 = 0
            java.lang.String r2 = "MatchAppFinder"
            if (r0 != 0) goto L74
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L10
            goto L74
        L10:
            java.util.List r8 = com.huawei.appgallery.serviceverifykit.d.c.b(r8)
            int r0 = r8.size()
            if (r0 != 0) goto L22
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "certChain is empty"
        L1e:
            r6.a(r2, r7)
            return r1
        L22:
            android.content.Context r0 = r5.t
            java.security.cert.X509Certificate r0 = com.huawei.appgallery.serviceverifykit.d.c.a(r0)
            boolean r0 = com.huawei.appgallery.serviceverifykit.d.c.a(r0, r8)
            if (r0 != 0) goto L33
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "failed to verify cert chain"
            goto L1e
        L33:
            java.lang.Object r8 = r8.get(r1)
            java.security.cert.X509Certificate r8 = (java.security.cert.X509Certificate) r8
            java.lang.String r0 = r5.b
            boolean r0 = com.huawei.appgallery.serviceverifykit.d.c.a(r8, r0)
            if (r0 != 0) goto L46
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "CN is invalid"
            goto L1e
        L46:
            java.lang.String r0 = r5.c
            boolean r0 = com.huawei.appgallery.serviceverifykit.d.c.b(r8, r0)
            if (r0 != 0) goto L53
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "OU is invalid"
            goto L1e
        L53:
            r0 = 0
            java.lang.String r3 = "UTF-8"
            byte[] r0 = r6.getBytes(r3)     // Catch: java.io.UnsupportedEncodingException -> L5b
            goto L63
        L5b:
            r6 = move-exception
            com.huawei.appgallery.serviceverifykit.d.d.b r3 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r4 = "checkCertChain UnsupportedEncodingException:"
            r3.a(r2, r4, r6)
        L63:
            byte[] r6 = com.huawei.appgallery.serviceverifykit.d.a.a(r7)
            boolean r6 = com.huawei.appgallery.serviceverifykit.d.c.a(r8, r0, r6)
            if (r6 != 0) goto L72
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "signature is invalid"
            goto L1e
        L72:
            r6 = 1
            return r6
        L74:
            com.huawei.appgallery.serviceverifykit.d.d.b r6 = com.huawei.appgallery.serviceverifykit.d.d.b.b
            java.lang.String r7 = "args is invalid"
            goto L1e
    }

    public java.util.List<com.huawei.appgallery.serviceverifykit.a.a> a() {
            r3 = this;
            android.content.Context r0 = r3.t
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            java.util.List r1 = r3.a(r0)
            int r2 = r1.size()
            if (r2 != 0) goto L12
            r0 = 0
            return r0
        L12:
            java.lang.String r2 = r3.m
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L1d
            java.lang.String r2 = android.os.Build.MANUFACTURER
            goto L23
        L1d:
            java.lang.String r2 = r3.m
            java.lang.String r2 = a(r2)
        L23:
            r3.u = r2
            int r2 = r3.h
            r2 = r2 | 128(0x80, float:1.8E-43)
            r2 = r2 | 64
            java.util.List r0 = r3.a(r1, r0, r2)
            return r0
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.util.Map<java.lang.String, java.lang.String[]> r6, java.util.Map<java.lang.String, java.lang.Integer> r7, int r8, java.util.List<java.lang.String> r9, java.util.List<com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.b> r10, int r11, java.lang.String r12, java.lang.String r13, android.content.Intent r14, com.huawei.appgallery.serviceverifykit.api.ServiceVerifyKit.Builder.ComponentType r15) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.g = r7
            r0.h = r8
            r0.i = r9
            r0.j = r10
            r0.k = r11
            r0.l = r12
            r0.m = r13
            r0.n = r14
            r0.o = r15
            return
    }
}
