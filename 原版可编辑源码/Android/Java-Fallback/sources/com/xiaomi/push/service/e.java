package com.xiaomi.push.service;

class e {
    private static final android.util.SparseArray<com.xiaomi.push.service.ay.a<java.lang.String, java.lang.String, java.lang.String>> a = null;
    private static final int[] a = null;
    private static final android.util.SparseArray<java.lang.Integer> b = null;

    static {
            r0 = 5
            int[] r1 = new int[r0]
            r1 = {x0018: FILL_ARRAY_DATA , data: [1, 2, 4, 8, 16} // fill-array
            com.xiaomi.push.service.e.a = r1
            com.xiaomi.push.service.f r1 = new com.xiaomi.push.service.f
            r1.<init>(r0)
            com.xiaomi.push.service.e.a = r1
            com.xiaomi.push.service.g r1 = new com.xiaomi.push.service.g
            r1.<init>(r0)
            com.xiaomi.push.service.e.b = r1
            return
    }

    e() {
            r0 = this;
            r0.<init>()
            return
    }

    static int a(java.lang.String r2, java.lang.String r3) {
            r0 = 8
            boolean r1 = a(r2, r3, r0)
            if (r1 == 0) goto L9
            goto La
        L9:
            r0 = 0
        La:
            r1 = 16
            boolean r1 = a(r2, r3, r1)
            if (r1 == 0) goto L14
            r0 = r0 | 16
        L14:
            r1 = 1
            boolean r1 = a(r2, r3, r1)
            if (r1 == 0) goto L1d
            r0 = r0 | 1
        L1d:
            r1 = 2
            boolean r1 = a(r2, r3, r1)
            if (r1 == 0) goto L26
            r0 = r0 | 2
        L26:
            r1 = 4
            boolean r2 = a(r2, r3, r1)
            if (r2 == 0) goto L2f
            r0 = r0 | 4
        L2f:
            return r0
    }

    private static android.content.SharedPreferences a(android.content.Context r2) {
            java.lang.String r0 = "ch_permission_cache_file"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            return r2
    }

    static void a(android.content.Context r4, java.lang.String r5) {
            boolean r0 = com.xiaomi.push.m.a(r4)
            if (r0 == 0) goto L58
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L58
            com.xiaomi.push.service.ax r5 = com.xiaomi.push.service.ax.a(r4, r5)
            java.util.List r5 = r5.a()
            if (r5 == 0) goto L58
            java.lang.Class<com.xiaomi.push.service.e> r0 = com.xiaomi.push.service.e.class
            monitor-enter(r0)
            android.content.SharedPreferences r4 = a(r4)     // Catch: java.lang.Throwable -> L55
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L55
            r1.<init>()     // Catch: java.lang.Throwable -> L55
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L55
        L26:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L55
            android.app.NotificationChannel r2 = (android.app.NotificationChannel) r2     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = "mId"
            java.lang.Object r2 = com.xiaomi.push.bk.a(r2, r3)     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L55
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L55
            if (r3 != 0) goto L26
            boolean r3 = r4.contains(r2)     // Catch: java.lang.Throwable -> L55
            if (r3 == 0) goto L26
            r1.add(r2)     // Catch: java.lang.Throwable -> L55
            goto L26
        L4a:
            int r5 = r1.size()     // Catch: java.lang.Throwable -> L55
            if (r5 <= 0) goto L53
            a(r4, r1)     // Catch: java.lang.Throwable -> L55
        L53:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            goto L58
        L55:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L55
            throw r4
        L58:
            return
    }

    static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, int r5, java.lang.String r6, boolean r7, int r8) {
            java.lang.Class<com.xiaomi.push.service.e> r0 = com.xiaomi.push.service.e.class
            boolean r1 = com.xiaomi.push.m.a(r2)
            if (r1 == 0) goto L55
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L55
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L55
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L55
            r1 = 0
            int r6 = com.xiaomi.push.w.a(r6, r1)
            boolean r5 = a(r5, r6)
            if (r7 == 0) goto L37
            a(r3, r4, r6, r8)
            if (r5 == 0) goto L87
            monitor-enter(r0)
            android.content.SharedPreferences r2 = a(r2)     // Catch: java.lang.Throwable -> L34
            a(r2, r6, r4)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            goto L87
        L34:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r2
        L37:
            monitor-enter(r0)
            android.content.SharedPreferences r2 = a(r2)     // Catch: java.lang.Throwable -> L52
            if (r5 != 0) goto L44
            boolean r7 = r2.contains(r4)     // Catch: java.lang.Throwable -> L52
            if (r7 == 0) goto L50
        L44:
            a(r2, r6, r3, r4, r8)     // Catch: java.lang.Throwable -> L52
            if (r5 == 0) goto L4d
            a(r2, r6, r4)     // Catch: java.lang.Throwable -> L52
            goto L50
        L4d:
            a(r2, r4)     // Catch: java.lang.Throwable -> L52
        L50:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            goto L87
        L52:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            throw r2
        L55:
            boolean r2 = com.xiaomi.push.m.a(r2)
            if (r2 == 0) goto L87
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "ChannelPC: can`t setup permission with permissionCode:"
            r2.append(r5)
            java.lang.String r5 = java.lang.String.valueOf(r6)
            r2.append(r5)
            java.lang.String r5 = " channelId:"
            r2.append(r5)
            java.lang.String r4 = java.lang.String.valueOf(r4)
            r2.append(r4)
            java.lang.String r4 = " targetPkg:"
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L87:
            return
    }

    private static void a(android.content.SharedPreferences r0, int r1, java.lang.String r2) {
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putInt(r2, r1)
            r0.commit()
            return
    }

    private static void a(android.content.SharedPreferences r1, int r2, java.lang.String r3, java.lang.String r4, int r5) {
            r0 = 0
            int r1 = r1.getInt(r4, r0)
            if (r1 == r2) goto La
            a(r3, r4, r2, r5)
        La:
            return
    }

    private static void a(android.content.SharedPreferences r1, java.lang.String r2) {
            com.xiaomi.push.service.h r0 = new com.xiaomi.push.service.h
            r0.<init>(r2)
            a(r1, r0)
            return
    }

    private static void a(android.content.SharedPreferences r1, java.util.List<java.lang.String> r2) {
            android.content.SharedPreferences$Editor r1 = r1.edit()
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L18
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            r1.remove(r0)
            goto L8
        L18:
            r1.commit()
            return
    }

    static void a(java.lang.String r7, java.lang.String r8, int r9, int r10) {
            int[] r0 = com.xiaomi.push.service.e.a
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r3 >= r1) goto L4f
            r4 = r0[r3]
            android.util.SparseArray<java.lang.Integer> r5 = com.xiaomi.push.service.e.b
            java.lang.Object r5 = r5.get(r4)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            r5 = r5 & r10
            if (r5 != 0) goto L23
            r5 = r9 & r4
            if (r5 <= 0) goto L1e
            r5 = 1
            goto L1f
        L1e:
            r5 = r2
        L1f:
            a(r7, r8, r4, r5)
            goto L4c
        L23:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "ChannelPermissions.grantPermission:"
            r5.append(r6)
            r5.append(r7)
            java.lang.String r6 = ":"
            r5.append(r6)
            r5.append(r8)
            java.lang.String r6 = ": <"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = "> :stoped by userLock"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L4c:
            int r3 = r3 + 1
            goto L5
        L4f:
            return
    }

    private static void a(java.lang.String r3, java.lang.String r4, int r5, boolean r6) {
            android.content.Context r0 = com.xiaomi.push.v.a()
            android.util.SparseArray<com.xiaomi.push.service.ay$a<java.lang.String, java.lang.String, java.lang.String>> r1 = com.xiaomi.push.service.e.a
            java.lang.Object r1 = r1.get(r5)
            com.xiaomi.push.service.ay$a r1 = (com.xiaomi.push.service.ay.a) r1
            boolean r0 = com.xiaomi.push.service.ay.a(r0, r3, r4, r1, r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ChannelPermissions.grantPermission:"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = ":"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = ": <"
            r1.append(r3)
            r1.append(r5)
            java.lang.String r3 = "="
            r1.append(r3)
            r1.append(r6)
            java.lang.String r3 = "> :"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return
    }

    private static boolean a(int r1, int r2) {
            r0 = 4
            if (r1 >= r0) goto L16
            r1 = r2 & 2
            if (r1 > 0) goto L16
            r1 = r2 & 1
            if (r1 > 0) goto L16
            r1 = r2 & 8
            if (r1 > 0) goto L16
            r1 = r2 & 16
            if (r1 <= 0) goto L14
            goto L16
        L14:
            r1 = 0
            goto L17
        L16:
            r1 = 1
        L17:
            return r1
    }

    private static boolean a(java.lang.String r3, java.lang.String r4, int r5) {
            android.content.Context r0 = com.xiaomi.push.v.a()
            android.util.SparseArray<com.xiaomi.push.service.ay$a<java.lang.String, java.lang.String, java.lang.String>> r1 = com.xiaomi.push.service.e.a
            java.lang.Object r1 = r1.get(r5)
            com.xiaomi.push.service.ay$a r1 = (com.xiaomi.push.service.ay.a) r1
            int r0 = com.xiaomi.push.service.ay.a(r0, r3, r4, r1)
            r1 = 1
            if (r0 != r1) goto L14
            goto L15
        L14:
            r1 = 0
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "ChannelPermissions.checkPermission:"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r3 = ":"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = ": <"
            r0.append(r3)
            r0.append(r5)
            java.lang.String r3 = "="
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = ">"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r1
    }
}
