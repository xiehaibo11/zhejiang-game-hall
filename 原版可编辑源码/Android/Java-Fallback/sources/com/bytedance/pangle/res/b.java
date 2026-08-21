package com.bytedance.pangle.res;

public final class b {
    public static void a(android.view.LayoutInflater r4) {
            java.lang.String r0 = "clearFactory failed."
            java.lang.String r1 = "Zeus/resources_pangle"
            r2 = 0
            java.lang.String r3 = "mFactory"
            com.bytedance.pangle.util.FieldUtils.writeField(r4, r3, r2)     // Catch: java.lang.Throwable -> Lb
            goto Le
        Lb:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
        Le:
            java.lang.String r3 = "mFactory2"
            com.bytedance.pangle.util.FieldUtils.writeField(r4, r3, r2)     // Catch: java.lang.Throwable -> L14
            return
        L14:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
            return
    }
}
