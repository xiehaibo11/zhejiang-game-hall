package com.bianfeng.ymnsdk.util.security;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;

public class PayTokenUtils {
    public String getPayToken(String header, String payload) {
        try {
            String headerEncoded = new String(android.util.Base64.encode(header.getBytes(), 11), "UTF-8");
            String payloadEncoded = new String(android.util.Base64.encode(payload.getBytes(), 11), "UTF-8");
            byte[] sign = SecurityUtil.getInstance().sha256_HMAC(headerEncoded + "." + payloadEncoded, YmnAppContext.getSdkAppKey());
            String signEncoded = new String(android.util.Base64.encode(sign, 11), "UTF-8");
            String token = headerEncoded + "." + payloadEncoded + "." + signEncoded;
            return token;
        } catch (Exception e) {
            e.printStackTrace();
            Logger.i("token错误" + e.getMessage());
            return null;
        }
    }
}
