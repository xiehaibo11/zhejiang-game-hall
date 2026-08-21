package com.kwad.sdk.crash;

import android.content.Context;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

public final class c {
    public final String ajx;
    public final String atV;
    public final h azA;
    public final String[] azB;
    public final String[] azC;
    public final boolean azD;
    public final f azE;
    public final String azF;
    public final String azG;
    public final String azH;
    public final String azI;
    public final List<com.kwad.sdk.crash.a> azJ;
    public final double azq;
    public final boolean azu;
    public final boolean azv;
    public final com.kwad.sdk.crash.model.b azy;
    public final com.kwad.sdk.crash.model.a azz;
    public final Context context;
    public final boolean isExternal;
    public final String platform;
    public final String version;

    public static class a {
        private String Uj;
        private int Uk;
        public int Ul;
        private String ajx;
        private String appId;
        private String appName;
        private String appPackageName;
        private String appVersion;
        private int asu;
        private String atV;
        private f azE;
        private String azF;
        private String azG;
        private String azK;
        private h azL;
        private String[] azM;
        public String[] azN;
        private Context context;
        private String platform;
        private String sdkVersion;
        private String version;
        private boolean azD = false;
        private boolean azu = false;
        private boolean azv = false;
        private boolean isExternal = false;
        private String azH = "";
        private String azI = "";
        private List<com.kwad.sdk.crash.a> azJ = new ArrayList();
        private double azq = 1.0d;

        public final a A(List<String> list) {
            for (String str : list) {
                if (!TextUtils.isEmpty(str)) {
                    try {
                        JSONObject jSONObject = new JSONObject(str);
                        com.kwad.sdk.crash.a aVar = new com.kwad.sdk.crash.a();
                        aVar.parseJson(jSONObject);
                        this.azJ.add(aVar);
                    } catch (Exception e) {
                        com.kwad.sdk.core.e.c.w("ExceptionCollectorConfigs", e.toString());
                    }
                }
            }
            return this;
        }

        public final c EB() {
            return new c(this, (byte) 0);
        }

        public final a a(f fVar) {
            this.azE = fVar;
            return this;
        }

        public final a a(h hVar) {
            this.azL = hVar;
            return this;
        }

        public final a bn(boolean z) {
            this.azu = z;
            return this;
        }

        public final a bo(boolean z) {
            this.azv = z;
            return this;
        }

        public final a bp(boolean z) {
            this.isExternal = z;
            return this;
        }

        public final a bv(Context context) {
            this.context = context;
            return this;
        }

        public final a cC(int i) {
            this.asu = i;
            return this;
        }

        public final a cD(int i) {
            this.Uk = i;
            return this;
        }

        public final a cE(int i) {
            this.Ul = 1;
            return this;
        }

        public final a d(String[] strArr) {
            this.azM = strArr;
            return this;
        }

        public final a e(String[] strArr) {
            this.azN = strArr;
            return this;
        }

        public final a el(String str) {
            this.azH = str;
            return this;
        }

        public final a em(String str) {
            this.azI = str;
            return this;
        }

        public final a en(String str) {
            this.platform = str;
            return this;
        }

        public final a eo(String str) {
            this.atV = str;
            return this;
        }

        public final a ep(String str) {
            this.ajx = str;
            return this;
        }

        public final a eq(String str) {
            this.azG = str;
            return this;
        }

        public final a er(String str) {
            this.azK = str;
            return this;
        }

        public final a es(String str) {
            this.sdkVersion = str;
            return this;
        }

        public final a et(String str) {
            this.Uj = str;
            return this;
        }

        public final a eu(String str) {
            this.appPackageName = str;
            return this;
        }

        public final a ev(String str) {
            this.appId = str;
            return this;
        }

        public final a ew(String str) {
            this.appName = str;
            return this;
        }

        public final a ex(String str) {
            this.appVersion = str;
            return this;
        }

        public final a j(double d) {
            this.azq = d;
            return this;
        }
    }

    private c(a aVar) {
        this.azy = new com.kwad.sdk.crash.model.b();
        this.azz = new com.kwad.sdk.crash.model.a();
        this.azJ = new ArrayList();
        this.azD = aVar.azD;
        this.azu = aVar.azu;
        this.azv = aVar.azv;
        this.isExternal = aVar.isExternal;
        this.azH = aVar.azH;
        this.azI = aVar.azI;
        this.context = aVar.context;
        this.azE = aVar.azE;
        this.platform = aVar.platform;
        this.version = aVar.version;
        this.atV = aVar.atV;
        this.ajx = aVar.ajx;
        this.azF = aVar.azF;
        this.azG = aVar.azG;
        this.azz.aAm = aVar.appId;
        this.azz.mAppName = aVar.appName;
        this.azz.aAo = aVar.appVersion;
        this.azz.aAn = aVar.appPackageName;
        this.azy.aAr = aVar.Uj;
        this.azy.aAs = aVar.Uk;
        this.azy.mSdkVersion = aVar.sdkVersion;
        this.azy.aAq = aVar.asu;
        this.azy.aAp = aVar.azK;
        this.azy.aAt = aVar.Ul;
        this.azA = aVar.azL;
        this.azB = aVar.azM;
        this.azC = aVar.azN;
        this.azJ.addAll(aVar.azJ);
        this.azq = aVar.azq;
    }

    c(a aVar, byte b) {
        this(aVar);
    }

    public final boolean EA() {
        return this.azD;
    }

    public final f Ez() {
        return this.azE;
    }
}
