package com.kwad.sdk.i;

public final class a {
    private static java.util.List<java.lang.String> aCP;
    private static volatile boolean aCQ;


    public static class a extends com.kwad.sdk.core.response.a.a {
        public long aCR;
        public long aCS;
        public long aCT;
        public java.lang.String aCU;
        public java.lang.String aCV;
        public java.lang.String aCW;
        public java.lang.String sdkVersion;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static class b {
        private java.lang.String aCU;
        private java.lang.String aCV;
        private java.lang.String aCW;
        private java.lang.String sdkVersion;

        private b() {
                r0 = this;
                r0.<init>()
                return
        }

        private static java.lang.String a(com.kwad.sdk.i.a.b r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "exit&"
                r0.<init>(r1)
                java.lang.String r1 = r3.aCU
                r0.append(r1)
                java.lang.String r1 = "&"
                r0.append(r1)
                java.lang.String r2 = r3.aCV
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = r3.aCW
                r0.append(r2)
                r0.append(r1)
                java.lang.String r3 = r3.sdkVersion
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                return r3
        }

        static java.lang.String b(com.kwad.sdk.i.a.b r0) {
                java.lang.String r0 = a(r0)
                return r0
        }

        static java.lang.String c(com.kwad.sdk.i.a.b r0) {
                java.lang.String r0 = r0.aCU
                return r0
        }

        private static java.lang.String c(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                java.lang.String r1 = "&"
                r0.append(r1)
                r0.append(r2)
                r0.append(r1)
                r0.append(r3)
                r0.append(r1)
                r0.append(r4)
                r0.append(r1)
                com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
                java.lang.String r1 = r1.getSDKVersion()
                r0.append(r1)
                java.lang.String r1 = r0.toString()
                return r1
        }

        static java.lang.String d(com.kwad.sdk.i.a.b r0) {
                java.lang.String r0 = r0.aCV
                return r0
        }

        static java.lang.String d(java.lang.String r0, java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                java.lang.String r0 = c(r0, r1, r2, r3)
                return r0
        }

        static java.lang.String e(com.kwad.sdk.i.a.b r0) {
                java.lang.String r0 = r0.aCW
                return r0
        }

        private static com.kwad.sdk.i.a.b eZ(java.lang.String r2) {
                java.lang.String r0 = "&"
                java.lang.String[] r2 = r2.split(r0)
                com.kwad.sdk.i.a$b r0 = new com.kwad.sdk.i.a$b
                r0.<init>()
                r1 = 1
                r1 = r2[r1]
                r0.aCU = r1
                r1 = 2
                r1 = r2[r1]
                r0.aCV = r1
                r1 = 3
                r1 = r2[r1]
                r0.aCW = r1
                r1 = 4
                r2 = r2[r1]
                r0.sdkVersion = r2
                return r0
        }

        static java.lang.String f(com.kwad.sdk.i.a.b r0) {
                java.lang.String r0 = r0.sdkVersion
                return r0
        }

        static com.kwad.sdk.i.a.b fa(java.lang.String r0) {
                com.kwad.sdk.i.a$b r0 = eZ(r0)
                return r0
        }
    }

    private static synchronized void Gc() {
            java.lang.Class<com.kwad.sdk.i.a> r0 = com.kwad.sdk.i.a.class
            monitor-enter(r0)
            java.util.List r1 = Ge()     // Catch: java.lang.Throwable -> L35
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> L35
            if (r2 != 0) goto L2d
            java.lang.String r2 = "DynamicRunMonitor"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "monitorInfoList:"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L35
            r3.append(r1)     // Catch: java.lang.Throwable -> L35
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.core.e.c.d(r2, r3)     // Catch: java.lang.Throwable -> L35
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L35
            r2.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r3 = "monitor_info_list"
            com.kwad.sdk.utils.t.putValue(r2, r3, r1)     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.core.report.KSLoggerReporter.r(r2)     // Catch: java.lang.Throwable -> L35
        L2d:
            r1 = 1
            com.kwad.sdk.i.a.aCQ = r1     // Catch: java.lang.Throwable -> L35
            Gd()     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)
            return
        L35:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static void Gd() {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.i.a.aCP
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Iterator r0 = r0.iterator()
        L9:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            eX(r1)
            goto L9
        L19:
            java.util.List<java.lang.String> r0 = com.kwad.sdk.i.a.aCP
            r0.clear()
            return
    }

    private static synchronized java.util.List<com.kwad.sdk.i.a.a> Ge() {
            java.lang.Class<com.kwad.sdk.i.a> r0 = com.kwad.sdk.i.a.class
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L96
            r1.<init>()     // Catch: java.lang.Throwable -> L96
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> L96
            java.lang.String r3 = "dynamic_monitor_info"
            java.util.Map r2 = com.kwad.sdk.utils.y.ai(r2, r3)     // Catch: java.lang.Throwable -> L96
            if (r2 != 0) goto L16
            monitor-exit(r0)
            return r1
        L16:
            java.util.Set r3 = r2.keySet()     // Catch: java.lang.Throwable -> L96
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L96
        L1e:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L96
            if (r4 == 0) goto L94
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = "enter"
            boolean r5 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> L96
            if (r5 == 0) goto L1e
            java.lang.Object r5 = r2.get(r4)     // Catch: java.lang.Throwable -> L96
            boolean r6 = r5 instanceof java.lang.Long     // Catch: java.lang.Throwable -> L96
            r7 = 0
            if (r6 == 0) goto L43
            java.lang.Long r5 = (java.lang.Long) r5     // Catch: java.lang.Throwable -> L96
            long r5 = r5.longValue()     // Catch: java.lang.Throwable -> L96
            goto L44
        L43:
            r5 = r7
        L44:
            com.kwad.sdk.i.a$b r9 = com.kwad.sdk.i.a.b.fa(r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r10 = com.kwad.sdk.i.a.b.b(r9)     // Catch: java.lang.Throwable -> L96
            java.lang.Object r11 = r2.get(r10)     // Catch: java.lang.Throwable -> L96
            boolean r12 = r11 instanceof java.lang.Long     // Catch: java.lang.Throwable -> L96
            if (r12 == 0) goto L5b
            java.lang.Long r11 = (java.lang.Long) r11     // Catch: java.lang.Throwable -> L96
            long r11 = r11.longValue()     // Catch: java.lang.Throwable -> L96
            goto L5c
        L5b:
            r11 = r7
        L5c:
            long r11 = r5 - r11
            int r13 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
            if (r13 <= 0) goto L63
            r7 = r11
        L63:
            com.kwad.sdk.i.a$a r13 = new com.kwad.sdk.i.a$a     // Catch: java.lang.Throwable -> L96
            r13.<init>()     // Catch: java.lang.Throwable -> L96
            r13.aCR = r5     // Catch: java.lang.Throwable -> L96
            r13.aCS = r7     // Catch: java.lang.Throwable -> L96
            r13.aCT = r11     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = com.kwad.sdk.i.a.b.c(r9)     // Catch: java.lang.Throwable -> L96
            r13.aCU = r5     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = com.kwad.sdk.i.a.b.d(r9)     // Catch: java.lang.Throwable -> L96
            r13.aCV = r5     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = com.kwad.sdk.i.a.b.e(r9)     // Catch: java.lang.Throwable -> L96
            r13.aCW = r5     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = com.kwad.sdk.i.a.b.f(r9)     // Catch: java.lang.Throwable -> L96
            r13.sdkVersion = r5     // Catch: java.lang.Throwable -> L96
            r1.add(r13)     // Catch: java.lang.Throwable -> L96
            java.lang.String r5 = "dynamic_monitor_info"
            com.kwad.sdk.utils.y.ar(r5, r4)     // Catch: java.lang.Throwable -> L96
            java.lang.String r4 = "dynamic_monitor_info"
            com.kwad.sdk.utils.y.ar(r4, r10)     // Catch: java.lang.Throwable -> L96
            goto L1e
        L94:
            monitor-exit(r0)
            return r1
        L96:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static void Gf() {
            Gc()
            return
    }

    public static void ah(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "other"
            e(r1, r2, r0)
            return
    }

    public static void ai(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "other"
            f(r1, r2, r0)
            return
    }

    private static synchronized void b(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.kwad.sdk.i.a> r0 = com.kwad.sdk.i.a.class
            monitor-enter(r0)
            java.lang.String r1 = com.kwad.sdk.i.a.b.d(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> L14
            boolean r2 = com.kwad.sdk.i.a.aCQ     // Catch: java.lang.Throwable -> L14
            if (r2 != 0) goto Lf
            eY(r1)     // Catch: java.lang.Throwable -> L14
            goto L18
        Lf:
            eX(r1)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r0)
            return
        L14:
            r1 = move-exception
            com.kwad.components.core.d.a.b(r1)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r0)
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "enter"
            b(r0, r1, r2, r3)
            return
    }

    private static synchronized void eX(java.lang.String r6) {
            java.lang.Class<com.kwad.sdk.i.a> r0 = com.kwad.sdk.i.a.class
            monitor-enter(r0)
            java.lang.String r1 = "dynamic_monitor_info"
            r2 = 0
            long r1 = com.kwad.sdk.utils.y.b(r1, r6, r2)     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "DynamicRunMonitor"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = "increaseLocalCount: "
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L30
            r4.append(r6)     // Catch: java.lang.Throwable -> L30
            java.lang.String r5 = "--lastCount:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L30
            r4.append(r1)     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L30
            com.kwad.sdk.core.e.c.d(r3, r4)     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "dynamic_monitor_info"
            r4 = 1
            long r1 = r1 + r4
            com.kwad.sdk.utils.y.a(r3, r6, r1)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)
            return
        L30:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    private static void eY(java.lang.String r2) {
            java.util.List<java.lang.String> r0 = com.kwad.sdk.i.a.aCP
            if (r0 != 0) goto Lb
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.sdk.i.a.aCP = r0
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "saveToCache: "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "DynamicRunMonitor"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.List<java.lang.String> r0 = com.kwad.sdk.i.a.aCP
            r0.add(r2)
            return
    }

    public static void f(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "exit"
            b(r0, r1, r2, r3)
            return
    }

    public static void report() {
            com.kwad.sdk.i.a$1 r0 = new com.kwad.sdk.i.a$1
            r0.<init>()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
            r2 = 1
            com.kwad.sdk.utils.g.schedule(r0, r2, r1)
            return
    }
}
