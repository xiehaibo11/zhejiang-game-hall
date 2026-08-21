package com.kwad.sdk.core.response.a;

public class a implements com.kwad.sdk.core.b {
    private static final java.util.List<java.lang.String> WHITE_LIST = null;
    private java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> mHolders;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.core.response.a.a.WHITE_LIST = r0
            java.lang.String r1 = "com.kwad.sdk.core.report.BaseReportAction"
            r0.add(r1)
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a> getHolder(java.lang.Class<? extends com.kwad.sdk.core.response.a.a> r3) {
            r2 = this;
            java.lang.Class<com.kwad.sdk.core.response.a.a> r0 = com.kwad.sdk.core.response.a.a.class
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L1a
            java.util.List<java.lang.String> r0 = com.kwad.sdk.core.response.a.a.WHITE_LIST
            java.lang.String r1 = r3.getName()
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L15
            goto L1a
        L15:
            com.kwad.sdk.core.d r3 = com.kwad.sdk.core.b.a.ex.getHolder(r3)
            return r3
        L1a:
            r3 = 0
            return r3
    }

    private java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> getHolders() {
            r4 = this;
            java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> r0 = r4.mHolders
            if (r0 != 0) goto L2a
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.mHolders = r0
            java.lang.Class r0 = r4.getClass()
        Lf:
            if (r0 == 0) goto L2a
            java.lang.Class<com.kwad.sdk.core.response.a.a> r1 = com.kwad.sdk.core.response.a.a.class
            boolean r1 = r1.isAssignableFrom(r0)
            if (r1 == 0) goto L2a
            com.kwad.sdk.core.d r1 = r4.getHolder(r0)
            if (r1 == 0) goto L25
            java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> r2 = r4.mHolders
            r3 = 0
            r2.add(r3, r1)
        L25:
            java.lang.Class r0 = r0.getSuperclass()
            goto Lf
        L2a:
            java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> r0 = r4.mHolders
            if (r0 == 0) goto L34
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L4e
        L34:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "no holders for class: "
            r1.<init>(r2)
            java.lang.Class r2 = r4.getClass()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        L4e:
            java.util.List<com.kwad.sdk.core.d<com.kwad.sdk.core.response.a.a>> r0 = r4.mHolders
            return r0
    }

    public void afterParseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    public void afterToJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    public void beforeToJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r4) {
            r3 = this;
            java.util.List r0 = r3.getHolders()
            int r1 = r0.size()
            int r1 = r1 + (-1)
        La:
            if (r1 < 0) goto L18
            java.lang.Object r2 = r0.get(r1)
            com.kwad.sdk.core.d r2 = (com.kwad.sdk.core.d) r2
            r2.a(r3, r4)
            int r1 = r1 + (-1)
            goto La
        L18:
            r3.afterParseJson(r4)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            java.util.List r0 = r4.getHolders()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r4.beforeToJson(r1)
            if (r0 != 0) goto Lf
            return r1
        Lf:
            int r2 = r0.size()
            int r2 = r2 + (-1)
        L15:
            if (r2 < 0) goto L25
            java.lang.Object r3 = r0.get(r2)
            com.kwad.sdk.core.d r3 = (com.kwad.sdk.core.d) r3
            if (r3 == 0) goto L22
            r3.b(r4, r1)
        L22:
            int r2 = r2 + (-1)
            goto L15
        L25:
            r4.afterToJson(r1)
            return r1
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = super.toString()
            return r0
    }
}
