package com.loc;

/* JADX INFO: compiled from: AmapLocation.java */
/* JADX INFO: loaded from: classes2.dex */
public class ee {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2940a;
    public long b = 0;
    public long c = 0;
    public double d = 0.0d;
    public double e = 0.0d;
    public double f = 0.0d;
    public float g = 0.0f;
    public float h = 0.0f;
    public float i = 0.0f;
    public boolean j = false;

    public ee(String str) {
        this.f2940a = str;
    }

    public final double a(ee eeVar) {
        if (eeVar != null) {
            return ep.a(this.e, this.d, eeVar.e, eeVar.d);
        }
        return 0.0d;
    }
}
