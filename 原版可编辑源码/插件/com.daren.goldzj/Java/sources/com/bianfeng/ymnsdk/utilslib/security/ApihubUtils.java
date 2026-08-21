package com.bianfeng.ymnsdk.utilslib.security;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class ApihubUtils {
    public static String getSign(String str, String str2, String str3, String str4, String str5, byte[] bArr) {
        try {
            String sha256 = SHA256Utils.getSHA256(bArr);
            String rfc339 = getRfc339();
            String strCreateTransactionId = SystemUtils.createTransactionId();
            StringBuffer stringBuffer = new StringBuffer("Shield");
            stringBuffer.append("\n");
            stringBuffer.append(str3);
            stringBuffer.append("\n");
            stringBuffer.append(rfc339);
            stringBuffer.append("\n");
            stringBuffer.append(strCreateTransactionId);
            stringBuffer.append("\n");
            stringBuffer.append(str);
            stringBuffer.append("\n");
            stringBuffer.append(str5);
            stringBuffer.append("\n");
            stringBuffer.append(str2);
            stringBuffer.append("\n");
            stringBuffer.append(sha256);
            String strSha256_HMAC = SHA256Utils.sha256_HMAC(stringBuffer.toString().getBytes(), str4);
            StringBuffer stringBuffer2 = new StringBuffer("Shield");
            stringBuffer2.append(" ");
            stringBuffer2.append("RequestKey=");
            stringBuffer2.append(str3);
            stringBuffer2.append(", RequestTime=");
            stringBuffer2.append(rfc339);
            stringBuffer2.append(", Nonce=");
            stringBuffer2.append(strCreateTransactionId);
            stringBuffer2.append(", Signature=");
            stringBuffer2.append(strSha256_HMAC);
            return stringBuffer2.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    private static String getRfc339() {
        try {
            return SystemUtils.getRFC3339(Long.valueOf(System.currentTimeMillis()));
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }
}
