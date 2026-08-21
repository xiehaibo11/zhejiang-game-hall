package com.heytap.mcssdk;

public class b {


    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r1, android.content.Intent r2, com.heytap.msp.push.callback.IDataMessageCallBackService r3) {
            if (r1 != 0) goto L8
            java.lang.String r1 = "context is null , please check param of parseIntent()"
            com.heytap.mcssdk.utils.d.e(r1)
            return
        L8:
            if (r2 != 0) goto L10
            java.lang.String r1 = "intent is null , please check param of parseIntent()"
            com.heytap.mcssdk.utils.d.e(r1)
            return
        L10:
            if (r3 != 0) goto L18
            java.lang.String r1 = "callback is null , please check param of parseIntent()"
            com.heytap.mcssdk.utils.d.e(r1)
            return
        L18:
            boolean r0 = com.heytap.mcssdk.utils.Utils.isSupportPushByClient(r1)
            if (r0 != 0) goto L24
            java.lang.String r1 = "push is null ,please check system has push"
            com.heytap.mcssdk.utils.d.e(r1)
            return
        L24:
            com.heytap.mcssdk.b$1 r0 = new com.heytap.mcssdk.b$1
            r0.<init>(r1, r2, r3)
            com.heytap.mcssdk.utils.f.a(r0)
            return
    }
}
