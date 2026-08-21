package com.qihoo360.replugin;

import android.content.Context;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.io.File;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class RePluginConfig {
    private RePluginCallbacks callbacks;
    private RePluginEventCallbacks eventCallbacks;
    private File pnInstallDir;
    private boolean verifySign = false;
    private boolean persistentEnable = true;
    private boolean useHostClassIfNotFound = false;
    private boolean moveFileWhenInstalling = true;
    private boolean printDetailLog = false;
    private int defaultFrameworkVersion = 4;
    private String hostVersionName = "";
    private String hostBuildID = "";
    private boolean optimizeArtLoadDex = false;

    public RePluginCallbacks getCallbacks() {
        return this.callbacks;
    }

    public RePluginConfig setCallbacks(RePluginCallbacks rePluginCallbacks) {
        if (!checkAllowModify()) {
            return this;
        }
        this.callbacks = rePluginCallbacks;
        return this;
    }

    public RePluginEventCallbacks getEventCallbacks() {
        return this.eventCallbacks;
    }

    public RePluginConfig setEventCallbacks(RePluginEventCallbacks rePluginEventCallbacks) {
        if (!checkAllowModify()) {
            return this;
        }
        this.eventCallbacks = rePluginEventCallbacks;
        return this;
    }

    public File getPnInstallDir() {
        return this.pnInstallDir;
    }

    public RePluginConfig setPnInstallDir(File file) {
        if (!checkAllowModify()) {
            return this;
        }
        this.pnInstallDir = file;
        return this;
    }

    public boolean getVerifySign() {
        return this.verifySign;
    }

    public RePluginConfig setVerifySign(boolean z) {
        if (!checkAllowModify()) {
            return this;
        }
        this.verifySign = z;
        return this;
    }

    public boolean isUseHostClassIfNotFound() {
        return this.useHostClassIfNotFound;
    }

    public RePluginConfig setUseHostClassIfNotFound(boolean z) {
        if (!checkAllowModify()) {
            return this;
        }
        this.useHostClassIfNotFound = z;
        return this;
    }

    public boolean isMoveFileWhenInstalling() {
        return this.moveFileWhenInstalling;
    }

    public RePluginConfig setMoveFileWhenInstalling(boolean z) {
        if (!checkAllowModify()) {
            return this;
        }
        this.moveFileWhenInstalling = z;
        return this;
    }

    public String getHostBuildID() {
        return this.hostBuildID;
    }

    public RePluginConfig setHostBuild(String str) {
        if (!checkAllowModify()) {
            return this;
        }
        this.hostBuildID = str;
        return this;
    }

    public String getHostVersionName() {
        return this.hostVersionName;
    }

    public RePluginConfig setHostVersionName(String str) {
        if (!checkAllowModify()) {
            return this;
        }
        this.hostVersionName = str;
        return this;
    }

    public String getHostVersionBuild() {
        return RePlugin.getConfig().getHostVersionName() + "." + RePlugin.getConfig().getHostBuildID();
    }

    public boolean isPrintDetailLog() {
        return this.printDetailLog;
    }

    public RePluginConfig setPrintDetailLog(boolean z) {
        this.printDetailLog = z;
        return this;
    }

    public int getDefaultFrameworkVersion() {
        return this.defaultFrameworkVersion;
    }

    public RePluginConfig setDefaultFrameworkVersion(int i) {
        if (!checkAllowModify()) {
            return this;
        }
        this.defaultFrameworkVersion = i;
        return this;
    }

    void initDefaults(Context context) {
        if (this.pnInstallDir == null) {
            this.pnInstallDir = context.getFilesDir();
        }
        if (this.callbacks == null) {
            this.callbacks = new RePluginCallbacks(context);
        }
        if (this.eventCallbacks == null) {
            this.eventCallbacks = new RePluginEventCallbacks(context);
        }
    }

    private boolean checkAllowModify() {
        if (!RePlugin.App.sAttached) {
            return true;
        }
        LogRelease.e(LogDebug.PLUGIN_TAG, "rpc.cam: do not modify", new Throwable());
        return false;
    }

    public boolean isOptimizeArtLoadDex() {
        return this.optimizeArtLoadDex;
    }

    public RePluginConfig setOptimizeArtLoadDex(boolean z) {
        if (!checkAllowModify()) {
            return this;
        }
        this.optimizeArtLoadDex = z;
        return this;
    }
}
