package com.bianfeng.ymnsdk.feature;

import android.text.TextUtils;
import com.bianfeng.platform.PlatformSdkListener;
import org.json.JSONException;
import org.json.JSONObject;

public interface YmnCallback extends PlatformSdkListener {

    public static class a {
        private Object a;
        private Object b;

        public Object a() {
            return this.a;
        }

        public Object b() {
            return this.b;
        }

        public a(Object data, Object ext) {
            this.a = data;
            this.b = ext;
        }

        private a() {
        }

        public static a a(String text) {
            String[] arrays = text.substring("_YMN_RCM_ST_".length()).split("_YMN_RCM_SE_");
            a message = new a();
            message.a = c(arrays[0]);
            message.b = c(arrays[1]);
            return message;
        }

        public static boolean b(String text) {
            return !TextUtils.isEmpty(text) && text.startsWith("_YMN_RCM_ST_");
        }

        private static String a(Object object) {
            return object == null ? "_YMN_RCM_NU_" : TextUtils.isEmpty(object.toString()) ? "_YMN_RCM_EM_" : object.toString();
        }

        private static Object c(String string) {
            try {
                if ("_YMN_RCM_NU_".equals(string)) {
                    return null;
                }
                if ("_YMN_RCM_EM_".equals(string)) {
                    return "";
                }
                return new JSONObject(string);
            } catch (JSONException e) {
                return string;
            }
        }

        public String toString() {
            return "_YMN_RCM_ST_" + a(this.a) + "_YMN_RCM_SE_" + a(this.b);
        }
    }
}
