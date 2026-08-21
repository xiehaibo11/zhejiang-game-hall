package com.xiaomi.push.service;

public class i {
    private static com.xiaomi.push.service.i.a a;
    private static com.xiaomi.push.service.i.b a;

    public interface a {
        boolean a(com.xiaomi.push.ii r1);
    }

    public interface b {
    }

    public static void a(com.xiaomi.push.service.i.b r0) {
            com.xiaomi.push.service.i.a = r0
            return
    }

    public static boolean a(com.xiaomi.push.ii r2) {
            com.xiaomi.push.service.i$a r0 = com.xiaomi.push.service.i.a
            r1 = 0
            if (r0 == 0) goto L1f
            if (r2 != 0) goto L8
            goto L1f
        L8:
            android.content.Context r0 = com.xiaomi.push.v.a()
            boolean r0 = com.xiaomi.push.m.a(r0)
            if (r0 != 0) goto L18
            java.lang.String r2 = "rc app not permission to cpra"
        L14:
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return r1
        L18:
            com.xiaomi.push.service.i$a r0 = com.xiaomi.push.service.i.a
            boolean r2 = r0.a(r2)
            return r2
        L1f:
            java.lang.String r2 = "rc params is null, not cpra"
            goto L14
    }
}
