package com.alipay.apmobilesecuritysdk.a;

import android.content.Context;
import android.os.Environment;
import com.alipay.apmobilesecuritysdk.d.e;
import com.alipay.apmobilesecuritysdk.e.b;
import com.alipay.apmobilesecuritysdk.e.g;
import com.alipay.apmobilesecuritysdk.e.h;
import com.alipay.apmobilesecuritysdk.e.i;
import com.alipay.apmobilesecuritysdk.otherid.UmidSdkWrapper;
import com.alipay.sdk.m.f0.c;
import com.alipay.sdk.m.f0.d;
import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Context f1072a;
    public com.alipay.apmobilesecuritysdk.b.a b = com.alipay.apmobilesecuritysdk.b.a.a();
    public int c = 4;

    public a(Context context) {
        this.f1072a = context;
    }

    public static String a(Context context) {
        String strB = b(context);
        return com.alipay.sdk.m.z.a.a(strB) ? h.f(context) : strB;
    }

    public static String a(Context context, String str) {
        try {
            b();
            String strA = i.a(str);
            if (!com.alipay.sdk.m.z.a.a(strA)) {
                return strA;
            }
            String strA2 = g.a(context, str);
            i.a(str, strA2);
            return !com.alipay.sdk.m.z.a.a(strA2) ? strA2 : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static boolean a() {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        String[] strArr = {"2017-01-27 2017-01-28", "2017-11-10 2017-11-11", "2017-12-11 2017-12-12"};
        int iRandom = ((int) (Math.random() * 24.0d * 60.0d * 60.0d)) * 1;
        for (int i = 0; i < 3; i++) {
            try {
                String[] strArrSplit = strArr[i].split(" ");
                if (strArrSplit != null && strArrSplit.length == 2) {
                    Date date = new Date();
                    Date date2 = simpleDateFormat.parse(strArrSplit[0] + " 00:00:00");
                    Date date3 = simpleDateFormat.parse(strArrSplit[1] + " 23:59:59");
                    Calendar calendar = Calendar.getInstance();
                    calendar.setTime(date3);
                    calendar.add(13, iRandom);
                    Date time = calendar.getTime();
                    if (date.after(date2) && date.before(time)) {
                        return true;
                    }
                }
            } catch (Exception unused) {
            }
        }
        return false;
    }

    private c b(Map<String, String> map) {
        String str;
        String str2;
        String str3;
        b bVarB;
        b bVarC;
        String str4 = "";
        try {
            Context context = this.f1072a;
            d dVar = new d();
            String strA = com.alipay.sdk.m.z.a.a(map, "appName", "");
            String strA2 = com.alipay.sdk.m.z.a.a(map, "sessionId", "");
            String strA3 = com.alipay.sdk.m.z.a.a(map, "rpcVersion", "");
            String strA4 = a(context, strA);
            String securityToken = UmidSdkWrapper.getSecurityToken(context);
            String strD = h.d(context);
            if (com.alipay.sdk.m.z.a.b(strA2)) {
                dVar.c = strA2;
            } else {
                dVar.c = strA4;
            }
            dVar.d = securityToken;
            dVar.e = strD;
            dVar.f1181a = "android";
            com.alipay.apmobilesecuritysdk.e.c cVarC = com.alipay.apmobilesecuritysdk.e.d.c(context);
            if (cVarC != null) {
                str2 = cVarC.f1076a;
                str = cVarC.c;
            } else {
                str = "";
                str2 = str;
            }
            if (com.alipay.sdk.m.z.a.a(str2) && (bVarC = com.alipay.apmobilesecuritysdk.e.a.c(context)) != null) {
                str2 = bVarC.f1075a;
                str = bVarC.c;
            }
            com.alipay.apmobilesecuritysdk.e.c cVarB = com.alipay.apmobilesecuritysdk.e.d.b();
            if (cVarB != null) {
                str4 = cVarB.f1076a;
                str3 = cVarB.c;
            } else {
                str3 = "";
            }
            if (com.alipay.sdk.m.z.a.a(str4) && (bVarB = com.alipay.apmobilesecuritysdk.e.a.b()) != null) {
                str4 = bVarB.f1075a;
                str3 = bVarB.c;
            }
            dVar.h = str2;
            dVar.g = str4;
            dVar.j = strA3;
            if (com.alipay.sdk.m.z.a.a(str2)) {
                dVar.b = str4;
                str = str3;
            } else {
                dVar.b = str2;
            }
            dVar.i = str;
            dVar.f = e.a(context, map);
            return com.alipay.sdk.m.d0.d.b(this.f1072a, this.b.c()).a(dVar);
        } catch (Throwable th) {
            th.printStackTrace();
            com.alipay.apmobilesecuritysdk.c.a.a(th);
            return null;
        }
    }

    public static String b(Context context) {
        try {
            String strB = i.b();
            if (!com.alipay.sdk.m.z.a.a(strB)) {
                return strB;
            }
            com.alipay.apmobilesecuritysdk.e.c cVarB = com.alipay.apmobilesecuritysdk.e.d.b(context);
            if (cVarB != null) {
                i.a(cVarB);
                String str = cVarB.f1076a;
                if (com.alipay.sdk.m.z.a.b(str)) {
                    return str;
                }
            }
            b bVarB = com.alipay.apmobilesecuritysdk.e.a.b(context);
            if (bVarB == null) {
                return "";
            }
            i.a(bVarB);
            String str2 = bVarB.f1075a;
            return com.alipay.sdk.m.z.a.b(str2) ? str2 : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    public static void b() {
        try {
            String[] strArr = {"device_feature_file_name", "wallet_times", "wxcasxx_v3", "wxcasxx_v4", "wxxzyy_v1"};
            for (int i = 0; i < 5; i++) {
                String str = strArr[i];
                File file = new File(Environment.getExternalStorageDirectory(), ".SystemConfig/" + str);
                if (file.exists() && file.canWrite()) {
                    file.delete();
                }
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:71:0x0203 A[Catch: Exception -> 0x0240, TryCatch #0 {Exception -> 0x0240, blocks: (B:3:0x0006, B:5:0x0037, B:8:0x0040, B:37:0x00be, B:69:0x01e8, B:71:0x0203, B:73:0x0209, B:75:0x020f, B:79:0x0218, B:81:0x021e, B:40:0x00d8, B:42:0x00f0, B:48:0x00fd, B:49:0x010d, B:51:0x0114, B:55:0x0126, B:57:0x0176, B:59:0x0180, B:61:0x0188, B:63:0x0195, B:65:0x019f, B:67:0x01a7, B:66:0x01a3, B:60:0x0184, B:11:0x0055, B:13:0x0063, B:16:0x006e, B:18:0x0074, B:21:0x007f, B:24:0x0088, B:27:0x0095, B:30:0x00a2, B:33:0x00af), top: B:87:0x0006 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final int a(java.util.Map<java.lang.String, java.lang.String> r10) {
        /*
            Method dump skipped, instruction units count: 583
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.apmobilesecuritysdk.a.a.a(java.util.Map):int");
    }
}
