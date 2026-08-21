package com.kwad.sdk.core.e;

public final class c {
    public static boolean aoC = true;
    private static boolean aoD;
    private static final com.kwad.sdk.core.e.a.b aoE = null;
    private static final java.util.List<com.kwad.sdk.core.e.a.b> aoF = null;
    private static com.kwad.sdk.core.e.a.a aoG;












    interface a {
        void b(com.kwad.sdk.core.e.a.b r1);
    }

    static {
            java.lang.Boolean r0 = com.kwad.sdk.core.e.a.ml
            boolean r0 = r0.booleanValue()
            com.kwad.sdk.core.e.c.aoD = r0
            com.kwad.sdk.core.e.b r0 = new com.kwad.sdk.core.e.b
            r0.<init>()
            com.kwad.sdk.core.e.c.aoE = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.sdk.core.e.c.aoF = r0
            return
    }

    private static java.lang.String Bb() {
            java.lang.String r0 = "KSAdSDK"
            return r0
    }

    private static java.lang.String Bc() {
            boolean r0 = com.kwad.sdk.core.e.c.aoD
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            return r0
        L7:
            r0 = -1
            java.lang.Throwable r1 = new java.lang.Throwable
            r1.<init>()
            java.lang.StackTraceElement[] r1 = r1.getStackTrace()
            int r2 = r1.length
            r3 = 3
            if (r2 <= r3) goto L22
            r0 = r1[r3]
            java.lang.String r0 = r0.getFileName()
            r1 = r1[r3]
            int r1 = r1.getLineNumber()
            goto L27
        L22:
            java.lang.String r1 = "unknown"
            r4 = r1
            r1 = r0
            r0 = r4
        L27:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "("
            r2.<init>(r3)
            r2.append(r0)
            r0 = 58
            r2.append(r0)
            r2.append(r1)
            r0 = 41
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    private static java.lang.String J(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "["
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = "]: "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = " "
            r0.append(r2)
            java.lang.String r2 = Bc()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static void K(java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.core.e.c$1 r0 = new com.kwad.sdk.core.e.c$1
            r0.<init>(r1, r2)
            a(r0)
            return
    }

    private static void L(java.lang.String r2, java.lang.String r3) {
            int r0 = r3.length()
            r1 = 4000(0xfa0, float:5.605E-42)
            if (r0 <= r1) goto L18
            r0 = 0
            java.lang.String r0 = r3.substring(r0, r1)
            K(r2, r0)
            java.lang.String r3 = r3.substring(r1)
            L(r2, r3)
            return
        L18:
            K(r2, r3)
            return
    }

    public static void M(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = J(r0, r1)
            com.kwad.sdk.core.e.c$7 r1 = new com.kwad.sdk.core.e.c$7
            r1.<init>(r0)
            a(r1)
            return
    }

    public static void a(com.kwad.sdk.core.e.a.b r1) {
            java.util.List<com.kwad.sdk.core.e.a.b> r0 = com.kwad.sdk.core.e.c.aoF
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto Ld
            java.util.List<com.kwad.sdk.core.e.a.b> r0 = com.kwad.sdk.core.e.c.aoF
            r0.add(r1)
        Ld:
            return
    }

    private static void a(com.kwad.sdk.core.e.c.a r2) {
            java.util.List<com.kwad.sdk.core.e.a.b> r0 = com.kwad.sdk.core.e.c.aoF
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.e.a.b r1 = (com.kwad.sdk.core.e.a.b) r1
            if (r1 == 0) goto L6
            r2.b(r1)     // Catch: java.lang.Exception -> L6
            goto L6
        L18:
            return
    }

    public static void a(boolean r1, com.kwad.sdk.core.e.a.a r2) {
            com.kwad.sdk.core.e.c.aoC = r1
            java.util.List<com.kwad.sdk.core.e.a.b> r1 = com.kwad.sdk.core.e.c.aoF
            r1.clear()
            java.util.List<com.kwad.sdk.core.e.a.b> r1 = com.kwad.sdk.core.e.c.aoF
            com.kwad.sdk.core.e.a.b r0 = com.kwad.sdk.core.e.c.aoE
            r1.add(r0)
            com.kwad.sdk.core.e.c.aoG = r2
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = Bb()
            return r0
    }

    public static void cW(java.lang.String r1) {
            com.kwad.sdk.core.e.c$6 r0 = new com.kwad.sdk.core.e.c$6
            r0.<init>(r1)
            a(r0)
            return
    }

    public static void d(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = Bb()
            java.lang.String r1 = J(r1, r2)
            L(r0, r1)
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = J(r2, r3)
            com.kwad.sdk.core.e.c$11 r1 = new com.kwad.sdk.core.e.c$11
            r1.<init>(r0)
            a(r1)
            com.kwad.sdk.core.e.a.a r0 = com.kwad.sdk.core.e.c.aoG
            if (r0 == 0) goto L13
            r0.B(r3, r2)
        L13:
            return
    }

    public static void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            java.lang.String r3 = android.util.Log.getStackTraceString(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r2 = 10
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.lang.String r2 = J(r1, r2)
            com.kwad.sdk.core.e.c$2 r0 = new com.kwad.sdk.core.e.c$2
            r0.<init>(r2)
            a(r0)
            com.kwad.sdk.core.e.a.a r2 = com.kwad.sdk.core.e.c.aoG
            if (r2 == 0) goto L2b
            r2.B(r3, r1)
        L2b:
            return
    }

    public static void i(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = J(r0, r1)
            com.kwad.sdk.core.e.c$8 r1 = new com.kwad.sdk.core.e.c$8
            r1.<init>(r0)
            a(r1)
            return
    }

    public static void printStackTrace(java.lang.Throwable r1) {
            if (r1 == 0) goto La
            com.kwad.sdk.core.e.c$3 r0 = new com.kwad.sdk.core.e.c$3
            r0.<init>(r1)
            a(r0)
        La:
            java.lang.Boolean r0 = com.kwad.sdk.core.e.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 != 0) goto L13
            return
        L13:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r1)
            throw r0
    }

    public static void printStackTraceOnly(java.lang.Throwable r1) {
            if (r1 == 0) goto La
            com.kwad.sdk.core.e.c$4 r0 = new com.kwad.sdk.core.e.c$4
            r0.<init>(r1)
            a(r0)
        La:
            return
    }

    public static void v(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = J(r0, r1)
            com.kwad.sdk.core.e.c$5 r1 = new com.kwad.sdk.core.e.c$5
            r1.<init>(r0)
            a(r1)
            return
    }

    public static void w(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = J(r0, r1)
            com.kwad.sdk.core.e.c$9 r1 = new com.kwad.sdk.core.e.c$9
            r1.<init>(r0)
            a(r1)
            return
    }

    public static void w(java.lang.String r0, java.lang.Throwable r1) {
            java.lang.String r1 = android.util.Log.getStackTraceString(r1)
            java.lang.String r0 = J(r0, r1)
            com.kwad.sdk.core.e.c$10 r1 = new com.kwad.sdk.core.e.c$10
            r1.<init>(r0)
            a(r1)
            return
    }
}
