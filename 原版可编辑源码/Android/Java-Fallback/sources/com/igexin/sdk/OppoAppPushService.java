package com.igexin.sdk;

public class OppoAppPushService extends com.heytap.msp.push.service.DataMessageCallbackService {
    public static final java.lang.String TAG = "Assist_OP_ApPs";

    public OppoAppPushService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void processMessage(android.content.Context r4, com.heytap.msp.push.mode.DataMessage r5) {
            r3 = this;
            java.lang.String r0 = "Assist_OP_ApPs"
            java.lang.String r1 = "processMessage receive app meaasge ..."
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L3a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3a
            r1.<init>()     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "processMessage receive app meaasge:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3a
            r1.append(r5)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3a
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L3a
            if (r4 == 0) goto L36
            if (r5 == 0) goto L36
            com.igexin.assist.MessageBean r1 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L3a
            java.lang.String r2 = "payload"
            java.lang.String r5 = r5.getContent()     // Catch: java.lang.Throwable -> L3a
            r1.<init>(r4, r2, r5)     // Catch: java.lang.Throwable -> L3a
            java.lang.String r5 = "OP_"
            r1.setMessageSource(r5)     // Catch: java.lang.Throwable -> L3a
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L3a
            r5.addMessage(r1)     // Catch: java.lang.Throwable -> L3a
        L36:
            com.igexin.assist.util.AssistUtils.startGetuiService(r4)     // Catch: java.lang.Throwable -> L3a
            goto L42
        L3a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            android.util.Log.d(r0, r4)
        L42:
            return
    }
}
