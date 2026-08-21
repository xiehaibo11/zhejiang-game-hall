package com.bianfeng.ymnsdk.feature;

import android.text.TextUtils;
import com.bianfeng.platform.PlatformSdkListener;
import org.json.JSONObject;

public interface YmnCallback extends PlatformSdkListener {

    public static class a {
        private Object a;
        private Object b;

        public a(Object r1, Object r2) {
            this.a = r1;
            this.b = r2;
        }

        private static Object c(String r1) {
        L12:
            return r1;
        L3:
            if ("_YMN_RCM_NU_".equals(r1) == false) goto L7;
            return null;
        L7:
            if ("_YMN_RCM_EM_".equals(r1) == false) goto L10;
            return "";
        L10:
            return new JSONObject(r1);
        }

        public Object a() {
            return this.a;
        }

        public Object b() {
            return this.b;
        }

        public String toString() {
            return "_YMN_RCM_ST_" + a(this.a) + "_YMN_RCM_SE_" + a(this.b);
        }

        public static a a(String r2) {
            String[] r22 = r2.substring(12).split("_YMN_RCM_SE_");
            a r0 = new a();
            r0.a = c(r22[0]);
            r0.b = c(r22[1]);
            return r0;
        }

        public static boolean b(String r1) {
            if (TextUtils.isEmpty(r1) == false) goto L5;
        L7:
            return false;
        L5:
            if (r1.startsWith("_YMN_RCM_ST_") == false) goto L7;
            return true;
        }

        private a() {
        }

        private static String a(Object r1) {
            if (r1 != null) goto L6;
            return "_YMN_RCM_NU_";
        L6:
            if (TextUtils.isEmpty(r1.toString()) == false) goto L10;
            return "_YMN_RCM_EM_";
        L10:
            return r1.toString();
        }
    }
}
