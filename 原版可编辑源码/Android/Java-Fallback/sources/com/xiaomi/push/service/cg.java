package com.xiaomi.push.service;

public class cg implements com.xiaomi.push.service.XMPushService.n {
    private static android.content.Context a;
    private static final java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, java.util.List<java.lang.String>>> a = null;
    private static final boolean a = false;

    static {
            java.lang.String r0 = "UNDatas"
            r1 = 3
            boolean r0 = android.util.Log.isLoggable(r0, r1)
            com.xiaomi.push.service.cg.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.service.cg.a = r0
            return
    }

    public cg(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            com.xiaomi.push.service.cg.a = r1
            return
    }

    static android.content.Context a() {
            android.content.Context r0 = com.xiaomi.push.service.cg.a
            return r0
    }

    private static com.xiaomi.push.ii a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            r0.<init>()
            if (r3 == 0) goto La
            r0.c(r3)
        La:
            if (r1 == 0) goto Lf
            r0.b(r1)
        Lf:
            if (r2 == 0) goto L14
            r0.a(r2)
        L14:
            if (r4 == 0) goto L19
            r0.d(r4)
        L19:
            r1 = 0
            r0.a(r1)
            return r0
    }

    private static void a(android.content.Context r2, com.xiaomi.push.ii r3) {
            boolean r0 = com.xiaomi.push.service.cg.a
            if (r0 == 0) goto L18
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UNDatas upload message notification:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r0)
        L18:
            com.xiaomi.push.al r2 = com.xiaomi.push.al.a(r2)
            com.xiaomi.push.service.ch r0 = new com.xiaomi.push.service.ch
            r0.<init>(r3)
            r2.a(r0)
            return
    }

    private static void b() {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, java.util.List<java.lang.String>>> r1 = com.xiaomi.push.service.cg.a
            r0.putAll(r1)
            int r1 = r0.size()
            if (r1 <= 0) goto Lca
            java.util.Set r1 = r0.keySet()
            java.util.Iterator r1 = r1.iterator()
        L18:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lca
            java.lang.Object r2 = r1.next()
            java.lang.Integer r2 = (java.lang.Integer) r2
            java.lang.Object r3 = r0.get(r2)
            java.util.Map r3 = (java.util.Map) r3
            if (r3 == 0) goto Lc3
            int r4 = r3.size()
            if (r4 <= 0) goto Lc3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.util.Set r5 = r3.keySet()
            java.util.Iterator r5 = r5.iterator()
        L3f:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L7f
            java.lang.Object r6 = r5.next()
            java.lang.String r6 = (java.lang.String) r6
            r4.append(r6)
            java.lang.String r7 = ":"
            r4.append(r7)
            java.lang.Object r6 = r3.get(r6)
            java.util.List r6 = (java.util.List) r6
            boolean r7 = com.xiaomi.push.w.a(r6)
            if (r7 != 0) goto L79
            r7 = 0
        L60:
            int r8 = r6.size()
            if (r7 >= r8) goto L79
            if (r7 == 0) goto L6d
            java.lang.String r8 = ","
            r4.append(r8)
        L6d:
            java.lang.Object r8 = r6.get(r7)
            java.lang.String r8 = (java.lang.String) r8
            r4.append(r8)
            int r7 = r7 + 1
            goto L60
        L79:
            java.lang.String r6 = ";"
            r4.append(r6)
            goto L3f
        L7f:
            java.lang.String r3 = com.xiaomi.push.service.bd.a()
            com.xiaomi.push.ht r5 = com.xiaomi.push.ht.Y
            java.lang.String r5 = r5.a
            r6 = 0
            com.xiaomi.push.ii r3 = a(r6, r3, r5, r6)
            java.lang.String r5 = java.lang.String.valueOf(r2)
            java.lang.String r6 = "removed_reason"
            r3.a(r6, r5)
            java.lang.String r5 = r4.toString()
            java.lang.String r6 = "all_delete_msgId_appId"
            r3.a(r6, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "UNDatas upload all removed messages reason: "
            r5.append(r6)
            r5.append(r2)
            java.lang.String r6 = " allIds: "
            r5.append(r6)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r4)
            android.content.Context r4 = com.xiaomi.push.service.cg.a
            a(r4, r3)
        Lc3:
            java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, java.util.List<java.lang.String>>> r3 = com.xiaomi.push.service.cg.a
            r3.remove(r2)
            goto L18
        Lca:
            return
    }

    @Override
    public void a() {
            r2 = this;
            java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, java.util.List<java.lang.String>>> r0 = com.xiaomi.push.service.cg.a
            int r0 = r0.size()
            if (r0 <= 0) goto L13
            java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, java.util.List<java.lang.String>>> r0 = com.xiaomi.push.service.cg.a
            monitor-enter(r0)
            b()     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            return
    }
}
