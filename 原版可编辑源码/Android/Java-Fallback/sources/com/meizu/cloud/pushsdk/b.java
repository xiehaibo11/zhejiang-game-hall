package com.meizu.cloud.pushsdk;

public class b {
    private static volatile com.meizu.cloud.pushsdk.b b;
    private final android.util.SparseArray<com.meizu.cloud.pushsdk.handler.c> a;
    private java.util.Map<java.lang.String, com.meizu.cloud.pushsdk.handler.a> c;
    private com.meizu.cloud.pushsdk.handler.a.f.a d;
    private com.meizu.cloud.pushsdk.handler.a.a.a e;

    public class a extends com.meizu.cloud.pushsdk.handler.a {
        final com.meizu.cloud.pushsdk.b a;

        public a(com.meizu.cloud.pushsdk.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void a(android.content.Context r3, android.content.Intent r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.handler.MzPushMessage r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.platform.message.RegisterStatus r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, java.lang.String r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4, r5)
                goto Le
            L26:
                return
        }

        @Override
        public void a(android.content.Context r3, boolean r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void a(com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r3) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.a(r3)
                goto Le
            L26:
                return
        }

        @Override
        public void b(android.content.Context r3, com.meizu.cloud.pushsdk.handler.MzPushMessage r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.b(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void b(android.content.Context r3, java.lang.String r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.b(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void c(android.content.Context r3, com.meizu.cloud.pushsdk.handler.MzPushMessage r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.c(r3, r4)
                goto Le
            L26:
                return
        }

        @Override
        public void c(android.content.Context r3, java.lang.String r4) {
                r2 = this;
                com.meizu.cloud.pushsdk.b r0 = r2.a
                java.util.Map r0 = com.meizu.cloud.pushsdk.b.a(r0)
                java.util.Set r0 = r0.entrySet()
                java.util.Iterator r0 = r0.iterator()
            Le:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L26
                java.lang.Object r1 = r0.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.lang.Object r1 = r1.getValue()
                com.meizu.cloud.pushsdk.handler.a r1 = (com.meizu.cloud.pushsdk.handler.a) r1
                if (r1 == 0) goto Le
                r1.c(r3, r4)
                goto Le
            L26:
                return
        }
    }

    static {
            return
    }

    public b(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public b(android.content.Context r2, java.util.List<com.meizu.cloud.pushsdk.handler.c> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public b(android.content.Context r3, java.util.List<com.meizu.cloud.pushsdk.handler.c> r4, com.meizu.cloud.pushsdk.handler.a r5) {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r5 = new android.util.SparseArray
            r5.<init>()
            r2.a = r5
            if (r3 == 0) goto Le3
            android.content.Context r3 = r3.getApplicationContext()
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r2.c = r5
            com.meizu.cloud.pushsdk.b$a r5 = new com.meizu.cloud.pushsdk.b$a
            r5.<init>(r2)
            java.lang.String r0 = r3.getPackageName()
            java.lang.String r1 = "com.meizu.cloud"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L3c
            com.meizu.cloud.pushsdk.handler.a.f.a r0 = new com.meizu.cloud.pushsdk.handler.a.f.a
            r0.<init>(r3)
            r2.d = r0
            boolean r0 = com.meizu.cloud.pushsdk.util.MinSdkChecker.isSupportNotificationSort()
            if (r0 == 0) goto L3c
            com.meizu.cloud.pushsdk.handler.a.a.a r0 = new com.meizu.cloud.pushsdk.handler.a.a.a
            r0.<init>(r3)
            r2.e = r0
        L3c:
            if (r4 != 0) goto Ldf
            com.meizu.cloud.pushsdk.handler.a.c r4 = new com.meizu.cloud.pushsdk.handler.a.c
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.b r4 = new com.meizu.cloud.pushsdk.handler.a.b
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e r4 = new com.meizu.cloud.pushsdk.handler.a.e
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.b r4 = new com.meizu.cloud.pushsdk.handler.a.d.b
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d r4 = new com.meizu.cloud.pushsdk.handler.a.d
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.f r4 = new com.meizu.cloud.pushsdk.handler.a.f
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.d r4 = new com.meizu.cloud.pushsdk.handler.a.d.d
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.a r4 = new com.meizu.cloud.pushsdk.handler.a.e.a
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.c r4 = new com.meizu.cloud.pushsdk.handler.a.e.c
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.f r4 = new com.meizu.cloud.pushsdk.handler.a.e.f
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.d r4 = new com.meizu.cloud.pushsdk.handler.a.e.d
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.e r4 = new com.meizu.cloud.pushsdk.handler.a.e.e
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.f.c r4 = new com.meizu.cloud.pushsdk.handler.a.f.c
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.e.b r4 = new com.meizu.cloud.pushsdk.handler.a.e.b
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.e r4 = new com.meizu.cloud.pushsdk.handler.a.d.e
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.b.a r4 = new com.meizu.cloud.pushsdk.handler.a.b.a
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.a r4 = new com.meizu.cloud.pushsdk.handler.a.d.a
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.f r4 = new com.meizu.cloud.pushsdk.handler.a.d.f
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.f.b r4 = new com.meizu.cloud.pushsdk.handler.a.f.b
            r4.<init>(r3, r5)
            r2.a(r4)
            com.meizu.cloud.pushsdk.handler.a.d.c r4 = new com.meizu.cloud.pushsdk.handler.a.d.c
            r4.<init>(r3, r5)
            r2.a(r4)
            goto Le2
        Ldf:
            r2.a(r4)
        Le2:
            return
        Le3:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Context must not be null."
            r3.<init>(r4)
            throw r3
    }

    public static com.meizu.cloud.pushsdk.b a(android.content.Context r3) {
            com.meizu.cloud.pushsdk.b r0 = com.meizu.cloud.pushsdk.b.b
            if (r0 != 0) goto L1e
            java.lang.Class<com.meizu.cloud.pushsdk.b> r0 = com.meizu.cloud.pushsdk.b.class
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.b r1 = com.meizu.cloud.pushsdk.b.b     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            java.lang.String r1 = "PushMessageProxy"
            java.lang.String r2 = "PushMessageProxy init"
            com.meizu.cloud.pushinternal.DebugLogger.i(r1, r2)     // Catch: java.lang.Throwable -> L1b
            com.meizu.cloud.pushsdk.b r1 = new com.meizu.cloud.pushsdk.b     // Catch: java.lang.Throwable -> L1b
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L1b
            com.meizu.cloud.pushsdk.b.b = r1     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r3
        L1e:
            com.meizu.cloud.pushsdk.b r3 = com.meizu.cloud.pushsdk.b.b
            return r3
    }

    static java.util.Map a(com.meizu.cloud.pushsdk.b r0) {
            java.util.Map<java.lang.String, com.meizu.cloud.pushsdk.handler.a> r0 = r0.c
            return r0
    }

    public com.meizu.cloud.pushsdk.b a(com.meizu.cloud.pushsdk.handler.c r3) {
            r2 = this;
            android.util.SparseArray<com.meizu.cloud.pushsdk.handler.c> r0 = r2.a
            int r1 = r3.a()
            r0.put(r1, r3)
            return r2
    }

    public com.meizu.cloud.pushsdk.b a(java.lang.String r2, com.meizu.cloud.pushsdk.handler.a r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.meizu.cloud.pushsdk.handler.a> r0 = r1.c
            r0.put(r2, r3)
            return r1
    }

    public com.meizu.cloud.pushsdk.b a(java.util.List<com.meizu.cloud.pushsdk.handler.c> r2) {
            r1 = this;
            if (r2 == 0) goto L17
            java.util.Iterator r2 = r2.iterator()
        L6:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()
            com.meizu.cloud.pushsdk.handler.c r0 = (com.meizu.cloud.pushsdk.handler.c) r0
            r1.a(r0)
            goto L6
        L16:
            return r1
        L17:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "messageManagerList must not be null."
            r2.<init>(r0)
            throw r2
    }

    public com.meizu.cloud.pushsdk.handler.a.f.a a() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.f.a r0 = r1.d
            return r0
    }

    public void a(android.content.Intent r5) {
            r4 = this;
            java.lang.String r0 = "PushMessageProxy"
            java.lang.String r1 = "process message start"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r1)
            java.lang.String r1 = "method"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L48
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L48
            r2.<init>()     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = "receive action "
            r2.append(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = r5.getAction()     // Catch: java.lang.Exception -> L48
            r2.append(r3)     // Catch: java.lang.Exception -> L48
            java.lang.String r3 = " method "
            r2.append(r3)     // Catch: java.lang.Exception -> L48
            r2.append(r1)     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> L48
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)     // Catch: java.lang.Exception -> L48
            r1 = 0
        L2e:
            android.util.SparseArray<com.meizu.cloud.pushsdk.handler.c> r2 = r4.a     // Catch: java.lang.Exception -> L48
            int r2 = r2.size()     // Catch: java.lang.Exception -> L48
            if (r1 >= r2) goto L61
            android.util.SparseArray<com.meizu.cloud.pushsdk.handler.c> r2 = r4.a     // Catch: java.lang.Exception -> L48
            java.lang.Object r2 = r2.valueAt(r1)     // Catch: java.lang.Exception -> L48
            com.meizu.cloud.pushsdk.handler.c r2 = (com.meizu.cloud.pushsdk.handler.c) r2     // Catch: java.lang.Exception -> L48
            boolean r2 = r2.b(r5)     // Catch: java.lang.Exception -> L48
            if (r2 == 0) goto L45
            goto L61
        L45:
            int r1 = r1 + 1
            goto L2e
        L48:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "process message error "
            r1.append(r2)
            java.lang.String r5 = r5.getMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r5)
        L61:
            return
    }

    public com.meizu.cloud.pushsdk.handler.a.a.a b() {
            r1 = this;
            com.meizu.cloud.pushsdk.handler.a.a.a r0 = r1.e
            return r0
    }
}
