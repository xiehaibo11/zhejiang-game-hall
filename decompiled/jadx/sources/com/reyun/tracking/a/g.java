package com.reyun.tracking.a;

import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
class g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private JSONArray f4702a;
    private int b;

    private g() {
        this.f4702a = new JSONArray();
        this.b = 0;
    }

    /* synthetic */ g(b bVar) {
        this();
    }

    public void a() {
        this.b++;
    }

    public void a(int i) {
        this.f4702a.put(this.b, this.f4702a.optInt(this.b) + i);
    }

    public void b() {
        this.f4702a = new JSONArray();
        this.b = 0;
    }

    public JSONArray c() {
        return this.f4702a;
    }
}
