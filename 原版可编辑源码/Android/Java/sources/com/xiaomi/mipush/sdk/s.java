package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.text.TextUtils;
import com.xiaomi.push.hj;
import com.xiaomi.push.ht;
import com.xiaomi.push.if;
import com.xiaomi.push.ii;
import java.util.HashMap;

public class s {
    private static volatile s a;
    private final Context a;

    private s(Context context) {
        this.a = context.getApplicationContext();
    }

    private static s a(Context context) {
        if (a == null) {
            synchronized (s.class) {
                if (a == null) {
                    a = new s(context);
                }
            }
        }
        return a;
    }

    public static void a(Context context, if ifVar) {
        a(context).a(ifVar, 0, true);
    }

    public static void a(Context context, if ifVar, boolean z) {
        a(context).a(ifVar, 1, z);
    }

    private void a(if ifVar, int i, boolean z) {
        if (com.xiaomi.push.m.a(this.a) || !com.xiaomi.push.m.a() || ifVar == null || ifVar.a != hj.e || ifVar.a() == null || !z) {
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.a("click to start activity result:" + String.valueOf(i));
        ii iiVar = new ii(ifVar.a().a(), false);
        iiVar.c(ht.ae.a);
        iiVar.b(ifVar.a());
        iiVar.d(ifVar.b);
        iiVar.a = new HashMap();
        iiVar.a.put("result", String.valueOf(i));
        ao.a(this.a).a(iiVar, hj.i, false, false, null, true, ifVar.b, ifVar.a, true, false);
    }

    public static void b(Context context, if ifVar, boolean z) {
        a(context).a(ifVar, 2, z);
    }

    public static void c(Context context, if ifVar, boolean z) {
        a(context).a(ifVar, 3, z);
    }

    public static void d(Context context, if ifVar, boolean z) {
        a(context).a(ifVar, 4, z);
    }

    public static void e(Context context, if ifVar, boolean z) {
        s sVarA;
        int i;
        b bVarA = b.a(context);
        if (TextUtils.isEmpty(bVarA.c()) || TextUtils.isEmpty(bVarA.d())) {
            sVarA = a(context);
            i = 6;
        } else {
            boolean zF = bVarA.f();
            sVarA = a(context);
            i = zF ? 7 : 5;
        }
        sVarA.a(ifVar, i, z);
    }
}
