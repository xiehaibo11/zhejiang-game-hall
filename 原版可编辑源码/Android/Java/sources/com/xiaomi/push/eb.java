package com.xiaomi.push;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;

class eb implements eg {
    eb() {
    }

    private void a(Activity activity, Intent intent) {
        String stringExtra = intent.getStringExtra("awake_info");
        if (!TextUtils.isEmpty(stringExtra)) {
            String strB = dy.b(stringExtra);
            if (!TextUtils.isEmpty(strB)) {
                dz.a(activity.getApplicationContext(), strB, 1007, "play with activity successfully");
                return;
            }
        }
        dz.a(activity.getApplicationContext(), "activity", 1008, "B get incorrect message");
    }

    private void b(Context context, ec ecVar) {
        String strA = ecVar.a();
        String strB = ecVar.b();
        String strD = ecVar.d();
        int iA = ecVar.a();
        if (context == null || TextUtils.isEmpty(strA) || TextUtils.isEmpty(strB) || TextUtils.isEmpty(strD)) {
            if (TextUtils.isEmpty(strD)) {
                dz.a(context, "activity", 1008, "argument error");
                return;
            } else {
                dz.a(context, strD, 1008, "argument error");
                return;
            }
        }
        if (!com.xiaomi.push.service.l.b(context, strA, strB)) {
            dz.a(context, strD, 1003, "B is not ready");
            return;
        }
        dz.a(context, strD, 1002, "B is ready");
        dz.a(context, strD, 1004, "A is ready");
        Intent intent = new Intent(strB);
        intent.setPackage(strA);
        intent.putExtra("awake_info", dy.a(strD));
        intent.addFlags(276824064);
        intent.setAction(strB);
        if (iA == 1) {
            try {
                if (!ed.a(context)) {
                    dz.a(context, strD, 1008, "A not in foreground");
                    return;
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                dz.a(context, strD, 1008, "A meet a exception when help B's activity");
                return;
            }
        }
        context.startActivity(intent);
        dz.a(context, strD, 1005, "A is successful");
        dz.a(context, strD, 1006, "The job is finished");
    }

    @Override
    public void a(Context context, Intent intent, String str) {
        if (context == null || !(context instanceof Activity) || intent == null) {
            dz.a(context, "activity", 1008, "B receive incorrect message");
        } else {
            a((Activity) context, intent);
        }
    }

    @Override
    public void a(Context context, ec ecVar) {
        if (ecVar != null) {
            b(context, ecVar);
        } else {
            dz.a(context, "activity", 1008, "A receive incorrect message");
        }
    }
}
