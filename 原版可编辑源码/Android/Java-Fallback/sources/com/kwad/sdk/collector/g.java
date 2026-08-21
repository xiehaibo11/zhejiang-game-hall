package com.kwad.sdk.collector;

public final class g {
    public static int PERMISSION_DENIED = 2;
    public static int PERMISSION_GRANTED = 1;
    public static int ajL;
    private java.lang.String ajK;
    private int state;

    static {
            return
    }

    public g(java.lang.String r2, int r3) {
            r1 = this;
            r1.<init>()
            int r0 = com.kwad.sdk.collector.g.ajL
            r1.state = r0
            r1.ajK = r2
            r1.state = r3
            return
    }

    public static org.json.JSONArray p(java.util.List<com.kwad.sdk.collector.g> r2) {
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            if (r2 != 0) goto L8
            return r0
        L8:
            java.util.Iterator r2 = r2.iterator()
        Lc:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r2.next()
            com.kwad.sdk.collector.g r1 = (com.kwad.sdk.collector.g) r1
            org.json.JSONObject r1 = r1.toJson()
            r0.put(r1)
            goto Lc
        L20:
            return r0
    }

    private org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "name"
            java.lang.String r2 = r3.yI()     // Catch: org.json.JSONException -> L16
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L16
            java.lang.String r1 = "state"
            int r2 = r3.state     // Catch: org.json.JSONException -> L16
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L16
            goto L1a
        L16:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r1)
        L1a:
            return r0
    }

    private java.lang.String yI() {
            r3 = this;
            java.lang.String r0 = r3.ajK
            java.lang.String r1 = "com.android."
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L14
            java.lang.String r1 = r3.ajK
            java.lang.String r2 = "android.permission"
            boolean r1 = r1.startsWith(r2)
            if (r1 == 0) goto L2e
        L14:
            java.lang.String r1 = r3.ajK
            java.lang.String r2 = "."
            int r1 = r1.lastIndexOf(r2)
            java.lang.String r2 = r3.ajK
            int r2 = r2.length()
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L2e
            java.lang.String r0 = r3.ajK
            int r1 = r1 + 1
            java.lang.String r0 = r0.substring(r1)
        L2e:
            return r0
    }
}
