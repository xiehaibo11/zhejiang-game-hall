package com.xiaomi.push.service;

public class v {
    private static com.xiaomi.push.service.v a;
    private android.content.Context a;
    private java.util.List<java.lang.String> a;
    private final java.util.List<java.lang.String> b;
    private final java.util.List<java.lang.String> c;

    static {
            return
    }

    private v(android.content.Context r9) {
            r8 = this;
            r8.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r8.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r8.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r8.c = r0
            android.content.Context r0 = r9.getApplicationContext()
            r8.a = r0
            if (r0 != 0) goto L22
            r8.a = r9
        L22:
            android.content.Context r9 = r8.a
            r0 = 0
            java.lang.String r1 = "mipush_app_info"
            android.content.SharedPreferences r9 = r9.getSharedPreferences(r1, r0)
            java.lang.String r1 = ""
            java.lang.String r2 = "unregistered_pkg_names"
            java.lang.String r2 = r9.getString(r2, r1)
            java.lang.String r3 = ","
            java.lang.String[] r2 = r2.split(r3)
            int r4 = r2.length
            r5 = r0
        L3b:
            if (r5 >= r4) goto L4d
            r6 = r2[r5]
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 == 0) goto L4a
            java.util.List<java.lang.String> r7 = r8.a
            r7.add(r6)
        L4a:
            int r5 = r5 + 1
            goto L3b
        L4d:
            java.lang.String r2 = "disable_push_pkg_names"
            java.lang.String r2 = r9.getString(r2, r1)
            java.lang.String[] r2 = r2.split(r3)
            int r4 = r2.length
            r5 = r0
        L59:
            if (r5 >= r4) goto L6b
            r6 = r2[r5]
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto L68
            java.util.List<java.lang.String> r7 = r8.b
            r7.add(r6)
        L68:
            int r5 = r5 + 1
            goto L59
        L6b:
            java.lang.String r2 = "disable_push_pkg_names_cache"
            java.lang.String r9 = r9.getString(r2, r1)
            java.lang.String[] r9 = r9.split(r3)
            int r1 = r9.length
        L76:
            if (r0 >= r1) goto L88
            r2 = r9[r0]
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L85
            java.util.List<java.lang.String> r3 = r8.c
            r3.add(r2)
        L85:
            int r0 = r0 + 1
            goto L76
        L88:
            return
    }

    public static com.xiaomi.push.service.v a(android.content.Context r1) {
            com.xiaomi.push.service.v r0 = com.xiaomi.push.service.v.a
            if (r0 != 0) goto Lb
            com.xiaomi.push.service.v r0 = new com.xiaomi.push.service.v
            r0.<init>(r1)
            com.xiaomi.push.service.v.a = r0
        Lb:
            com.xiaomi.push.service.v r1 = com.xiaomi.push.service.v.a
            return r1
    }

    public void a(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.a
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L30
            r1.add(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "unregistered_pkg_names"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public boolean a(java.lang.String r3) {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.a
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r2.a     // Catch: java.lang.Throwable -> Lb
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public void b(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.b
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.b     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.b     // Catch: java.lang.Throwable -> L30
            r1.add(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.b     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "disable_push_pkg_names"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public boolean b(java.lang.String r3) {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.b
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r2.b     // Catch: java.lang.Throwable -> Lb
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public void c(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.c
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.c     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.c     // Catch: java.lang.Throwable -> L30
            r1.add(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.c     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "disable_push_pkg_names_cache"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public boolean c(java.lang.String r3) {
            r2 = this;
            java.util.List<java.lang.String> r0 = r2.c
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r2.c     // Catch: java.lang.Throwable -> Lb
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            return r3
        Lb:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lb
            throw r3
    }

    public void d(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.a
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.a     // Catch: java.lang.Throwable -> L30
            r1.remove(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "unregistered_pkg_names"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public void e(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.b
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.b     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.b     // Catch: java.lang.Throwable -> L30
            r1.remove(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.b     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "disable_push_pkg_names"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }

    public void f(java.lang.String r5) {
            r4 = this;
            java.util.List<java.lang.String> r0 = r4.c
            monitor-enter(r0)
            java.util.List<java.lang.String> r1 = r4.c     // Catch: java.lang.Throwable -> L30
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2e
            java.util.List<java.lang.String> r1 = r4.c     // Catch: java.lang.Throwable -> L30
            r1.remove(r5)     // Catch: java.lang.Throwable -> L30
            java.util.List<java.lang.String> r5 = r4.c     // Catch: java.lang.Throwable -> L30
            java.lang.String r1 = ","
            java.lang.String r5 = com.xiaomi.push.bp.a(r5, r1)     // Catch: java.lang.Throwable -> L30
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "mipush_app_info"
            r3 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)     // Catch: java.lang.Throwable -> L30
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = "disable_push_pkg_names_cache"
            android.content.SharedPreferences$Editor r5 = r1.putString(r2, r5)     // Catch: java.lang.Throwable -> L30
            r5.commit()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r5
    }
}
