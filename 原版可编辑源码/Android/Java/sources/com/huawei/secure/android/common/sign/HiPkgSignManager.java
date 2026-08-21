package com.huawei.secure.android.common.sign;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import android.util.Log;
import com.huawei.secure.android.common.util.LogsUtil;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Locale;
import kotlin.UByte;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

public class HiPkgSignManager {
    private static final String a = "HiPkgSignManager";

    private static String a(byte[] bArr) {
        if (bArr == null) {
            return null;
        }
        int length = bArr.length;
        StringBuffer stringBuffer = new StringBuffer();
        for (int i = 0; i < length; i++) {
            if ((bArr[i] & UByte.MAX_VALUE) < 16) {
                stringBuffer.append("0" + Integer.toHexString(bArr[i] & UByte.MAX_VALUE));
            } else {
                stringBuffer.append(Integer.toHexString(bArr[i] & UByte.MAX_VALUE));
            }
        }
        return stringBuffer.toString().toUpperCase(Locale.ENGLISH);
    }

    private static String b(byte[] bArr) {
        try {
            return a(MessageDigest.getInstance(MessageDigestAlgorithms.SHA_256).digest(bArr));
        } catch (NoSuchAlgorithmException e) {
            Log.e(a, "NoSuchAlgorithmException" + e.getMessage());
            return "";
        }
    }

    public static boolean doCheckArchiveApk(Context context, String str, String str2, String str3) {
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str) || context == null || TextUtils.isEmpty(str3)) {
            return false;
        }
        return str.equalsIgnoreCase(getUnInstalledAppHash(context, str2)) && str3.equals(getUnInstalledAPPPackageName(context, str2));
    }

    public static boolean doCheckInstalled(Context context, String str, String str2) {
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str) || context == null) {
            return false;
        }
        return str.equals(getInstalledAppHash(context, str2));
    }

    public static byte[] getInstalledAPPSignature(Context context, String str) {
        PackageInfo packageInfo;
        if (context == null || TextUtils.isEmpty(str)) {
            Log.e(a, "packageName is null or context is null");
            return new byte[0];
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null && (packageInfo = packageManager.getPackageInfo(str, 64)) != null) {
                return packageInfo.signatures[0].toByteArray();
            }
        } catch (PackageManager.NameNotFoundException e) {
            LogsUtil.e(a, "PackageManager.NameNotFoundException : " + e.getMessage(), true);
        } catch (Exception e2) {
            LogsUtil.e(a, "Exception : " + e2.getMessage(), true);
        }
        return new byte[0];
    }

    public static String getInstalledAppHash(Context context, String str) {
        byte[] installedAPPSignature = getInstalledAPPSignature(context, str);
        return (installedAPPSignature == null || installedAPPSignature.length <= 0) ? "" : b(installedAPPSignature);
    }

    public static String getUnInstalledAPPPackageName(Context context, String str) {
        PackageInfo packageArchiveInfo;
        if (context == null || TextUtils.isEmpty(str)) {
            Log.e(a, "archiveFilePath is null or context is null");
            return "";
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null && (packageArchiveInfo = packageManager.getPackageArchiveInfo(str, 64)) != null) {
                return packageArchiveInfo.packageName;
            }
        } catch (Exception e) {
            Log.e(a, "getUnInstalledAPPSignature exception : " + e.getMessage());
        }
        return "";
    }

    public static byte[] getUnInstalledAPPSignature(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            Log.e(a, "archiveFilePath is null or context is null");
            return new byte[0];
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null) {
                PackageInfo packageArchiveInfo = packageManager.getPackageArchiveInfo(str, 64);
                if (packageArchiveInfo != null) {
                    return packageArchiveInfo.signatures[0].toByteArray();
                }
                Log.e(a, "PackageInfo is null ");
            }
        } catch (Exception e) {
            LogsUtil.e(a, "Exception : " + e.getMessage(), true);
        }
        return new byte[0];
    }

    public static String getUnInstalledAppHash(Context context, String str) {
        byte[] unInstalledAPPSignature = getUnInstalledAPPSignature(context, str);
        return (unInstalledAPPSignature == null || unInstalledAPPSignature.length <= 0) ? "" : b(unInstalledAPPSignature);
    }
}
