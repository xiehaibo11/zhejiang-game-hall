package com.kwad.sdk.api.loader;

import java.io.File;
import org.json.JSONObject;

final class a {

    static class a {
        String UC;
        int aib;
        String aic;
        transient File aid;
        long interval;
        String sdkVersion;

        a() {
        }

        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null) {
                return;
            }
            this.aib = jSONObject.optInt("dynamicType");
            this.aic = jSONObject.optString("dynamicUrl");
            this.UC = jSONObject.optString("md5");
            this.interval = jSONObject.optLong("interval");
            this.sdkVersion = jSONObject.optString(com.heytap.mcssdk.constant.b.C);
        }

        public final String toString() {
            return "Data{dynamicType=" + this.aib + ", dynamicUrl='" + this.aic + "', md5='" + this.UC + "', interval=" + this.interval + ", sdkVersion='" + this.sdkVersion + "', downloadFile=" + this.aid + '}';
        }

        public final boolean yn() {
            return this.aib == 1;
        }

        public final boolean yo() {
            return this.aib == -1;
        }
    }

    static class b {
        long aie;
        a aif;
        String errorMsg;

        b() {
        }

        public final void parseJson(JSONObject jSONObject) {
            this.aie = jSONObject.optLong("result");
            this.errorMsg = jSONObject.optString("errorMsg");
            a aVar = new a();
            this.aif = aVar;
            aVar.parseJson(jSONObject.optJSONObject("data"));
        }

        public final String toString() {
            return "UpdateData{result=" + this.aie + ", errorMsg='" + this.errorMsg + "', data=" + this.aif + '}';
        }

        final boolean yp() {
            return this.aie == 1 && this.aif != null;
        }
    }
}
