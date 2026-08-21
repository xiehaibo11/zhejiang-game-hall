package com.cmic.gen.sdk.c.b;

import android.util.Base64;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: GetPrePhoneScripParameter.java */
/* JADX INFO: loaded from: classes.dex */
public class e extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f1649a;
    private byte[] b;
    private String c;
    private byte[] d;
    private String e;
    private boolean f = false;

    @Override // com.cmic.gen.sdk.c.b.g
    protected String a_(String str) {
        return null;
    }

    public void a(boolean z) {
        this.f = z;
    }

    public void b(String str) {
        this.e = str;
    }

    public void a(byte[] bArr) {
        this.b = bArr;
    }

    public void c(String str) {
        this.c = str;
    }

    public void b(byte[] bArr) {
        this.d = bArr;
    }

    public void a(a aVar) {
        this.f1649a = aVar;
    }

    public a c() {
        return this.f1649a;
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public String a() {
        return this.f1649a.a();
    }

    @Override // com.cmic.gen.sdk.c.b.g
    public JSONObject b() {
        JSONObject jSONObject = new JSONObject();
        if (this.f) {
            try {
                jSONObject.put("encrypted", this.c);
                jSONObject.put("encryptedIV", Base64.encodeToString(this.d, 0));
                jSONObject.put("reqdata", com.cmic.gen.sdk.e.a.a(this.b, this.f1649a.toString(), this.d));
                jSONObject.put("securityreinforce", this.e);
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return jSONObject;
    }
}
