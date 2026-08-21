package com.loc;

import java.util.Objects;
import org.json.JSONObject;

/* JADX INFO: compiled from: HistoryLocation.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f2969a = 0;
    public double b = 0.0d;
    public double c = 0.0d;
    public long d = 0;
    public int e = 0;
    public int f = 0;
    public int g = 63;
    public int h = 0;

    public final String a() {
        JSONObject jSONObject;
        try {
            jSONObject = new JSONObject();
            jSONObject.put("time", this.d);
            jSONObject.put(com.tkay.core.common.h.c.C, this.c);
            jSONObject.put("lat", this.b);
            jSONObject.put("radius", this.e);
            jSONObject.put("locationType", this.f2969a);
            jSONObject.put("reType", this.g);
            jSONObject.put("reSubType", this.h);
        } catch (Throwable unused) {
            jSONObject = null;
        }
        return jSONObject == null ? "" : jSONObject.toString();
    }

    public final void a(JSONObject jSONObject) {
        try {
            this.b = jSONObject.optDouble("lat", this.b);
            this.c = jSONObject.optDouble(com.tkay.core.common.h.c.C, this.c);
            this.f2969a = jSONObject.optInt("locationType", this.f2969a);
            this.g = jSONObject.optInt("reType", this.g);
            this.h = jSONObject.optInt("reSubType", this.h);
            this.e = jSONObject.optInt("radius", this.e);
            this.d = jSONObject.optLong("time", this.d);
        } catch (Throwable th) {
            fr.a(th, "CoreUtil", "transformLocation");
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            fc fcVar = (fc) obj;
            if (this.f2969a == fcVar.f2969a && Double.compare(fcVar.b, this.b) == 0 && Double.compare(fcVar.c, this.c) == 0 && this.d == fcVar.d && this.e == fcVar.e && this.f == fcVar.f && this.g == fcVar.g && this.h == fcVar.h) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(this.f2969a), Double.valueOf(this.b), Double.valueOf(this.c), Long.valueOf(this.d), Integer.valueOf(this.e), Integer.valueOf(this.f), Integer.valueOf(this.g), Integer.valueOf(this.h));
    }
}
