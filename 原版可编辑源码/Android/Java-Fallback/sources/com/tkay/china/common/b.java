package com.tkay.china.common;

public class b extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.tkay.china.common.b> r0 = com.tkay.china.common.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.china.common.b.a = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.lang.String r0 = r4.getAction()
            java.lang.String r1 = "android.intent.action.PACKAGE_ADDED"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L14
            java.lang.String r1 = "android.intent.action.PACKAGE_REPLACED"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L38
        L14:
            android.net.Uri r0 = r4.getData()
            if (r0 == 0) goto L38
            android.net.Uri r4 = r4.getData()
            java.lang.String r4 = r4.getSchemeSpecificPart()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onReceive: apk install success( "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = ")"
            r0.append(r1)
            com.tkay.china.common.a r3 = com.tkay.china.common.a.a(r3)
            r3.b(r4)
        L38:
            return
    }
}
