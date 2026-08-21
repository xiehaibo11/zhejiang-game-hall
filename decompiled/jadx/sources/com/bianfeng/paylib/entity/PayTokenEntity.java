package com.bianfeng.paylib.entity;

import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class PayTokenEntity {
    public static String getHeader = new PayHeaderEntity().toString();

    public static class PayHeaderEntity {
        private String alg = "HS256";
        private String typ = "JWT";

        public String toString() {
            return ThridSdk.getGson().toJson(this);
        }
    }

    public static class PayloadEntity {
        private String app_id;
        private String aud;
        private String exp;
        private String iat;
        private String iss = "ymn sdk_server JWT";
        private String sub;
        private String uid;

        public void setAud(String str) {
            this.aud = str;
        }

        public PayloadEntity(String str, String str2) {
            long j = Long.parseLong(UtilsSdk.getSystemUtil().getSystemCurrentTime());
            this.iat = j + "";
            this.exp = (1000 + j) + "";
            this.app_id = UtilsSdk.getAppConfig().getWebPayAppId();
            this.sub = str;
            this.uid = str2;
        }

        public String toString() {
            return ThridSdk.getGson().toJson(this);
        }
    }
}
