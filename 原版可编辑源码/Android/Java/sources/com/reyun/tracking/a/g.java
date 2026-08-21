package com.reyun.tracking.a;

import org.json.JSONArray;

class g {
    private JSONArray a;
    private int b;

    private g() {
        this.a = new JSONArray();
        this.b = 0;
    }

    g(b bVar) {
        this();
    }

    public void a() {
        this.b++;
    }

    public void a(int i) {
        this.a.put(this.b, this.a.optInt(this.b) + i);
    }

    public void b() {
        this.a = new JSONArray();
        this.b = 0;
    }

    public JSONArray c() {
        return this.a;
    }
}
