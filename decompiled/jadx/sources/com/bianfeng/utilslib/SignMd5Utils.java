package com.bianfeng.utilslib;

import com.huawei.hms.framework.common.ContainerUtils;
import java.security.MessageDigest;
import java.util.Map;
import java.util.TreeMap;
import kotlin.UByte;

/* JADX INFO: loaded from: classes.dex */
public class SignMd5Utils {
    private static SignMd5Utils utils;

    private SignMd5Utils() {
    }

    public static SignMd5Utils getInstance() {
        if (utils == null) {
            utils = new SignMd5Utils();
        }
        return utils;
    }

    public String getMd5(TreeMap<String, String> treeMap) {
        String webPayPrivateKey = UtilsSdk.getAppConfig().getWebPayPrivateKey();
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : treeMap.entrySet()) {
            sb.append(entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue() + "&");
        }
        UtilsSdk.getLogger().i("signed-->" + sb.toString());
        String strMd5 = md5(sb.toString() + webPayPrivateKey);
        UtilsSdk.getLogger().i("signed-->" + strMd5);
        return strMd5;
    }

    public String md5(String str) {
        try {
            return bytesToHexString(MessageDigest.getInstance(System.getProperty("MD5.algorithm", "MD5")).digest(str.getBytes("utf-8")));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public String bytesToHexString(byte[] bArr) {
        StringBuilder sb = new StringBuilder();
        if (bArr == null || bArr.length <= 0) {
            return null;
        }
        for (byte b : bArr) {
            String hexString = Integer.toHexString(b & UByte.MAX_VALUE);
            if (hexString.length() < 2) {
                sb.append(0);
            }
            sb.append(hexString);
        }
        return sb.toString();
    }
}
