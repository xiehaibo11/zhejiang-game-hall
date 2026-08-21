package com.bytedance.pangle.receiver;

public final class c {
    private static com.bytedance.pangle.receiver.c d;
    public final java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c.a> a;
    public final java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> b;
    public final java.util.Set<java.lang.Integer> c;

    public static class a {
        public java.lang.String a;
        public final java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> b;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
                r0.<init>()
                r1.b = r0
                return
        }

        public final void a(android.content.Context r6, android.content.Intent r7) {
                r5 = this;
                java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> r0 = r5.b
                if (r0 == 0) goto L45
                int r0 = r0.size()
                if (r0 <= 0) goto L45
                java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> r0 = r5.b
                java.util.Iterator r0 = r0.iterator()
            L10:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L45
                java.lang.Object r1 = r0.next()
                com.bytedance.pangle.receiver.PluginBroadcastReceiver r1 = (com.bytedance.pangle.receiver.PluginBroadcastReceiver) r1
                if (r1 == 0) goto L10
                r1.onReceive(r6, r7)     // Catch: java.lang.Throwable -> L22
                goto L10
            L22:
                r1 = move-exception
                if (r7 == 0) goto L2a
                java.lang.String r2 = r7.getAction()
                goto L2c
            L2a:
                java.lang.String r2 = ""
            L2c:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                java.lang.String r4 = "plugin-receiver->action:"
                r3.<init>(r4)
                r3.append(r2)
                java.lang.String r2 = "[exception]:"
                r3.append(r2)
                java.lang.String r2 = r3.toString()
                java.lang.String r3 = "Zeus/receiver_pangle"
                com.bytedance.pangle.log.ZeusLogger.w(r3, r2, r1)
                goto L10
            L45:
                return
        }

        public final void a(com.bytedance.pangle.receiver.PluginBroadcastReceiver r3) {
                r2 = this;
                if (r3 == 0) goto L31
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "plugin-receiver:"
                r0.<init>(r1)
                java.lang.Class r1 = r3.getClass()
                java.lang.String r1 = r1.getSimpleName()
                r0.append(r1)
                java.lang.String r1 = ",action="
                r0.append(r1)
                java.lang.String r1 = r2.a
                r0.append(r1)
                java.lang.String r1 = "[注册完成]"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "Zeus/receiver_pangle"
                com.bytedance.pangle.log.ZeusLogger.i(r1, r0)
                java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> r0 = r2.b
                r0.add(r3)
            L31:
                return
        }
    }

    private c() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.b = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r1.c = r0
            return
    }

    public static com.bytedance.pangle.receiver.c a() {
            com.bytedance.pangle.receiver.c r0 = com.bytedance.pangle.receiver.c.d
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.service.a.a> r0 = com.bytedance.pangle.service.a.a.class
            monitor-enter(r0)
            com.bytedance.pangle.receiver.c r1 = com.bytedance.pangle.receiver.c.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.receiver.c r1 = new com.bytedance.pangle.receiver.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.receiver.c.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.receiver.c r0 = com.bytedance.pangle.receiver.c.d
            return r0
    }

    public final void a(android.content.Context r6, android.content.Intent r7) {
            r5 = this;
            if (r7 == 0) goto L5a
            java.lang.String r0 = r7.getAction()
            if (r0 == 0) goto L5a
            java.lang.String r0 = r7.getAction()
            java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c$a> r1 = r5.a
            if (r1 == 0) goto L5a
            int r1 = r1.size()
            if (r1 <= 0) goto L5a
            java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c$a> r1 = r5.a
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L20:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L5a
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L20
            java.lang.Object r2 = r2.getValue()
            com.bytedance.pangle.receiver.c$a r2 = (com.bytedance.pangle.receiver.c.a) r2
            if (r2 == 0) goto L20
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "action["
            r3.<init>(r4)
            r3.append(r0)
            java.lang.String r4 = "] match success ！ invoke onReceiver"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Zeus/receiver_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r4, r3)
            r2.a(r6, r7)
            goto L20
        L5a:
            return
    }

    public final void a(android.content.IntentFilter r4, com.bytedance.pangle.receiver.PluginBroadcastReceiver r5) {
            r3 = this;
            if (r4 == 0) goto L38
            java.util.Iterator r0 = r4.actionsIterator()
            if (r0 == 0) goto L38
            java.util.Iterator r4 = r4.actionsIterator()
        Lc:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L38
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto Lc
            java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c$a> r1 = r3.a
            java.lang.Object r1 = r1.get(r0)
            com.bytedance.pangle.receiver.c$a r1 = (com.bytedance.pangle.receiver.c.a) r1
            if (r1 == 0) goto L28
            r1.a(r5)
            goto Lc
        L28:
            com.bytedance.pangle.receiver.c$a r1 = new com.bytedance.pangle.receiver.c$a
            r1.<init>()
            r1.a = r0
            r1.a(r5)
            java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c$a> r2 = r3.a
            r2.put(r0, r1)
            goto Lc
        L38:
            return
    }
}
