package com.mbridge.msdk.foundation.tools;

import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import java.io.File;

/* JADX INFO: compiled from: CommonBatteryStatusUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static int f3521a = -1;
    private static int b = -1;
    private static int c = -1;
    private static boolean d;
    private static int e;
    private static boolean f;
    private static boolean g;

    public static int a() {
        try {
            Intent intentRegisterReceiver = com.mbridge.msdk.foundation.controller.a.f().j().registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
            int[] iArr = new int[2];
            if (intentRegisterReceiver != null) {
                iArr[0] = intentRegisterReceiver.getIntExtra("level", 50);
                iArr[1] = intentRegisterReceiver.getIntExtra("plugged", 0);
                a(iArr[1] != 0);
                iArr[0] = a(iArr[0], iArr[1]);
                a(iArr[0]);
            } else {
                iArr[0] = 50;
                iArr[1] = 0;
            }
            return iArr[0];
        } catch (Exception unused) {
            int i = f3521a;
            if (i != -1) {
                return i;
            }
            return 50;
        }
    }

    private static int a(int i, int i2) {
        String str = Build.MODEL;
        if (str.equalsIgnoreCase("SCH-i909") || str.equalsIgnoreCase("SCH-I535") || str.equalsIgnoreCase("SCH-W899")) {
            if (i > 100) {
                i /= 10;
            }
        } else if (!str.trim().toUpperCase().contains("XT702") && !str.trim().toUpperCase().contains("XT907") && !str.trim().toUpperCase().contains("XT1058") && !str.trim().toUpperCase().contains("XT1080") && Build.MANUFACTURER.equalsIgnoreCase("motorola")) {
            File file = new File("/sys/class/power_supply/battery/charge_counter");
            int i3 = file.exists() ? Integer.parseInt(a(file)) : 0;
            if (i3 <= 0) {
                File file2 = new File("/sys/class/power_supply/battery/capacity");
                if (file2.exists()) {
                    Integer.parseInt(a(file2));
                }
            }
            if (i3 <= 100 && i3 > 0 && i % 10 == 0) {
                i = i3;
            }
        }
        if (i > 100) {
            if (i2 != 0 && i < 110) {
                return 100;
            }
            do {
                i /= 10;
            } while (i > 100);
        }
        return i;
    }

    public static int b() {
        int intExtra;
        try {
            intExtra = com.mbridge.msdk.foundation.controller.a.f().j().registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED")).getIntExtra("status", 1);
        } catch (Throwable th) {
            z.c("BatteryStatusUtil", th.getMessage(), th);
            intExtra = 0;
        }
        return (intExtra == 2 || intExtra == 5) ? 1 : 0;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x003d A[ORIG_RETURN, RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.lang.String a(java.io.File r4) throws java.lang.Throwable {
        /*
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r1]
            r2 = 0
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L2e
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L27 java.io.IOException -> L2e
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
        L14:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            if (r2 < 0) goto L1e
            a(r2, r1, r0)     // Catch: java.lang.Throwable -> L22 java.io.IOException -> L25
            goto L14
        L1e:
            r3.close()     // Catch: java.io.IOException -> L33
            goto L33
        L22:
            r4 = move-exception
            r2 = r3
            goto L28
        L25:
            r2 = r3
            goto L2e
        L27:
            r4 = move-exception
        L28:
            if (r2 == 0) goto L2d
            r2.close()     // Catch: java.io.IOException -> L2d
        L2d:
            throw r4
        L2e:
            if (r2 == 0) goto L33
            r2.close()     // Catch: java.io.IOException -> L33
        L33:
            java.lang.String r4 = r0.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L3f
            java.lang.String r4 = "0"
        L3f:
            return r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.b.a(java.io.File):java.lang.String");
    }

    private static void a(int i, char[] cArr, StringBuilder sb) {
        for (int i2 = 0; i2 < i; i2++) {
            if (cArr[i2] != '\n' && cArr[i2] != '\r') {
                sb.append(cArr[i2]);
            }
        }
    }

    private static synchronized void a(int i) {
        e = i;
    }

    private static synchronized void a(boolean z) {
        f = z;
    }
}
