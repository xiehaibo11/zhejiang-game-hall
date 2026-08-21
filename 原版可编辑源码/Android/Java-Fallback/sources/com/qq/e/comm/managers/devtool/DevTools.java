package com.qq.e.comm.managers.devtool;

public class DevTools {
    private java.lang.String a;

    public DevTools() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getDemoGameUrl() {
            r2 = this;
            java.lang.String r0 = r2.a
            r1 = 0
            r2.a = r1
            return r0
    }

    public void testDemoGame(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r0 = "com.qq.e.union.demo.union"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L14
            return
        L14:
            r1.a = r3
            return
    }
}
