package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginInfoUpdater {
    public static final java.lang.String ACTION_UNINSTALL_PLUGIN = "ACTION_UNINSTALL_PLUGIN";
    private static final java.lang.String ACTION_UPDATE_INFO = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO";
    private static final java.lang.String TAG = "PluginInfoUpdater";

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class UpdateReceiver extends android.content.BroadcastReceiver {
        private UpdateReceiver() {
                r0 = this;
                r0.<init>()
                return
        }

        UpdateReceiver(com.qihoo360.replugin.packages.PluginInfoUpdater.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                java.lang.String r2 = r3.getAction()
                java.lang.String r0 = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"
                boolean r2 = android.text.TextUtils.equals(r2, r0)
                if (r2 == 0) goto Lf
                com.qihoo360.replugin.packages.PluginInfoUpdater.access$100(r3)
            Lf:
                return
        }
    }

    public PluginInfoUpdater() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$100(android.content.Intent r0) {
            boolean r0 = onReceiveUpdateInfo(r0)
            return r0
    }

    private static boolean onReceiveUpdateInfo(android.content.Intent r6) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "PluginInfoUpdater"
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "onReceiveUpdateInfo: in="
            r0.append(r2)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L1a:
            java.lang.String r0 = "pn"
            java.lang.String r0 = r6.getStringExtra(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            r3 = 0
            if (r2 == 0) goto L28
            return r3
        L28:
            com.qihoo360.replugin.model.PluginInfo r2 = com.qihoo360.loader2.MP.getPlugin(r0, r3)
            if (r2 != 0) goto L2f
            return r3
        L2f:
            java.lang.String r4 = "used"
            boolean r5 = r6.hasExtra(r4)
            if (r5 == 0) goto L5e
            boolean r6 = r6.getBooleanExtra(r4, r3)
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L5b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "onReceiveUpdateInfo: pn="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "; setIsUsed="
            r3.append(r0)
            r3.append(r6)
            java.lang.String r0 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L5b:
            r2.setIsUsed(r6)
        L5e:
            r6 = 1
            return r6
    }

    public static void register(android.content.Context r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"
            r0.<init>(r1)
            com.qihoo360.replugin.compat.LocalBroadcastManager r3 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r3)
            com.qihoo360.replugin.packages.PluginInfoUpdater$UpdateReceiver r1 = new com.qihoo360.replugin.packages.PluginInfoUpdater$UpdateReceiver
            r2 = 0
            r1.<init>(r2)
            r3.registerReceiver(r1, r0)
            return
    }

    static void updateIsUsed(android.content.Context r2, java.lang.String r3, boolean r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L22
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updateIsUsed: Prepare to send broadcast, pn="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "; used="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginInfoUpdater"
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L22:
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = "com.qihoo360.replugin.pms.ACTION_UPDATE_INFO"
            r0.<init>(r1)
            java.lang.String r1 = "pn"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "used"
            r0.putExtra(r3, r4)
            com.qihoo360.replugin.base.IPC.sendLocalBroadcast2AllSync(r2, r0)
            return
    }
}
