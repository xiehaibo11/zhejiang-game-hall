package com.bianfeng.ymnsdk.util.security;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;

public class PayTokenUtils {
    public PayTokenUtils() {
    }

    public String getPayToken(String r7, String r8) {
        String r2 = new String(android.util.Base64.encode(r7.getBytes(), 11), "UTF-8");     // Catch: Exception -> L5
        String r72 = new String(android.util.Base64.encode(r8.getBytes(), 11), "UTF-8");     // Catch: Exception -> L5
        return r2 + "." + r72 + "." + new String(android.util.Base64.encode(SecurityUtil.getInstance().sha256_HMAC(r2 + "." + r72, YmnAppContext.getSdkAppKey()), 11), "UTF-8");
    L5:
        e = move-exception;
        e.printStackTrace();
        Logger.i("token错误" + e.getMessage());
        return null;
    }
}
