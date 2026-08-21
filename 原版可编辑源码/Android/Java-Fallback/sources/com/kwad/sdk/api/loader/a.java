package com.kwad.sdk.api.loader;

final class a {

    static class a {
        java.lang.String UC;
        int aib;
        java.lang.String aic;
        transient java.io.File aid;
        long interval;
        java.lang.String sdkVersion;

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final void parseJson(org.json.JSONObject r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "dynamicType"
                int r0 = r3.optInt(r0)
                r2.aib = r0
                java.lang.String r0 = "dynamicUrl"
                java.lang.String r0 = r3.optString(r0)
                r2.aic = r0
                java.lang.String r0 = "md5"
                java.lang.String r0 = r3.optString(r0)
                r2.UC = r0
                java.lang.String r0 = "interval"
                long r0 = r3.optLong(r0)
                r2.interval = r0
                java.lang.String r0 = "sdkVersion"
                java.lang.String r3 = r3.optString(r0)
                r2.sdkVersion = r3
                return
        }

        public final java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Data{dynamicType="
                r0.<init>(r1)
                int r1 = r4.aib
                r0.append(r1)
                java.lang.String r1 = ", dynamicUrl='"
                r0.append(r1)
                java.lang.String r1 = r4.aic
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = ", md5='"
                r0.append(r2)
                java.lang.String r2 = r4.UC
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", interval="
                r0.append(r2)
                long r2 = r4.interval
                r0.append(r2)
                java.lang.String r2 = ", sdkVersion='"
                r0.append(r2)
                java.lang.String r2 = r4.sdkVersion
                r0.append(r2)
                r0.append(r1)
                java.lang.String r1 = ", downloadFile="
                r0.append(r1)
                java.io.File r1 = r4.aid
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        public final boolean yn() {
                r2 = this;
                int r0 = r2.aib
                r1 = 1
                if (r0 != r1) goto L6
                return r1
            L6:
                r0 = 0
                return r0
        }

        public final boolean yo() {
                r2 = this;
                int r0 = r2.aib
                r1 = -1
                if (r0 != r1) goto L7
                r0 = 1
                return r0
            L7:
                r0 = 0
                return r0
        }
    }

    static class b {
        long aie;
        com.kwad.sdk.api.loader.a.a aif;
        java.lang.String errorMsg;

        b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final void parseJson(org.json.JSONObject r3) {
                r2 = this;
                java.lang.String r0 = "result"
                long r0 = r3.optLong(r0)
                r2.aie = r0
                java.lang.String r0 = "errorMsg"
                java.lang.String r0 = r3.optString(r0)
                r2.errorMsg = r0
                com.kwad.sdk.api.loader.a$a r0 = new com.kwad.sdk.api.loader.a$a
                r0.<init>()
                r2.aif = r0
                java.lang.String r1 = "data"
                org.json.JSONObject r3 = r3.optJSONObject(r1)
                r0.parseJson(r3)
                return
        }

        public final java.lang.String toString() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "UpdateData{result="
                r0.<init>(r1)
                long r1 = r3.aie
                r0.append(r1)
                java.lang.String r1 = ", errorMsg='"
                r0.append(r1)
                java.lang.String r1 = r3.errorMsg
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r1 = ", data="
                r0.append(r1)
                com.kwad.sdk.api.loader.a$a r1 = r3.aif
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        final boolean yp() {
                r4 = this;
                long r0 = r4.aie
                r2 = 1
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 != 0) goto Le
                com.kwad.sdk.api.loader.a$a r0 = r4.aif
                if (r0 == 0) goto Le
                r0 = 1
                return r0
            Le:
                r0 = 0
                return r0
        }
    }
}
