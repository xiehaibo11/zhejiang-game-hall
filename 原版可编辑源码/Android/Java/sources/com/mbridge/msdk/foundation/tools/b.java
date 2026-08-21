package com.mbridge.msdk.foundation.tools;

import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.text.TextUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public final class b {
    private static int a = -1;
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
            int i = a;
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
    */
    private static String a(File file) throws Throwable {
        FileInputStream fileInputStream;
        StringBuilder sb = new StringBuilder();
        char[] cArr = new char[1024];
        FileInputStream fileInputStream2 = null;
        try {
            try {
                fileInputStream = new FileInputStream(file);
            } catch (IOException unused) {
            }
            try {
                InputStreamReader inputStreamReader = new InputStreamReader(fileInputStream);
                while (true) {
                    int i = inputStreamReader.read(cArr);
                    if (i < 0) {
                        break;
                    }
                    a(i, cArr, sb);
                }
                fileInputStream.close();
            } catch (IOException unused2) {
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    fileInputStream2.close();
                }
                String string = sb.toString();
                if (!TextUtils.isEmpty(string)) {
                }
            } catch (Throwable th) {
                th = th;
                fileInputStream2 = fileInputStream;
                if (fileInputStream2 != null) {
                    try {
                        fileInputStream2.close();
                    } catch (IOException unused3) {
                    }
                }
                throw th;
            }
        } catch (IOException unused4) {
        } catch (Throwable th2) {
            th = th2;
        }
        String string2 = sb.toString();
        return !TextUtils.isEmpty(string2) ? "0" : string2;
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
