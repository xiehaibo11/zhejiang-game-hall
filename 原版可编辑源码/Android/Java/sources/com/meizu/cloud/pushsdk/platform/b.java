package com.meizu.cloud.pushsdk.platform;

import com.huawei.hms.framework.common.ContainerUtils;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import kotlin.UByte;

public class b {
    public static String a(String str) {
        try {
            byte[] bArrDigest = MessageDigest.getInstance("MD5").digest(str.getBytes());
            StringBuilder sb = new StringBuilder();
            for (byte b : bArrDigest) {
                int i = b & UByte.MAX_VALUE;
                if (i < 16) {
                    sb.append(0);
                }
                sb.append(Integer.toHexString(i));
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String a(Map<String, String> map, String str) {
        Set<Map.Entry> setEntrySet = new TreeMap(map).entrySet();
        StringBuilder sb = new StringBuilder();
        for (Map.Entry entry : setEntrySet) {
            sb.append((String) entry.getKey());
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append((String) entry.getValue());
        }
        sb.append(str);
        return a(sb.toString());
    }
}
