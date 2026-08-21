package com.vivo.push.util;

public class b {
    protected android.content.Context a;
    private java.lang.String b;
    private volatile android.content.SharedPreferences c;
    private java.util.HashMap<java.lang.String, java.lang.String> d;
    private java.util.HashMap<java.lang.String, java.lang.Long> e;
    private java.util.HashMap<java.lang.String, java.lang.Integer> f;
    private java.util.HashMap<java.lang.String, java.lang.Boolean> g;

    public b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.f = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            return
    }

    public static void a(android.content.SharedPreferences.Editor r2) {
            if (r2 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L11
            r2.apply()
            return
        L11:
            r2.commit()
            return
    }

    private void a(java.util.Map<java.lang.String, java.lang.String> r6) {
            r5 = this;
            int r0 = r6.size()
            if (r0 <= 0) goto L39
            r5.b()
            android.content.SharedPreferences r0 = r5.c
            if (r0 == 0) goto L39
            android.content.SharedPreferences r0 = r5.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.util.Set r1 = r6.keySet()
            java.util.Iterator r1 = r1.iterator()
        L1b:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L36
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r6.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            java.util.HashMap<java.lang.String, java.lang.String> r4 = r5.d
            r4.put(r2, r3)
            r0.putString(r2, r3)
            goto L1b
        L36:
            a(r0)
        L39:
            return
    }

    private void b() {
            r3 = this;
            android.content.SharedPreferences r0 = r3.c
            if (r0 != 0) goto L1f
            android.content.Context r0 = r3.a
            if (r0 == 0) goto L12
            java.lang.String r1 = r3.b
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            r3.c = r0
            goto L1f
        L12:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.Throwable r1 = new java.lang.Throwable
            r1.<init>()
            java.lang.String r2 = "SharedPreferences is not init"
            r0.<init>(r2, r1)
            throw r0
        L1f:
            return
    }

    private java.util.List<java.lang.String> c(java.lang.String r10) {
            r9 = this;
            java.lang.String r0 = ",#@"
            android.content.Context r1 = r9.a
            java.lang.String r2 = "BaseSharePreference"
            r3 = 0
            if (r1 != 0) goto Lf
            java.lang.String r10 = " parsLocalIv error mContext is null "
            com.vivo.push.util.p.c(r2, r10)
            return r3
        Lf:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            android.content.Context r4 = r9.a     // Catch: java.lang.Exception -> L5c
            android.content.Context r5 = r9.a     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Exception -> L5c
            java.lang.Object r10 = com.vivo.push.util.z.a(r4, r5, r10)     // Catch: java.lang.Exception -> L5c
            if (r10 != 0) goto L23
            return r3
        L23:
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L5c
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L5c
            r5 = 2
            byte[] r10 = android.util.Base64.decode(r10, r5)     // Catch: java.lang.Exception -> L5c
            r4.<init>(r10)     // Catch: java.lang.Exception -> L5c
            boolean r10 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L5c
            if (r10 == 0) goto L38
            return r3
        L38:
            java.lang.String[] r10 = r4.split(r0)     // Catch: java.lang.Exception -> L5c
            if (r10 == 0) goto L5b
            int r4 = r10.length     // Catch: java.lang.Exception -> L5c
            r5 = 4
            if (r4 >= r5) goto L43
            goto L5b
        L43:
            int r4 = r10.length     // Catch: java.lang.Exception -> L5c
            r6 = 0
        L45:
            if (r6 >= r4) goto L55
            r7 = r10[r6]     // Catch: java.lang.Exception -> L5c
            java.lang.String r8 = ""
            java.lang.String r7 = r7.replace(r0, r8)     // Catch: java.lang.Exception -> L5c
            r1.add(r7)     // Catch: java.lang.Exception -> L5c
            int r6 = r6 + 1
            goto L45
        L55:
            int r10 = r1.size()     // Catch: java.lang.Exception -> L5c
            if (r10 >= r5) goto L75
        L5b:
            return r3
        L5c:
            r10 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = " parsLocalIv error e ="
            r0.<init>(r3)
            java.lang.String r3 = r10.getMessage()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.c(r2, r0)
            r10.printStackTrace()
        L75:
            return r1
    }

    public final int a(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.f
            java.lang.Object r0 = r0.get(r3)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto Lf
            int r3 = r0.intValue()
            return r3
        Lf:
            r2.b()
            android.content.SharedPreferences r1 = r2.c
            if (r1 == 0) goto L30
            android.content.SharedPreferences r0 = r2.c
            r1 = 0
            int r0 = r0.getInt(r3, r1)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L30
            java.util.HashMap<java.lang.String, java.lang.Integer> r1 = r2.f
            r1.put(r3, r0)
        L30:
            int r3 = r0.intValue()
            return r3
    }

    public final void a() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Long> r0 = r1.e
            r0.clear()
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r1.f
            r0.clear()
            java.util.HashMap<java.lang.String, java.lang.Boolean> r0 = r1.g
            r0.clear()
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.d
            r0.clear()
            r1.b()
            android.content.SharedPreferences r0 = r1.c
            if (r0 == 0) goto L27
            android.content.SharedPreferences r0 = r1.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.clear()
            a(r0)
        L27:
            return
    }

    public final void a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L59
            r3.b = r5
            r0 = 0
            android.content.SharedPreferences r5 = r4.getSharedPreferences(r5, r0)
            r3.c = r5
            r3.a = r4
            java.lang.String r4 = "local_iv"
            java.util.List r4 = r3.c(r4)
            if (r4 == 0) goto L51
            int r5 = r4.size()
            r1 = 4
            if (r5 >= r1) goto L21
            goto L51
        L21:
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r1 = 1
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r2 = "com.vivo.push.secure_sub_iv"
            r5.put(r2, r1)
            r1 = 2
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r2 = "com.vivo.push.secure_sub_key"
            r5.put(r2, r1)
            r1 = 3
            java.lang.Object r1 = r4.get(r1)
            java.lang.String r2 = "com.vivo.push.secure_cache_iv"
            r5.put(r2, r1)
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r0 = "com.vivo.push.secure_cache_key"
            r5.put(r0, r4)
            r3.a(r5)
            return
        L51:
            java.lang.String r4 = "BaseSharePreference"
            java.lang.String r5 = " initSecureCode error list is null "
            com.vivo.push.util.p.a(r4, r5)
            return
        L59:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "sharedFileName can't be null"
            r4.<init>(r5)
            throw r4
    }

    public final void a(java.lang.String r3, int r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.f
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r0.put(r3, r1)
            r2.b()
            android.content.SharedPreferences r0 = r2.c
            if (r0 == 0) goto L1c
            android.content.SharedPreferences r0 = r2.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putInt(r3, r4)
            a(r0)
        L1c:
            return
    }

    public final void a(java.lang.String r3, long r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Long> r0 = r2.e
            java.lang.Long r1 = java.lang.Long.valueOf(r4)
            r0.put(r3, r1)
            r2.b()
            android.content.SharedPreferences r0 = r2.c
            if (r0 == 0) goto L1c
            android.content.SharedPreferences r0 = r2.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putLong(r3, r4)
            a(r0)
        L1c:
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.d
            r0.put(r2, r3)
            r1.b()
            android.content.SharedPreferences r0 = r1.c
            if (r0 == 0) goto L18
            android.content.SharedPreferences r0 = r1.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r0.putString(r2, r3)
            a(r0)
        L18:
            return
    }

    public final long b(java.lang.String r3, long r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Long> r0 = r2.e
            java.lang.Object r0 = r0.get(r3)
            java.lang.Long r0 = (java.lang.Long) r0
            if (r0 == 0) goto Lf
            long r3 = r0.longValue()
            return r3
        Lf:
            r2.b()
            android.content.SharedPreferences r1 = r2.c
            if (r1 == 0) goto L2f
            android.content.SharedPreferences r0 = r2.c
            long r0 = r0.getLong(r3, r4)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            boolean r4 = r0.equals(r4)
            if (r4 != 0) goto L2f
            java.util.HashMap<java.lang.String, java.lang.Long> r4 = r2.e
            r4.put(r3, r0)
        L2f:
            long r3 = r0.longValue()
            return r3
    }

    public final java.lang.String b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Lb
            return r0
        Lb:
            r2.b()
            android.content.SharedPreferences r1 = r2.c
            if (r1 == 0) goto L29
            android.content.SharedPreferences r0 = r2.c
            java.lang.String r0 = r0.getString(r3, r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L29
            boolean r4 = r0.equals(r4)
            if (r4 != 0) goto L29
            java.util.HashMap<java.lang.String, java.lang.String> r4 = r2.d
            r4.put(r3, r0)
        L29:
            return r0
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.Long> r0 = r2.e
            r0.remove(r3)
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r2.f
            r0.remove(r3)
            java.util.HashMap<java.lang.String, java.lang.Boolean> r0 = r2.g
            r0.remove(r3)
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r2.d
            r0.remove(r3)
            r2.b()
            android.content.SharedPreferences r0 = r2.c
            if (r0 == 0) goto L2f
            android.content.SharedPreferences r0 = r2.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences r1 = r2.c
            boolean r1 = r1.contains(r3)
            if (r1 == 0) goto L2f
            r0.remove(r3)
            a(r0)
        L2f:
            return
    }
}
