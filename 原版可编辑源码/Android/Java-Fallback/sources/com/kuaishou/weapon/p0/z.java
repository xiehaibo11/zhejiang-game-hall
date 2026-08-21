package com.kuaishou.weapon.p0;

public class z {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.util.Set<java.lang.String> e;
    private java.util.Set<java.lang.String> f;
    private java.util.Set<java.lang.String> g;
    private java.util.Set<java.lang.String> h;

    public z() {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.e = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.f = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.g = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.h = r0
            java.lang.String r0 = "0820"
            java.lang.String r1 = "f118f1f9431de3a626df48d7302911"
            java.lang.String r1 = com.kuaishou.weapon.p0.i.a(r1, r0)
            r2.a = r1
            java.lang.String r1 = "f118f1ef4616f3fc27d1"
            java.lang.String r1 = com.kuaishou.weapon.p0.i.a(r1, r0)
            r2.b = r1
            java.lang.String r1 = "f118f1e84f0bf5ba3bd1579c6d35"
            java.lang.String r1 = com.kuaishou.weapon.p0.i.a(r1, r0)
            r2.c = r1
            java.lang.String r1 = "fc03e7a44510"
            java.lang.String r0 = com.kuaishou.weapon.p0.i.a(r1, r0)
            r2.d = r0
            return
    }

    public int a() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.f     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L13
            java.util.Set<java.lang.String> r0 = r1.f     // Catch: java.lang.Exception -> L13
            int r0 = r0.size()     // Catch: java.lang.Exception -> L13
            if (r0 <= 0) goto L13
            java.util.Set<java.lang.String> r0 = r1.f     // Catch: java.lang.Exception -> L13
            int r0 = r0.size()     // Catch: java.lang.Exception -> L13
            return r0
        L13:
            r0 = 0
            return r0
    }

    public org.json.JSONArray a(android.content.Context r9) {
            r8 = this;
            r0 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L1e0 java.lang.Exception -> L1e7
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L1e0 java.lang.Exception -> L1e7
            java.lang.String r3 = "/proc/self/maps"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1e0 java.lang.Exception -> L1e7
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e0 java.lang.Exception -> L1e7
            java.util.HashSet r2 = new java.util.HashSet     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r2.<init>()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.util.HashSet r3 = new java.util.HashSet     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r3.<init>()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/system/fr"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/system/em"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/apex/com."
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/data/dalv"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/system/li"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/vendor/li"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r4 = "/system/ve"
            r3.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r9 = r9.getPackageName()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            boolean r4 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r4 == 0) goto L48
            r1.close()     // Catch: java.io.IOException -> L47
        L47:
            return r0
        L48:
            java.util.Set<java.lang.String> r4 = r8.e     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r4.clear()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.util.Set<java.lang.String> r4 = r8.f     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r4.clear()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.util.Set<java.lang.String> r4 = r8.g     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r4.clear()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.util.Set<java.lang.String> r4 = r8.h     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r4.clear()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
        L5c:
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r4 == 0) goto L1ca
            java.lang.String r5 = ".apk"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r6 = 0
            if (r5 != 0) goto L8e
            java.lang.String r5 = ".jar"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L8e
            java.lang.String r5 = ".dex"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L8e
            java.lang.String r5 = ".odex"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L8e
            java.lang.String r5 = ".so"
            boolean r5 = r4.endsWith(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 == 0) goto L8c
            goto L8e
        L8c:
            r5 = r6
            goto L8f
        L8e:
            r5 = 1
        L8f:
            if (r5 == 0) goto L5c
            java.lang.String r5 = "gson.jar"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            java.lang.String r5 = "volley.jar"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            java.lang.String r5 = "FwkPlugin"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            r5 = 47
            int r5 = r4.indexOf(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 < 0) goto L5c
            java.lang.String r4 = r4.substring(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            java.lang.String r5 = r8.a     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L1c7
            java.lang.String r5 = r8.b     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L1c7
            java.lang.String r5 = r8.c     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 == 0) goto Lcf
            goto L1c7
        Lcf:
            java.lang.String r5 = r8.d     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 == 0) goto Lec
            java.lang.String r5 = "libart.so"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto Lec
            java.lang.String r5 = "libart64.so"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto Lec
            java.util.Set<java.lang.String> r5 = r8.h     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r5.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
        Lec:
            java.lang.String r5 = "es/.0/"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            java.lang.String r5 = "app_DvaPlugin"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            java.lang.String r5 = "/system_ext/"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
            boolean r5 = r4.contains(r9)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 == 0) goto L11a
            java.lang.String r5 = "odex_cache"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L11a
            java.lang.String r5 = "app_"
            boolean r5 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 == 0) goto L5c
        L11a:
            int r5 = r4.length()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r7 = 10
            if (r5 <= r7) goto L127
            java.lang.String r5 = r4.substring(r6, r7)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            goto L128
        L127:
            r5 = r4
        L128:
            java.lang.String r6 = "FeatureFramework"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "GmsConfigOverlay"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "/system/app/"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "/system/vendor/lib/"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "/hw_"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "/system/product/lib"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L5c
            java.lang.String r6 = "mokee-"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L1c4
            java.lang.String r6 = "mokee."
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 == 0) goto L169
            goto L1c4
        L169:
            java.lang.String r6 = "lineageos-"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L1bd
            java.lang.String r6 = "lineageos."
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L1bd
            java.lang.String r6 = "Hook"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L1bd
            java.lang.String r6 = "hook"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 == 0) goto L18a
            goto L1bd
        L18a:
            java.lang.String r6 = "posedBridge"
            boolean r6 = r4.contains(r6)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r6 != 0) goto L198
            boolean r5 = r3.contains(r5)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r5 != 0) goto L5c
        L198:
            r2.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r5 = 15
            if (r4 > r5) goto L1ca
            java.util.Set<java.lang.String> r4 = r8.e     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r4 > r7) goto L1ca
            java.util.Set<java.lang.String> r4 = r8.f     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r4 > r7) goto L1ca
            java.util.Set<java.lang.String> r4 = r8.g     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r4 > r7) goto L1ca
            goto L5c
        L1bd:
            java.util.Set<java.lang.String> r5 = r8.g     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
        L1bf:
            r5.add(r4)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            goto L5c
        L1c4:
            java.util.Set<java.lang.String> r5 = r8.f     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            goto L1bf
        L1c7:
            java.util.Set<java.lang.String> r5 = r8.e     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            goto L1bf
        L1ca:
            int r9 = r2.size()     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            if (r9 <= 0) goto L1d9
            org.json.JSONArray r9 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r9.<init>(r2)     // Catch: java.lang.Throwable -> L1dd java.lang.Exception -> L1e8
            r1.close()     // Catch: java.io.IOException -> L1d8
        L1d8:
            return r9
        L1d9:
            r1.close()     // Catch: java.io.IOException -> L1eb
            goto L1eb
        L1dd:
            r9 = move-exception
            r0 = r1
            goto L1e1
        L1e0:
            r9 = move-exception
        L1e1:
            if (r0 == 0) goto L1e6
            r0.close()     // Catch: java.io.IOException -> L1e6
        L1e6:
            throw r9
        L1e7:
            r1 = r0
        L1e8:
            if (r1 == 0) goto L1eb
            goto L1d9
        L1eb:
            return r0
    }

    public java.util.Set<java.lang.String> b() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.g     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Lf
            java.util.Set<java.lang.String> r0 = r1.g     // Catch: java.lang.Exception -> Lf
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lf
            if (r0 <= 0) goto Lf
            java.util.Set<java.lang.String> r0 = r1.g     // Catch: java.lang.Exception -> Lf
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public java.util.Set<java.lang.String> c() {
            r1 = this;
            java.util.Set<java.lang.String> r0 = r1.h     // Catch: java.lang.Exception -> Lf
            if (r0 == 0) goto Lf
            java.util.Set<java.lang.String> r0 = r1.h     // Catch: java.lang.Exception -> Lf
            int r0 = r0.size()     // Catch: java.lang.Exception -> Lf
            if (r0 <= 0) goto Lf
            java.util.Set<java.lang.String> r0 = r1.h     // Catch: java.lang.Exception -> Lf
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public org.json.JSONObject d() {
            r5 = this;
            java.util.Set<java.lang.String> r0 = r5.e     // Catch: java.lang.Exception -> L4f
            if (r0 == 0) goto L4f
            java.util.Set<java.lang.String> r0 = r5.e     // Catch: java.lang.Exception -> L4f
            int r0 = r0.size()     // Catch: java.lang.Exception -> L4f
            if (r0 <= 0) goto L4f
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4f
            r0.<init>()     // Catch: java.lang.Exception -> L4f
            java.util.Set<java.lang.String> r1 = r5.e     // Catch: java.lang.Exception -> L4f
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L4f
        L17:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L4f
            if (r2 == 0) goto L48
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L4f
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L4f
            java.lang.String r3 = r5.a     // Catch: java.lang.Exception -> L4f
            boolean r3 = r2.contains(r3)     // Catch: java.lang.Exception -> L4f
            r4 = 1
            if (r3 == 0) goto L32
            java.lang.String r2 = "0"
        L2e:
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L4f
            goto L17
        L32:
            java.lang.String r3 = r5.b     // Catch: java.lang.Exception -> L4f
            boolean r3 = r2.contains(r3)     // Catch: java.lang.Exception -> L4f
            if (r3 == 0) goto L3d
            java.lang.String r2 = "1"
            goto L2e
        L3d:
            java.lang.String r3 = r5.c     // Catch: java.lang.Exception -> L4f
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Exception -> L4f
            if (r2 == 0) goto L17
            java.lang.String r2 = "2"
            goto L2e
        L48:
            int r1 = r0.length()     // Catch: java.lang.Exception -> L4f
            if (r1 <= 0) goto L4f
            return r0
        L4f:
            r0 = 0
            return r0
    }

    public java.util.Set e() {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet     // Catch: java.lang.Exception -> L3d
            r0.<init>()     // Catch: java.lang.Exception -> L3d
            java.util.Set<java.lang.String> r1 = r4.e     // Catch: java.lang.Exception -> L3d
            if (r1 == 0) goto L3d
            java.util.Set<java.lang.String> r1 = r4.e     // Catch: java.lang.Exception -> L3d
            int r1 = r1.size()     // Catch: java.lang.Exception -> L3d
            if (r1 <= 0) goto L3d
            java.util.Set<java.lang.String> r1 = r4.e     // Catch: java.lang.Exception -> L3d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L3d
        L17:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L3d
            if (r2 == 0) goto L36
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L3d
            java.lang.String r3 = "dex"
            boolean r3 = r2.endsWith(r3)     // Catch: java.lang.Exception -> L3d
            if (r3 == 0) goto L2e
            r0.add(r2)     // Catch: java.lang.Exception -> L3d
        L2e:
            int r2 = r0.size()     // Catch: java.lang.Exception -> L3d
            r3 = 5
            if (r2 > r3) goto L36
            goto L17
        L36:
            int r1 = r0.size()     // Catch: java.lang.Exception -> L3d
            if (r1 <= 0) goto L3d
            return r0
        L3d:
            r0 = 0
            return r0
    }
}
