package com.igexin.assist.util;

public class AssistUtils {
    public AssistUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void startGetuiService(android.content.Context r1) {
            if (r1 == 0) goto L9
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()     // Catch: java.lang.Throwable -> L9
            r0.initialize(r1)     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }
}
