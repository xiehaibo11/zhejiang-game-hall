package com.qihoo360.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class RePluginConfig {
    private com.qihoo360.replugin.RePluginCallbacks callbacks;
    private int defaultFrameworkVersion;
    private com.qihoo360.replugin.RePluginEventCallbacks eventCallbacks;
    private java.lang.String hostBuildID;
    private java.lang.String hostVersionName;
    private boolean moveFileWhenInstalling;
    private boolean optimizeArtLoadDex;
    private boolean persistentEnable;
    private java.io.File pnInstallDir;
    private boolean printDetailLog;
    private boolean useHostClassIfNotFound;
    private boolean verifySign;

    public RePluginConfig() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.verifySign = r0
            r1 = 1
            r2.persistentEnable = r1
            r2.useHostClassIfNotFound = r0
            r2.moveFileWhenInstalling = r1
            r2.printDetailLog = r0
            r1 = 4
            r2.defaultFrameworkVersion = r1
            java.lang.String r1 = ""
            r2.hostVersionName = r1
            r2.hostBuildID = r1
            r2.optimizeArtLoadDex = r0
            return
    }

    private boolean checkAllowModify() {
            r3 = this;
            boolean r0 = com.qihoo360.replugin.RePlugin.App.sAttached
            if (r0 == 0) goto L12
            java.lang.Throwable r0 = new java.lang.Throwable
            r0.<init>()
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "rpc.cam: do not modify"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r2, r0)
            r0 = 0
            return r0
        L12:
            r0 = 1
            return r0
    }

    public com.qihoo360.replugin.RePluginCallbacks getCallbacks() {
            r1 = this;
            com.qihoo360.replugin.RePluginCallbacks r0 = r1.callbacks
            return r0
    }

    public int getDefaultFrameworkVersion() {
            r1 = this;
            int r0 = r1.defaultFrameworkVersion
            return r0
    }

    public com.qihoo360.replugin.RePluginEventCallbacks getEventCallbacks() {
            r1 = this;
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r1.eventCallbacks
            return r0
    }

    public java.lang.String getHostBuildID() {
            r1 = this;
            java.lang.String r0 = r1.hostBuildID
            return r0
    }

    public java.lang.String getHostVersionBuild() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            java.lang.String r1 = r1.getHostVersionName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            java.lang.String r1 = r1.getHostBuildID()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getHostVersionName() {
            r1 = this;
            java.lang.String r0 = r1.hostVersionName
            return r0
    }

    public java.io.File getPnInstallDir() {
            r1 = this;
            java.io.File r0 = r1.pnInstallDir
            return r0
    }

    public boolean getVerifySign() {
            r1 = this;
            boolean r0 = r1.verifySign
            return r0
    }

    void initDefaults(android.content.Context r2) {
            r1 = this;
            java.io.File r0 = r1.pnInstallDir
            if (r0 != 0) goto La
            java.io.File r0 = r2.getFilesDir()
            r1.pnInstallDir = r0
        La:
            com.qihoo360.replugin.RePluginCallbacks r0 = r1.callbacks
            if (r0 != 0) goto L15
            com.qihoo360.replugin.RePluginCallbacks r0 = new com.qihoo360.replugin.RePluginCallbacks
            r0.<init>(r2)
            r1.callbacks = r0
        L15:
            com.qihoo360.replugin.RePluginEventCallbacks r0 = r1.eventCallbacks
            if (r0 != 0) goto L20
            com.qihoo360.replugin.RePluginEventCallbacks r0 = new com.qihoo360.replugin.RePluginEventCallbacks
            r0.<init>(r2)
            r1.eventCallbacks = r0
        L20:
            return
    }

    public boolean isMoveFileWhenInstalling() {
            r1 = this;
            boolean r0 = r1.moveFileWhenInstalling
            return r0
    }

    public boolean isOptimizeArtLoadDex() {
            r1 = this;
            boolean r0 = r1.optimizeArtLoadDex
            return r0
    }

    public boolean isPrintDetailLog() {
            r1 = this;
            boolean r0 = r1.printDetailLog
            return r0
    }

    public boolean isUseHostClassIfNotFound() {
            r1 = this;
            boolean r0 = r1.useHostClassIfNotFound
            return r0
    }

    public com.qihoo360.replugin.RePluginConfig setCallbacks(com.qihoo360.replugin.RePluginCallbacks r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.callbacks = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setDefaultFrameworkVersion(int r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.defaultFrameworkVersion = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setEventCallbacks(com.qihoo360.replugin.RePluginEventCallbacks r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.eventCallbacks = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setHostBuild(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.hostBuildID = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setHostVersionName(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.hostVersionName = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setMoveFileWhenInstalling(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.moveFileWhenInstalling = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setOptimizeArtLoadDex(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.optimizeArtLoadDex = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setPnInstallDir(java.io.File r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.pnInstallDir = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setPrintDetailLog(boolean r1) {
            r0 = this;
            r0.printDetailLog = r1
            return r0
    }

    public com.qihoo360.replugin.RePluginConfig setUseHostClassIfNotFound(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.useHostClassIfNotFound = r2
            return r1
    }

    public com.qihoo360.replugin.RePluginConfig setVerifySign(boolean r2) {
            r1 = this;
            boolean r0 = r1.checkAllowModify()
            if (r0 != 0) goto L7
            return r1
        L7:
            r1.verifySign = r2
            return r1
    }
}
