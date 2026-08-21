package com.yxcorp.kuaishou.addfp.android.a;

import android.content.Context;
import android.os.Build;
import android.os.Process;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.yxcorp.kuaishou.addfp.android.Orange;
import java.util.Iterator;
import java.util.concurrent.locks.ReentrantLock;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class c {
    private static boolean d = true;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f8404a;
    private String b;
    private ReentrantLock c;

    private c() {
        this.b = "";
        this.c = new ReentrantLock();
    }

    public static String a(Context context) {
        boolean z;
        try {
            if (!d) {
                return "KWE_NPN";
            }
            boolean z2 = true;
            try {
            } catch (Throwable th) {
                th.printStackTrace();
            }
            boolean z3 = Build.VERSION.SDK_INT >= 26;
            if (!z3) {
                String strB = b();
                if (!TextUtils.isEmpty(strB)) {
                    return strB;
                }
            }
            if (Build.VERSION.SDK_INT >= 29) {
                String str = Build.MODEL;
                z = !TextUtils.isEmpty(str) && str.toLowerCase().contains("redmi") && str.toLowerCase().contains("note 7");
                if (Build.BRAND.equalsIgnoreCase("HONOR")) {
                    z = true;
                }
            } else {
                z = false;
            }
            if (!z) {
                String strGSer = Orange.getInstance().gSer();
                if (!TextUtils.isEmpty(strGSer) && !strGSer.startsWith("KWE")) {
                    return strGSer;
                }
            }
            String[] strArr = {"android.permission.READ_PHONE_STATE"};
            for (int i = 0; i <= 0; i++) {
                if (context.checkPermission(strArr[0], Process.myPid(), Process.myUid()) == -1) {
                    z2 = false;
                    break;
                }
            }
            if (z2) {
                String serial = Build.getSerial();
                if (!TextUtils.isEmpty(serial) && !serial.equals(EnvironmentCompat.MEDIA_UNKNOWN)) {
                    return serial;
                }
            }
            String str2 = Build.SERIAL;
            return !TextUtils.isEmpty(str2) ? !str2.equals(EnvironmentCompat.MEDIA_UNKNOWN) ? str2 : "KWE_N" : "KWE_N";
        } catch (Throwable th2) {
            th2.printStackTrace();
            return "KWE_N";
        }
    }

    private static String a(String str) {
        return TextUtils.isEmpty(str) ? "KWE_N" : str.replace(ContainerUtils.KEY_VALUE_DELIMITER, "").replace("&", "");
    }

    public static void a(JSONObject jSONObject) {
        try {
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                if ("64".equals(next) && jSONObject.optInt(next, 1) == 0) {
                    d = false;
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x003c A[EXC_TOP_SPLITTER, PHI: r2
      0x003c: PHI (r2v2 java.io.BufferedReader) = (r2v1 java.io.BufferedReader), (r2v6 java.io.BufferedReader) binds: [B:22:0x003a, B:17:0x0032] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String b() {
        /*
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "/sys/class/android_usb/android0/iSerial"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L35
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L31
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L35
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L35
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L35
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = r2.readLine()     // Catch: java.lang.Throwable -> L2f
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2f
            if (r3 != 0) goto L32
            java.lang.String r0 = r1.trim()     // Catch: java.lang.Throwable -> L2f
            r2.close()     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r1 = move-exception
            r1.printStackTrace()
        L2e:
            return r0
        L2f:
            r1 = move-exception
            goto L37
        L31:
            r2 = r0
        L32:
            if (r2 == 0) goto L44
            goto L3c
        L35:
            r1 = move-exception
            r2 = r0
        L37:
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L44
        L3c:
            r2.close()     // Catch: java.lang.Throwable -> L40
            goto L44
        L40:
            r1 = move-exception
            r1.printStackTrace()
        L44:
            return r0
        L45:
            r0 = move-exception
            if (r2 == 0) goto L50
            r2.close()     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r1 = move-exception
            r1.printStackTrace()
        L50:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.yxcorp.kuaishou.addfp.android.a.c.b():java.lang.String");
    }

    public static c c() {
        return b.f8403a;
    }

    public String a() {
        try {
            return !TextUtils.isEmpty(this.f8404a) ? this.f8404a : "KWE_N";
        } catch (Throwable th) {
            th.printStackTrace();
            return "KWE_N";
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:107:0x0289  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x029d A[Catch: all -> 0x02e3, TryCatch #2 {all -> 0x02e3, blocks: (B:110:0x0293, B:113:0x029d, B:115:0x02b1, B:116:0x02bc, B:117:0x02bf), top: B:147:0x0293, outer: #1 }] */
    /* JADX WARN: Removed duplicated region for block: B:135:0x0361  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String a(android.content.Context r23, com.yxcorp.kuaishou.addfp.ResponseDfpCallback r24, boolean r25) {
        /*
            Method dump skipped, instruction units count: 878
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.yxcorp.kuaishou.addfp.android.a.c.a(android.content.Context, com.yxcorp.kuaishou.addfp.ResponseDfpCallback, boolean):java.lang.String");
    }

    public void b(String str) {
        this.f8404a = str;
    }
}
