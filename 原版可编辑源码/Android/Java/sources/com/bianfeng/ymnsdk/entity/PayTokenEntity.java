package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class PayTokenEntity {
    public static String getHeader = new PayHeaderEntity().toString();

    public static class PayHeaderEntity {
        private String alg = "HS256";
        private String typ = "JWT";

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }

    public static class PayloadEntity {
        private String aud;
        private String sub;
        private String uid;
        private String iss = "ymn sdk_server JWT";
        private int iat = 0;
        private int exp = 0;
        private String app_id = YmnAppContext.getSdkAppId();

        public void setAud(String aud) {
            this.aud = aud;
        }

        public PayloadEntity(String sub, String uid) {
            this.sub = sub;
            this.uid = uid;
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }
}
