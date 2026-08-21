package com.kwad.sdk.collector.model.jni;

public class RulesTargetNative extends com.kwad.sdk.collector.model.jni.NativeObject implements com.kwad.sdk.collector.model.d {
    private static final long serialVersionUID = -4726982809581153390L;

    public RulesTargetNative() {
            r2 = this;
            r2.<init>()
            long r0 = com.kwad.sdk.collector.AppStatusNative.nativeCreateRulesTarget()
            r2.mPtr = r0
            return
    }

    public RulesTargetNative(long r1) {
            r0 = this;
            r0.<init>()
            r0.mPtr = r1
            return
    }

    @Override
    public void destroy() {
            r4 = this;
            long r0 = r4.mPtr
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            long r0 = r4.mPtr
            com.kwad.sdk.collector.AppStatusNative.nativeDeleteRulesTarget(r0)
            r4.mPtr = r2
        Lf:
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "packageName"
            java.lang.String r0 = r5.optString(r0)     // Catch: java.lang.Exception -> L2a
            com.kwad.sdk.collector.AppStatusNative.rulesTargetSetPackageName(r4, r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = "paths"
            org.json.JSONArray r5 = r5.optJSONArray(r0)     // Catch: java.lang.Exception -> L2a
            if (r5 == 0) goto L29
            int r0 = r5.length()     // Catch: java.lang.Exception -> L2a
            java.lang.String[] r1 = new java.lang.String[r0]     // Catch: java.lang.Exception -> L2a
            r2 = 0
        L1b:
            if (r2 >= r0) goto L26
            java.lang.String r3 = r5.getString(r2)     // Catch: java.lang.Exception -> L2a
            r1[r2] = r3     // Catch: java.lang.Exception -> L2a
            int r2 = r2 + 1
            goto L1b
        L26:
            com.kwad.sdk.collector.AppStatusNative.rulesTargetSetPaths(r4, r1)     // Catch: java.lang.Exception -> L2a
        L29:
            return
        L2a:
            r5 = move-exception
            com.kwad.sdk.service.c.gatherException(r5)
            com.kwad.sdk.core.e.c.printStackTrace(r5)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.rulesTargetGetPackageName(r3)
            java.lang.String r2 = "packageName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String[] r1 = com.kwad.sdk.collector.AppStatusNative.rulesTargetGetPaths(r3)
            java.util.List r1 = java.util.Arrays.asList(r1)
            java.lang.String r2 = "paths"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }
}
