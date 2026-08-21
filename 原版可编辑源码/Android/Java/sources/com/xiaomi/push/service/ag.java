package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.if;
import java.util.Map;

public class ag {
    private static a a;
    private static b a;

    public interface a {
        Map<String, String> a(Context context, if ifVar);

        void a(Context context, if ifVar);

        boolean a(Context context, if ifVar, boolean z);
    }

    public interface b {
        void a(if ifVar);

        void a(String str);

        boolean a(if ifVar);
    }

    public static Map<String, String> a(Context context, if ifVar) {
        a aVar = a;
        if (aVar != null && ifVar != null) {
            return aVar.a(context, ifVar);
        }
        com.xiaomi.channel.commonutils.logger.b.a("pepa listener or container is null");
        return null;
    }

    public static void a(Context context, if ifVar) {
        a aVar = a;
        if (aVar == null || ifVar == null) {
            com.xiaomi.channel.commonutils.logger.b.a("handle msg wrong");
        } else {
            aVar.a(context, ifVar);
        }
    }

    public static void a(if ifVar) {
        b bVar = a;
        if (bVar == null || ifVar == null) {
            com.xiaomi.channel.commonutils.logger.b.a("pepa clearMessage is null");
        } else {
            bVar.a(ifVar);
        }
    }

    public static void a(String str) {
        b bVar = a;
        if (bVar == null || str == null) {
            com.xiaomi.channel.commonutils.logger.b.a("pepa clearMessage is null");
        } else {
            bVar.a(str);
        }
    }

    public static boolean a(Context context, if ifVar, boolean z) {
        a aVar = a;
        if (aVar != null && ifVar != null) {
            return aVar.a(context, ifVar, z);
        }
        com.xiaomi.channel.commonutils.logger.b.a("pepa judement listener or container is null");
        return false;
    }

    public static boolean a(if ifVar) {
        b bVar = a;
        if (bVar != null && ifVar != null) {
            return bVar.a(ifVar);
        }
        com.xiaomi.channel.commonutils.logger.b.a("pepa handleReceiveMessage is null");
        return false;
    }
}
