package com.tkay.core.b;

import com.tkay.core.common.l;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class j implements Comparable<j> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5978a;
    String b;
    double c;
    String d;

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(j jVar) {
        return this.f5978a < jVar.f5978a ? -1 : 1;
    }

    private double a() {
        return this.c;
    }

    private void a(double d) {
        this.c = d;
    }

    private String b() {
        return this.b;
    }

    public static j a(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            j jVar = new j();
            jVar.f5978a = jSONObject.optInt("prority");
            jVar.b = jSONObject.optString("ad_source_id");
            if (jSONObject.has(l.am)) {
                jVar.c = jSONObject.optDouble(l.am);
            } else if (jSONObject.has("price")) {
                jVar.c = jSONObject.optDouble("price");
            } else {
                jVar.c = 0.0d;
            }
            jVar.d = jSONObject.optString("tp_bid_id");
            return jVar;
        } catch (Throwable unused) {
            return null;
        }
    }

    private int a(j jVar) {
        return this.f5978a < jVar.f5978a ? -1 : 1;
    }
}
