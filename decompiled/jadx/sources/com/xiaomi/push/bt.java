package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class bt {
    public static String a() {
        return Build.VERSION.RELEASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Build.VERSION.INCREMENTAL;
    }

    public static String a(Context context) {
        String strA = bw.a(context).a("sp_client_report_status", "sp_client_report_key", "");
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        String strA2 = bp.a(20);
        bw.a(context).m167a("sp_client_report_status", "sp_client_report_key", strA2);
        return strA2;
    }

    public static void a(Context context, String str) {
        Intent intent = new Intent("com.xiaomi.xmsf.push.XMSF_UPLOAD_ACTIVE");
        intent.putExtra(PluginInfo.PI_PKGNAME, context.getPackageName());
        intent.putExtra("category", "category_client_report_data");
        intent.putExtra("name", "quality_support");
        intent.putExtra("data", str);
        context.sendBroadcast(intent, "com.xiaomi.xmsf.permission.USE_XMSF_UPLOAD");
    }

    /* JADX WARN: Removed duplicated region for block: B:108:0x0120 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x011d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(android.content.Context r11, java.lang.String r12, java.lang.String r13) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 293
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.bt.a(android.content.Context, java.lang.String, java.lang.String):void");
    }

    public static void a(Context context, List<String> list) {
        if (list == null || list.size() <= 0 || !m163a(context)) {
            return;
        }
        for (String str : list) {
            if (!TextUtils.isEmpty(str)) {
                a(context, str);
            }
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m163a(Context context) {
        try {
            return context.getApplicationContext().getPackageManager().getPackageInfo("com.xiaomi.xmsf", 0).versionCode >= 108;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m164a(Context context, String str) {
        File file = new File(str);
        long maxFileLength = com.xiaomi.clientreport.manager.a.a(context).m48a().getMaxFileLength();
        if (file.exists()) {
            try {
                if (file.length() > maxFileLength) {
                    return false;
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                return false;
            }
        } else {
            ab.m115a(file);
        }
        return true;
    }

    public static byte[] a(String str) {
        byte[] bArrCopyOf = Arrays.copyOf(bm.m157a(str), 16);
        bArrCopyOf[0] = 68;
        bArrCopyOf[15] = 84;
        return bArrCopyOf;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static File[] m165a(Context context, String str) {
        File externalFilesDir = context.getExternalFilesDir(str);
        if (externalFilesDir != null) {
            return externalFilesDir.listFiles(new bv());
        }
        return null;
    }
}
