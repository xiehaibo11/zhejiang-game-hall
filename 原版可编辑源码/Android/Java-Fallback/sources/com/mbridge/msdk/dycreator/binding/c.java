package com.mbridge.msdk.dycreator.binding;

public final class c {
    private static volatile com.mbridge.msdk.dycreator.binding.c a;

    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.dycreator.binding.c a() {
            com.mbridge.msdk.dycreator.binding.c r0 = com.mbridge.msdk.dycreator.binding.c.a
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.dycreator.binding.c> r0 = com.mbridge.msdk.dycreator.binding.c.class
            monitor-enter(r0)
            com.mbridge.msdk.dycreator.binding.c r1 = com.mbridge.msdk.dycreator.binding.c.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.dycreator.binding.c r1 = new com.mbridge.msdk.dycreator.binding.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.dycreator.binding.c.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.dycreator.binding.c r0 = com.mbridge.msdk.dycreator.binding.c.a
            return r0
    }
}
