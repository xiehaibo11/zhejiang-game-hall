package com.kwad.sdk.collector.model;

public final class c {
    private static com.kwad.sdk.collector.model.jni.AppRunningInfoNative a(java.lang.String r3, com.kwad.sdk.collector.AppStatusRules.Strategy r4) {
            if (r4 != 0) goto L5
            r0 = -1
            goto L9
        L5:
            long r0 = r4.getHistoryGranularity()
        L9:
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r4 = new com.kwad.sdk.collector.model.jni.AppRunningInfoNative     // Catch: java.lang.Throwable -> L11
            java.lang.String r2 = ""
            r4.<init>(r0, r2, r3)     // Catch: java.lang.Throwable -> L11
            return r4
        L11:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            r3 = 0
            return r3
    }

    public static java.lang.String a(com.kwad.sdk.collector.model.b r1) {
            boolean r0 = r1 instanceof com.kwad.sdk.collector.model.jni.AppRunningInfoNative
            if (r0 == 0) goto Lb
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r1 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r1
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r1)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static java.lang.String a(com.kwad.sdk.collector.model.d r1) {
            boolean r0 = r1 instanceof com.kwad.sdk.collector.model.jni.RulesTargetNative
            if (r0 == 0) goto Lb
            com.kwad.sdk.collector.model.jni.RulesTargetNative r1 = (com.kwad.sdk.collector.model.jni.RulesTargetNative) r1
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.rulesTargetGetPackageName(r1)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static void a(com.kwad.sdk.collector.AppStatusRules.Strategy r6, java.util.List<com.kwad.sdk.collector.model.a> r7) {
            java.util.ArrayList r0 = r6.getTarget()
            if (r0 == 0) goto L4d
            int r1 = r0.size()
            if (r1 != 0) goto Ld
            goto L4d
        Ld:
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4d
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.collector.model.d r1 = (com.kwad.sdk.collector.model.d) r1
            java.util.List r2 = b(r1)
            if (r2 == 0) goto L11
            java.util.List r2 = b(r1)
            int r2 = r2.size()
            if (r2 == 0) goto L11
            java.lang.String r2 = a(r1)
            java.util.HashSet r3 = new java.util.HashSet
            java.util.List r1 = b(r1)
            r3.<init>(r1)
            long r4 = r6.getStartTimeWithMS()
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r1 = a(r2, r6)
            if (r1 == 0) goto L11
            com.kwad.sdk.collector.model.jni.AnalyseTaskNative r2 = new com.kwad.sdk.collector.model.jni.AnalyseTaskNative
            r2.<init>(r1, r3, r4)
            r7.add(r2)
            goto L11
        L4d:
            return
    }

    public static void a(com.kwad.sdk.collector.model.b r0, long r1) {
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r0
            com.kwad.sdk.collector.AppStatusNative.appRunningInfoSetLastRunningTime(r0, r1)
            return
    }

    public static java.lang.String b(com.kwad.sdk.collector.model.b r1) {
            boolean r0 = r1 instanceof com.kwad.sdk.collector.model.jni.AppRunningInfoNative
            if (r0 == 0) goto Lb
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r1 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r1
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r1)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    private static java.util.List<java.lang.String> b(com.kwad.sdk.collector.model.d r1) {
            boolean r0 = r1 instanceof com.kwad.sdk.collector.model.jni.RulesTargetNative
            if (r0 == 0) goto Lf
            com.kwad.sdk.collector.model.jni.RulesTargetNative r1 = (com.kwad.sdk.collector.model.jni.RulesTargetNative) r1
            java.lang.String[] r1 = com.kwad.sdk.collector.AppStatusNative.rulesTargetGetPaths(r1)
            java.util.List r1 = java.util.Arrays.asList(r1)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static long c(com.kwad.sdk.collector.model.b r2) {
            boolean r0 = r2 instanceof com.kwad.sdk.collector.model.jni.AppRunningInfoNative
            if (r0 == 0) goto Lb
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r2 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r2
            long r0 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r2)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.util.ArrayList<com.kwad.sdk.collector.model.d> d(org.json.JSONArray r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.util.ArrayList r0 = e(r0)
            return r0
    }

    private static java.util.ArrayList<com.kwad.sdk.collector.model.d> e(org.json.JSONArray r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r5.length()
            r2 = 0
        La:
            if (r2 >= r1) goto L21
            r3 = 0
            org.json.JSONObject r3 = r5.getJSONObject(r2)     // Catch: org.json.JSONException -> L11
        L11:
            if (r3 == 0) goto L1e
            com.kwad.sdk.collector.model.jni.RulesTargetNative r4 = new com.kwad.sdk.collector.model.jni.RulesTargetNative
            r4.<init>()
            r4.parseJson(r3)
            r0.add(r4)
        L1e:
            int r2 = r2 + 1
            goto La
        L21:
            return r0
    }
}
