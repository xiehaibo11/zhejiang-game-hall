package com.xiaomi.push.service;

import android.content.Context;
import com.xiaomi.push.Cif;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class ag {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f8301a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static b f900a;

    public interface a {
        Map<String, String> a(Context context, Cif cif);

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        void m616a(Context context, Cif cif);

        boolean a(Context context, Cif cif, boolean z);
    }

    public interface b {
        void a(Cif cif);

        void a(String str);

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        boolean m617a(Cif cif);
    }

    public static Map<String, String> a(Context context, Cif cif) {
        a aVar = f8301a;
        if (aVar != null && cif != null) {
            return aVar.a(context, cif);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("pepa listener or container is null");
        return null;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m614a(Context context, Cif cif) {
        a aVar = f8301a;
        if (aVar == null || cif == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("handle msg wrong");
        } else {
            aVar.m616a(context, cif);
        }
    }

    public static void a(Cif cif) {
        b bVar = f900a;
        if (bVar == null || cif == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("pepa clearMessage is null");
        } else {
            bVar.a(cif);
        }
    }

    public static void a(String str) {
        b bVar = f900a;
        if (bVar == null || str == null) {
            com.xiaomi.channel.commonutils.logger.b.m43a("pepa clearMessage is null");
        } else {
            bVar.a(str);
        }
    }

    public static boolean a(Context context, Cif cif, boolean z) {
        a aVar = f8301a;
        if (aVar != null && cif != null) {
            return aVar.a(context, cif, z);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("pepa judement listener or container is null");
        return false;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m615a(Cif cif) {
        b bVar = f900a;
        if (bVar != null && cif != null) {
            return bVar.m617a(cif);
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("pepa handleReceiveMessage is null");
        return false;
    }
}
