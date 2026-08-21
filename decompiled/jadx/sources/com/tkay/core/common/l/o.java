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

/* JADX INFO: loaded from: classes3.dex */
final class o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PackageManager f6249a;

    public enum a {
        ENABLED,
        DISABLED,
        NOT_INSTALLED
    }

    public o(Context context) {
        this.f6249a = context.getPackageManager();
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
            return a.NOT_INSTALLED;
        }
        try {
            return this.f6249a.getApplicationInfo(str, 0).enabled ? a.ENABLED : a.DISABLED;
        } catch (PackageManager.NameNotFoundException unused) {
            return a.NOT_INSTALLED;
        }
    }

    private int c(String str) {
        try {
            PackageInfo packageInfo = this.f6249a.getPackageInfo(str, 16);
            if (packageInfo != null) {
                return packageInfo.versionCode;
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return 0;
    }

    private String d(String str) {
        try {
            PackageInfo packageInfo = this.f6249a.getPackageInfo(str, 16);
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
            PackageInfo packageInfo = this.f6249a.getPackageInfo(str, 64);
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
