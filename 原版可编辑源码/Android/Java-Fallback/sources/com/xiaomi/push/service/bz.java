package com.xiaomi.push.service;

public class bz {
    private static java.lang.String a;
    private static java.text.SimpleDateFormat a;
    private static java.util.concurrent.atomic.AtomicLong a;

    static {
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = 0
            r0.<init>(r1)
            com.xiaomi.push.service.bz.a = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy/MM/dd"
            r0.<init>(r1)
            com.xiaomi.push.service.bz.a = r0
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r0 = r0.format(r1)
            com.xiaomi.push.service.bz.a = r0
            return
    }

    private static com.xiaomi.push.ii a(java.lang.String r3, java.lang.String r4, com.xiaomi.push.hm r5) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            java.lang.String r1 = "-1"
            r2 = 0
            r0.<init>(r1, r2)
            com.xiaomi.push.ii r3 = r0.d(r3)
            com.xiaomi.push.ii r3 = r3.b(r4)
            byte[] r4 = com.xiaomi.push.it.a(r5)
            byte[] r4 = com.xiaomi.push.ab.a(r4)
            com.xiaomi.push.ii r3 = r3.a(r4)
            com.xiaomi.push.ht r4 = com.xiaomi.push.ht.B
            java.lang.String r4 = r4.a
            com.xiaomi.push.ii r3 = r3.c(r4)
            return r3
    }

    public static synchronized java.lang.String a() {
            java.lang.Class<com.xiaomi.push.service.bz> r0 = com.xiaomi.push.service.bz.class
            monitor-enter(r0)
            java.text.SimpleDateFormat r1 = com.xiaomi.push.service.bz.a     // Catch: java.lang.Throwable -> L3e
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L3e
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = r1.format(r2)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r2 = com.xiaomi.push.service.bz.a     // Catch: java.lang.Throwable -> L3e
            boolean r2 = android.text.TextUtils.equals(r2, r1)     // Catch: java.lang.Throwable -> L3e
            if (r2 != 0) goto L22
            java.util.concurrent.atomic.AtomicLong r2 = com.xiaomi.push.service.bz.a     // Catch: java.lang.Throwable -> L3e
            r3 = 0
            r2.set(r3)     // Catch: java.lang.Throwable -> L3e
            com.xiaomi.push.service.bz.a = r1     // Catch: java.lang.Throwable -> L3e
        L22:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            r2.append(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "-"
            r2.append(r1)     // Catch: java.lang.Throwable -> L3e
            java.util.concurrent.atomic.AtomicLong r1 = com.xiaomi.push.service.bz.a     // Catch: java.lang.Throwable -> L3e
            long r3 = r1.incrementAndGet()     // Catch: java.lang.Throwable -> L3e
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r0)
            return r1
        L3e:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.util.ArrayList<com.xiaomi.push.ii> a(java.util.List<com.xiaomi.push.hn> r11, java.lang.String r12, java.lang.String r13, int r14) {
            r0 = 0
            if (r11 != 0) goto L9
            java.lang.String r11 = "requests can not be null in TinyDataHelper.transToThriftObj()."
        L5:
            com.xiaomi.channel.commonutils.logger.b.d(r11)
            return r0
        L9:
            int r1 = r11.size()
            if (r1 != 0) goto L12
            java.lang.String r11 = "requests.length is 0 in TinyDataHelper.transToThriftObj()."
            goto L5
        L12:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            com.xiaomi.push.hm r2 = new com.xiaomi.push.hm
            r2.<init>()
            r3 = 0
            r4 = r3
            r5 = r4
        L1f:
            int r6 = r11.size()
            if (r4 >= r6) goto Laa
            java.lang.Object r6 = r11.get(r4)
            com.xiaomi.push.hn r6 = (com.xiaomi.push.hn) r6
            if (r6 != 0) goto L2f
            goto La6
        L2f:
            java.util.Map r7 = r6.a()
            if (r7 == 0) goto L6e
            java.util.Map r7 = r6.a()
            java.lang.String r8 = "item_size"
            boolean r7 = r7.containsKey(r8)
            if (r7 == 0) goto L6e
            java.util.Map r7 = r6.a()
            java.lang.Object r7 = r7.get(r8)
            java.lang.String r7 = (java.lang.String) r7
            boolean r9 = android.text.TextUtils.isEmpty(r7)
            if (r9 != 0) goto L56
            int r7 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Exception -> L56
            goto L57
        L56:
            r7 = r3
        L57:
            java.util.Map r9 = r6.a()
            int r9 = r9.size()
            r10 = 1
            if (r9 != r10) goto L66
            r6.a(r0)
            goto L6f
        L66:
            java.util.Map r9 = r6.a()
            r9.remove(r8)
            goto L6f
        L6e:
            r7 = r3
        L6f:
            if (r7 > 0) goto L76
            byte[] r7 = com.xiaomi.push.it.a(r6)
            int r7 = r7.length
        L76:
            if (r7 <= r14) goto L91
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "TinyData is too big, ignore upload request item:"
            r7.append(r8)
            java.lang.String r6 = r6.d()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
            goto La6
        L91:
            int r8 = r5 + r7
            if (r8 <= r14) goto La2
            com.xiaomi.push.ii r2 = a(r12, r13, r2)
            r1.add(r2)
            com.xiaomi.push.hm r2 = new com.xiaomi.push.hm
            r2.<init>()
            r5 = r3
        La2:
            r2.a(r6)
            int r5 = r5 + r7
        La6:
            int r4 = r4 + 1
            goto L1f
        Laa:
            int r11 = r2.a()
            if (r11 == 0) goto Lb7
            com.xiaomi.push.ii r11 = a(r12, r13, r2)
            r1.add(r11)
        Lb7:
            return r1
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4, java.lang.String r6) {
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r2)
            r0.c(r3)
            r0.a(r4)
            r0.b(r6)
            java.lang.String r2 = "push_sdk_channel"
            r0.a(r2)
            java.lang.String r2 = r1.getPackageName()
            r0.g(r2)
            java.lang.String r2 = r1.getPackageName()
            r0.e(r2)
            r2 = 1
            r0.a(r2)
            long r2 = java.lang.System.currentTimeMillis()
            r0.b(r2)
            java.lang.String r2 = a()
            r0.f(r2)
            com.xiaomi.push.service.ca.a(r1, r0)
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, com.xiaomi.push.service.ao r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.xiaomi.push.hn r0 = new com.xiaomi.push.hn
            r0.<init>()
            r0.d(r1)
            r0.c(r2)
            r0.g(r3)
            r0.e(r3)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            int r2 = r4.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "chid"
            r1.put(r3, r2)
            boolean r2 = r4.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "screen_on"
            r1.put(r3, r2)
            boolean r2 = r4.b
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "wifi"
            r1.put(r3, r2)
            long r2 = r4.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "rx_msg"
            r1.put(r3, r2)
            long r2 = r4.b
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "enqueue"
            r1.put(r3, r2)
            int r2 = r4.b
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "num"
            r1.put(r3, r2)
            long r2 = r4.c
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "run"
            r1.put(r3, r2)
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "send"
            r1.put(r3, r2)
            r0.a(r1)
            com.xiaomi.push.service.ca.a(r0)
            return
    }

    public static boolean a(com.xiaomi.push.hn r3, boolean r4) {
            r0 = 1
            if (r3 != 0) goto L9
            java.lang.String r3 = "item is null, verfiy ClientUploadDataItem failed."
        L5:
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r0
        L9:
            if (r4 != 0) goto L16
            java.lang.String r4 = r3.a
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L16
            java.lang.String r3 = "item.channel is null or empty, verfiy ClientUploadDataItem failed."
            goto L5
        L16:
            java.lang.String r4 = r3.d
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L21
            java.lang.String r3 = "item.category is null or empty, verfiy ClientUploadDataItem failed."
            goto L5
        L21:
            java.lang.String r4 = r3.c
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L2c
            java.lang.String r3 = "item.name is null or empty, verfiy ClientUploadDataItem failed."
            goto L5
        L2c:
            java.lang.String r4 = r3.d
            boolean r4 = com.xiaomi.push.bp.a(r4)
            if (r4 != 0) goto L37
            java.lang.String r3 = "item.category can only contain ascii char, verfiy ClientUploadDataItem failed."
            goto L5
        L37:
            java.lang.String r4 = r3.c
            boolean r4 = com.xiaomi.push.bp.a(r4)
            if (r4 != 0) goto L42
            java.lang.String r3 = "item.name can only contain ascii char, verfiy ClientUploadDataItem failed."
            goto L5
        L42:
            java.lang.String r4 = r3.b
            if (r4 == 0) goto L75
            java.lang.String r4 = r3.b
            int r4 = r4.length()
            r1 = 10240(0x2800, float:1.4349E-41)
            if (r4 <= r1) goto L75
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "item.data is too large("
            r4.append(r2)
            java.lang.String r3 = r3.b
            int r3 = r3.length()
            r4.append(r3)
            java.lang.String r3 = "), max size for data is "
            r4.append(r3)
            r4.append(r1)
            java.lang.String r3 = " , verfiy ClientUploadDataItem failed."
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L5
        L75:
            r3 = 0
            return r3
    }

    public static boolean a(java.lang.String r1) {
            boolean r0 = com.xiaomi.push.v.b()
            if (r0 == 0) goto L10
            java.lang.String r0 = "com.miui.hybrid"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L10
            r1 = 0
            return r1
        L10:
            r1 = 1
            return r1
    }
}
