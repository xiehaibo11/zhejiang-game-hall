package com.ta.utdid2.device;

public class UTDevice {
    public UTDevice() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(android.content.Context r1) {
            com.ta.utdid2.device.a r1 = com.ta.utdid2.device.b.b(r1)
            if (r1 == 0) goto L16
            java.lang.String r0 = r1.getUtdid()
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r0)
            if (r0 == 0) goto L11
            goto L16
        L11:
            java.lang.String r1 = r1.getUtdid()
            goto L18
        L16:
            java.lang.String r1 = "ffffffffffffffffffffffff"
        L18:
            return r1
    }

    private static java.lang.String b(android.content.Context r1) {
            com.ta.utdid2.device.c r1 = com.ta.utdid2.device.c.a(r1)
            java.lang.String r1 = r1.d()
            if (r1 == 0) goto L10
            boolean r0 = com.ta.utdid2.a.a.f.isEmpty(r1)
            if (r0 == 0) goto L12
        L10:
            java.lang.String r1 = "ffffffffffffffffffffffff"
        L12:
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String getUtdid(android.content.Context r0) {
            java.lang.String r0 = a(r0)
            return r0
    }

    @java.lang.Deprecated
    public static java.lang.String getUtdidForUpdate(android.content.Context r0) {
            java.lang.String r0 = b(r0)
            return r0
    }
}
