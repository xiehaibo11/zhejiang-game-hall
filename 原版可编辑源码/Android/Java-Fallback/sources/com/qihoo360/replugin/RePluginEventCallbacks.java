package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginEventCallbacks {
    protected final android.content.Context mContext;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public enum InstallResult extends java.lang.Enum<com.qihoo360.replugin.RePluginEventCallbacks.InstallResult> {
        private static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult[] $VALUES = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult COPY_APK_FAIL = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult READ_PKG_INFO_FAIL = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult SUCCEED = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult V5_FILE_BUILD_FAIL = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult V5_FILE_UPDATE_FAIL = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult VERIFY_SIGN_FAIL = null;
        public static final com.qihoo360.replugin.RePluginEventCallbacks.InstallResult VERIFY_VER_FAIL = null;

        static {
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r1 = 0
                java.lang.String r2 = "SUCCEED"
                r0.<init>(r2, r1)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.SUCCEED = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r2 = 1
                java.lang.String r3 = "V5_FILE_BUILD_FAIL"
                r0.<init>(r3, r2)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_BUILD_FAIL = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r3 = 2
                java.lang.String r4 = "V5_FILE_UPDATE_FAIL"
                r0.<init>(r4, r3)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_UPDATE_FAIL = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r4 = 3
                java.lang.String r5 = "READ_PKG_INFO_FAIL"
                r0.<init>(r5, r4)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.READ_PKG_INFO_FAIL = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r5 = 4
                java.lang.String r6 = "VERIFY_SIGN_FAIL"
                r0.<init>(r6, r5)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.VERIFY_SIGN_FAIL = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r6 = 5
                java.lang.String r7 = "VERIFY_VER_FAIL"
                r0.<init>(r7, r6)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.VERIFY_VER_FAIL = r0
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = new com.qihoo360.replugin.RePluginEventCallbacks$InstallResult
                r7 = 6
                java.lang.String r8 = "COPY_APK_FAIL"
                r0.<init>(r8, r7)
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.COPY_APK_FAIL = r0
                r8 = 7
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult[] r8 = new com.qihoo360.replugin.RePluginEventCallbacks.InstallResult[r8]
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r9 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.SUCCEED
                r8[r1] = r9
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_BUILD_FAIL
                r8[r2] = r1
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.V5_FILE_UPDATE_FAIL
                r8[r3] = r1
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.READ_PKG_INFO_FAIL
                r8[r4] = r1
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.VERIFY_SIGN_FAIL
                r8[r5] = r1
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.VERIFY_VER_FAIL
                r8[r6] = r1
                r8[r7] = r0
                com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.$VALUES = r8
                return
        }

        InstallResult(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.qihoo360.replugin.RePluginEventCallbacks.InstallResult valueOf(java.lang.String r1) {
                java.lang.Class<com.qihoo360.replugin.RePluginEventCallbacks$InstallResult> r0 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r1 = (com.qihoo360.replugin.RePluginEventCallbacks.InstallResult) r1
                return r1
        }

        public static com.qihoo360.replugin.RePluginEventCallbacks.InstallResult[] values() {
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult[] r0 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.$VALUES
                java.lang.Object r0 = r0.clone()
                com.qihoo360.replugin.RePluginEventCallbacks$InstallResult[] r0 = (com.qihoo360.replugin.RePluginEventCallbacks.InstallResult[]) r0
                return r0
        }
    }

    public RePluginEventCallbacks(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public void onActivityDestroyed(android.app.Activity r1) {
            r0 = this;
            return
    }

    public void onBinderReleased() {
            r0 = this;
            return
    }

    public void onInstallPluginFailed(java.lang.String r1, com.qihoo360.replugin.RePluginEventCallbacks.InstallResult r2) {
            r0 = this;
            return
    }

    public void onInstallPluginStepInfo(java.lang.String r1, boolean r2) {
            r0 = this;
            return
    }

    public void onInstallPluginSucceed(com.qihoo360.replugin.model.PluginInfo r1) {
            r0 = this;
            return
    }

    public void onPrepareAllocPitActivity(android.content.Intent r1) {
            r0 = this;
            return
    }

    public void onPrepareStartPitActivity(android.content.Context r1, android.content.Intent r2, android.content.Intent r3) {
            r0 = this;
            return
    }

    public void onStartActivityCompleted(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            return
    }
}
