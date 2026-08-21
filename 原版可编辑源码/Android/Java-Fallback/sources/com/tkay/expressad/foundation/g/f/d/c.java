package com.tkay.expressad.foundation.g.f.d;

public class c extends com.tkay.expressad.foundation.g.f.d.e<org.json.JSONArray> {
    private static final java.lang.String c = null;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.d.c> r0 = com.tkay.expressad.foundation.g.f.d.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.d.c.c = r0
            return
    }

    public c(int r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.foundation.g.f.e<org.json.JSONArray> r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    protected final com.tkay.expressad.foundation.g.f.k<org.json.JSONArray> a(com.tkay.expressad.foundation.g.f.f.c r5) {
            r4 = this;
            r0 = 8
            java.lang.String r1 = new java.lang.String     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            byte[] r2 = r5.b     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            java.util.List<com.tkay.expressad.foundation.g.f.c.c> r3 = r5.d     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            java.lang.String r3 = com.tkay.expressad.foundation.g.f.g.e.a(r3)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            r1.<init>(r2, r3)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            r2.<init>(r1)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r2, r5)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L27
            return r5
        L19:
            r1 = move-exception
            r1.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r1 = new com.tkay.expressad.foundation.g.f.a.a
            r1.<init>(r0, r5)
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r1)
            return r5
        L27:
            r1 = move-exception
            r1.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r1 = new com.tkay.expressad.foundation.g.f.a.a
            r1.<init>(r0, r5)
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r1)
            return r5
    }
}
