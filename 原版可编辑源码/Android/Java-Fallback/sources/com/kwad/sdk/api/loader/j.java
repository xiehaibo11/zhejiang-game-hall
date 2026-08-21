package com.kwad.sdk.api.loader;

public final class j {
    public static int aix;

    static class a {
        private java.lang.String aiA;
        private java.lang.String aiB;
        private long aiC;
        private int aiD;
        private java.lang.String aiE;
        private int aiy;
        private int aiz;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private com.kwad.sdk.api.loader.j.a U(long r1) {
                r0 = this;
                r0.aiC = r1
                return r0
        }

        static com.kwad.sdk.api.loader.j.a a(com.kwad.sdk.api.loader.j.a r0, int r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bQ(r1)
                return r0
        }

        static com.kwad.sdk.api.loader.j.a a(com.kwad.sdk.api.loader.j.a r0, long r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.U(r1)
                return r0
        }

        static com.kwad.sdk.api.loader.j.a a(com.kwad.sdk.api.loader.j.a r0, java.lang.String r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bX(r1)
                return r0
        }

        static org.json.JSONObject a(com.kwad.sdk.api.loader.j.a r0) {
                org.json.JSONObject r0 = r0.toJson()
                return r0
        }

        static com.kwad.sdk.api.loader.j.a b(com.kwad.sdk.api.loader.j.a r0, int r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bR(r1)
                return r0
        }

        static com.kwad.sdk.api.loader.j.a b(com.kwad.sdk.api.loader.j.a r0, java.lang.String r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bY(r1)
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bQ(int r1) {
                r0 = this;
                r0.aiy = r1
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bR(int r1) {
                r0 = this;
                r0.aiz = r1
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bS(int r1) {
                r0 = this;
                r0.aiD = r1
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bX(java.lang.String r1) {
                r0 = this;
                r0.aiA = r1
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bY(java.lang.String r1) {
                r0 = this;
                r0.aiB = r1
                return r0
        }

        private com.kwad.sdk.api.loader.j.a bZ(java.lang.String r1) {
                r0 = this;
                r0.aiE = r1
                return r0
        }

        static com.kwad.sdk.api.loader.j.a c(com.kwad.sdk.api.loader.j.a r0, int r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bS(r1)
                return r0
        }

        static com.kwad.sdk.api.loader.j.a c(com.kwad.sdk.api.loader.j.a r0, java.lang.String r1) {
                com.kwad.sdk.api.loader.j$a r0 = r0.bZ(r1)
                return r0
        }

        private org.json.JSONObject toJson() {
                r4 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r1 = "load_status"
                int r2 = r4.aiy     // Catch: java.lang.Exception -> L46
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "update_count"
                int r2 = r4.aiz     // Catch: java.lang.Exception -> L46
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "dynamic_version"
                java.lang.String r2 = r4.aiA     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "download_url"
                java.lang.String r2 = r4.aiB     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "duration_ms"
                long r2 = r4.aiC     // Catch: java.lang.Exception -> L46
                java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "error_code"
                int r2 = r4.aiD     // Catch: java.lang.Exception -> L46
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
                java.lang.String r1 = "error_msg"
                java.lang.String r2 = r4.aiE     // Catch: java.lang.Exception -> L46
                r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L46
            L46:
                return r0
        }

        public final java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "MonitorInfo{load_status="
                r0.<init>(r1)
                int r1 = r4.aiy
                r0.append(r1)
                java.lang.String r1 = ", update_count="
                r0.append(r1)
                int r1 = r4.aiz
                r0.append(r1)
                java.lang.String r1 = ", dynamic_version='"
                r0.append(r1)
                java.lang.String r1 = r4.aiA
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r2 = ", download_url='"
                r0.append(r2)
                java.lang.String r2 = r4.aiB
                r0.append(r2)
                r0.append(r1)
                java.lang.String r2 = ", duration_ms="
                r0.append(r2)
                long r2 = r4.aiC
                r0.append(r2)
                java.lang.String r2 = ", error_code="
                r0.append(r2)
                int r2 = r4.aiD
                r0.append(r2)
                java.lang.String r2 = ", error_msg='"
                r0.append(r2)
                java.lang.String r2 = r4.aiE
                r0.append(r2)
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            return
    }

    private static void a(int r3, com.kwad.sdk.api.loader.a.a r4, long r5, int r7, java.lang.String r8) {
            if (r4 != 0) goto L3
            return
        L3:
            com.kwad.sdk.api.loader.j$a r0 = new com.kwad.sdk.api.loader.j$a     // Catch: java.lang.Throwable -> L4b
            r1 = 0
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r0 = com.kwad.sdk.api.loader.j.a.a(r0, r3)     // Catch: java.lang.Throwable -> L4b
            int r2 = com.kwad.sdk.api.loader.j.aix     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r0 = com.kwad.sdk.api.loader.j.a.b(r0, r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = r4.sdkVersion     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r0 = com.kwad.sdk.api.loader.j.a.a(r0, r2)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r4 = r4.aic     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r4 = com.kwad.sdk.api.loader.j.a.b(r0, r4)     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r4 = com.kwad.sdk.api.loader.j.a.a(r4, r5)     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r4 = com.kwad.sdk.api.loader.j.a.c(r4, r7)     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.loader.j$a r4 = com.kwad.sdk.api.loader.j.a.c(r4, r8)     // Catch: java.lang.Throwable -> L4b
            org.json.JSONObject r4 = com.kwad.sdk.api.loader.j.a.a(r4)     // Catch: java.lang.Throwable -> L4b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = "status:"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L4b
            r5.append(r3)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "--jo:"
            r5.append(r3)     // Catch: java.lang.Throwable -> L4b
            r5.append(r4)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r3 = "reportDynamicUpdate"
            r5 = 1
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L4b
            r5[r1] = r4     // Catch: java.lang.Throwable -> L4b
            com.kwad.sdk.api.c.c(r3, r5)     // Catch: java.lang.Throwable -> L4b
        L4b:
            return
    }

    public static void a(com.kwad.sdk.api.loader.a.a r7) {
            int r0 = com.kwad.sdk.api.loader.j.aix
            int r0 = r0 + 1
            com.kwad.sdk.api.loader.j.aix = r0
            r1 = 1
            r3 = 0
            r5 = 0
            java.lang.String r6 = ""
            r2 = r7
            a(r1, r2, r3, r5, r6)
            return
    }

    public static void a(com.kwad.sdk.api.loader.a.a r6, int r7, java.lang.String r8) {
            r0 = 4
            r2 = 0
            r1 = r6
            r4 = r7
            r5 = r8
            a(r0, r1, r2, r4, r5)
            return
    }

    public static void a(com.kwad.sdk.api.loader.a.a r6, long r7) {
            r0 = 2
            r4 = 0
            java.lang.String r5 = ""
            r1 = r6
            r2 = r7
            a(r0, r1, r2, r4, r5)
            return
    }

    public static void a(com.kwad.sdk.api.loader.a.a r6, long r7, java.lang.String r9) {
            r0 = 3
            r4 = 0
            r1 = r6
            r2 = r7
            r5 = r9
            a(r0, r1, r2, r4, r5)
            return
    }

    public static void b(com.kwad.sdk.api.loader.a.a r6) {
            r0 = 5
            r2 = 0
            r4 = 0
            java.lang.String r5 = ""
            r1 = r6
            a(r0, r1, r2, r4, r5)
            return
    }

    public static void b(com.kwad.sdk.api.loader.a.a r6, int r7, java.lang.String r8) {
            r0 = 7
            r2 = 0
            r1 = r6
            r4 = r7
            r5 = r8
            a(r0, r1, r2, r4, r5)
            return
    }

    public static void b(com.kwad.sdk.api.loader.a.a r6, long r7) {
            r0 = 6
            r4 = 0
            java.lang.String r5 = ""
            r1 = r6
            r2 = r7
            a(r0, r1, r2, r4, r5)
            return
    }
}
