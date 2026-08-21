package com.xiaomi.push.service;

import com.xiaomi.push.ii;

public class i {
    private static a a;
    private static b a;

    public interface a {
        boolean a(ii iiVar);
    }

    public interface b {
    }

    public static void a(b bVar) {
        a = bVar;
    }

    public static boolean a(ii iiVar) {
        String str;
        if (a == null || iiVar == null) {
            str = "rc params is null, not cpra";
        } else {
            if (com.xiaomi.push.m.a(com.xiaomi.push.v.a())) {
                return a.a(iiVar);
            }
            str = "rc app not permission to cpra";
        }
        com.xiaomi.channel.commonutils.logger.b.a(str);
        return false;
    }
}
