package com.xiaomi.push.service;

public class x {
    private static java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> a;
    private static final java.util.Map<java.lang.String, byte[]> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.service.x.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.push.service.x.a = r0
            return
    }

    public static void a(android.content.Context r5, int r6, java.lang.String r7) {
            java.util.Map<java.lang.String, byte[]> r0 = com.xiaomi.push.service.x.a
            monitor-enter(r0)
            java.util.Map<java.lang.String, byte[]> r1 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L40
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L40
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L40
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L40
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L40
            r3.<init>()     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = "notify registration error. "
            r3.append(r4)     // Catch: java.lang.Throwable -> L40
            r3.append(r2)     // Catch: java.lang.Throwable -> L40
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L40
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L40
            java.util.Map<java.lang.String, byte[]> r3 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L40
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L40
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Throwable -> L40
            a(r5, r2, r3, r6, r7)     // Catch: java.lang.Throwable -> L40
            goto Ld
        L39:
            java.util.Map<java.lang.String, byte[]> r5 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L40
            r5.clear()     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            return
        L40:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            throw r5
    }

    public static void a(android.content.Context r2, java.lang.String r3, byte[] r4, int r5, java.lang.String r6) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.ERROR"
            r0.<init>(r1)
            r0.setPackage(r3)
            java.lang.String r1 = "mipush_payload"
            r0.putExtra(r1, r4)
            java.lang.String r4 = "mipush_error_code"
            r0.putExtra(r4, r5)
            java.lang.String r4 = "mipush_error_msg"
            r0.putExtra(r4, r6)
            java.lang.String r3 = com.xiaomi.push.service.ah.a(r3)
            r2.sendBroadcast(r0, r3)
            return
    }

    public static void a(com.xiaomi.push.service.XMPushService r4) {
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r0 = com.xiaomi.push.service.x.a     // Catch: com.xiaomi.push.gh -> L37
            monitor-enter(r0)     // Catch: com.xiaomi.push.gh -> L37
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r1 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L34
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L34
            r2.<init>()     // Catch: java.lang.Throwable -> L34
            com.xiaomi.push.service.x.a = r2     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            boolean r0 = com.xiaomi.push.w.a()     // Catch: com.xiaomi.push.gh -> L37
            java.util.Iterator r1 = r1.iterator()     // Catch: com.xiaomi.push.gh -> L37
        L15:
            boolean r2 = r1.hasNext()     // Catch: com.xiaomi.push.gh -> L37
            if (r2 == 0) goto L51
            java.lang.Object r2 = r1.next()     // Catch: com.xiaomi.push.gh -> L37
            android.util.Pair r2 = (android.util.Pair) r2     // Catch: com.xiaomi.push.gh -> L37
            java.lang.Object r3 = r2.first     // Catch: com.xiaomi.push.gh -> L37
            java.lang.String r3 = (java.lang.String) r3     // Catch: com.xiaomi.push.gh -> L37
            java.lang.Object r2 = r2.second     // Catch: com.xiaomi.push.gh -> L37
            byte[] r2 = (byte[]) r2     // Catch: com.xiaomi.push.gh -> L37
            com.xiaomi.push.service.ah.a(r4, r3, r2)     // Catch: com.xiaomi.push.gh -> L37
            if (r0 != 0) goto L15
            r2 = 100
            java.lang.Thread.sleep(r2)     // Catch: java.lang.InterruptedException -> L15 com.xiaomi.push.gh -> L37
            goto L15
        L34:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r1     // Catch: com.xiaomi.push.gh -> L37
        L37:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "meet error when process pending message. "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r1)
            r1 = 10
            r4.a(r1, r0)
        L51:
            return
    }

    public static void a(com.xiaomi.push.service.XMPushService r5, boolean r6) {
            java.util.Map<java.lang.String, byte[]> r0 = com.xiaomi.push.service.x.a     // Catch: com.xiaomi.push.gh -> L50
            monitor-enter(r0)     // Catch: com.xiaomi.push.gh -> L50
            java.util.Map<java.lang.String, byte[]> r1 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L4d
            java.util.Set r1 = r1.keySet()     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L4d
        Ld:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L46
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            r3.<init>()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "processing pending registration request. "
            r3.append(r4)     // Catch: java.lang.Throwable -> L4d
            r3.append(r2)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4d
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: java.lang.Throwable -> L4d
            java.util.Map<java.lang.String, byte[]> r3 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r3 = r3.get(r2)     // Catch: java.lang.Throwable -> L4d
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Throwable -> L4d
            com.xiaomi.push.service.ah.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto Ld
            boolean r2 = com.xiaomi.push.w.a()     // Catch: java.lang.Throwable -> L4d
            if (r2 != 0) goto Ld
            r2 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r2)     // Catch: java.lang.Exception -> Ld java.lang.Throwable -> L4d
            goto Ld
        L46:
            java.util.Map<java.lang.String, byte[]> r6 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L4d
            r6.clear()     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            goto L6a
        L4d:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4d
            throw r6     // Catch: com.xiaomi.push.gh -> L50
        L50:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fail to deal with pending register request. "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            r0 = 10
            r5.a(r0, r6)
        L6a:
            return
    }

    public static void a(java.lang.String r3, byte[] r4) {
            java.util.Map<java.lang.String, byte[]> r0 = com.xiaomi.push.service.x.a
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1e
            r1.<init>()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "pending registration request. "
            r1.append(r2)     // Catch: java.lang.Throwable -> L1e
            r1.append(r3)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1e
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Throwable -> L1e
            java.util.Map<java.lang.String, byte[]> r1 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L1e
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r3
    }

    public static void b(java.lang.String r3, byte[] r4) {
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r0 = com.xiaomi.push.service.x.a
            monitor-enter(r0)
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r1 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L1f
            android.util.Pair r2 = new android.util.Pair     // Catch: java.lang.Throwable -> L1f
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L1f
            r1.add(r2)     // Catch: java.lang.Throwable -> L1f
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r3 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L1f
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L1f
            r4 = 50
            if (r3 <= r4) goto L1d
            java.util.ArrayList<android.util.Pair<java.lang.String, byte[]>> r3 = com.xiaomi.push.service.x.a     // Catch: java.lang.Throwable -> L1f
            r4 = 0
            r3.remove(r4)     // Catch: java.lang.Throwable -> L1f
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r3
    }
}
