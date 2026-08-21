package com.tencent.open.log;

public class d {

    public static final class a {
        public static final boolean a(int r0, int r1) {
                r0 = r0 & r1
                if (r1 != r0) goto L5
                r0 = 1
                goto L6
            L5:
                r0 = 0
            L6:
                return r0
        }
    }

    public static final class b {
        public static boolean a() {
                java.lang.String r0 = android.os.Environment.getExternalStorageState()
                java.lang.String r1 = "mounted"
                boolean r1 = r1.equals(r0)
                if (r1 != 0) goto L17
                java.lang.String r1 = "mounted_ro"
                boolean r0 = r1.equals(r0)
                if (r0 == 0) goto L15
                goto L17
            L15:
                r0 = 0
                goto L18
            L17:
                r0 = 1
            L18:
                return r0
        }

        public static com.tencent.open.log.d.c b() {
                boolean r0 = a()
                if (r0 != 0) goto L8
                r0 = 0
                return r0
            L8:
                java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
                com.tencent.open.log.d$c r0 = com.tencent.open.log.d.c.b(r0)
                return r0
        }
    }

    public static class c {
        private java.io.File a;
        private long b;
        private long c;

        public c() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.tencent.open.log.d.c b(java.io.File r8) {
                com.tencent.open.log.d$c r0 = new com.tencent.open.log.d$c
                r0.<init>()
                r0.a(r8)
                android.os.StatFs r1 = new android.os.StatFs
                java.lang.String r8 = r8.getAbsolutePath()
                r1.<init>(r8)
                int r8 = r1.getBlockSize()
                long r2 = (long) r8
                int r8 = r1.getBlockCount()
                long r4 = (long) r8
                int r8 = r1.getAvailableBlocks()
                long r6 = (long) r8
                long r4 = r4 * r2
                r0.a(r4)
                long r6 = r6 * r2
                r0.b(r6)
                return r0
        }

        public java.io.File a() {
                r1 = this;
                java.io.File r0 = r1.a
                return r0
        }

        public void a(long r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public void a(java.io.File r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public long b() {
                r2 = this;
                long r0 = r2.b
                return r0
        }

        public void b(long r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public long c() {
                r2 = this;
                long r0 = r2.c
                return r0
        }

        public java.lang.String toString() {
                r3 = this;
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.io.File r1 = r3.a()
                java.lang.String r1 = r1.getAbsolutePath()
                r2 = 0
                r0[r2] = r1
                long r1 = r3.c()
                java.lang.Long r1 = java.lang.Long.valueOf(r1)
                r2 = 1
                r0[r2] = r1
                long r1 = r3.b()
                java.lang.Long r1 = java.lang.Long.valueOf(r1)
                r2 = 2
                r0[r2] = r1
                java.lang.String r1 = "[%s : %d / %d]"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                return r0
        }
    }

    public static final class d {
        public static java.text.SimpleDateFormat a(java.lang.String r1) {
                java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
                r0.<init>(r1)
                return r0
        }
    }

    public static boolean a(android.os.Bundle r1) {
            java.lang.String r0 = "access_token"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "pay_token"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "pfkey"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "expires_in"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "openid"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "proxy_code"
            boolean r0 = r1.containsKey(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "proxy_expires_in"
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L39
            goto L3b
        L39:
            r1 = 0
            goto L3c
        L3b:
            r1 = 1
        L3c:
            return r1
    }

    public static boolean a(java.lang.String r1) {
            java.lang.String r0 = "access_token"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "pay_token"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "pfkey"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "expires_in"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "openid"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "proxy_code"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L3b
            java.lang.String r0 = "proxy_expires_in"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L39
            goto L3b
        L39:
            r1 = 0
            goto L3c
        L3b:
            r1 = 1
        L3c:
            return r1
    }

    public static android.os.Bundle b(android.os.Bundle r1) {
            boolean r0 = a(r1)
            if (r0 != 0) goto L7
            return r1
        L7:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>(r1)
            java.lang.String r1 = "access_token"
            r0.remove(r1)
            java.lang.String r1 = "pay_token"
            r0.remove(r1)
            java.lang.String r1 = "pfkey"
            r0.remove(r1)
            java.lang.String r1 = "expires_in"
            r0.remove(r1)
            java.lang.String r1 = "openid"
            r0.remove(r1)
            java.lang.String r1 = "proxy_code"
            r0.remove(r1)
            java.lang.String r1 = "proxy_expires_in"
            r0.remove(r1)
            return r0
    }
}
