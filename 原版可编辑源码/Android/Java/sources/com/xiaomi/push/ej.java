package com.xiaomi.push;

import android.app.Service;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;

class ej implements eg {
    ej() {
    }

    private void a(Service service, Intent intent) {
        String stringExtra = intent.getStringExtra("awake_info");
        if (!TextUtils.isEmpty(stringExtra)) {
            String strB = dy.b(stringExtra);
            if (!TextUtils.isEmpty(strB)) {
                dz.a(service.getApplicationContext(), strB, 1007, "play with service successfully");
                return;
            }
        }
        dz.a(service.getApplicationContext(), "service", 1008, "B get a incorrect message");
    }

    private void b(Context context, ec ecVar) {
        String strA = ecVar.a();
        String strB = ecVar.b();
        String strD = ecVar.d();
        int iA = ecVar.a();
        if (context == null || TextUtils.isEmpty(strA) || TextUtils.isEmpty(strB) || TextUtils.isEmpty(strD)) {
            if (TextUtils.isEmpty(strD)) {
                dz.a(context, "service", 1008, "argument error");
                return;
            } else {
                dz.a(context, strD, 1008, "argument error");
                return;
            }
        }
        if (!com.xiaomi.push.service.l.a(context, strA, strB)) {
            dz.a(context, strD, 1003, "B is not ready");
            return;
        }
        dz.a(context, strD, 1002, "B is ready");
        dz.a(context, strD, 1004, "A is ready");
        try {
            Intent intent = new Intent();
            intent.setAction(strB);
            intent.setPackage(strA);
            intent.putExtra("awake_info", dy.a(strD));
            if (iA == 1 && !ed.a(context)) {
                dz.a(context, strD, 1008, "A not in foreground");
            } else if (context.startService(intent) == null) {
                dz.a(context, strD, 1008, "A is fail to help B's service");
            } else {
                dz.a(context, strD, 1005, "A is successful");
                dz.a(context, strD, 1006, "The job is finished");
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            dz.a(context, strD, 1008, "A meet a exception when help B's service");
        }
    }

    @Override
    public void a(Context context, Intent intent, String str) {
        if (context == null || !(context instanceof Service)) {
            dz.a(context, "service", 1008, "A receive incorrect message");
        } else {
            a((Service) context, intent);
        }
    }

    @Override
    public void a(Context context, ec ecVar) {
        if (ecVar != null) {
            b(context, ecVar);
        } else {
            dz.a(context, "service", 1008, "A receive incorrect message");
        }
    }
}
