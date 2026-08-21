package com.tencent.mm.opensdk.channel;

public class MMessageActV2 {
    public static final java.lang.String DEFAULT_ENTRY_CLASS_NAME = ".wxapi.WXEntryActivity";
    public static final java.lang.String MM_ENTRY_PACKAGE_NAME = "com.tencent.mm";
    public static final java.lang.String MM_MSG_ENTRY_CLASS_NAME = "com.tencent.mm.plugin.base.stub.WXEntryActivity";
    private static final java.lang.String TAG = "MicroMsg.SDK.MMessageAct";


    public static class Args {
        public static final int INVALID_FLAGS = -1;
        public android.os.Bundle bundle;
        public java.lang.String content;
        public int flags;
        public int launchMode;
        public java.lang.String targetClassName;
        public java.lang.String targetPkgName;
        public java.lang.String token;

        public Args() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.flags = r0
                r0 = 2
                r1.launchMode = r0
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "targetPkgName:"
                r0.append(r1)
                java.lang.String r1 = r2.targetPkgName
                r0.append(r1)
                java.lang.String r1 = ", targetClassName:"
                r0.append(r1)
                java.lang.String r1 = r2.targetClassName
                r0.append(r1)
                java.lang.String r1 = ", content:"
                r0.append(r1)
                java.lang.String r1 = r2.content
                r0.append(r1)
                java.lang.String r1 = ", flags:"
                r0.append(r1)
                int r1 = r2.flags
                r0.append(r1)
                java.lang.String r1 = ", bundle:"
                r0.append(r1)
                android.os.Bundle r1 = r2.bundle
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public MMessageActV2() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean send(android.content.Context r7, com.tencent.mm.opensdk.channel.MMessageActV2.Args r8) {
            r0 = 0
            java.lang.String r1 = "MicroMsg.SDK.MMessageAct"
            if (r7 == 0) goto Lff
            if (r8 != 0) goto L9
            goto Lff
        L9:
            java.lang.String r2 = r8.targetPkgName
            boolean r2 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r2 == 0) goto L28
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "send fail, invalid targetPkgName, targetPkgName = "
            r7.append(r2)
            java.lang.String r8 = r8.targetPkgName
            r7.append(r8)
            java.lang.String r7 = r7.toString()
        L24:
            com.tencent.mm.opensdk.utils.Log.e(r1, r7)
            return r0
        L28:
            java.lang.String r2 = r8.targetClassName
            boolean r2 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r2 == 0) goto L45
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r8.targetPkgName
            r2.append(r3)
            java.lang.String r3 = ".wxapi.WXEntryActivity"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r8.targetClassName = r2
        L45:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "send, targetPkgName = "
            r2.append(r3)
            java.lang.String r3 = r8.targetPkgName
            r2.append(r3)
            java.lang.String r3 = ", targetClassName = "
            r2.append(r3)
            java.lang.String r3 = r8.targetClassName
            r2.append(r3)
            java.lang.String r3 = ", launchMode = "
            r2.append(r3)
            int r3 = r8.launchMode
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.mm.opensdk.utils.Log.d(r1, r2)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = r8.targetPkgName
            java.lang.String r4 = r8.targetClassName
            r2.setClassName(r3, r4)
            android.os.Bundle r3 = r8.bundle
            if (r3 == 0) goto L82
            r2.putExtras(r3)
        L82:
            java.lang.String r3 = r7.getPackageName()
            r4 = 638058496(0x26080000, float:4.718448E-16)
            java.lang.String r5 = "_mmessage_sdkVersion"
            r2.putExtra(r5, r4)
            java.lang.String r5 = "_mmessage_appPackage"
            r2.putExtra(r5, r3)
            java.lang.String r5 = r8.content
            java.lang.String r6 = "_mmessage_content"
            r2.putExtra(r6, r5)
            java.lang.String r5 = r8.content
            byte[] r3 = com.tencent.mm.opensdk.channel.a.a.a(r5, r4, r3)
            java.lang.String r4 = "_mmessage_checksum"
            r2.putExtra(r4, r3)
            java.lang.String r3 = r8.token
            java.lang.String r4 = "_message_token"
            r2.putExtra(r4, r3)
            int r3 = r8.flags
            r4 = -1
            if (r3 != r4) goto Lbc
            r3 = 268435456(0x10000000, float:2.524355E-29)
            android.content.Intent r3 = r2.addFlags(r3)
            r4 = 134217728(0x8000000, float:3.85186E-34)
            r3.addFlags(r4)
            goto Lbf
        Lbc:
            r2.setFlags(r3)
        Lbf:
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> Le7
            r4 = 29
            if (r3 < r4) goto Lce
            int r8 = r8.launchMode     // Catch: java.lang.Exception -> Le7
            r3 = 2
            if (r8 != r3) goto Lce
            sendUsingPendingIntent(r7, r2)     // Catch: java.lang.Exception -> Le7
            goto Ld1
        Lce:
            r7.startActivity(r2)     // Catch: java.lang.Exception -> Le7
        Ld1:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "send mm message, intent="
            r7.append(r8)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            com.tencent.mm.opensdk.utils.Log.d(r1, r7)
            r7 = 1
            return r7
        Le7:
            r7 = move-exception
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r2 = "send fail, ex = "
            r8.append(r2)
            java.lang.String r7 = r7.getMessage()
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            goto L24
        Lff:
            java.lang.String r7 = "send fail, invalid argument"
            goto L24
    }

    private static void sendUsingPendingIntent(android.content.Context r9, android.content.Intent r10) {
            java.lang.String r0 = "MicroMsg.SDK.MMessageAct"
            java.lang.String r1 = "sendUsingPendingIntent"
            com.tencent.mm.opensdk.utils.Log.i(r0, r1)     // Catch: java.lang.Exception -> L1b
            r1 = 3
            r2 = 134217728(0x8000000, float:3.85186E-34)
            android.app.PendingIntent r3 = android.app.PendingIntent.getActivity(r9, r1, r10, r2)     // Catch: java.lang.Exception -> L1b
            r5 = 4
            r6 = 0
            com.tencent.mm.opensdk.channel.MMessageActV2$1 r7 = new com.tencent.mm.opensdk.channel.MMessageActV2$1     // Catch: java.lang.Exception -> L1b
            r7.<init>()     // Catch: java.lang.Exception -> L1b
            r8 = 0
            r4 = r9
            r3.send(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L1b
            goto L37
        L1b:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "sendUsingPendingIntent fail, ex = "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.tencent.mm.opensdk.utils.Log.e(r0, r1)
            r9.startActivity(r10)
        L37:
            return
    }
}
