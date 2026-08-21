package com.xiaomi.push.service;

import com.xiaomi.push.ii;

/* JADX INFO: loaded from: classes4.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f8377a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static b f994a;

    public interface a {
        boolean a(ii iiVar);
    }

    public interface b {
    }

    public static void a(b bVar) {
        f994a = bVar;
    }

    public static boolean a(ii iiVar) {
        String str;
        if (f8377a == null || iiVar == null) {
            str = "rc params is null, not cpra";
        } else {
            if (com.xiaomi.push.m.m575a(com.xiaomi.push.v.m701a())) {
                return f8377a.a(iiVar);
            }
            str = "rc app not permission to cpra";
        }
        com.xiaomi.channel.commonutils.logger.b.m43a(str);
        return false;
    }
}
