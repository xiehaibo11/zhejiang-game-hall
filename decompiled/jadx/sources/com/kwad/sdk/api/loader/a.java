package com.kwad.sdk.api.loader;

import java.io.File;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
final class a {

    /* JADX INFO: renamed from: com.kwad.sdk.api.loader.a$a, reason: collision with other inner class name */
    static class C0198a {
        String UC;
        int aib;
        String aic;
        transient File aid;
        long interval;
        String sdkVersion;

        C0198a() {
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
        C0198a aif;
        String errorMsg;

        b() {
        }

        public final void parseJson(JSONObject jSONObject) {
            this.aie = jSONObject.optLong("result");
            this.errorMsg = jSONObject.optString("errorMsg");
            C0198a c0198a = new C0198a();
            this.aif = c0198a;
            c0198a.parseJson(jSONObject.optJSONObject("data"));
        }

        public final String toString() {
            return "UpdateData{result=" + this.aie + ", errorMsg='" + this.errorMsg + "', data=" + this.aif + '}';
        }

        final boolean yp() {
            return this.aie == 1 && this.aif != null;
        }
    }
}
