package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.Cif;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.ii;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public class s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile s f8021a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final Context f99a;

    private s(Context context) {
        this.f99a = context.getApplicationContext();
    }

    private static s a(Context context) {
        if (f8021a == null) {
            synchronized (s.class) {
                if (f8021a == null) {
                    f8021a = new s(context);
                }
            }
        }
        return f8021a;
    }

    public static void a(Context context, Cif cif) {
        a(context).a(cif, 0, true);
    }

    public static void a(Context context, Cif cif, boolean z) {
        a(context).a(cif, 1, z);
    }

    private void a(Cif cif, int i, boolean z) {
        if (com.xiaomi.push.m.m575a(this.f99a) || !com.xiaomi.push.m.m574a() || cif == null || cif.f639a != hj.SendMessage || cif.m478a() == null || !z) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("click to start activity result:" + String.valueOf(i));
        ii iiVar = new ii(cif.m478a().m444a(), false);
        iiVar.c(ht.SDK_START_ACTIVITY.f519a);
        iiVar.b(cif.m479a());
        iiVar.d(cif.f646b);
        iiVar.f658a = new HashMap();
        iiVar.f658a.put("result", String.valueOf(i));
        ao.a(this.f99a).a(iiVar, hj.Notification, false, false, null, true, cif.f646b, cif.f642a, true, false);
    }

    public static void b(Context context, Cif cif, boolean z) {
        a(context).a(cif, 2, z);
    }

    public static void c(Context context, Cif cif, boolean z) {
        a(context).a(cif, 3, z);
    }

    public static void d(Context context, Cif cif, boolean z) {
        a(context).a(cif, 4, z);
    }

    public static void e(Context context, Cif cif, boolean z) {
        s sVarA;
        int i;
        b bVarM85a = b.m85a(context);
        if (TextUtils.isEmpty(bVarM85a.m93c()) || TextUtils.isEmpty(bVarM85a.d())) {
            sVarA = a(context);
            i = 6;
        } else {
            boolean zM97f = bVarM85a.m97f();
            sVarA = a(context);
            i = zM97f ? 7 : 5;
        }
        sVarA.a(cif, i, z);
    }
}
