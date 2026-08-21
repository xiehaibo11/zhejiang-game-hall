package com.bianfeng.ymnsdk.utilslib.security;

import com.bianfeng.ymnsdk.utilslib.SystemUtils;

public class ApihubUtils {
    public static String getSign(String httpMethod, String httpArg, String key, String secret, String route, byte[] data) {
        try {
            String sha256_data = SHA256Utils.getSHA256(data);
            String rcf3339 = getRfc339();
            String md5 = SystemUtils.createTransactionId();
            StringBuffer stringBuffer = new StringBuffer("Shield");
            stringBuffer.append("\n");
            stringBuffer.append(key);
            stringBuffer.append("\n");
            stringBuffer.append(rcf3339);
            stringBuffer.append("\n");
            stringBuffer.append(md5);
            stringBuffer.append("\n");
            stringBuffer.append(httpMethod);
            stringBuffer.append("\n");
            stringBuffer.append(route);
            stringBuffer.append("\n");
            stringBuffer.append(httpArg);
            stringBuffer.append("\n");
            stringBuffer.append(sha256_data);
            String sign_sha256 = SHA256Utils.sha256_HMAC(stringBuffer.toString().getBytes(), secret);
            StringBuffer sb = new StringBuffer("Shield");
            sb.append(" ");
            sb.append("RequestKey=");
            sb.append(key);
            sb.append(", RequestTime=");
            sb.append(rcf3339);
            sb.append(", Nonce=");
            sb.append(md5);
            sb.append(", Signature=");
            sb.append(sign_sha256);
            String aut = sb.toString();
            return aut;
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
