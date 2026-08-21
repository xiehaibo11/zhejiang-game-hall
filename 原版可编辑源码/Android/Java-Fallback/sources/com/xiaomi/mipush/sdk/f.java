package com.xiaomi.mipush.sdk;

public class f implements com.xiaomi.mipush.sdk.AbstractPushManager {
    private static volatile com.xiaomi.mipush.sdk.f a;
    private android.content.Context a;
    private com.xiaomi.mipush.sdk.PushConfiguration a;
    private java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> a;
    private boolean a;

    private f(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            return
    }

    static android.content.Context a(com.xiaomi.mipush.sdk.f r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.xiaomi.mipush.sdk.f a(android.content.Context r2) {
            com.xiaomi.mipush.sdk.f r0 = com.xiaomi.mipush.sdk.f.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.mipush.sdk.f> r0 = com.xiaomi.mipush.sdk.f.class
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.f r1 = com.xiaomi.mipush.sdk.f.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.mipush.sdk.f r1 = new com.xiaomi.mipush.sdk.f     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.mipush.sdk.f.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.mipush.sdk.f r2 = com.xiaomi.mipush.sdk.f.a
            return r2
    }

    private void a() {
            r4 = this;
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            if (r0 == 0) goto L217
            boolean r0 = r0.getOpenHmsPush()
            java.lang.String r1 = "ASSEMBLE_PUSH : "
            if (r0 == 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = " HW user switch : "
            r0.append(r2)
            com.xiaomi.mipush.sdk.PushConfiguration r2 = r4.a
            boolean r2 = r2.getOpenHmsPush()
            r0.append(r2)
            java.lang.String r2 = " HW online switch : "
            r0.append(r2)
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.a
            boolean r2 = com.xiaomi.mipush.sdk.i.a(r2, r3)
            r0.append(r2)
            java.lang.String r2 = " HW isSupport : "
            r0.append(r2)
            com.xiaomi.mipush.sdk.ag r2 = com.xiaomi.mipush.sdk.ag.a
            android.content.Context r3 = r4.a
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.n.a(r3)
            boolean r2 = r2.equals(r3)
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L59:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenHmsPush()
            if (r0 == 0) goto L94
            android.content.Context r0 = r4.a
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.a
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0, r2)
            if (r0 == 0) goto L94
            com.xiaomi.mipush.sdk.ag r0 = com.xiaomi.mipush.sdk.ag.a
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.ag r2 = com.xiaomi.mipush.sdk.n.a(r2)
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L94
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            boolean r0 = r4.a(r0)
            if (r0 != 0) goto L8e
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.AbstractPushManager r2 = com.xiaomi.mipush.sdk.ak.a(r2, r3)
            r4.a(r0, r2)
        L8e:
            java.lang.String r0 = "hw manager add to list"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            goto Lac
        L94:
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            boolean r0 = r4.a(r0)
            if (r0 == 0) goto Lac
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.AbstractPushManager r0 = r4.a(r0)
            if (r0 == 0) goto Lac
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.a
            r4.a(r2)
            r0.unregister()
        Lac:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenFCMPush()
            if (r0 == 0) goto Lfb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = " FCM user switch : "
            r0.append(r2)
            com.xiaomi.mipush.sdk.PushConfiguration r2 = r4.a
            boolean r2 = r2.getOpenFCMPush()
            r0.append(r2)
            java.lang.String r2 = " FCM online switch : "
            r0.append(r2)
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.b
            boolean r2 = com.xiaomi.mipush.sdk.i.a(r2, r3)
            r0.append(r2)
            java.lang.String r2 = " FCM isSupport : "
            r0.append(r2)
            android.content.Context r2 = r4.a
            boolean r2 = com.xiaomi.mipush.sdk.n.a(r2)
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        Lfb:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenFCMPush()
            if (r0 == 0) goto L130
            android.content.Context r0 = r4.a
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.b
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0, r2)
            if (r0 == 0) goto L130
            android.content.Context r0 = r4.a
            boolean r0 = com.xiaomi.mipush.sdk.n.a(r0)
            if (r0 == 0) goto L130
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            boolean r0 = r4.a(r0)
            if (r0 != 0) goto L12a
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.AbstractPushManager r2 = com.xiaomi.mipush.sdk.ak.a(r2, r3)
            r4.a(r0, r2)
        L12a:
            java.lang.String r0 = "fcm manager add to list"
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            goto L148
        L130:
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            boolean r0 = r4.a(r0)
            if (r0 == 0) goto L148
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.AbstractPushManager r0 = r4.a(r0)
            if (r0 == 0) goto L148
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.b
            r4.a(r2)
            r0.unregister()
        L148:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenCOSPush()
            if (r0 == 0) goto L197
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = " COS user switch : "
            r0.append(r2)
            com.xiaomi.mipush.sdk.PushConfiguration r2 = r4.a
            boolean r2 = r2.getOpenCOSPush()
            r0.append(r2)
            java.lang.String r2 = " COS online switch : "
            r0.append(r2)
            android.content.Context r2 = r4.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.c
            boolean r2 = com.xiaomi.mipush.sdk.i.a(r2, r3)
            r0.append(r2)
            java.lang.String r2 = " COS isSupport : "
            r0.append(r2)
            android.content.Context r2 = r4.a
            boolean r2 = com.xiaomi.mipush.sdk.n.b(r2)
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L197:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenCOSPush()
            if (r0 == 0) goto L1bf
            android.content.Context r0 = r4.a
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.c
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0, r1)
            if (r0 == 0) goto L1bf
            android.content.Context r0 = r4.a
            boolean r0 = com.xiaomi.mipush.sdk.n.b(r0)
            if (r0 == 0) goto L1bf
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            android.content.Context r1 = r4.a
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = com.xiaomi.mipush.sdk.ak.a(r1, r2)
            r4.a(r0, r1)
            goto L1d7
        L1bf:
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            boolean r0 = r4.a(r0)
            if (r0 == 0) goto L1d7
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.AbstractPushManager r0 = r4.a(r0)
            if (r0 == 0) goto L1d7
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.c
            r4.a(r1)
            r0.unregister()
        L1d7:
            com.xiaomi.mipush.sdk.PushConfiguration r0 = r4.a
            boolean r0 = r0.getOpenFTOSPush()
            if (r0 == 0) goto L1ff
            android.content.Context r0 = r4.a
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.d
            boolean r0 = com.xiaomi.mipush.sdk.i.a(r0, r1)
            if (r0 == 0) goto L1ff
            android.content.Context r0 = r4.a
            boolean r0 = com.xiaomi.mipush.sdk.n.c(r0)
            if (r0 == 0) goto L1ff
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            android.content.Context r1 = r4.a
            com.xiaomi.mipush.sdk.e r2 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = com.xiaomi.mipush.sdk.ak.a(r1, r2)
            r4.a(r0, r1)
            goto L217
        L1ff:
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            boolean r0 = r4.a(r0)
            if (r0 == 0) goto L217
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.AbstractPushManager r0 = r4.a(r0)
            if (r0 == 0) goto L217
            com.xiaomi.mipush.sdk.e r1 = com.xiaomi.mipush.sdk.e.d
            r4.a(r1)
            r0.unregister()
        L217:
            return
    }

    static boolean a(com.xiaomi.mipush.sdk.f r0) {
            boolean r0 = r0.a
            return r0
    }

    static boolean a(com.xiaomi.mipush.sdk.f r0, boolean r1) {
            r0.a = r1
            return r1
    }

    public com.xiaomi.mipush.sdk.AbstractPushManager a(com.xiaomi.mipush.sdk.e r2) {
            r1 = this;
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            com.xiaomi.mipush.sdk.AbstractPushManager r2 = (com.xiaomi.mipush.sdk.AbstractPushManager) r2
            return r2
    }

    public void a(com.xiaomi.mipush.sdk.PushConfiguration r4) {
            r3 = this;
            r3.a = r4
            android.content.Context r4 = r3.a
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.ao
            int r0 = r0.a()
            r1 = 1
            boolean r4 = r4.a(r0, r1)
            r3.a = r4
            com.xiaomi.mipush.sdk.PushConfiguration r4 = r3.a
            boolean r4 = r4.getOpenHmsPush()
            if (r4 != 0) goto L35
            com.xiaomi.mipush.sdk.PushConfiguration r4 = r3.a
            boolean r4 = r4.getOpenFCMPush()
            if (r4 != 0) goto L35
            com.xiaomi.mipush.sdk.PushConfiguration r4 = r3.a
            boolean r4 = r4.getOpenCOSPush()
            if (r4 != 0) goto L35
            com.xiaomi.mipush.sdk.PushConfiguration r4 = r3.a
            boolean r4 = r4.getOpenFTOSPush()
            if (r4 == 0) goto L47
        L35:
            android.content.Context r4 = r3.a
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.mipush.sdk.g r0 = new com.xiaomi.mipush.sdk.g
            r1 = 101(0x65, float:1.42E-43)
            java.lang.String r2 = "assemblePush"
            r0.<init>(r3, r1, r2)
            r4.a(r0)
        L47:
            return
    }

    public void a(com.xiaomi.mipush.sdk.e r2) {
            r1 = this;
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            r0.remove(r2)
            return
    }

    public void a(com.xiaomi.mipush.sdk.e r2, com.xiaomi.mipush.sdk.AbstractPushManager r3) {
            r1 = this;
            if (r3 == 0) goto L14
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Lf
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            r0.remove(r2)
        Lf:
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            r0.put(r2, r3)
        L14:
            return
    }

    public boolean a(com.xiaomi.mipush.sdk.e r2) {
            r1 = this;
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r1.a
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public boolean b(com.xiaomi.mipush.sdk.e r3) {
            r2 = this;
            int[] r0 = com.xiaomi.mipush.sdk.h.a
            int r3 = r3.ordinal()
            r3 = r0[r3]
            r0 = 1
            r1 = 0
            if (r3 == r0) goto L31
            r0 = 2
            if (r3 == r0) goto L28
            r0 = 3
            if (r3 == r0) goto L16
            r0 = 4
            if (r3 == r0) goto L1f
            goto L39
        L16:
            com.xiaomi.mipush.sdk.PushConfiguration r3 = r2.a
            if (r3 == 0) goto L1f
            boolean r3 = r3.getOpenCOSPush()
            r1 = r3
        L1f:
            com.xiaomi.mipush.sdk.PushConfiguration r3 = r2.a
            if (r3 == 0) goto L39
            boolean r1 = r3.getOpenFTOSPush()
            goto L39
        L28:
            com.xiaomi.mipush.sdk.PushConfiguration r3 = r2.a
            if (r3 == 0) goto L39
            boolean r1 = r3.getOpenFCMPush()
            goto L39
        L31:
            com.xiaomi.mipush.sdk.PushConfiguration r3 = r2.a
            if (r3 == 0) goto L39
            boolean r1 = r3.getOpenHmsPush()
        L39:
            return r1
    }

    @Override
    public void register() {
            r2 = this;
            java.lang.String r0 = "ASSEMBLE_PUSH : assemble push register"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r2.a
            int r0 = r0.size()
            if (r0 > 0) goto L10
            r2.a()
        L10:
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r2.a
            int r0 = r0.size()
            if (r0 <= 0) goto L39
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r2.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L22:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L34
            java.lang.Object r1 = r0.next()
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = (com.xiaomi.mipush.sdk.AbstractPushManager) r1
            if (r1 == 0) goto L22
            r1.register()
            goto L22
        L34:
            android.content.Context r0 = r2.a
            com.xiaomi.mipush.sdk.i.a(r0)
        L39:
            return
    }

    @Override
    public void unregister() {
            r2 = this;
            java.lang.String r0 = "ASSEMBLE_PUSH : assemble push unregister"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r2.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.xiaomi.mipush.sdk.AbstractPushManager r1 = (com.xiaomi.mipush.sdk.AbstractPushManager) r1
            if (r1 == 0) goto Lf
            r1.unregister()
            goto Lf
        L21:
            java.util.Map<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.AbstractPushManager> r0 = r2.a
            r0.clear()
            return
    }
}
