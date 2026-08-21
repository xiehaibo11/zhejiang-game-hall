package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginInstaller {
    private static final java.lang.String TAG = "RePluginInstaller";

    public RePluginInstaller() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.io.File copyPnToInstallPathIfNeeded(java.io.File r3, java.io.File r4) {
            java.io.File r0 = r3.getParentFile()
            boolean r0 = r0.equals(r4)
            java.lang.String r1 = "RePluginInstaller"
            if (r0 == 0) goto L29
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L28
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "copyPnToInstallPathIfNeeded: Already p-n file in install path. Ignore. path="
            r4.append(r0)
            java.lang.String r0 = r3.getAbsolutePath()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r4)
        L28:
            return r3
        L29:
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r3.getName()
            r0.<init>(r4, r2)
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L5a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "copyPnToInstallPathIfNeeded: Already p-n file, copy to install path. src="
            r4.append(r2)
            java.lang.String r2 = r3.getAbsolutePath()
            r4.append(r2)
            java.lang.String r2 = "; dest="
            r4.append(r2)
            java.lang.String r2 = r0.getAbsolutePath()
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r4)
        L5a:
            com.qihoo360.replugin.utils.FileUtils.copyFile(r3, r0)     // Catch: java.io.IOException -> L5e
            return r0
        L5e:
            r3 = move-exception
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L68
            java.lang.String r4 = "copyPnToInstallPathIfNeeded: Copy fail!"
            com.qihoo360.replugin.helper.LogDebug.e(r1, r4, r3)
        L68:
            r3 = 0
            return r3
    }

    public static java.io.File covertToPnFile(android.content.Context r6, java.lang.String r7) {
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            java.io.File r0 = r0.getPnInstallDir()
            java.io.File r1 = new java.io.File
            r1.<init>(r7)
            java.lang.String r2 = r1.getName()
            java.lang.String r3 = "p-n-"
            boolean r2 = r2.startsWith(r3)
            if (r2 == 0) goto L1e
            java.io.File r6 = copyPnToInstallPathIfNeeded(r1, r0)
            return r6
        L1e:
            android.content.pm.PackageManager r6 = r6.getPackageManager()
            r1 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r6 = r6.getPackageArchiveInfo(r7, r1)
            java.lang.String r1 = "RePluginInstaller"
            r2 = 0
            if (r6 != 0) goto L46
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L45
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "covertToPnFile: Not a valid apk. path="
            r6.append(r0)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r1, r6)
        L45:
            return r2
        L46:
            com.qihoo360.replugin.model.PluginInfo r6 = com.qihoo360.replugin.model.PluginInfo.parseFromPackageInfo(r6, r7)
            if (r6 != 0) goto L65
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L64
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "covertToPnFile: MetaData Invalid! Are you define com.qihoo360.plugin.name and others? path="
            r6.append(r0)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r1, r6)
        L64:
            return r2
        L65:
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r3)
            java.lang.String r3 = r6.getName()
            r5.append(r3)
            java.lang.String r3 = ".jar"
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r0, r3)
            java.lang.String r0 = r4.getAbsolutePath()
            int r3 = r6.getLowInterfaceApi()
            int r5 = r6.getHighInterfaceApi()
            int r6 = r6.getVersion()
            boolean r6 = com.qihoo360.replugin.packages.PluginPublishFileGenerator.write(r7, r0, r3, r5, r6)
            if (r6 != 0) goto Lbd
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto Lbc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "covertToPnFile: Write to publish file error! path="
            r6.append(r0)
            r6.append(r7)
            java.lang.String r7 = "; publish="
            r6.append(r7)
            java.lang.String r7 = r4.getAbsolutePath()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r1, r6)
        Lbc:
            return r2
        Lbd:
            return r4
    }
}
