package com.igexin.sdk;

public class MiuiPushReceiver extends com.xiaomi.mipush.sdk.PushMessageReceiver {
    public static final java.lang.String TAG = "Assist_XM";

    public MiuiPushReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCommandResult(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
            r0 = this;
            return
    }

    @Override
    public void onNotificationMessageArrived(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushMessage r2) {
            r0 = this;
            java.lang.String r1 = "Assist_XM"
            java.lang.String r2 = "onNotificationArrived receive message ..."
            android.util.Log.d(r1, r2)
            return
    }

    @Override
    public void onNotificationMessageClicked(android.content.Context r3, com.xiaomi.mipush.sdk.MiPushMessage r4) {
            r2 = this;
            java.lang.String r0 = "Assist_XM"
            java.lang.String r1 = "onNotificationMessageClicked receive message ..."
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L25
            if (r3 == 0) goto L22
            if (r4 == 0) goto L22
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "payload"
            java.lang.String r4 = r4.getContent()     // Catch: java.lang.Throwable -> L25
            r0.<init>(r3, r1, r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = "XM_"
            r0.setMessageSource(r4)     // Catch: java.lang.Throwable -> L25
            com.igexin.assist.action.MessageManger r4 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L25
            r4.addMessage(r0)     // Catch: java.lang.Throwable -> L25
        L22:
            com.igexin.assist.util.AssistUtils.startGetuiService(r3)     // Catch: java.lang.Throwable -> L25
        L25:
            return
    }

    @Override
    public void onReceivePassThroughMessage(android.content.Context r3, com.xiaomi.mipush.sdk.MiPushMessage r4) {
            r2 = this;
            java.lang.String r0 = "Assist_XM"
            java.lang.String r1 = "onReceivePassThroughMessage receive meaasge ..."
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L25
            if (r3 == 0) goto L22
            if (r4 == 0) goto L22
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "payload"
            java.lang.String r4 = r4.getContent()     // Catch: java.lang.Throwable -> L25
            r0.<init>(r3, r1, r4)     // Catch: java.lang.Throwable -> L25
            java.lang.String r4 = "XM_"
            r0.setMessageSource(r4)     // Catch: java.lang.Throwable -> L25
            com.igexin.assist.action.MessageManger r4 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L25
            r4.addMessage(r0)     // Catch: java.lang.Throwable -> L25
        L22:
            com.igexin.assist.util.AssistUtils.startGetuiService(r3)     // Catch: java.lang.Throwable -> L25
        L25:
            return
    }

    @Override
    public void onReceiveRegisterResult(android.content.Context r7, com.xiaomi.mipush.sdk.MiPushCommandMessage r8) {
            r6 = this;
            java.lang.String r0 = "Assist_XM"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L64
            r1.<init>()     // Catch: java.lang.Throwable -> L64
            java.lang.String r2 = "onReceiveRegisterResult receiver message:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L64
            r1.append(r8)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L64
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L64
            if (r7 == 0) goto L64
            if (r8 == 0) goto L64
            java.lang.String r0 = r8.getCommand()     // Catch: java.lang.Throwable -> L64
            java.util.List r1 = r8.getCommandArguments()     // Catch: java.lang.Throwable -> L64
            if (r1 == 0) goto L32
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L64
            if (r2 <= 0) goto L32
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L64
            goto L33
        L32:
            r1 = 0
        L33:
            java.lang.String r2 = "register"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L64
            if (r0 == 0) goto L64
            long r2 = r8.getResultCode()     // Catch: java.lang.Throwable -> L64
            r4 = 0
            int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r8 != 0) goto L64
            com.igexin.assist.MessageBean r8 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L64
            java.lang.String r0 = "token"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L64
            r2.<init>()     // Catch: java.lang.Throwable -> L64
            java.lang.String r3 = "XM_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L64
            r2.append(r1)     // Catch: java.lang.Throwable -> L64
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L64
            r8.<init>(r7, r0, r1)     // Catch: java.lang.Throwable -> L64
            com.igexin.assist.action.MessageManger r7 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L64
            r7.addMessage(r8)     // Catch: java.lang.Throwable -> L64
        L64:
            return
    }
}
