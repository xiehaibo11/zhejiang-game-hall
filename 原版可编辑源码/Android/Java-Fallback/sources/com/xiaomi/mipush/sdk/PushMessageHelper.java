package com.xiaomi.mipush.sdk;

public class PushMessageHelper {
    public static final java.lang.String ERROR_MESSAGE = "error_message";
    public static final java.lang.String ERROR_TYPE = "error_type";
    public static final java.lang.String ERROR_TYPE_NEED_PERMISSION = "error_lack_of_permission";
    public static final java.lang.String KEY_COMMAND = "key_command";
    public static final java.lang.String KEY_MESSAGE = "key_message";
    public static final int MESSAGE_COMMAND = 3;
    public static final int MESSAGE_ERROR = 5;
    public static final int MESSAGE_QUIT = 4;
    public static final int MESSAGE_RAW = 1;
    public static final int MESSAGE_SENDMESSAGE = 2;
    public static final java.lang.String MESSAGE_TYPE = "message_type";
    public static final int PUSH_MODE_BROADCAST = 2;
    public static final int PUSH_MODE_CALLBACK = 1;
    private static int pushMode;

    static {
            return
    }

    public PushMessageHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.xiaomi.mipush.sdk.MiPushCommandMessage generateCommandMessage(java.lang.String r1, java.util.List<java.lang.String> r2, long r3, java.lang.String r5, java.lang.String r6, java.util.List<java.lang.String> r7) {
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = new com.xiaomi.mipush.sdk.MiPushCommandMessage
            r0.<init>()
            r0.setCommand(r1)
            r0.setCommandArguments(r2)
            r0.setResultCode(r3)
            r0.setReason(r5)
            r0.setCategory(r6)
            r0.setAutoMarkPkgs(r7)
            return r0
    }

    public static com.xiaomi.mipush.sdk.MiPushMessage generateMessage(com.xiaomi.push.im r2, com.xiaomi.push.hw r3, boolean r4) {
            com.xiaomi.mipush.sdk.MiPushMessage r0 = new com.xiaomi.mipush.sdk.MiPushMessage
            r0.<init>()
            java.lang.String r1 = r2.a()
            r0.setMessageId(r1)
            java.lang.String r1 = r2.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L22
            r1 = 1
            r0.setMessageType(r1)
            java.lang.String r1 = r2.d()
            r0.setAlias(r1)
            goto L52
        L22:
            java.lang.String r1 = r2.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L38
            r1 = 2
            r0.setMessageType(r1)
            java.lang.String r1 = r2.c()
            r0.setTopic(r1)
            goto L52
        L38:
            java.lang.String r1 = r2.f()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L4e
            r1 = 3
            r0.setMessageType(r1)
            java.lang.String r1 = r2.f()
            r0.setUserAccount(r1)
            goto L52
        L4e:
            r1 = 0
            r0.setMessageType(r1)
        L52:
            java.lang.String r1 = r2.e()
            r0.setCategory(r1)
            com.xiaomi.push.hv r1 = r2.a()
            if (r1 == 0) goto L6a
            com.xiaomi.push.hv r2 = r2.a()
            java.lang.String r2 = r2.c()
            r0.setContent(r2)
        L6a:
            if (r3 == 0) goto Lb8
            java.lang.String r2 = r0.getMessageId()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L7d
            java.lang.String r2 = r3.a()
            r0.setMessageId(r2)
        L7d:
            java.lang.String r2 = r0.getTopic()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L8e
            java.lang.String r2 = r3.b()
            r0.setTopic(r2)
        L8e:
            java.lang.String r2 = r3.d()
            r0.setDescription(r2)
            java.lang.String r2 = r3.c()
            r0.setTitle(r2)
            int r2 = r3.a()
            r0.setNotifyType(r2)
            int r2 = r3.c()
            r0.setNotifyId(r2)
            int r2 = r3.b()
            r0.setPassThrough(r2)
            java.util.Map r2 = r3.a()
            r0.setExtra(r2)
        Lb8:
            r0.setNotified(r4)
            return r0
    }

    public static com.xiaomi.push.hw generateMessage(com.xiaomi.mipush.sdk.MiPushMessage r2) {
            com.xiaomi.push.hw r0 = new com.xiaomi.push.hw
            r0.<init>()
            java.lang.String r1 = r2.getMessageId()
            r0.a(r1)
            java.lang.String r1 = r2.getTopic()
            r0.b(r1)
            java.lang.String r1 = r2.getDescription()
            r0.d(r1)
            java.lang.String r1 = r2.getTitle()
            r0.c(r1)
            int r1 = r2.getNotifyId()
            r0.c(r1)
            int r1 = r2.getNotifyType()
            r0.a(r1)
            int r1 = r2.getPassThrough()
            r0.b(r1)
            java.util.Map r2 = r2.getExtra()
            r0.a(r2)
            return r0
    }

    public static int getPushMode(android.content.Context r1) {
            int r0 = com.xiaomi.mipush.sdk.PushMessageHelper.pushMode
            if (r0 != 0) goto L10
            boolean r1 = isUseCallbackPushMode(r1)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 2
        Ld:
            setPushMode(r1)
        L10:
            int r1 = com.xiaomi.mipush.sdk.PushMessageHelper.pushMode
            return r1
    }

    private static boolean isIntentAvailable(android.content.Context r2, android.content.Intent r3) {
            android.content.pm.PackageManager r2 = r2.getPackageManager()
            r0 = 32
            r1 = 1
            java.util.List r2 = r2.queryBroadcastReceivers(r3, r0)     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L14
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Exception -> L15
            if (r2 != 0) goto L14
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    public static boolean isUseCallbackPushMode(android.content.Context r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r0.<init>(r1)
            java.lang.String r1 = r3.getPackageName()
            java.lang.String r2 = "com.xiaomi.mipush.sdk.PushServiceReceiver"
            r0.setClassName(r1, r2)
            boolean r3 = isIntentAvailable(r3, r0)
            return r3
    }

    public static void sendCommandMessageBroadcast(android.content.Context r3, com.xiaomi.mipush.sdk.MiPushCommandMessage r4) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r0.<init>(r1)
            java.lang.String r1 = r3.getPackageName()
            r0.setPackage(r1)
            java.lang.String r1 = "message_type"
            r2 = 3
            r0.putExtra(r1, r2)
            java.lang.String r1 = "key_command"
            r0.putExtra(r1, r4)
            com.xiaomi.mipush.sdk.PushServiceReceiver r4 = new com.xiaomi.mipush.sdk.PushServiceReceiver
            r4.<init>()
            r4.onReceive(r3, r0)
            return
    }

    public static void sendQuitMessageBroadcast(android.content.Context r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            r0.<init>(r1)
            java.lang.String r1 = r3.getPackageName()
            r0.setPackage(r1)
            java.lang.String r1 = "message_type"
            r2 = 4
            r0.putExtra(r1, r2)
            com.xiaomi.mipush.sdk.PushServiceReceiver r1 = new com.xiaomi.mipush.sdk.PushServiceReceiver
            r1.<init>()
            r1.onReceive(r3, r0)
            return
    }

    private static void setPushMode(int r0) {
            com.xiaomi.mipush.sdk.PushMessageHelper.pushMode = r0
            return
    }
}
