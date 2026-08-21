package com.bytedance.pangle.c;

public class b {
    public static java.lang.String b = "request_finish";
    public static java.lang.String c = "download_start";
    public static java.lang.String d = "download_finish";
    public static java.lang.String e = "install_start";
    public static java.lang.String f = "install_finish";
    public static java.lang.String g = "load_start";
    public static java.lang.String h = "load_finish";
    private static volatile com.bytedance.pangle.c.b i;
    public final java.util.List<com.bytedance.pangle.c.a> a;

    public static class a {
        public static int A = 41000;
        public static int B = 42000;
        public static int a = 12000;
        public static int b = 12001;
        public static int c = 12002;
        public static int d = 12003;
        public static int e = 12004;
        public static int f = 20000;
        public static int g = 21000;
        public static int h = 21001;
        public static int i = 21002;
        public static int j = 22000;
        public static int k = 22001;
        public static int l = 22002;
        public static int m = 22999;
        public static int n = 30000;
        public static int o = 31000;
        public static int p = 32000;
        public static int q = 32001;
        public static int r = 32002;
        public static int s = 32003;
        public static int t = 32004;
        public static int u = 32005;
        public static int v = 32006;
        public static int w = 32007;
        public static int x = 32008;
        public static int y = 32999;
        public static int z = 40000;

        static {
                return
        }
    }

    static {
            return
    }

    private b() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.bytedance.pangle.c.b a() {
            com.bytedance.pangle.c.b r0 = com.bytedance.pangle.c.b.i
            if (r0 != 0) goto L13
            java.lang.Class<com.bytedance.pangle.c.b> r0 = com.bytedance.pangle.c.b.class
            monitor-enter(r0)
            com.bytedance.pangle.c.b r1 = new com.bytedance.pangle.c.b     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.bytedance.pangle.c.b.i = r1     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            goto L13
        L10:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
            throw r1
        L13:
            com.bytedance.pangle.c.b r0 = com.bytedance.pangle.c.b.i
            return r0
    }

    public final void a(java.lang.String r4, org.json.JSONObject r5, org.json.JSONObject r6, org.json.JSONObject r7) {
            r3 = this;
            java.util.List<com.bytedance.pangle.c.a> r0 = r3.a
            monitor-enter(r0)
            java.util.List<com.bytedance.pangle.c.a> r1 = r3.a     // Catch: java.lang.Throwable -> L20
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L20
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L1e
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L20
            com.bytedance.pangle.c.a r2 = (com.bytedance.pangle.c.a) r2     // Catch: java.lang.Throwable -> L20
            r2.a(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L19
            goto L9
        L19:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L20
            goto L9
        L1e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            return
        L20:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L20
            throw r4
    }
}
