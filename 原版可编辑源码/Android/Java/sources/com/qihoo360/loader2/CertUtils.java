package com.qihoo360.loader2;

import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.text.TextUtils;
import com.qihoo360.loader.utils.StringUtils;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class CertUtils {
    public static final ArrayList<String> SIGNATURES = new ArrayList<>();

    public static final boolean isPluginSignatures(PackageInfo packageInfo) {
        if (packageInfo == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "info is null");
            }
            return false;
        }
        if (packageInfo.signatures == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "signatures is null");
            }
            return false;
        }
        Signature[] signatureArr = packageInfo.signatures;
        int length = signatureArr.length;
        int i = 0;
        while (true) {
            boolean z = true;
            if (i >= length) {
                return true;
            }
            String hexString = StringUtils.toHexString(md5NonE(signatureArr[i].toByteArray()));
            Iterator<String> it = SIGNATURES.iterator();
            while (true) {
                if (!it.hasNext()) {
                    z = false;
                    break;
                }
                if (TextUtils.equals(hexString, it.next())) {
                    if (LogDebug.LOG) {
                        LogDebug.i(LogDebug.PLUGIN_TAG, "isPluginSignatures: match. " + hexString + " package=" + packageInfo.packageName);
                    }
                }
            }
            if (!z) {
                if (LogDebug.LOG) {
                    LogDebug.e(LogDebug.PLUGIN_TAG, "isPluginSignatures: unknown signature: " + hexString + " package=" + packageInfo.packageName);
                }
                LogRelease.e(LogDebug.PLUGIN_TAG, "ibs: us " + hexString);
                return false;
            }
            i++;
        }
    }

    public static final byte[] md5(byte[] bArr) throws NoSuchAlgorithmException {
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        messageDigest.update(bArr, 0, bArr.length);
        return messageDigest.digest();
    }

    public static final byte[] md5NonE(byte[] bArr) {
        try {
            return md5(bArr);
        } catch (NoSuchAlgorithmException e) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, e.getMessage(), e);
            }
            return new byte[0];
        }
    }
}
