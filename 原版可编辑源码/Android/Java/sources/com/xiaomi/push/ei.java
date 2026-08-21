package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;

class ei implements eg {
    ei() {
    }

    private void a(Context context, String str) {
        try {
            if (!TextUtils.isEmpty(str) && context != null) {
                String[] strArrSplit = str.split("/");
                if (strArrSplit.length > 0 && !TextUtils.isEmpty(strArrSplit[strArrSplit.length - 1])) {
                    String str2 = strArrSplit[strArrSplit.length - 1];
                    if (TextUtils.isEmpty(str2)) {
                        dz.a(context, "provider", 1008, "B get a incorrect message");
                        return;
                    }
                    String strDecode = Uri.decode(str2);
                    if (TextUtils.isEmpty(strDecode)) {
                        dz.a(context, "provider", 1008, "B get a incorrect message");
                        return;
                    }
                    String strB = dy.b(strDecode);
                    if (!TextUtils.isEmpty(strB)) {
                        dz.a(context, strB, 1007, "play with provider successfully");
                        return;
                    }
                }
            }
            dz.a(context, "provider", 1008, "B get a incorrect message");
        } catch (Exception e) {
            dz.a(context, "provider", 1008, "B meet a exception" + e.getMessage());
        }
    }

    private void b(Context context, ec ecVar) {
        String strB = ecVar.b();
        String strD = ecVar.d();
        int iA = ecVar.a();
        if (context == null || TextUtils.isEmpty(strB) || TextUtils.isEmpty(strD)) {
            if (TextUtils.isEmpty(strD)) {
                dz.a(context, "provider", 1008, "argument error");
                return;
            } else {
                dz.a(context, strD, 1008, "argument error");
                return;
            }
        }
        if (!com.xiaomi.push.service.l.b(context, strB)) {
            dz.a(context, strD, 1003, "B is not ready");
            return;
        }
        dz.a(context, strD, 1002, "B is ready");
        dz.a(context, strD, 1004, "A is ready");
        String strA = dy.a(strD);
        try {
            if (TextUtils.isEmpty(strA)) {
                dz.a(context, strD, 1008, "info is empty");
                return;
            }
            if (iA == 1 && !ed.a(context)) {
                dz.a(context, strD, 1008, "A not in foreground");
                return;
            }
            String type = context.getContentResolver().getType(dy.a(strB, strA));
            if (TextUtils.isEmpty(type) || !"success".equals(type)) {
                dz.a(context, strD, 1008, "A is fail to help B's provider");
            } else {
                dz.a(context, strD, 1005, "A is successful");
                dz.a(context, strD, 1006, "The job is finished");
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a(e);
            dz.a(context, strD, 1008, "A meet a exception when help B's provider");
        }
    }

    @Override
    public void a(Context context, Intent intent, String str) {
        a(context, str);
    }

    @Override
    public void a(Context context, ec ecVar) {
        if (ecVar != null) {
            b(context, ecVar);
        } else {
            dz.a(context, "provider", 1008, "A receive incorrect message");
        }
    }
}
