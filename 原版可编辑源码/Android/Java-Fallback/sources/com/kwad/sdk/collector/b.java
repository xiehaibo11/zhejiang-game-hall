package com.kwad.sdk.collector;

public final class b {

    public static class a implements com.kwad.sdk.collector.a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final java.util.List<com.kwad.sdk.collector.model.b> a(com.kwad.sdk.collector.AppStatusRules.Strategy r9) {
                r8 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                com.kwad.sdk.collector.model.c.a(r9, r1)
                java.io.File r9 = new java.io.File
                java.io.File r2 = android.os.Environment.getExternalStorageDirectory()
                java.lang.String r3 = "/Android/data/"
                r9.<init>(r2, r3)
                int r2 = r1.size()
                long[] r3 = new long[r2]
                r4 = 0
                r5 = r4
            L20:
                if (r5 >= r2) goto L38
                java.lang.Object r6 = r1.get(r5)
                com.kwad.sdk.collector.model.a r6 = (com.kwad.sdk.collector.model.a) r6
                boolean r7 = r6 instanceof com.kwad.sdk.collector.model.jni.AnalyseTaskNative
                if (r7 != 0) goto L2d
                return r0
            L2d:
                com.kwad.sdk.collector.model.jni.AnalyseTaskNative r6 = (com.kwad.sdk.collector.model.jni.AnalyseTaskNative) r6
                long r6 = r6.getNativePtr()
                r3[r5] = r6
                int r5 = r5 + 1
                goto L20
            L38:
                boolean r1 = com.kwad.sdk.collector.d.yG()
                java.lang.String r2 = "AppStatusAnalyserNative"
                if (r1 == 0) goto L7e
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
                r1.<init>()     // Catch: java.lang.Throwable -> L7a
                java.lang.String r9 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L7a
                r1.append(r9)     // Catch: java.lang.Throwable -> L7a
                java.lang.String r9 = "/"
                r1.append(r9)     // Catch: java.lang.Throwable -> L7a
                java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L7a
                long[] r9 = com.kwad.sdk.collector.AppStatusNative.analysis(r3, r9)     // Catch: java.lang.Throwable -> L7a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
                java.lang.String r3 = "analysisByFile: runningInfoPtrs: "
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L7a
                r1.append(r9)     // Catch: java.lang.Throwable -> L7a
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L7a
                com.kwad.sdk.core.e.c.d(r2, r1)     // Catch: java.lang.Throwable -> L7a
            L6a:
                int r1 = r9.length     // Catch: java.lang.Throwable -> L7a
                if (r4 >= r1) goto L7e
                r5 = r9[r4]     // Catch: java.lang.Throwable -> L7a
                com.kwad.sdk.collector.model.jni.AppRunningInfoNative r1 = new com.kwad.sdk.collector.model.jni.AppRunningInfoNative     // Catch: java.lang.Throwable -> L7a
                r1.<init>(r5)     // Catch: java.lang.Throwable -> L7a
                r0.add(r1)     // Catch: java.lang.Throwable -> L7a
                int r4 = r4 + 1
                goto L6a
            L7a:
                r9 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r9)
            L7e:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                java.lang.String r1 = "analysisByFile: info size: "
                r9.<init>(r1)
                int r1 = r0.size()
                r9.append(r1)
                java.lang.String r9 = r9.toString()
                com.kwad.sdk.core.e.c.d(r2, r9)
                return r0
        }

        @Override
        public final java.util.List<com.kwad.sdk.collector.model.e> a(java.util.List<com.kwad.sdk.collector.model.d> r7, long r8, java.lang.String r10) {
                r6 = this;
                int r0 = r7.size()
                int r1 = r7.size()
                long[] r1 = new long[r1]
                r2 = 0
                r3 = r2
            Lc:
                if (r3 >= r0) goto L23
                java.lang.Object r4 = r7.get(r3)
                com.kwad.sdk.collector.model.d r4 = (com.kwad.sdk.collector.model.d) r4
                boolean r5 = r4 instanceof com.kwad.sdk.collector.model.jni.RulesTargetNative
                if (r5 == 0) goto L20
                com.kwad.sdk.collector.model.jni.RulesTargetNative r4 = (com.kwad.sdk.collector.model.jni.RulesTargetNative) r4
                long r4 = r4.getNativePtr()
                r1[r3] = r4
            L20:
                int r3 = r3 + 1
                goto Lc
            L23:
                java.util.ArrayList r7 = new java.util.ArrayList
                r7.<init>()
                boolean r0 = com.kwad.sdk.collector.d.yG()
                if (r0 == 0) goto L46
                long[] r8 = com.kwad.sdk.collector.AppStatusNative.nativeGetUploadEntry(r1, r8, r10)     // Catch: java.lang.Throwable -> L42
                int r9 = r8.length     // Catch: java.lang.Throwable -> L42
            L33:
                if (r2 >= r9) goto L46
                r0 = r8[r2]     // Catch: java.lang.Throwable -> L42
                com.kwad.sdk.collector.model.jni.UploadEntryNative r10 = new com.kwad.sdk.collector.model.jni.UploadEntryNative     // Catch: java.lang.Throwable -> L42
                r10.<init>(r0)     // Catch: java.lang.Throwable -> L42
                r7.add(r10)     // Catch: java.lang.Throwable -> L42
                int r2 = r2 + 1
                goto L33
            L42:
                r8 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r8)
            L46:
                return r7
        }
    }

    public static com.kwad.sdk.collector.a yE() {
            com.kwad.sdk.collector.b$a r0 = new com.kwad.sdk.collector.b$a
            r0.<init>()
            return r0
    }
}
