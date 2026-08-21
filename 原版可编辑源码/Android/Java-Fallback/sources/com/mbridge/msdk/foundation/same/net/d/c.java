package com.mbridge.msdk.foundation.same.net.d;

public class c extends com.mbridge.msdk.foundation.same.net.d.e<org.json.JSONArray> {
    private static final java.lang.String c = null;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.d.c> r0 = com.mbridge.msdk.foundation.same.net.d.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.d.c.c = r0
            return
    }

    public c(int r1, java.lang.String r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e<org.json.JSONArray> r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    @Override
    protected final com.mbridge.msdk.foundation.same.net.k<org.json.JSONArray> a(com.mbridge.msdk.foundation.same.net.e.c r5) {
            r4 = this;
            r0 = 8
            java.lang.String r1 = new java.lang.String     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            byte[] r2 = r5.b     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            java.util.List<com.mbridge.msdk.foundation.same.net.c.b> r3 = r5.d     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            java.lang.String r3 = com.mbridge.msdk.foundation.same.net.f.b.a(r3)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            r1.<init>(r2, r3)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            r2.<init>(r1)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            com.mbridge.msdk.foundation.same.net.k r5 = com.mbridge.msdk.foundation.same.net.k.a(r2, r5)     // Catch: org.json.JSONException -> L19 java.io.UnsupportedEncodingException -> L2d
            return r5
        L19:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.foundation.same.net.d.c.c
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            com.mbridge.msdk.foundation.same.net.a.a r1 = new com.mbridge.msdk.foundation.same.net.a.a
            r1.<init>(r0, r5)
            com.mbridge.msdk.foundation.same.net.k r5 = com.mbridge.msdk.foundation.same.net.k.a(r1)
            return r5
        L2d:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.foundation.same.net.d.c.c
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            com.mbridge.msdk.foundation.same.net.a.a r1 = new com.mbridge.msdk.foundation.same.net.a.a
            r1.<init>(r0, r5)
            com.mbridge.msdk.foundation.same.net.k r5 = com.mbridge.msdk.foundation.same.net.k.a(r1)
            return r5
    }
}
