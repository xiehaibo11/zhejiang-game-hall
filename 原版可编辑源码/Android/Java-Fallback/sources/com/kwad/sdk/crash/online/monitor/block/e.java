package com.kwad.sdk.crash.online.monitor.block;

public final class e {


    private static boolean BQ() {
            int r0 = Fa()
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            r2 = 0
            if (r1 != 0) goto L14
            return r2
        L14:
            com.kwad.sdk.crash.online.monitor.block.report.a r1 = com.kwad.sdk.crash.online.monitor.block.report.a.bw(r1)
            long r3 = r1.size()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r5 = "size:"
            r1.<init>(r5)
            r1.append(r3)
            java.lang.String r5 = " limit:"
            r1.append(r5)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r5 = "perfMonitor.Reporter"
            com.kwad.sdk.core.e.c.d(r5, r1)
            long r0 = (long) r0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L3e
            r0 = 1
            return r0
        L3e:
            return r2
    }

    private static int Fa() {
            com.kwad.sdk.crash.online.monitor.a.a r0 = com.kwad.sdk.crash.online.monitor.block.d.EY()
            if (r0 == 0) goto L9
            int r0 = r0.aBa
            goto Lb
        L9:
            r0 = 20
        Lb:
            return r0
    }

    static boolean Fb() {
            boolean r0 = BQ()
            return r0
    }

    public static void a(java.lang.String r0, long r1, long r3, java.lang.String r5, java.lang.String r6, boolean r7) {
            java.lang.String r0 = b(r0, r1, r3, r5, r6)     // Catch: java.lang.Throwable -> L8
            r1 = 0
            h(r0, r1)     // Catch: java.lang.Throwable -> L8
        L8:
            return
    }

    private static java.lang.String b(java.lang.String r9, long r10, long r12, java.lang.String r14, java.lang.String r15) {
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            java.lang.String r9 = com.kwad.sdk.crash.online.monitor.block.b.eC(r9)     // Catch: java.lang.Exception -> L21
            java.lang.String r9 = eH(r9)     // Catch: java.lang.Exception -> L21
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L18
            return r1
        L18:
            r0 = 0
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r0 != 0) goto L2b
            r12 = 2000(0x7d0, double:9.88E-321)
            goto L2b
        L21:
            r0 = move-exception
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            java.lang.String r1 = "perfMonitor.Reporter"
            com.kwad.sdk.core.e.c.w(r1, r0)
        L2b:
            r2 = r9
            r5 = r12
            r3 = r10
            r7 = r14
            r8 = r15
            com.kwad.sdk.crash.online.monitor.block.BlockEvent r9 = c(r2, r3, r5, r7, r8)
            org.json.JSONObject r9 = r9.toJson()
            java.lang.String r9 = r9.toString()
            return r9
    }

    private static com.kwad.sdk.crash.online.monitor.block.BlockEvent c(java.lang.String r3, long r4, long r6, java.lang.String r8, java.lang.String r9) {
            com.kwad.sdk.crash.online.monitor.block.BlockEvent r0 = new com.kwad.sdk.crash.online.monitor.block.BlockEvent
            r0.<init>()
            r0.blockDuration = r6
            r0.currentActivity = r8
            r0.processName = r9
            com.kwad.sdk.crash.online.monitor.block.BlockEvent$a r8 = new com.kwad.sdk.crash.online.monitor.block.BlockEvent$a
            r8.<init>()
            r8.aAE = r3
            r1 = 0
            int r3 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r3 != 0) goto L1c
            long r4 = java.lang.System.currentTimeMillis()
        L1c:
            r8.aAC = r4
            long r3 = r0.blockLoopInterval
            long r6 = r6 / r3
            int r3 = (int) r6
            r8.repeatCount = r3
            java.util.List<com.kwad.sdk.crash.online.monitor.block.BlockEvent$a> r3 = r0.stackTraceSample
            r3.add(r8)
            return r0
    }

    private static java.lang.String eE(java.lang.String r7) {
            java.lang.String r7 = com.kwad.sdk.crash.online.monitor.block.b.eC(r7)
            java.lang.String r0 = eF(r7)
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 != 0) goto L23
            r1 = 0
            r3 = 2000(0x7d0, double:9.88E-321)
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            com.kwad.sdk.crash.online.monitor.block.BlockEvent r7 = c(r0, r1, r3, r5, r6)
            org.json.JSONObject r7 = r7.toJson()
            java.lang.String r7 = r7.toString()
            return r7
        L23:
            java.lang.String r7 = ""
            return r7
    }

    private static java.lang.String eF(java.lang.String r4) {
            java.lang.String r0 = "\n"
            java.lang.String r1 = "at "
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r3 = ""
            if (r2 == 0) goto Ld
            return r3
        Ld:
            boolean r2 = r4.contains(r1)     // Catch: java.lang.Exception -> L5b
            if (r2 == 0) goto L1b
            int r2 = r4.indexOf(r1)     // Catch: java.lang.Exception -> L5b
            java.lang.String r4 = r4.substring(r2)     // Catch: java.lang.Exception -> L5b
        L1b:
            java.lang.String r4 = r4.replaceAll(r1, r3)     // Catch: java.lang.Exception -> L5b
            java.lang.String r4 = eG(r4)     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "\\)"
            java.lang.String r2 = "\\)\n"
            java.lang.String r4 = r4.replaceAll(r1, r2)     // Catch: java.lang.Exception -> L5b
            boolean r1 = r4.contains(r0)     // Catch: java.lang.Exception -> L5b
            java.lang.String r2 = "\n\tat "
            if (r1 == 0) goto L37
            java.lang.String r4 = r4.replaceAll(r0, r2)     // Catch: java.lang.Exception -> L5b
        L37:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5b
            r1.<init>()     // Catch: java.lang.Exception -> L5b
            r1.append(r4)     // Catch: java.lang.Exception -> L5b
            java.lang.String r3 = "_"
            r1.append(r3)     // Catch: java.lang.Exception -> L5b
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "\n\tat _"
            java.lang.String r4 = r4.replaceAll(r1, r0)     // Catch: java.lang.Exception -> L5b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L5b
            r0.<init>(r2)     // Catch: java.lang.Exception -> L5b
            r0.append(r4)     // Catch: java.lang.Exception -> L5b
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L5b
            return r4
        L5b:
            r0 = move-exception
            java.lang.String r0 = android.util.Log.getStackTraceString(r0)
            java.lang.String r1 = "perfMonitor.Reporter"
            android.util.Log.e(r1, r0)
            return r4
    }

    private static java.lang.String eG(java.lang.String r2) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L12
            java.lang.String r1 = "\\s*|\t|\r|\n"
            java.util.regex.Pattern r1 = java.util.regex.Pattern.compile(r1)
            java.util.regex.Matcher r2 = r1.matcher(r2)
            java.lang.String r0 = r2.replaceAll(r0)
        L12:
            return r0
    }

    private static java.lang.String eH(java.lang.String r6) {
            java.lang.String r0 = "perfMonitor.Reporter"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r2 = ""
            if (r1 == 0) goto Lb
            return r2
        Lb:
            java.lang.String r1 = " \n"
            boolean r1 = r6.startsWith(r1)     // Catch: java.lang.Exception -> L87
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L87
            java.lang.String r4 = "oldVersion:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L87
            r3.append(r1)     // Catch: java.lang.Exception -> L87
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L87
            com.kwad.sdk.core.e.c.d(r0, r3)     // Catch: java.lang.Exception -> L87
            java.lang.String r3 = "at "
            java.lang.String r4 = "\n"
            if (r1 == 0) goto L4d
            boolean r1 = r6.contains(r3)     // Catch: java.lang.Exception -> L87
            if (r1 == 0) goto L36
            int r1 = r6.indexOf(r3)     // Catch: java.lang.Exception -> L87
            java.lang.String r6 = r6.substring(r1)     // Catch: java.lang.Exception -> L87
        L36:
            java.lang.String r1 = ":"
            java.lang.String r5 = "\\."
            java.lang.String r6 = r6.replaceAll(r1, r5)     // Catch: java.lang.Exception -> L87
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L87
            r1.<init>()     // Catch: java.lang.Exception -> L87
            r1.append(r6)     // Catch: java.lang.Exception -> L87
            r1.append(r4)     // Catch: java.lang.Exception -> L87
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L87
        L4d:
            java.lang.String r6 = r6.replaceAll(r3, r2)     // Catch: java.lang.Exception -> L87
            java.lang.String r1 = " "
            java.lang.String r6 = r6.replaceAll(r1, r2)     // Catch: java.lang.Exception -> L87
            boolean r1 = r6.contains(r4)     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = "\n\tat "
            if (r1 == 0) goto L63
            java.lang.String r6 = r6.replaceAll(r4, r2)     // Catch: java.lang.Exception -> L87
        L63:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L87
            r1.<init>()     // Catch: java.lang.Exception -> L87
            r1.append(r6)     // Catch: java.lang.Exception -> L87
            java.lang.String r3 = "_"
            r1.append(r3)     // Catch: java.lang.Exception -> L87
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L87
            java.lang.String r1 = "\n\tat _"
            java.lang.String r6 = r6.replaceAll(r1, r4)     // Catch: java.lang.Exception -> L87
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L87
            r1.<init>(r2)     // Catch: java.lang.Exception -> L87
            r1.append(r6)     // Catch: java.lang.Exception -> L87
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L87
            return r6
        L87:
            r1 = move-exception
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            com.kwad.sdk.core.e.c.w(r0, r1)
            return r6
    }

    public static void eI(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "reportPrinterName:"
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "perfMonitor.Reporter"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = com.kwad.sdk.crash.online.monitor.block.d.EZ()
            if (r0 == 0) goto L34
            com.kwad.sdk.crash.online.monitor.block.c r0 = new com.kwad.sdk.crash.online.monitor.block.c
            r0.<init>()
            r0.aAL = r2
            boolean r2 = com.kwad.sdk.crash.online.monitor.block.a.EX()
            r0.aAN = r2
            org.json.JSONObject r2 = r0.toJson()
            com.kwad.sdk.core.report.KSLoggerReporter.x(r2)
        L34:
            return
    }

    public static void eJ(java.lang.String r2) {
            com.kwad.sdk.crash.online.monitor.block.c r0 = new com.kwad.sdk.crash.online.monitor.block.c     // Catch: java.lang.Exception -> L14
            r0.<init>()     // Catch: java.lang.Exception -> L14
            r0.errorMsg = r2     // Catch: java.lang.Exception -> L14
            boolean r1 = com.kwad.sdk.crash.online.monitor.block.a.EX()     // Catch: java.lang.Exception -> L14
            r0.aAN = r1     // Catch: java.lang.Exception -> L14
            org.json.JSONObject r0 = r0.toJson()     // Catch: java.lang.Exception -> L14
            com.kwad.sdk.core.report.KSLoggerReporter.x(r0)     // Catch: java.lang.Exception -> L14
        L14:
            java.lang.String r0 = "perfMonitor.Reporter"
            com.kwad.sdk.core.e.c.w(r0, r2)
            return
    }

    public static void g(java.lang.String r0, boolean r1) {
            java.lang.String r0 = eE(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Le
            r1 = 0
            h(r0, r1)
        Le:
            return
    }

    private static void h(java.lang.String r1, boolean r2) {
            com.kwad.sdk.crash.online.monitor.block.e$1 r0 = new com.kwad.sdk.crash.online.monitor.block.e$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.g.execute(r0)
            return
    }

    static int xS() {
            int r0 = Fa()
            return r0
    }
}
