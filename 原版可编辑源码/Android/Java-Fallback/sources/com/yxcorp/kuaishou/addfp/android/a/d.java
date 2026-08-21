package com.yxcorp.kuaishou.addfp.android.a;

public class d {
    private static volatile com.yxcorp.kuaishou.addfp.android.a.d d;
    private com.yxcorp.kuaishou.addfp.android.a.e a;
    private java.util.concurrent.ConcurrentHashMap b;
    private android.content.Context c;

    private d(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 10
            r0.<init>(r1)
            r2.b = r0
            r2.c = r3     // Catch: java.lang.Throwable -> L19
            com.yxcorp.kuaishou.addfp.android.a.e r0 = new com.yxcorp.kuaishou.addfp.android.a.e     // Catch: java.lang.Throwable -> L19
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L19
            r2.a = r0     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    public static com.yxcorp.kuaishou.addfp.android.a.d a(android.content.Context r2) {
            com.yxcorp.kuaishou.addfp.android.a.d r0 = com.yxcorp.kuaishou.addfp.android.a.d.d
            if (r0 != 0) goto L17
            java.lang.Class<com.yxcorp.kuaishou.addfp.android.a.d> r0 = com.yxcorp.kuaishou.addfp.android.a.d.class
            monitor-enter(r0)
            com.yxcorp.kuaishou.addfp.android.a.d r1 = com.yxcorp.kuaishou.addfp.android.a.d.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.yxcorp.kuaishou.addfp.android.a.d r1 = new com.yxcorp.kuaishou.addfp.android.a.d     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.yxcorp.kuaishou.addfp.android.a.d.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.yxcorp.kuaishou.addfp.android.a.d r2 = com.yxcorp.kuaishou.addfp.android.a.d.d
            return r2
    }

    private java.lang.String a(java.util.HashMap r4) {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L2b
            r0.<init>()     // Catch: java.lang.Throwable -> L2b
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L2b
            r1.writeObject(r4)     // Catch: java.lang.Throwable -> L29
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = "20212102sjcudiab"
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L29
            byte[] r4 = com.yxcorp.kuaishou.addfp.android.b.b.c(r4, r0)     // Catch: java.lang.Throwable -> L29
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L29
            r2 = 0
            byte[] r4 = android.util.Base64.encode(r4, r2)     // Catch: java.lang.Throwable -> L29
            r0.<init>(r4)     // Catch: java.lang.Throwable -> L29
            r1.close()     // Catch: java.io.IOException -> L28
        L28:
            return r0
        L29:
            r4 = move-exception
            goto L2d
        L2b:
            r4 = move-exception
            r1 = 0
        L2d:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L35
            r1.close()     // Catch: java.io.IOException -> L35
        L35:
            java.lang.String r4 = ""
            return r4
        L38:
            r4 = move-exception
            if (r1 == 0) goto L3e
            r1.close()     // Catch: java.io.IOException -> L3e
        L3e:
            throw r4
    }

    public static void a(android.content.Context r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L7
            return
        L7:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L3c
            r1 = 0
            java.io.File r4 = com.yxcorp.kuaishou.addfp.android.b.b.a(r4, r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "Lm91a2R0ZnQ="
            byte[] r3 = android.util.Base64.decode(r3, r1)     // Catch: java.lang.Throwable -> L3c
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r4, r2)     // Catch: java.lang.Throwable -> L3c
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r0.getParent()     // Catch: java.lang.Throwable -> L3c
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L3c
            r4.mkdirs()     // Catch: java.lang.Throwable -> L3c
            java.io.FileWriter r4 = new java.io.FileWriter     // Catch: java.lang.Throwable -> L3c
            r4.<init>(r0, r1)     // Catch: java.lang.Throwable -> L3c
            r4.write(r5)     // Catch: java.lang.Throwable -> L3a
            r4.flush()     // Catch: java.lang.Throwable -> L3a
            r4.close()     // Catch: java.lang.Throwable -> L3a
            r4.close()     // Catch: java.io.IOException -> L48
            return
        L3a:
            r5 = move-exception
            goto L3f
        L3c:
            r4 = move-exception
            r5 = r4
            r4 = 0
        L3f:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L49
            if (r4 == 0) goto L48
            r4.close()     // Catch: java.io.IOException -> L48
        L48:
            return
        L49:
            r5 = move-exception
            if (r4 == 0) goto L4f
            r4.close()     // Catch: java.io.IOException -> L4f
        L4f:
            throw r5
    }

    public synchronized android.util.Pair a() {
            r7 = this;
            monitor-enter(r7)
            r0 = 0
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> Lc8
            if (r1 == 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8
            r1.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.util.concurrent.ConcurrentHashMap r2 = r7.b     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r3 = "cache_e"
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lc8
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc8
            if (r2 != 0) goto L2d
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc8
            android.util.Pair r1 = android.util.Pair.create(r2, r1)     // Catch: java.lang.Throwable -> Lc8
            java.util.concurrent.ConcurrentHashMap r2 = r7.b     // Catch: java.lang.Throwable -> Lc8
            android.util.Pair r0 = android.util.Pair.create(r1, r2)     // Catch: java.lang.Throwable -> Lc8
            monitor-exit(r7)
            return r0
        L2d:
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> Lc8
            r1.clear()     // Catch: java.lang.Throwable -> Lc8
            com.yxcorp.kuaishou.addfp.android.a.e r1 = r7.a     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r1 = r1.b()     // Catch: java.lang.Throwable -> Lc8
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lc8
            if (r2 != 0) goto L97
            r2 = 0
            byte[] r2 = android.util.Base64.decode(r1, r2)     // Catch: java.lang.Throwable -> L44
            goto L45
        L44:
            r2 = r0
        L45:
            if (r2 != 0) goto L4d
            r3 = 8
            byte[] r2 = android.util.Base64.decode(r1, r3)     // Catch: java.lang.Throwable -> L4d
        L4d:
            java.lang.String r1 = "20212102sjcudiab"
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L93
            byte[] r1 = com.yxcorp.kuaishou.addfp.android.b.b.b(r2, r1)     // Catch: java.lang.Throwable -> L93
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L93
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L93
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L93
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = "cache_e"
            java.lang.String r4 = "cache_e"
            java.lang.String r5 = ""
            java.lang.String r4 = r2.optString(r4, r5)     // Catch: java.lang.Throwable -> L93
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L93
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = "cache_m"
            java.lang.String r4 = "cache_m"
            java.lang.String r5 = ""
            java.lang.String r4 = r2.optString(r4, r5)     // Catch: java.lang.Throwable -> L93
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L93
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> L93
            java.lang.String r3 = "c_time"
            java.lang.String r4 = "c_time"
            r5 = 0
            long r4 = r2.optLong(r4, r5)     // Catch: java.lang.Throwable -> L93
            java.lang.String r2 = java.lang.Long.toString(r4)     // Catch: java.lang.Throwable -> L93
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L93
            goto L97
        L93:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lc8
        L97:
            java.util.concurrent.ConcurrentHashMap r1 = r7.b     // Catch: java.lang.Throwable -> Lc8
            if (r1 == 0) goto Lcc
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Lc8
            if (r1 <= 0) goto Lcc
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8
            r1.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.util.concurrent.ConcurrentHashMap r2 = r7.b     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r3 = "cache_e"
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> Lc8
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc8
            if (r2 != 0) goto Lcc
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc8
            android.util.Pair r1 = android.util.Pair.create(r2, r1)     // Catch: java.lang.Throwable -> Lc8
            java.util.concurrent.ConcurrentHashMap r2 = r7.b     // Catch: java.lang.Throwable -> Lc8
            android.util.Pair r0 = android.util.Pair.create(r1, r2)     // Catch: java.lang.Throwable -> Lc8
            monitor-exit(r7)
            return r0
        Lc8:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Throwable -> Lda
        Lcc:
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "8"
            android.util.Pair r1 = android.util.Pair.create(r1, r2)     // Catch: java.lang.Throwable -> Lda
            android.util.Pair r0 = android.util.Pair.create(r1, r0)     // Catch: java.lang.Throwable -> Lda
            monitor-exit(r7)
            return r0
        Lda:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public java.lang.String a(java.lang.String r5) {
            r4 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L40
            android.content.Context r1 = r4.c     // Catch: java.lang.Throwable -> L40
            r2 = 0
            java.io.File r1 = com.yxcorp.kuaishou.addfp.android.b.b.a(r1, r2)     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> L40
            byte[] r5 = android.util.Base64.decode(r5, r2)     // Catch: java.lang.Throwable -> L40
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L40
            r0.<init>(r1, r3)     // Catch: java.lang.Throwable -> L40
            boolean r5 = r0.exists()     // Catch: java.lang.Throwable -> L40
            if (r5 == 0) goto L44
            java.io.FileReader r5 = new java.io.FileReader     // Catch: java.lang.Throwable -> L40
            r5.<init>(r0)     // Catch: java.lang.Throwable -> L40
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L40
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L40
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
            r5.<init>()     // Catch: java.lang.Throwable -> L40
        L2a:
            java.lang.String r1 = r0.readLine()     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L34
            r5.append(r1)     // Catch: java.lang.Throwable -> L40
            goto L2a
        L34:
            r0.close()     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = r5.trim()     // Catch: java.lang.Throwable -> L40
            return r5
        L40:
            r5 = move-exception
            r5.printStackTrace()
        L44:
            java.lang.String r5 = ""
            return r5
    }

    public synchronized void a(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L64
            java.util.concurrent.ConcurrentHashMap r3 = r6.b     // Catch: java.lang.Throwable -> L64
            java.lang.String r4 = "c_time"
            java.lang.String r5 = java.lang.Long.toString(r1)     // Catch: java.lang.Throwable -> L64
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> L64
            java.util.concurrent.ConcurrentHashMap r3 = r6.b     // Catch: java.lang.Throwable -> L64
            java.lang.String r4 = "cache_e"
            r3.put(r4, r7)     // Catch: java.lang.Throwable -> L64
            java.util.concurrent.ConcurrentHashMap r3 = r6.b     // Catch: java.lang.Throwable -> L64
            java.lang.String r4 = "cache_m"
            r3.put(r4, r8)     // Catch: java.lang.Throwable -> L64
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L64
            r3.<init>()     // Catch: java.lang.Throwable -> L64
            java.lang.String r4 = "c_time"
            r3.put(r4, r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = "cache_e"
            r3.put(r1, r7)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = "cache_m"
            r3.put(r1, r8)     // Catch: java.lang.Throwable -> L64
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Throwable -> L64
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = "20212102sjcudiab"
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L64
            byte[] r8 = com.yxcorp.kuaishou.addfp.android.b.b.c(r8, r1)     // Catch: java.lang.Throwable -> L64
            r1 = 0
            byte[] r1 = android.util.Base64.encode(r8, r1)     // Catch: java.lang.Throwable -> L4b
            goto L4c
        L4b:
            r1 = r0
        L4c:
            if (r1 != 0) goto L54
            r2 = 8
            byte[] r1 = android.util.Base64.encode(r8, r2)     // Catch: java.lang.Throwable -> L54
        L54:
            if (r1 == 0) goto L64
            java.lang.String r8 = new java.lang.String     // Catch: java.lang.Throwable -> L64
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L64
            com.yxcorp.kuaishou.addfp.android.a.e r1 = r6.a     // Catch: java.lang.Throwable -> L64
            r1.a(r8)     // Catch: java.lang.Throwable -> L64
            goto L64
        L61:
            r7 = move-exception
            goto Lf8
        L64:
            android.content.Context r8 = r6.c     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r1 = "k_w_o_d_out_dtt"
            java.lang.String r8 = com.yxcorp.kuaishou.addfp.c.a.a.a(r8, r1)     // Catch: java.lang.Throwable -> Lf2
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lf2
            if (r1 == 0) goto L88
            android.content.Context r1 = r6.c     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r2 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String r3 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3}     // Catch: java.lang.Throwable -> Lf2
            boolean r1 = com.yxcorp.kuaishou.addfp.android.b.g.a(r1, r2)     // Catch: java.lang.Throwable -> Lf2
            if (r1 == 0) goto L88
            java.lang.String r8 = "Lm91a2R0ZnQ="
            java.lang.String r8 = r6.a(r8)     // Catch: java.lang.Throwable -> Lf2
        L88:
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lf2
            if (r1 != 0) goto Lb0
            java.util.LinkedHashMap r0 = r6.b(r8)     // Catch: java.lang.Throwable -> Lf2
            if (r0 == 0) goto Lb0
            com.yxcorp.kuaishou.addfp.android.a.c r8 = com.yxcorp.kuaishou.addfp.android.a.b.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r1 = r8.a()     // Catch: java.lang.Throwable -> Lf2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lf2
            if (r2 != 0) goto Lb0
            boolean r2 = r0.containsKey(r1)     // Catch: java.lang.Throwable -> Lf2
            if (r2 == 0) goto La9
            r0.remove(r1)     // Catch: java.lang.Throwable -> Lf2
        La9:
            java.lang.String r8 = r8.a()     // Catch: java.lang.Throwable -> Lf2
            r0.put(r8, r7)     // Catch: java.lang.Throwable -> Lf2
        Lb0:
            if (r0 == 0) goto Lb8
            int r8 = r0.size()     // Catch: java.lang.Throwable -> Lf2
            if (r8 != 0) goto Lc6
        Lb8:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap     // Catch: java.lang.Throwable -> Lf2
            r0.<init>()     // Catch: java.lang.Throwable -> Lf2
            com.yxcorp.kuaishou.addfp.android.a.c r8 = com.yxcorp.kuaishou.addfp.android.a.b.a     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r8 = r8.a()     // Catch: java.lang.Throwable -> Lf2
            r0.put(r8, r7)     // Catch: java.lang.Throwable -> Lf2
        Lc6:
            java.lang.String r7 = r6.a(r0)     // Catch: java.lang.Throwable -> Lf2
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lf2
            if (r8 != 0) goto Lf6
            android.content.Context r8 = r6.c     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r0 = "k_w_o_d_out_dtt"
            android.content.ContentResolver r8 = r8.getContentResolver()     // Catch: java.lang.Throwable -> Ldb
            android.provider.Settings.System.putString(r8, r0, r7)     // Catch: java.lang.Throwable -> Ldb
        Ldb:
            android.content.Context r8 = r6.c     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r0 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}     // Catch: java.lang.Throwable -> Lf2
            boolean r8 = com.yxcorp.kuaishou.addfp.android.b.g.a(r8, r0)     // Catch: java.lang.Throwable -> Lf2
            if (r8 == 0) goto Lf6
            android.content.Context r8 = r6.c     // Catch: java.lang.Throwable -> Lf2
            a(r8, r7)     // Catch: java.lang.Throwable -> Lf2
            monitor-exit(r6)
            return
        Lf2:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L61
        Lf6:
            monitor-exit(r6)
            return
        Lf8:
            monitor-exit(r6)
            throw r7
    }

    public java.util.LinkedHashMap b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L42
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L38
            r0 = 0
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = "20212102sjcudiab"
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L38
            byte[] r3 = com.yxcorp.kuaishou.addfp.android.b.b.b(r3, r0)     // Catch: java.lang.Throwable -> L38
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L38
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L38
            java.io.ObjectInputStream r3 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L38
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L38
            java.lang.Object r0 = r3.readObject()     // Catch: java.lang.Throwable -> L35
            java.util.LinkedHashMap r0 = (java.util.LinkedHashMap) r0     // Catch: java.lang.Throwable -> L35
            r3.close()     // Catch: java.io.IOException -> L34
        L34:
            return r0
        L35:
            r0 = move-exception
            r1 = r3
            goto L3a
        L38:
            r3 = move-exception
            r0 = r3
        L3a:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.io.IOException -> L42
        L42:
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>()
            return r3
        L48:
            r3 = move-exception
            if (r1 == 0) goto L4e
            r1.close()     // Catch: java.io.IOException -> L4e
        L4e:
            throw r3
    }
}
