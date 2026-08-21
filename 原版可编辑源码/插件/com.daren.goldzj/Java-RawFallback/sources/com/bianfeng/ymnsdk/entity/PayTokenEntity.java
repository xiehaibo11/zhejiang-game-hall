package com.bianfeng.ymnsdk.entity;

public class PayTokenEntity {
    public static java.lang.String getHeader;

    public static class PayHeaderEntity {
        private java.lang.String alg;
        private java.lang.String typ;

        public PayHeaderEntity() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "HS256"
                r1.alg = r0
                java.lang.String r0 = "JWT"
                r1.typ = r0
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
                return r0
        }
    }

    public static class PayloadEntity {
        private java.lang.String app_id;
        private java.lang.String aud;
        private int exp;
        private int iat;
        private java.lang.String iss;
        private java.lang.String sub;
        private java.lang.String uid;

        public PayloadEntity(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "ymn sdk_server JWT"
                r1.iss = r0
                r0 = 0
                r1.iat = r0
                r1.exp = r0
                java.lang.String r0 = com.bianfeng.ymnsdk.util.YmnAppContext.getSdkAppId()
                r1.app_id = r0
                r1.sub = r2
                r1.uid = r3
                return
        }

        public void setAud(java.lang.String r1) {
                r0 = this;
                r0.aud = r1
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
                return r0
        }
    }

    static {
            com.bianfeng.ymnsdk.entity.PayTokenEntity$PayHeaderEntity r0 = new com.bianfeng.ymnsdk.entity.PayTokenEntity$PayHeaderEntity
            r0.<init>()
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.entity.PayTokenEntity.getHeader = r0
            return
    }

    public PayTokenEntity() {
            r0 = this;
            r0.<init>()
            return
    }
}
