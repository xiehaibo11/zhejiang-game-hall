package com.xiaomi.push;

public class w {

    public class a {
        private final java.lang.String a;
        private final java.lang.StringBuilder a;
        private final java.lang.String b;

        public a() {
                r2 = this;
                java.lang.String r0 = ":"
                java.lang.String r1 = ","
                r2.<init>(r0, r1)
                return
        }

        public a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r1.a = r0
                r1.a = r2
                r1.b = r3
                return
        }

        public com.xiaomi.push.w.a a(java.lang.String r3, java.lang.Object r4) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 != 0) goto L22
                java.lang.StringBuilder r0 = r2.a
                int r0 = r0.length()
                if (r0 <= 0) goto L15
                java.lang.StringBuilder r0 = r2.a
                java.lang.String r1 = r2.b
                r0.append(r1)
            L15:
                java.lang.StringBuilder r0 = r2.a
                r0.append(r3)
                java.lang.String r3 = r2.a
                r0.append(r3)
                r0.append(r4)
            L22:
                return r2
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.StringBuilder r0 = r1.a
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public static int a(java.lang.String r1, int r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto La
            int r2 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> La
        La:
            return r2
    }

    public static boolean a() {
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            java.lang.Thread r1 = r1.getThread()
            if (r0 != r1) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    public static boolean a(android.content.Context r4) {
            java.lang.String r0 = "power"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.os.PowerManager r4 = (android.os.PowerManager) r4
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 20
            if (r0 < r3) goto L1b
            if (r4 == 0) goto L19
            boolean r4 = r4.isInteractive()
            if (r4 == 0) goto L19
            goto L1a
        L19:
            r1 = r2
        L1a:
            return r1
        L1b:
            if (r4 == 0) goto L24
            boolean r4 = r4.isScreenOn()
            if (r4 == 0) goto L24
            goto L25
        L24:
            r1 = r2
        L25:
            return r1
    }

    public static boolean a(java.util.Collection<?> r0) {
            if (r0 == 0) goto Lb
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    public static int b(java.lang.String r1, int r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            int r1 = r1.hashCode()
            int r1 = r1 / 10
            int r1 = r1 * 10
            int r1 = r1 + r2
            return r1
        L10:
            return r2
    }
}
