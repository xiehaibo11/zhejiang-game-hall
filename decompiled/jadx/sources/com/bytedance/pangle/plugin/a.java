package com.bytedance.pangle.plugin;

import com.bytedance.pangle.ZeusPluginStateListener;
import com.bytedance.pangle.f.a.e;
import com.bytedance.pangle.log.ZeusLogger;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
final class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final File f1560a;
    private final String b;

    a(String str, File file) {
        this.f1560a = file;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        a();
    }

    final boolean a() {
        e eVarA = com.bytedance.pangle.f.a.d.a(this.f1560a);
        if (eVarA == null) {
            ZeusPluginStateListener.postStateChange(this.b, 7, " read local file package info failed !!! pluginPkg = " + this.b + " mApkFile.exists = " + this.f1560a.exists());
            StringBuilder sb = new StringBuilder("PluginInstallRunnable read local file package info failed !!! pluginPkg = ");
            sb.append(this.b);
            ZeusLogger.w(ZeusLogger.TAG_INSTALL, sb.toString());
            return false;
        }
        Plugin plugin = PluginManager.getInstance().getPlugin(eVarA.f1529a);
        if (plugin == null) {
            ZeusPluginStateListener.postStateChange(this.b, 7, " plugin == null !!! pluginPkg = " + this.b);
            ZeusLogger.w(ZeusLogger.TAG_INSTALL, "PluginInstallRunnable cannot query valid plugin !!! packageName = " + eVarA.f1529a);
            return false;
        }
        boolean zInstall = plugin.install(this.f1560a, eVarA);
        if (zInstall) {
            ZeusPluginStateListener.postStateChange(eVarA.f1529a, 6, new Object[0]);
        } else {
            ZeusPluginStateListener.postStateChange(eVarA.f1529a, 7, "Internal error.");
        }
        return zInstall;
    }
}
