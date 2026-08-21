package com.tkay.expressad.foundation.g.f.d;

public class d extends com.tkay.expressad.foundation.g.f.d.e<org.json.JSONObject> {
    private static final java.lang.String c = null;

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.d.d> r0 = com.tkay.expressad.foundation.g.f.d.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.d.d.c = r0
            return
    }

    public d(int r1, java.lang.String r2, java.lang.String r3, com.tkay.expressad.foundation.g.f.e<org.json.JSONObject> r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    protected final com.tkay.expressad.foundation.g.f.k<org.json.JSONObject> a(com.tkay.expressad.foundation.g.f.f.c r5) {
            r4 = this;
            r0 = 8
            java.lang.String r1 = new java.lang.String     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            byte[] r2 = r5.b     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            java.util.List<com.tkay.expressad.foundation.g.f.c.c> r3 = r5.d     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            java.lang.String r3 = com.tkay.expressad.foundation.g.f.g.e.a(r3)     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            r1.<init>(r2, r3)     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            int r2 = r5.a     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            r3 = 204(0xcc, float:2.86E-43)
            if (r2 != r3) goto L1f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            r1.<init>()     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r1, r5)     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            return r5
        L1f:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            r2.<init>(r1)     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r2, r5)     // Catch: org.json.JSONException -> L29 java.io.UnsupportedEncodingException -> L37
            return r5
        L29:
            r1 = move-exception
            r1.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r1 = new com.tkay.expressad.foundation.g.f.a.a
            r1.<init>(r0, r5)
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r1)
            return r5
        L37:
            r1 = move-exception
            r1.getMessage()
            com.tkay.expressad.foundation.g.f.a.a r1 = new com.tkay.expressad.foundation.g.f.a.a
            r1.<init>(r0, r5)
            com.tkay.expressad.foundation.g.f.k r5 = com.tkay.expressad.foundation.g.f.k.a(r1)
            return r5
    }
}
