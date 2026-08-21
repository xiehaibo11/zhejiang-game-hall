package com.igexin.assist.sdk;

public class AssistPushManager {
    private com.igexin.assist.control.AbstractPushManager a;

    private AssistPushManager() {
            r0 = this;
            r0.<init>()
            return
    }

    AssistPushManager(com.igexin.assist.sdk.b r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkSupportDevice(android.content.Context r0) {
            boolean r0 = com.igexin.assist.sdk.a.i(r0)
            return r0
    }

    public static com.igexin.assist.sdk.AssistPushManager getInstance() {
            com.igexin.assist.sdk.AssistPushManager r0 = com.igexin.assist.sdk.c.a()
            return r0
    }

    public static java.lang.String getToken() {
            java.lang.String r0 = com.igexin.push.core.d.B
            return r0
    }

    public java.lang.String getSpToken() {
            r2 = this;
            com.igexin.push.core.b.d r0 = new com.igexin.push.core.b.d     // Catch: java.lang.Throwable -> Lc
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> Lc
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = r0.e()     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public void initialize(android.content.Context r1) {
            r0 = this;
            com.igexin.assist.control.AbstractPushManager r1 = com.igexin.assist.sdk.a.a(r1)
            r0.a = r1
            return
    }

    public void register(android.content.Context r2) {
            r1 = this;
            com.igexin.assist.control.AbstractPushManager r0 = r1.a
            if (r0 == 0) goto L7
            r0.register(r2)
        L7:
            return
    }

    public void saveToken(java.lang.String r2) {
            r1 = this;
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()
            r0.c(r2)
            return
    }

    public void setSilentTime(android.content.Context r2, int r3, int r4) {
            r1 = this;
            com.igexin.assist.control.AbstractPushManager r0 = r1.a
            if (r0 == 0) goto L7
            r0.setSilentTime(r2, r3, r4)
        L7:
            return
    }

    public void turnOffPush(android.content.Context r2) {
            r1 = this;
            com.igexin.assist.control.AbstractPushManager r0 = r1.a
            if (r0 == 0) goto L7
            r0.turnOffPush(r2)
        L7:
            return
    }

    public void turnOnPush(android.content.Context r2) {
            r1 = this;
            com.igexin.assist.control.AbstractPushManager r0 = r1.a
            if (r0 == 0) goto L7
            r0.turnOnPush(r2)
        L7:
            return
    }

    public void unregister(android.content.Context r2) {
            r1 = this;
            com.igexin.assist.control.AbstractPushManager r0 = r1.a
            if (r0 == 0) goto L7
            r0.unregister(r2)
        L7:
            return
    }
}
