package com.kwad.sdk.utils;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.Signature;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.HashMap;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private static HashMap<String, ArrayList<String>> aHJ = new HashMap<>();
    private static String aHK;

    private static ArrayList<String> H(Context context, String str) {
        String packageName;
        if (context == null || (packageName = context.getPackageName()) == null) {
            return null;
        }
        if (aHJ.get(str) != null) {
            return aHJ.get(str);
        }
        ArrayList<String> arrayList = new ArrayList<>();
        try {
            for (Signature signature : I(context, packageName)) {
                String strA = "error!";
                if ("MD5".equals(str)) {
                    strA = a(signature, "MD5");
                } else if ("SHA1".equals(str)) {
                    strA = a(signature, "SHA1");
                } else if ("SHA256".equals(str)) {
                    strA = a(signature, "SHA256");
                }
                arrayList.add(strA);
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("AppSigningUtil", "签名信息列表获取失败 " + e.getMessage());
        }
        aHJ.put(str, arrayList);
        return arrayList;
    }

    private static Signature[] I(Context context, String str) {
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(str, 64);
            if (packageInfo == null) {
                return null;
            }
            return packageInfo.signatures;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("AppSigningUtil", e.getMessage());
            return null;
        }
    }

    private static String a(Signature signature, String str) {
        byte[] byteArray = signature.toByteArray();
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(str);
            if (messageDigest == null) {
                return "error!";
            }
            byte[] bArrDigest = messageDigest.digest(byteArray);
            StringBuilder sb = new StringBuilder();
            for (byte b : bArrDigest) {
                sb.append(Integer.toHexString((b & UByte.MAX_VALUE) | 256).substring(1, 3).toUpperCase());
                sb.append(Constants.COLON_SEPARATOR);
            }
            return sb.substring(0, sb.length() - 1);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("AppSigningUtil", e.getMessage());
            return "error!";
        }
    }

    public static String bG(Context context) {
        if (!TextUtils.isEmpty(aHK)) {
            return aHK;
        }
        ArrayList<String> arrayListH = H(context, "SHA1");
        if (arrayListH != null && arrayListH.size() != 0) {
            aHK = arrayListH.get(0);
        }
        return aHK;
    }
}
