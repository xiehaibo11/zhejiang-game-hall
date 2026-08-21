package com.kwad.sdk.api.loader;

import com.kwad.sdk.api.loader.a;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
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

        /* synthetic */ a(byte b) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a U(long j) {
            this.aiC = j;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bQ(int i) {
            this.aiy = i;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bR(int i) {
            this.aiz = i;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bS(int i) {
            this.aiD = i;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bX(String str) {
            this.aiA = str;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bY(String str) {
            this.aiB = str;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public a bZ(String str) {
            this.aiE = str;
            return this;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public JSONObject toJson() {
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

    private static void a(int i, a.C0198a c0198a, long j, int i2, String str) {
        if (c0198a == null) {
            return;
        }
        try {
            JSONObject json = new a((byte) 0).bQ(i).bR(aix).bX(c0198a.sdkVersion).bY(c0198a.aic).U(j).bS(i2).bZ(str).toJson();
            StringBuilder sb = new StringBuilder("status:");
            sb.append(i);
            sb.append("--jo:");
            sb.append(json);
            com.kwad.sdk.api.c.c("reportDynamicUpdate", json);
        } catch (Throwable unused) {
        }
    }

    public static void a(a.C0198a c0198a) {
        aix++;
        a(1, c0198a, 0L, 0, "");
    }

    public static void a(a.C0198a c0198a, int i, String str) {
        a(4, c0198a, 0L, i, str);
    }

    public static void a(a.C0198a c0198a, long j) {
        a(2, c0198a, j, 0, "");
    }

    public static void a(a.C0198a c0198a, long j, String str) {
        a(3, c0198a, j, 0, str);
    }

    public static void b(a.C0198a c0198a) {
        a(5, c0198a, 0L, 0, "");
    }

    public static void b(a.C0198a c0198a, int i, String str) {
        a(7, c0198a, 0L, i, str);
    }

    public static void b(a.C0198a c0198a, long j) {
        a(6, c0198a, j, 0, "");
    }
}
