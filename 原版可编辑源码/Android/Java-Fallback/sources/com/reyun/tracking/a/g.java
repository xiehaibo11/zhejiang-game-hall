package com.reyun.tracking.a;

class g {
    private org.json.JSONArray a;
    private int b;

    private g() {
            r1 = this;
            r1.<init>()
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            return
    }

    g(com.reyun.tracking.a.b r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public void a() {
            r1 = this;
            int r0 = r1.b
            int r0 = r0 + 1
            r1.b = r0
            return
    }

    public void a(int r4) {
            r3 = this;
            org.json.JSONArray r0 = r3.a
            int r1 = r3.b
            int r0 = r0.optInt(r1)
            org.json.JSONArray r1 = r3.a
            int r2 = r3.b
            int r0 = r0 + r4
            r1.put(r2, r0)
            return
    }

    public void b() {
            r1 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            return
    }

    public org.json.JSONArray c() {
            r1 = this;
            org.json.JSONArray r0 = r1.a
            return r0
    }
}
