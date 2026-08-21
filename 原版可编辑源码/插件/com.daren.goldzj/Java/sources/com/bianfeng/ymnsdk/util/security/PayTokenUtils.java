package com.bianfeng.ymnsdk.util.security;

import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnAppContext;

public class PayTokenUtils {
    public String getPayToken(String str, String str2) {
        try {
            String str3 = new String(android.util.Base64.encode(str.getBytes(), 11), "UTF-8");
            String str4 = new String(android.util.Base64.encode(str2.getBytes(), 11), "UTF-8");
            return str3 + "." + str4 + "." + new String(android.util.Base64.encode(SecurityUtil.getInstance().sha256_HMAC(str3 + "." + str4, YmnAppContext.getSdkAppKey()), 11), "UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
            Logger.i("token错误" + e.getMessage());
            return null;
        }
    }
}
