package com.igexin.push.core.b;

import android.content.Context;
import android.content.SharedPreferences;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    public static String a(Context context) {
        return d(context).getString(com.tkay.expressad.videocommon.e.b.u, "");
    }

    public static String b(Context context) {
        return d(context).getString(com.heytap.mcssdk.constant.b.z, "");
    }

    public static String c(Context context) {
        return d(context).getString(com.heytap.mcssdk.constant.b.A, "");
    }

    private static SharedPreferences d(Context context) {
        return context.getSharedPreferences("ups_gt_appinfo", 0);
    }
}
