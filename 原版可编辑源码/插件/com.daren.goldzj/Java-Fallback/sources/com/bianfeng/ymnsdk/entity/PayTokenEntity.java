package com.bianfeng.ymnsdk.entity;

import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class PayTokenEntity {
    public static String getHeader;

    public static class PayHeaderEntity {
        private String alg;
        private String typ;

        public PayHeaderEntity() {
            this.alg = "HS256";
            this.typ = "JWT";
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }

    public static class PayloadEntity {
        private String app_id;
        private String aud;
        private int exp;
        private int iat;
        private String iss;
        private String sub;
        private String uid;

        public PayloadEntity(String r2, String r3) {
            this.iss = "ymn sdk_server JWT";
            this.iat = 0;
            this.exp = 0;
            this.app_id = YmnAppContext.getSdkAppId();
            this.sub = r2;
            this.uid = r3;
        }

        public void setAud(String r1) {
            this.aud = r1;
        }

        public String toString() {
            return YmnGsonUtil.toJson(this);
        }
    }

    static {
        getHeader = new PayHeaderEntity().toString();
    }

    public PayTokenEntity() {
    }
}
