package com.bytedance.pangle.receiver;

public final class a extends android.content.BroadcastReceiver {


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            com.bytedance.pangle.receiver.c r0 = com.bytedance.pangle.receiver.c.a()
            int r1 = r2.hashCode()
            java.util.Set<java.lang.Integer> r0 = r0.c
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L1c
            com.bytedance.pangle.receiver.c r0 = com.bytedance.pangle.receiver.c.a()
            r0.a(r3, r4)
            return
        L1c:
            com.bytedance.pangle.receiver.a$1 r0 = new com.bytedance.pangle.receiver.a$1
            r0.<init>(r2, r3, r4)
            com.bytedance.pangle.d.e.b(r0)
            return
    }
}
