package com.xiaomi.push.service;

public class ag {
    private static com.xiaomi.push.service.ag.a a;
    private static com.xiaomi.push.service.ag.b a;

    public interface a {
        java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r1, com.xiaomi.push.if r2);

        void a(android.content.Context r1, com.xiaomi.push.if r2);

        boolean a(android.content.Context r1, com.xiaomi.push.if r2, boolean r3);
    }

    public interface b {
        void a(com.xiaomi.push.if r1);

        void a(java.lang.String r1);

        boolean a(com.xiaomi.push.if r1);
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r1, com.xiaomi.push.if r2) {
            com.xiaomi.push.service.ag$a r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lc
            if (r2 != 0) goto L7
            goto Lc
        L7:
            java.util.Map r1 = r0.a(r1, r2)
            return r1
        Lc:
            java.lang.String r1 = "pepa listener or container is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
            return r1
    }

    public static void a(android.content.Context r1, com.xiaomi.push.if r2) {
            com.xiaomi.push.service.ag$a r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lb
            if (r2 != 0) goto L7
            goto Lb
        L7:
            r0.a(r1, r2)
            goto L10
        Lb:
            java.lang.String r1 = "handle msg wrong"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L10:
            return
    }

    public static void a(com.xiaomi.push.if r1) {
            com.xiaomi.push.service.ag$b r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lb
            if (r1 != 0) goto L7
            goto Lb
        L7:
            r0.a(r1)
            goto L10
        Lb:
            java.lang.String r1 = "pepa clearMessage is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L10:
            return
    }

    public static void a(java.lang.String r1) {
            com.xiaomi.push.service.ag$b r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lb
            if (r1 != 0) goto L7
            goto Lb
        L7:
            r0.a(r1)
            goto L10
        Lb:
            java.lang.String r1 = "pepa clearMessage is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L10:
            return
    }

    public static boolean a(android.content.Context r1, com.xiaomi.push.if r2, boolean r3) {
            com.xiaomi.push.service.ag$a r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lc
            if (r2 != 0) goto L7
            goto Lc
        L7:
            boolean r1 = r0.a(r1, r2, r3)
            goto L12
        Lc:
            java.lang.String r1 = "pepa judement listener or container is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
        L12:
            return r1
    }

    public static boolean a(com.xiaomi.push.if r1) {
            com.xiaomi.push.service.ag$b r0 = com.xiaomi.push.service.ag.a
            if (r0 == 0) goto Lc
            if (r1 != 0) goto L7
            goto Lc
        L7:
            boolean r1 = r0.a(r1)
            goto L12
        Lc:
            java.lang.String r1 = "pepa handleReceiveMessage is null"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
        L12:
            return r1
    }
}
