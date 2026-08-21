package com.xiaomi.push;

import android.content.Context;
import android.os.Build;

public class dp {
    private static void a(byte[] bArr) {
        if (bArr.length >= 2) {
            bArr[0] = 99;
            bArr[1] = 100;
        }
    }

    public static boolean a(Context context, String str, long j) {
        if (com.xiaomi.push.service.ba.a(context).a(ho.aY.a(), false)) {
            return (Build.VERSION.SDK_INT < 29 || context.getApplicationInfo().targetSdkVersion < 29) && !aj.a(context, str, j);
        }
        return false;
    }

    public static byte[] a(String str, byte[] bArr) {
        byte[] bArrA = bm.a(str);
        try {
            a(bArrA);
            return i.a(bArrA, bArr);
        } catch (Exception unused) {
            return null;
        }
    }

    public static byte[] b(String str, byte[] bArr) {
        byte[] bArrA = bm.a(str);
        try {
            a(bArrA);
            return i.b(bArrA, bArr);
        } catch (Exception unused) {
            return null;
        }
    }
}
