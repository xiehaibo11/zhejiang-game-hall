package com.bianfeng.ymnsdk.sysfunc;

import android.content.Context;
import android.provider.Settings;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class DeviceInfoManager {
    public static String getUniqueId(Context context) {
        return Settings.Secure.getString(context.getContentResolver(), "android_id");
    }

    private static String toMD5(String str) throws NoSuchAlgorithmException {
        byte[] bArrDigest = MessageDigest.getInstance("MD5").digest(str.getBytes());
        StringBuilder sb = new StringBuilder();
        for (byte b : bArrDigest) {
            String hexString = Integer.toHexString(b & UByte.MAX_VALUE);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }
}
