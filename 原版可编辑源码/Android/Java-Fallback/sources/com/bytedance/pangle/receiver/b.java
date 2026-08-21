package com.bytedance.pangle.receiver;

public final class b {
    private static final com.bytedance.pangle.receiver.b.c a = null;

    static class a implements com.bytedance.pangle.receiver.b.c {
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

        static java.lang.Object a(android.content.Context r0, java.lang.String r1) {
                java.lang.Object r0 = b(r0)
                java.lang.Object r0 = a(r0, r1)
                return r0
        }

        private static java.lang.Object a(java.lang.Object r0, java.lang.String r1) {
                if (r0 == 0) goto L7
                java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r0, r1)     // Catch: java.lang.Throwable -> L7
                return r0
            L7:
                r0 = 0
                return r0
        }

        private static java.lang.Object b(android.content.Context r3) {
                java.lang.String r0 = "android.app.LoadedApk"
                java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L27
                java.lang.String r1 = "mReceiverResource"
                java.lang.reflect.Field r0 = com.bytedance.pangle.util.FieldUtils.getField(r0, r1)     // Catch: java.lang.Throwable -> L27
                if (r0 == 0) goto L27
                java.lang.String r1 = "android.app.ContextImpl"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L27
                java.lang.String r2 = "mPackageInfo"
                java.lang.reflect.Field r1 = com.bytedance.pangle.util.FieldUtils.getField(r1, r2)     // Catch: java.lang.Throwable -> L27
                if (r1 == 0) goto L27
                java.lang.Object r3 = com.bytedance.pangle.util.FieldUtils.readField(r1, r3)     // Catch: java.lang.Throwable -> L27
                if (r3 == 0) goto L27
                java.lang.Object r3 = com.bytedance.pangle.util.FieldUtils.readField(r0, r3)     // Catch: java.lang.Throwable -> L27
                return r3
            L27:
                r3 = 0
                return r3
        }

        @Override
        public boolean a(android.content.Context r5) {
                r4 = this;
                java.lang.Object r0 = b(r5)
                java.lang.String r1 = "mWhiteList"
                java.lang.Object r2 = a(r0, r1)
                boolean r3 = r2 instanceof java.lang.String[]
                if (r3 == 0) goto L30
                java.lang.String[] r2 = (java.lang.String[]) r2
                java.lang.String[] r2 = (java.lang.String[]) r2
                java.util.ArrayList r3 = new java.util.ArrayList
                r3.<init>()
                java.lang.String r5 = r5.getPackageName()
                r3.add(r5)
                java.util.Collections.addAll(r3, r2)
                int r5 = r3.size()
                java.lang.String[] r5 = new java.lang.String[r5]
                java.lang.Object[] r5 = r3.toArray(r5)
                com.bytedance.pangle.util.FieldUtils.writeField(r0, r1, r5)
                r5 = 1
                return r5
            L30:
                if (r0 == 0) goto L38
                r5 = 0
                java.lang.String r1 = "mResourceConfig"
                com.bytedance.pangle.util.FieldUtils.writeField(r0, r1, r5)
            L38:
                r5 = 0
                return r5
        }
    }

    static class b extends com.bytedance.pangle.receiver.b.e {
        private b() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean a(android.content.Context r1) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    interface c {
        boolean a(android.content.Context r1);
    }

    static class d extends com.bytedance.pangle.receiver.b.a {
        private d() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean a(android.content.Context r3) {
                r2 = this;
                java.lang.String r0 = "mWhiteList"
                java.lang.Object r0 = a(r3, r0)
                boolean r1 = r0 instanceof java.util.List
                if (r1 == 0) goto L15
                java.util.List r0 = (java.util.List) r0
                java.lang.String r3 = r3.getPackageName()
                r0.add(r3)
                r3 = 1
                return r3
            L15:
                r3 = 0
                return r3
        }
    }

    static class e extends com.bytedance.pangle.receiver.b.a {
        private e() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        e(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public boolean a(android.content.Context r5) {
                r4 = this;
                java.lang.String r0 = "mWhiteListMap"
                java.lang.Object r0 = a(r5, r0)
                boolean r1 = r0 instanceof java.util.Map
                r2 = 0
                java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
                if (r1 == 0) goto L2a
                java.util.Map r0 = (java.util.Map) r0
                java.lang.Object r1 = r0.get(r3)
                java.util.List r1 = (java.util.List) r1
                if (r1 != 0) goto L21
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.put(r3, r1)
            L21:
                java.lang.String r5 = r5.getPackageName()
                r1.add(r5)
                r5 = 1
                return r5
            L2a:
                return r2
        }
    }

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 24
            if (r0 >= r2) goto Lf
            com.bytedance.pangle.receiver.b$a r0 = new com.bytedance.pangle.receiver.b$a
            r0.<init>(r1)
            com.bytedance.pangle.receiver.b.a = r0
            return
        Lf:
            r2 = 26
            if (r0 >= r2) goto L1b
            com.bytedance.pangle.receiver.b$d r0 = new com.bytedance.pangle.receiver.b$d
            r0.<init>(r1)
            com.bytedance.pangle.receiver.b.a = r0
            return
        L1b:
            r2 = 28
            if (r0 >= r2) goto L27
            com.bytedance.pangle.receiver.b$e r0 = new com.bytedance.pangle.receiver.b$e
            r0.<init>(r1)
            com.bytedance.pangle.receiver.b.a = r0
            return
        L27:
            com.bytedance.pangle.receiver.b$b r0 = new com.bytedance.pangle.receiver.b$b
            r0.<init>(r1)
            com.bytedance.pangle.receiver.b.a = r0
            return
    }

    public static void a(android.app.Application r2) {
            if (r2 == 0) goto L1a
            java.lang.String r0 = android.os.Build.BRAND     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = "huawei"
            boolean r0 = android.text.TextUtils.equals(r0, r1)     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L1a
            com.bytedance.pangle.receiver.b$c r0 = com.bytedance.pangle.receiver.b.a     // Catch: java.lang.Throwable -> L1a
            android.content.Context r2 = r2.getBaseContext()     // Catch: java.lang.Throwable -> L1a
            r0.a(r2)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }
}
