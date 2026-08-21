package com.cmic.gen.sdk.c.b;

import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: LogReportParameter.java */
/* JADX INFO: loaded from: classes.dex */
public class f extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f1650a;
    private a b;

    @Override // com.cmic.gen.sdk.c.b.g
    protected String a_(String str) {
        return null;
    }

    public void a(b bVar) {
        this.f1650a = bVar;
    }

    public void a(a aVar) {
        this.b = aVar;
    }

    /* JADX INFO: compiled from: LogReportParameter.java */
    public static class b extends g {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f1652a;
        private String b;
        private String c;
        private String d;
        private String e;

        @Override // com.cmic.gen.sdk.c.b.g
        public JSONObject b() {
            return null;
        }

        public String c() {
            return this.e;
        }

        public void b(String str) {
            this.e = str;
        }

        @Override // com.cmic.gen.sdk.c.b.g
        public String a() {
            return this.d;
        }

        @Override // com.cmic.gen.sdk.c.b.g
        protected String a_(String str) {
            return this.e + this.d + this.c + this.b + "@Fdiwmxy7CBDDQNUI";
        }

        public void c(String str) {
            this.d = str;
        }

        public String d() {
            return this.f1652a;
        }

        public void d(String str) {
            this.f1652a = str;
        }

        public String e() {
            return this.b;
        }

        public void e(String str) {
            this.b = str;
        }

        public String f() {
            return this.c;
        }

        public void f(String str) {
            this.c = str;
        }
    }

    /* JADX INFO: compiled from: LogReportParameter.java */
    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private JSONObject f1651a;

        public JSONObject a() {
            return this.f1651a;
        }

        public void a(JSONObject jSONObject) {
            this.f1651a = jSONObject;
        }
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public String a() {
        return this.f1650a.d;
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public JSONObject b() {
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObject2 = new JSONObject();
        JSONObject jSONObject3 = new JSONObject();
        try {
            jSONObject2.put("sign", this.f1650a.d());
            jSONObject2.put("msgid", this.f1650a.e());
            jSONObject2.put("systemtime", this.f1650a.f());
            jSONObject2.put("appid", this.f1650a.a());
            jSONObject2.put("version", this.f1650a.c());
            jSONObject.put(com.tkay.expressad.foundation.d.f.j, jSONObject2);
            jSONObject3.put("log", this.b.a());
            jSONObject.put(TtmlNode.TAG_BODY, jSONObject3);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
