package com.meizu.cloud.pushsdk.d.d;

public class c implements com.meizu.cloud.pushsdk.d.d.d {
    private final int a;
    private final java.util.concurrent.atomic.AtomicLong b;
    private final java.util.Map<java.lang.Long, byte[]> c;
    private final java.util.List<java.lang.Long> d;

    public c(int r4) {
            r3 = this;
            r3.<init>()
            java.util.concurrent.atomic.AtomicLong r0 = new java.util.concurrent.atomic.AtomicLong
            r1 = 0
            r0.<init>(r1)
            r3.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r3.c = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r3.d = r0
            r3.a = r4
            return
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.a.a r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean a(long r3) {
            r2 = this;
            java.util.List<java.lang.Long> r0 = r2.d
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            boolean r0 = r0.remove(r1)
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.Long, byte[]> r0 = r2.c
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            java.lang.Object r3 = r0.remove(r3)
            if (r3 == 0) goto L1a
            r3 = 1
            goto L1b
        L1a:
            r3 = 0
        L1b:
            return r3
    }

    public long b(com.meizu.cloud.pushsdk.d.a.a r5) {
            r4 = this;
            java.util.Map r5 = r5.a()
            byte[] r5 = com.meizu.cloud.pushsdk.d.d.a.a(r5)
            java.util.concurrent.atomic.AtomicLong r0 = r4.b
            long r0 = r0.getAndIncrement()
            java.util.List<java.lang.Long> r2 = r4.d
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            r2.add(r3)
            java.util.Map<java.lang.Long, byte[]> r2 = r4.c
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            r2.put(r3, r5)
            return r0
    }

    @Override
    public long c() {
            r2 = this;
            java.util.List<java.lang.Long> r0 = r2.d
            int r0 = r0.size()
            long r0 = (long) r0
            return r0
    }

    @Override
    public com.meizu.cloud.pushsdk.d.b.c d() {
            r10 = this;
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            long r2 = r10.c()
            int r2 = (int) r2
            int r3 = r10.a
            if (r2 <= r3) goto L14
            r2 = r3
        L14:
            r3 = 0
            r4 = r3
        L16:
            if (r4 >= r2) goto L61
            java.util.List<java.lang.Long> r5 = r10.d
            java.lang.Object r5 = r5.get(r4)
            java.lang.Long r5 = (java.lang.Long) r5
            if (r5 == 0) goto L5e
            com.meizu.cloud.pushsdk.d.a.c r6 = new com.meizu.cloud.pushsdk.d.a.c
            r6.<init>()
            java.util.Map<java.lang.Long, byte[]> r7 = r10.c
            java.lang.Object r7 = r7.get(r5)
            byte[] r7 = (byte[]) r7
            java.util.Map r7 = com.meizu.cloud.pushsdk.d.d.a.a(r7)
            java.util.Map r7 = (java.util.Map) r7
            r6.a(r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = " current key "
            r7.append(r8)
            r7.append(r5)
            java.lang.String r8 = " payload "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.Object[] r8 = new java.lang.Object[r3]
            java.lang.String r9 = "MemoryStore"
            com.meizu.cloud.pushsdk.d.f.c.c(r9, r7, r8)
            r0.add(r5)
            r1.add(r6)
        L5e:
            int r4 = r4 + 1
            goto L16
        L61:
            com.meizu.cloud.pushsdk.d.b.c r2 = new com.meizu.cloud.pushsdk.d.b.c
            r2.<init>(r1, r0)
            return r2
    }
}
