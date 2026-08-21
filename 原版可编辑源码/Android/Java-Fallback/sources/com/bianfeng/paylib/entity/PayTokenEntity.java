package com.bianfeng.paylib.entity;

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
                com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
                java.lang.String r0 = r0.toJson(r1)
                return r0
        }
    }

    public static class PayloadEntity {
        private java.lang.String app_id;
        private java.lang.String aud;
        private java.lang.String exp;
        private java.lang.String iat;
        private java.lang.String iss;
        private java.lang.String sub;
        private java.lang.String uid;

        public PayloadEntity(java.lang.String r6, java.lang.String r7) {
                r5 = this;
                r5.<init>()
                java.lang.String r0 = "ymn sdk_server JWT"
                r5.iss = r0
                com.bianfeng.utilslib.SystemUtil r0 = com.bianfeng.utilslib.UtilsSdk.getSystemUtil()
                java.lang.String r0 = r0.getSystemCurrentTime()
                long r0 = java.lang.Long.parseLong(r0)
                r2 = 1000(0x3e8, double:4.94E-321)
                long r2 = r2 + r0
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r0)
                java.lang.String r0 = ""
                r4.append(r0)
                java.lang.String r1 = r4.toString()
                r5.iat = r1
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r2)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r5.exp = r0
                com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
                java.lang.String r0 = r0.getWebPayAppId()
                r5.app_id = r0
                r5.sub = r6
                r5.uid = r7
                return
        }

        public void setAud(java.lang.String r1) {
                r0 = this;
                r0.aud = r1
                return
        }

        public java.lang.String toString() {
                r1 = this;
                com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()
                java.lang.String r0 = r0.toJson(r1)
                return r0
        }
    }

    static {
            com.bianfeng.paylib.entity.PayTokenEntity$PayHeaderEntity r0 = new com.bianfeng.paylib.entity.PayTokenEntity$PayHeaderEntity
            r0.<init>()
            java.lang.String r0 = r0.toString()
            com.bianfeng.paylib.entity.PayTokenEntity.getHeader = r0
            return
    }

    public PayTokenEntity() {
            r0 = this;
            r0.<init>()
            return
    }
}
