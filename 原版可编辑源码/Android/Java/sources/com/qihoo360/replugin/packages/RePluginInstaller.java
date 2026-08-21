package com.qihoo360.replugin.packages;

import android.content.Context;
import android.content.pm.PackageInfo;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.IOException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RePluginInstaller {
    private static final String TAG = "RePluginInstaller";

    public static File covertToPnFile(Context context, String str) {
        File pnInstallDir = RePlugin.getConfig().getPnInstallDir();
        File file = new File(str);
        if (file.getName().startsWith("p-n-")) {
            return copyPnToInstallPathIfNeeded(file, pnInstallDir);
        }
        PackageInfo packageArchiveInfo = context.getPackageManager().getPackageArchiveInfo(str, 128);
        if (packageArchiveInfo == null) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "covertToPnFile: Not a valid apk. path=" + str);
            }
            return null;
        }
        PluginInfo fromPackageInfo = PluginInfo.parseFromPackageInfo(packageArchiveInfo, str);
        if (fromPackageInfo == null) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "covertToPnFile: MetaData Invalid! Are you define com.qihoo360.plugin.name and others? path=" + str);
            }
            return null;
        }
        File file2 = new File(pnInstallDir, "p-n-" + fromPackageInfo.getName() + ".jar");
        if (PluginPublishFileGenerator.write(str, file2.getAbsolutePath(), fromPackageInfo.getLowInterfaceApi(), fromPackageInfo.getHighInterfaceApi(), fromPackageInfo.getVersion())) {
            return file2;
        }
        if (LogDebug.LOG) {
            LogDebug.e(TAG, "covertToPnFile: Write to publish file error! path=" + str + "; publish=" + file2.getAbsolutePath());
        }
        return null;
    }

    private static File copyPnToInstallPathIfNeeded(File file, File file2) throws Throwable {
        if (file.getParentFile().equals(file2)) {
            if (LogDebug.LOG) {
                LogDebug.i(TAG, "copyPnToInstallPathIfNeeded: Already p-n file in install path. Ignore. path=" + file.getAbsolutePath());
            }
            return file;
        }
        File file3 = new File(file2, file.getName());
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "copyPnToInstallPathIfNeeded: Already p-n file, copy to install path. src=" + file.getAbsolutePath() + "; dest=" + file3.getAbsolutePath());
        }
        try {
            FileUtils.copyFile(file, file3);
            return file3;
        } catch (IOException e) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.e(TAG, "copyPnToInstallPathIfNeeded: Copy fail!", e);
            return null;
        }
    }
}
