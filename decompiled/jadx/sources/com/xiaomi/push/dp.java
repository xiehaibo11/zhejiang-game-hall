package com.xiaomi.push;

import android.content.Context;
import android.os.Build;

/* JADX INFO: loaded from: classes4.dex */
public class dp {
    private static void a(byte[] bArr) {
        if (bArr.length >= 2) {
            bArr[0] = 99;
            bArr[1] = 100;
        }
    }

    public static boolean a(Context context, String str, long j) {
        if (com.xiaomi.push.service.ba.a(context).a(ho.DCJobMutualSwitch.a(), false)) {
            return (Build.VERSION.SDK_INT < 29 || context.getApplicationInfo().targetSdkVersion < 29) && !aj.a(context, str, j);
        }
        return false;
    }

    public static byte[] a(String str, byte[] bArr) {
        byte[] bArrM157a = bm.m157a(str);
        try {
            a(bArrM157a);
            return i.a(bArrM157a, bArr);
        } catch (Exception unused) {
            return null;
        }
    }

    public static byte[] b(String str, byte[] bArr) {
        byte[] bArrM157a = bm.m157a(str);
        try {
            a(bArrM157a);
            return i.b(bArrM157a, bArr);
        } catch (Exception unused) {
            return null;
        }
    }
}
