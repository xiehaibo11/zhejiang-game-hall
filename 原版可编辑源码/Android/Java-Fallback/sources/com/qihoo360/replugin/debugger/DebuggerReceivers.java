package com.qihoo360.replugin.debugger;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DebuggerReceivers {
    private static final java.lang.String TAG = "DebugReceivers";
    private final java.lang.String BR_LOGO;
    private final java.lang.String BR_POSTFIX_ACTIVITY;
    private final java.lang.String BR_POSTFIX_INSTALL;
    private final java.lang.String BR_POSTFIX_INSTALL_WITH_PN;
    private final java.lang.String BR_POSTFIX_UNINSTALL;
    private final java.lang.String PARAM_ACTIVITY;
    private final java.lang.String PARAM_IMMEDIATELY;
    private final java.lang.String PARAM_PATH;
    private final java.lang.String PARAM_PLUGIN;
    private java.lang.String actionInstall;
    private java.lang.String actionInstallWithPN;
    private java.lang.String actionStartActivity;
    private java.lang.String actionUninstall;
    private java.lang.String packageName;
    private android.content.BroadcastReceiver sDebugerReceiver;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class DebugerReceiver extends android.content.BroadcastReceiver {
        final com.qihoo360.replugin.debugger.DebuggerReceivers this$0;

        DebugerReceiver(com.qihoo360.replugin.debugger.DebuggerReceivers r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        private boolean doActionInstall(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r2 = "path"
                java.lang.String r2 = r3.getStringExtra(r2)
                java.lang.String r0 = "immediately"
                java.lang.String r3 = r3.getStringExtra(r0)
                java.lang.String r0 = "true"
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                r1.onInstallByApk(r2, r3)
                r2 = 1
                return r2
        }

        private boolean doActionInstallWithPN(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r2 = "path"
                java.lang.String r2 = r3.getStringExtra(r2)
                java.lang.String r0 = "immediately"
                java.lang.String r3 = r3.getStringExtra(r0)
                java.lang.String r0 = "true"
                boolean r3 = android.text.TextUtils.equals(r3, r0)
                r1.onInstallByPn(r2, r3)
                r2 = 1
                return r2
        }

        private boolean doActionStartActivity(android.content.Context r3, android.content.Intent r4) {
                r2 = this;
                java.lang.String r0 = "plugin"
                java.lang.String r0 = r4.getStringExtra(r0)
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto Le
                r3 = 0
                return r3
            Le:
                java.lang.String r1 = "activity"
                java.lang.String r4 = r4.getStringExtra(r1)
                boolean r3 = r2.onStartActivity(r3, r0, r4)
                return r3
        }

        private boolean doActionUninstall(android.content.Context r1, android.content.Intent r2) {
                r0 = this;
                java.lang.String r1 = "plugin"
                java.lang.String r1 = r2.getStringExtra(r1)
                boolean r2 = android.text.TextUtils.isEmpty(r1)
                if (r2 == 0) goto Le
                r1 = 0
                return r1
            Le:
                boolean r1 = com.qihoo360.replugin.RePlugin.uninstall(r1)
                return r1
        }

        private boolean onInstall(java.lang.String r3, boolean r4, boolean r5) {
                r2 = this;
                com.qihoo360.replugin.model.PluginInfo r5 = com.qihoo360.replugin.RePlugin.install(r3, r5)
                java.lang.String r0 = "DebugReceivers"
                if (r5 == 0) goto L6b
                boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r3 == 0) goto L28
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r1 = "onInstall: Install Success! cur="
                r3.append(r1)
                java.lang.String r1 = r5.getName()
                com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.replugin.RePlugin.getPluginInfo(r1)
                r3.append(r1)
                java.lang.String r3 = r3.toString()
                com.qihoo360.replugin.helper.LogDebug.i(r0, r3)
            L28:
                if (r4 == 0) goto L83
                boolean r3 = com.qihoo360.replugin.RePlugin.preload(r5)
                if (r3 == 0) goto L4e
                boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r3 == 0) goto L4c
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "onInstall: Preload Success! pn="
                r3.append(r4)
                java.lang.String r4 = r5.getName()
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                com.qihoo360.replugin.helper.LogDebug.i(r0, r3)
            L4c:
                r3 = 1
                return r3
            L4e:
                boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r3 == 0) goto L83
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "onInstall: Preload Error! pn="
                r3.append(r4)
                java.lang.String r4 = r5.getName()
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
                goto L83
            L6b:
                boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r4 == 0) goto L83
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "onInstall: Install Error! path="
                r4.append(r5)
                r4.append(r3)
                java.lang.String r3 = r4.toString()
                com.qihoo360.replugin.helper.LogDebug.e(r0, r3)
            L83:
                r3 = 0
                return r3
        }

        private boolean onInstallByApk(java.lang.String r2, boolean r3) {
                r1 = this;
                r0 = 0
                boolean r2 = r1.onInstall(r2, r3, r0)
                return r2
        }

        private boolean onInstallByPn(java.lang.String r3, boolean r4) {
                r2 = this;
                java.lang.String r3 = com.qihoo360.replugin.RePlugin.convertToPnFile(r3)
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                r1 = 0
                if (r0 == 0) goto L26
                boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r4 == 0) goto L25
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r0 = "onInstallByPn: Error! path="
                r4.append(r0)
                r4.append(r3)
                java.lang.String r3 = r4.toString()
                java.lang.String r4 = "DebugReceivers"
                com.qihoo360.replugin.helper.LogDebug.e(r4, r3)
            L25:
                return r1
            L26:
                boolean r3 = r2.onInstall(r3, r4, r1)
                return r3
        }

        private boolean onStartActivity(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 == 0) goto L18
                android.content.Intent r4 = new android.content.Intent
                java.lang.String r0 = "android.intent.action.MAIN"
                r4.<init>(r0)
                r0 = 268435456(0x10000000, float:2.524355E-29)
                r4.addFlags(r0)
                r0 = 0
                boolean r2 = com.qihoo360.replugin.RePlugin.startActivity(r2, r4, r3, r0)
                return r2
            L18:
                android.content.Intent r3 = com.qihoo360.replugin.RePlugin.createIntent(r3, r4)
                boolean r2 = com.qihoo360.replugin.RePlugin.startActivity(r2, r3)
                return r2
        }

        @Override
        public void onReceive(android.content.Context r3, android.content.Intent r4) {
                r2 = this;
                java.lang.String r0 = r4.getAction()
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto Lb
                return
            Lb:
                boolean r1 = com.qihoo360.replugin.RePlugin.isCurrentPersistentProcess()
                if (r1 != 0) goto L12
                return
            L12:
                com.qihoo360.replugin.debugger.DebuggerReceivers r1 = r2.this$0
                java.lang.String r1 = com.qihoo360.replugin.debugger.DebuggerReceivers.access$000(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L22
                r2.doActionInstall(r3, r4)
                goto L51
            L22:
                com.qihoo360.replugin.debugger.DebuggerReceivers r1 = r2.this$0
                java.lang.String r1 = com.qihoo360.replugin.debugger.DebuggerReceivers.access$100(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L32
                r2.doActionUninstall(r3, r4)
                goto L51
            L32:
                com.qihoo360.replugin.debugger.DebuggerReceivers r1 = r2.this$0
                java.lang.String r1 = com.qihoo360.replugin.debugger.DebuggerReceivers.access$200(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L42
                r2.doActionInstallWithPN(r3, r4)
                goto L51
            L42:
                com.qihoo360.replugin.debugger.DebuggerReceivers r1 = r2.this$0
                java.lang.String r1 = com.qihoo360.replugin.debugger.DebuggerReceivers.access$300(r1)
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L51
                r2.doActionStartActivity(r3, r4)
            L51:
                return
        }
    }

    public DebuggerReceivers() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ".replugin"
            r1.BR_LOGO = r0
            java.lang.String r0 = ".install"
            r1.BR_POSTFIX_INSTALL = r0
            java.lang.String r0 = ".install_with_pn"
            r1.BR_POSTFIX_INSTALL_WITH_PN = r0
            java.lang.String r0 = ".uninstall"
            r1.BR_POSTFIX_UNINSTALL = r0
            java.lang.String r0 = ".start_activity"
            r1.BR_POSTFIX_ACTIVITY = r0
            java.lang.String r0 = "path"
            r1.PARAM_PATH = r0
            java.lang.String r0 = "immediately"
            r1.PARAM_IMMEDIATELY = r0
            java.lang.String r0 = "plugin"
            r1.PARAM_PLUGIN = r0
            java.lang.String r0 = "activity"
            r1.PARAM_ACTIVITY = r0
            return
    }

    static java.lang.String access$000(com.qihoo360.replugin.debugger.DebuggerReceivers r0) {
            java.lang.String r0 = r0.actionInstall
            return r0
    }

    static java.lang.String access$100(com.qihoo360.replugin.debugger.DebuggerReceivers r0) {
            java.lang.String r0 = r0.actionUninstall
            return r0
    }

    static java.lang.String access$200(com.qihoo360.replugin.debugger.DebuggerReceivers r0) {
            java.lang.String r0 = r0.actionInstallWithPN
            return r0
    }

    static java.lang.String access$300(com.qihoo360.replugin.debugger.DebuggerReceivers r0) {
            java.lang.String r0 = r0.actionStartActivity
            return r0
    }

    public boolean registerReceivers(android.content.Context r5) {
            r4 = this;
            android.content.BroadcastReceiver r0 = r4.sDebugerReceiver
            r1 = 1
            if (r0 == 0) goto L6
            return r1
        L6:
            if (r5 != 0) goto La
            r5 = 0
            return r5
        La:
            java.lang.String r0 = r5.getPackageName()
            r4.packageName = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.packageName
            r0.append(r2)
            java.lang.String r2 = ".replugin"
            r0.append(r2)
            java.lang.String r3 = ".install"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r4.actionInstall = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r4.packageName
            r0.append(r3)
            r0.append(r2)
            java.lang.String r3 = ".uninstall"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r4.actionUninstall = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r4.packageName
            r0.append(r3)
            r0.append(r2)
            java.lang.String r3 = ".install_with_pn"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r4.actionInstallWithPN = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r4.packageName
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = ".start_activity"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r4.actionStartActivity = r0
            com.qihoo360.replugin.debugger.DebuggerReceivers$DebugerReceiver r0 = new com.qihoo360.replugin.debugger.DebuggerReceivers$DebugerReceiver
            r0.<init>(r4)
            r4.sDebugerReceiver = r0
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            java.lang.String r2 = r4.actionInstall
            r0.addAction(r2)
            java.lang.String r2 = r4.actionUninstall
            r0.addAction(r2)
            java.lang.String r2 = r4.actionInstallWithPN
            r0.addAction(r2)
            java.lang.String r2 = r4.actionStartActivity
            r0.addAction(r2)
            android.content.BroadcastReceiver r2 = r4.sDebugerReceiver
            r5.registerReceiver(r2, r0)
            return r1
    }
}
