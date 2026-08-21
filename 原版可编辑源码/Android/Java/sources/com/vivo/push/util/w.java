package com.vivo.push.util;

import android.content.Context;
import com.xiaomi.mipush.sdk.Constants;

public final class w extends b {
    private static w b;

    public static synchronized w b() {
        if (b == null) {
            b = new w();
        }
        return b;
    }

    private static byte[] c(String str) {
        int length;
        byte[] bArr = null;
        try {
            String[] strArrSplit = str.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
            if (strArrSplit.length > 0) {
                bArr = new byte[strArrSplit.length];
                length = strArrSplit.length;
            } else {
                length = 0;
            }
            for (int i = 0; i < length; i++) {
                bArr[i] = Byte.parseByte(strArrSplit[i].trim());
            }
        } catch (Exception e) {
            p.a("SharePreferenceManager", "getCodeBytes error:" + e.getMessage());
        }
        return bArr;
    }

    public final synchronized void a(Context context) {
        if (this.a == null) {
            this.a = context;
            a(context, "com.vivo.push_preferences");
        }
    }

    public final byte[] c() {
        byte[] bArrC = c(b("com.vivo.push.secure_cache_iv", ""));
        return (bArrC == null || bArrC.length <= 0) ? new byte[]{34, 32, 33, 37, 33, 34, 32, 33, 33, 33, 34, 41, 35, 32, 32, 32} : bArrC;
    }

    public final byte[] d() {
        byte[] bArrC = c(b("com.vivo.push.secure_cache_key", ""));
        return (bArrC == null || bArrC.length <= 0) ? new byte[]{33, 34, 35, 36, 37, 38, 39, 40, 41, 32, 38, 37, 36, 35, 34, 33} : bArrC;
    }
}
