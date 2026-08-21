package com.kwad.sdk.api.loader;

import com.kwad.sdk.api.loader.a;
import org.json.JSONObject;

public final class j {
    public static int aix;

    static class a {
        private String aiA;
        private String aiB;
        private long aiC;
        private int aiD;
        private String aiE;
        private int aiy;
        private int aiz;

        private a() {
        }

        a(byte b) {
            this();
        }

        private a U(long j) {
            this.aiC = j;
            return this;
        }

        private a bQ(int i) {
            this.aiy = i;
            return this;
        }

        private a bR(int i) {
            this.aiz = i;
            return this;
        }

        private a bS(int i) {
            this.aiD = i;
            return this;
        }

        private a bX(String str) {
            this.aiA = str;
            return this;
        }

        private a bY(String str) {
            this.aiB = str;
            return this;
        }

        private a bZ(String str) {
            this.aiE = str;
            return this;
        }

        private JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.putOpt("load_status", Integer.valueOf(this.aiy));
                jSONObject.putOpt("update_count", Integer.valueOf(this.aiz));
                jSONObject.putOpt("dynamic_version", this.aiA);
                jSONObject.putOpt("download_url", this.aiB);
                jSONObject.putOpt("duration_ms", Long.valueOf(this.aiC));
                jSONObject.putOpt("error_code", Integer.valueOf(this.aiD));
                jSONObject.putOpt("error_msg", this.aiE);
            } catch (Exception unused) {
            }
            return jSONObject;
        }

        public final String toString() {
            return "MonitorInfo{load_status=" + this.aiy + ", update_count=" + this.aiz + ", dynamic_version='" + this.aiA + "', download_url='" + this.aiB + "', duration_ms=" + this.aiC + ", error_code=" + this.aiD + ", error_msg='" + this.aiE + "'}";
        }
    }

    private static void a(int i, a.a aVar, long j, int i2, String str) {
        if (aVar == null) {
            return;
        }
        try {
            JSONObject json = new a((byte) 0).bQ(i).bR(aix).bX(aVar.sdkVersion).bY(aVar.aic).U(j).bS(i2).bZ(str).toJson();
            StringBuilder sb = new StringBuilder("status:");
            sb.append(i);
            sb.append("--jo:");
            sb.append(json);
            com.kwad.sdk.api.c.c("reportDynamicUpdate", json);
        } catch (Throwable unused) {
        }
    }

    public static void a(a.a aVar) {
        aix++;
        a(1, aVar, 0L, 0, "");
    }

    public static void a(a.a aVar, int i, String str) {
        a(4, aVar, 0L, i, str);
    }

    public static void a(a.a aVar, long j) {
        a(2, aVar, j, 0, "");
    }

    public static void a(a.a aVar, long j, String str) {
        a(3, aVar, j, 0, str);
    }

    public static void b(a.a aVar) {
        a(5, aVar, 0L, 0, "");
    }

    public static void b(a.a aVar, int i, String str) {
        a(7, aVar, 0L, i, str);
    }

    public static void b(a.a aVar, long j) {
        a(6, aVar, j, 0, "");
    }
}
