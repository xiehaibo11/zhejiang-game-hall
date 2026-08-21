package com.tkay.core.common.l;

import android.app.ActivityManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.List;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

final class o {
    private final PackageManager a;

    public enum a {
        a,
        b,
        c
    }

    public o(Context context) {
        this.a = context.getPackageManager();
    }

    private static boolean a(Context context) {
        List<ActivityManager.RunningAppProcessInfo> runningAppProcesses;
        if (context != null) {
            try {
                ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
                if (activityManager == null || (runningAppProcesses = activityManager.getRunningAppProcesses()) == null) {
                    return false;
                }
                for (ActivityManager.RunningAppProcessInfo runningAppProcessInfo : runningAppProcesses) {
                    if (runningAppProcessInfo.processName.equals(context.getPackageName()) && runningAppProcessInfo.importance >= 200) {
                        return true;
                    }
                }
            } catch (Exception unused) {
            }
        }
        return false;
    }

    public final a a(String str) {
        if (TextUtils.isEmpty(str)) {
            return a.c;
        }
        try {
            return this.a.getApplicationInfo(str, 0).enabled ? a.a : a.b;
        } catch (PackageManager.NameNotFoundException unused) {
            return a.c;
        }
    }

    private int c(String str) {
        try {
            PackageInfo packageInfo = this.a.getPackageInfo(str, 16);
            if (packageInfo != null) {
                return packageInfo.versionCode;
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return 0;
    }

    private String d(String str) {
        try {
            PackageInfo packageInfo = this.a.getPackageInfo(str, 16);
            if (packageInfo != null && packageInfo.versionName != null) {
                return packageInfo.versionName;
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return "";
    }

    public final String b(String str) {
        byte[] bArrE = e(str);
        if (bArrE == null || bArrE.length == 0) {
            return null;
        }
        return k.a(a(bArrE));
    }

    private byte[] e(String str) {
        try {
            PackageInfo packageInfo = this.a.getPackageInfo(str, 64);
            if (packageInfo != null && packageInfo.signatures != null && packageInfo.signatures.length > 0) {
                return packageInfo.signatures[0].toByteArray();
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return new byte[0];
    }

    private static byte[] a(byte[] bArr) {
        try {
            return MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(bArr);
        } catch (NoSuchAlgorithmException unused) {
            return new byte[0];
        }
    }
}
