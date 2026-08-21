package com.bianfeng.ymnsdk.feature;

import android.text.TextUtils;
import com.bianfeng.platform.PlatformSdkListener;
import org.json.JSONException;
import org.json.JSONObject;

public interface YmnCallback extends PlatformSdkListener {

    public static class a {
        private Object a;
        private Object b;

        public a(Object obj, Object obj2) {
            this.a = obj;
            this.b = obj2;
        }

        private static Object c(String str) {
            try {
                if ("_YMN_RCM_NU_".equals(str)) {
                    return null;
                }
                return "_YMN_RCM_EM_".equals(str) ? "" : new JSONObject(str);
            } catch (JSONException unused) {
                return str;
            }
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

        public static a a(String str) {
            String[] strArrSplit = str.substring(12).split("_YMN_RCM_SE_");
            a aVar = new a();
            aVar.a = c(strArrSplit[0]);
            aVar.b = c(strArrSplit[1]);
            return aVar;
        }

        public static boolean b(String str) {
            return !TextUtils.isEmpty(str) && str.startsWith("_YMN_RCM_ST_");
        }

        private a() {
        }

        private static String a(Object obj) {
            return obj == null ? "_YMN_RCM_NU_" : TextUtils.isEmpty(obj.toString()) ? "_YMN_RCM_EM_" : obj.toString();
        }
    }
}
