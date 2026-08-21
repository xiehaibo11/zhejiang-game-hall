package com.qihoo360.replugin.packages;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.os.Process;
import android.os.RemoteException;
import android.system.Os;
import android.text.TextUtils;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.qihoo360.loader2.CertUtils;
import com.qihoo360.loader2.MP;
import com.qihoo360.loader2.PluginNativeLibsHelper;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginEventCallbacks;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.model.PluginInfoList;
import com.qihoo360.replugin.packages.IPluginManagerServer;
import com.qihoo360.replugin.utils.FileUtils;
import com.qihoo360.replugin.utils.pkg.PackageFilesUtil;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginManagerServer {
    private static final String STEP_DIVIDER = "------------------------------------------------";
    private static final String STEP_FIVE_INFO = "step 5 :从插件中释放 So 文件\n";
    private static final String STEP_FOUR_INFO = "step 4 :将合法的APK改名后，移动或复制\n";
    private static final String STEP_ONE_INFO = "step 1 :读取APK内容\n";
    private static final String STEP_SEVEN_INFO = "step 7 :保存插件信息到文件中，下次可直接使用\n";
    private static final String STEP_SIX_INFO = "step 6 :读取APK内容\n";
    private static final String STEP_THREE_INFO = "step 3 :解析出名字和三元组\n";
    private static final String STEP_TWO_1_INFO = "step 2 :校验插件签名\n";
    private static final String STEP_TWO_2_INFO = "step 2 :签名不可用\n";
    private static final String TAG = "PluginManagerServer:";
    private Context mContext;
    private PluginInfoList mList = new PluginInfoList();
    private Map<String, PluginRunningList> mProcess2PluginsMap = new ConcurrentHashMap();
    private IPluginManagerServer mStub = new Stub();
    private StringBuilder traceInstallPluginSb;
    private static final byte[] LOCKER_PROCESS_KILLED = new byte[0];
    private static final byte[] LOCKER = new byte[0];

    public PluginManagerServer(Context context) {
        this.mContext = context;
        initTraceBaseInfo();
    }

    private void initTraceBaseInfo() {
        int iMyPid = Process.myPid();
        int i = Build.VERSION.SDK_INT >= 21 ? Os.getppid() : 0;
        String name = Thread.currentThread().getName();
        StringBuilder sb = new StringBuilder();
        this.traceInstallPluginSb = sb;
        sb.append("####安装插件###");
        sb.append("\n");
        StringBuilder sb2 = this.traceInstallPluginSb;
        sb2.append(" ppid : ");
        sb2.append(i);
        sb2.append("\n");
        StringBuilder sb3 = this.traceInstallPluginSb;
        sb3.append(" pid  : ");
        sb3.append(iMyPid);
        sb3.append("\n");
        StringBuilder sb4 = this.traceInstallPluginSb;
        sb4.append(" currentThreadName : ");
        sb4.append(name);
        sb4.append("\n");
    }

    public IPluginManagerServer getService() {
        return this.mStub;
    }

    public void onClientProcessKilled(String str) {
        synchronized (LOCKER_PROCESS_KILLED) {
            this.mProcess2PluginsMap.remove(str);
            if (LogDebug.LOG) {
                LogDebug.d(TAG, "onClientProcessKilled: Killed! process=" + str + "; remains=" + this.mProcess2PluginsMap);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<PluginInfo> loadLocked() {
        if (this.mList.load(this.mContext)) {
            return updateAllLocked();
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<PluginInfo> updateAllLocked() throws Throwable {
        updateAllIfNeeded();
        return this.mList.cloneList();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void traceInstallPlugin(String str, boolean z) {
        StringBuilder sb = this.traceInstallPluginSb;
        sb.append("     ");
        sb.append(str);
        LogDebug.d(TAG, "" + this.traceInstallPluginSb.toString());
        RePlugin.getConfig().getEventCallbacks().onInstallPluginStepInfo(this.traceInstallPluginSb.toString(), z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public PluginInfo installLocked(String str, boolean z) throws Throwable {
        LogDebug.d(TAG, " invoke install Locked");
        StringBuilder sb = this.traceInstallPluginSb;
        sb.append("path : ");
        sb.append(str);
        sb.append("\n");
        StringBuilder sb2 = this.traceInstallPluginSb;
        sb2.append(STEP_DIVIDER);
        sb2.append("\n");
        this.traceInstallPluginSb.append("核心步骤：\n");
        boolean verifySign = RePlugin.getConfig().getVerifySign();
        int i = verifySign ? PsExtractor.AUDIO_STREAM : 128;
        traceInstallPlugin(STEP_ONE_INFO, z);
        PackageInfo packageArchiveInfo = this.mContext.getPackageManager().getPackageArchiveInfo(str, i);
        if (packageArchiveInfo == null) {
            LogDebug.e(TAG, "installLocked: Not a valid apk. path=" + str);
            RePlugin.getConfig().getEventCallbacks().onInstallPluginFailed(str, RePluginEventCallbacks.InstallResult.READ_PKG_INFO_FAIL);
            return null;
        }
        if (verifySign) {
            if (!verifySignature(packageArchiveInfo, str, z)) {
                LogDebug.e(TAG, "签名校验不通过");
                return null;
            }
        } else {
            traceInstallPlugin(STEP_TWO_2_INFO, z);
        }
        traceInstallPlugin(STEP_THREE_INFO, z);
        PluginInfo fromPackageInfo = PluginInfo.parseFromPackageInfo(packageArchiveInfo, str);
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "installLocked: Info=" + fromPackageInfo);
        }
        fromPackageInfo.setType(10);
        PluginInfo plugin = MP.getPlugin(fromPackageInfo.getName(), false);
        if (plugin != null) {
            LogDebug.i(TAG, "installLocked: Has installed plugin. current=" + plugin);
            if (checkVersion(fromPackageInfo, plugin) == 0) {
                fromPackageInfo.setIsPendingCover(true);
            }
        }
        if (!copyOrMoveApk(str, fromPackageInfo, z)) {
            LogDebug.i(TAG, "拷贝文件失败");
            RePlugin.getConfig().getEventCallbacks().onInstallPluginFailed(str, RePluginEventCallbacks.InstallResult.COPY_APK_FAIL);
            return null;
        }
        traceInstallPlugin(STEP_FIVE_INFO, z);
        PluginNativeLibsHelper.install(fromPackageInfo.getPath(), fromPackageInfo.getNativeLibsDir());
        traceInstallPlugin(STEP_SIX_INFO, z);
        if (plugin != null) {
            updateOrLater(plugin, fromPackageInfo);
        } else {
            this.mList.add(fromPackageInfo);
        }
        traceInstallPlugin(STEP_SEVEN_INFO, z);
        this.mList.save(this.mContext);
        return fromPackageInfo;
    }

    private boolean verifySignature(PackageInfo packageInfo, String str, boolean z) {
        traceInstallPlugin(STEP_TWO_1_INFO, z);
        if (!CertUtils.isPluginSignatures(packageInfo)) {
            if (LogDebug.LOG) {
                LogDebug.d(TAG, "verifySignature: invalid cert:  name=" + packageInfo);
            }
            RePlugin.getConfig().getEventCallbacks().onInstallPluginFailed(str, RePluginEventCallbacks.InstallResult.VERIFY_SIGN_FAIL);
            return false;
        }
        if (!LogDebug.LOG) {
            return true;
        }
        LogDebug.d(TAG, "verifySignature: valid cert:  name=" + packageInfo);
        return true;
    }

    private int checkVersion(PluginInfo pluginInfo, PluginInfo pluginInfo2) {
        if (pluginInfo.getVersion() == pluginInfo2.getVersion()) {
            if (!LogDebug.LOG) {
                return 0;
            }
            LogDebug.d(TAG, "isSameVersion: same version. inst_ver=" + pluginInfo.getVersion() + "; cur_ver=" + pluginInfo2.getVersion());
            return 0;
        }
        if (pluginInfo.getVersion() < pluginInfo2.getVersion()) {
            if (LogDebug.LOG) {
                LogDebug.e(TAG, "checkVersion: Older than current, install fail. pn=" + pluginInfo2.getName() + "; inst_ver=" + pluginInfo.getVersion() + "; cur_ver=" + pluginInfo2.getVersion());
            }
            return -1;
        }
        PluginInfo pendingUpdate = pluginInfo2.getPendingUpdate();
        if (pendingUpdate == null || pluginInfo.getVersion() >= pendingUpdate.getVersion()) {
            return 1;
        }
        if (LogDebug.LOG) {
            LogDebug.e(TAG, "checkVersion: Older than updating plugin. Ignore. pn=" + pluginInfo2.getName() + "; cur_ver=" + pluginInfo2.getVersion() + "; old_ver=" + pendingUpdate.getVersion() + "; new_ver=" + pluginInfo.getVersion());
        }
        return -1;
    }

    private boolean copyOrMoveApk(String str, PluginInfo pluginInfo, boolean z) throws Throwable {
        traceInstallPlugin(STEP_FOUR_INFO, z);
        File file = new File(str);
        File apkFile = pluginInfo.getApkFile();
        if (apkFile.exists()) {
            FileUtils.deleteQuietly(apkFile);
        }
        try {
            if (RePlugin.getConfig().isMoveFileWhenInstalling()) {
                FileUtils.moveFile(file, apkFile);
            } else {
                FileUtils.copyFile(file, apkFile);
            }
            pluginInfo.setPath(apkFile.getAbsolutePath());
            pluginInfo.setType(11);
            return true;
        } catch (IOException e) {
            LogRelease.e(TAG, "copyOrMoveApk: Copy/Move Failed! src=" + file + "; dest=" + apkFile, e);
            return false;
        }
    }

    private void updateOrLater(PluginInfo pluginInfo, PluginInfo pluginInfo2) {
        LogDebug.d(TAG, "updateOrLater: Need update. pn=" + pluginInfo.getName() + "; cur_ver=" + pluginInfo.getVersion() + "; update_ver=" + pluginInfo2.getVersion());
        if (pluginInfo.isPnPlugin()) {
            this.mList.add(pluginInfo);
        }
        PluginInfo pendingUpdate = pluginInfo.getPendingUpdate();
        if (pendingUpdate != null) {
            updatePendingUpdate(pluginInfo, pluginInfo2, pendingUpdate);
            return;
        }
        if (RePlugin.isPluginRunning(pluginInfo.getName())) {
            LogDebug.w(TAG, "updateOrLater: Plugin is running. Later. pn=" + pluginInfo.getName());
            if (pluginInfo2.getVersion() != pluginInfo.getVersion()) {
                pluginInfo.setPendingUpdate(pluginInfo2);
                pluginInfo.setPendingDelete(null);
                pluginInfo.setPendingCover(null);
                LogDebug.w(TAG, "updateOrLater: Plugin need update high version. clear PendingDelete and PendingCover.");
            } else if (pluginInfo2.getVersion() == pluginInfo.getVersion()) {
                pluginInfo.setPendingCover(pluginInfo2);
                pluginInfo.setPendingDelete(null);
                LogDebug.w(TAG, "updateOrLater: Plugin need update same version. clear PendingDelete.");
            }
            pluginInfo2.setParentInfo(pluginInfo);
            return;
        }
        LogDebug.i(TAG, "updateOrLater: Not running. Update now! pn=" + pluginInfo.getName());
        updateNow(pluginInfo, pluginInfo2);
    }

    private void updatePendingUpdate(PluginInfo pluginInfo, PluginInfo pluginInfo2, PluginInfo pluginInfo3) {
        if (pluginInfo3.getVersion() != pluginInfo2.getVersion()) {
            if (LogDebug.LOG) {
                LogDebug.i(TAG, "updatePendingUpdate: Found newer plugin, replace. pn=" + pluginInfo.getName() + "; cur_ver=" + pluginInfo.getVersion() + "; old_ver=" + pluginInfo3.getVersion() + "; new_ver=" + pluginInfo2.getVersion());
            }
            pluginInfo.setPendingUpdate(pluginInfo2);
            pluginInfo2.setParentInfo(pluginInfo);
            try {
                FileUtils.forceDelete(new File(pluginInfo3.getPath()));
                return;
            } catch (IOException e) {
                e.printStackTrace();
                return;
            }
        }
        if (LogDebug.LOG) {
            LogDebug.e(TAG, "updatePendingUpdate: Older than updating plugin. But...");
        }
    }

    private void updateAllIfNeeded() throws Throwable {
        Iterator<PluginInfo> it = this.mList.iterator();
        int i = 0;
        while (it.hasNext()) {
            if (updateIfNeeded(it.next())) {
                i++;
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "updateAllIfNeeded: Updated " + i + " plugins");
        }
        if (i > 0) {
            this.mList.save(this.mContext);
        }
    }

    private boolean updateIfNeeded(PluginInfo pluginInfo) {
        if (isPluginRunningLocked(pluginInfo.getName(), null)) {
            if (LogDebug.LOG) {
                LogDebug.w(TAG, "updateIfNeeded: Plugin is running. pn=" + pluginInfo.getName());
            }
            return false;
        }
        if (pluginInfo.isNeedUninstall()) {
            if (LogDebug.LOG) {
                LogDebug.d(TAG, "updateIfNeeded: delete plugin. pn=" + pluginInfo.getName());
            }
            return uninstallNow(pluginInfo.getPendingDelete());
        }
        if (pluginInfo.isNeedUpdate()) {
            updateNow(pluginInfo, pluginInfo.getPendingUpdate());
            return true;
        }
        if (pluginInfo.isNeedCover()) {
            updateNow(pluginInfo, pluginInfo.getPendingCover());
            return true;
        }
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "updateIfNeeded: Not need to update. pn=" + pluginInfo.getName());
        }
        return false;
    }

    private void updateNow(PluginInfo pluginInfo, PluginInfo pluginInfo2) {
        boolean isPendingCover = pluginInfo2.getIsPendingCover();
        if (isPendingCover) {
            move(pluginInfo, pluginInfo2);
        } else {
            delete(pluginInfo);
        }
        pluginInfo2.setType(11);
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "updateNow: Update. pn=" + pluginInfo.getVersion() + "; cur_ver=" + pluginInfo.getVersion() + "; update_ver=" + pluginInfo2.getVersion());
        }
        if (isPendingCover) {
            pluginInfo.setPendingCover(null);
            pluginInfo2.setIsPendingCover(false);
            pluginInfo2.setPath(pluginInfo2.getApkFile().getPath());
        } else {
            pluginInfo.update(pluginInfo2);
            pluginInfo.setPendingUpdate(null);
        }
    }

    private void move(PluginInfo pluginInfo, PluginInfo pluginInfo2) {
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "move. curPi=" + pluginInfo.getPath() + "; newPi=" + pluginInfo2.getPath());
        }
        try {
            try {
                try {
                    FileUtils.copyFile(pluginInfo2.getApkFile(), pluginInfo.getApkFile());
                    if (pluginInfo2.getDexFile().exists()) {
                        FileUtils.copyFile(pluginInfo2.getDexFile(), pluginInfo.getDexFile());
                    }
                    if (Build.VERSION.SDK_INT < 21) {
                        FileUtils.copyDir(pluginInfo2.getExtraOdexDir(), pluginInfo.getExtraOdexDir());
                    }
                    if (pluginInfo2.getNativeLibsDir().exists()) {
                        FileUtils.copyDir(pluginInfo2.getNativeLibsDir(), pluginInfo.getNativeLibsDir());
                    }
                    FileUtils.forceDelete(pluginInfo2.getApkFile().getParentFile());
                } catch (IOException e) {
                    e.printStackTrace();
                    FileUtils.forceDelete(pluginInfo2.getApkFile().getParentFile());
                }
            } catch (Throwable th) {
                try {
                    FileUtils.forceDelete(pluginInfo2.getApkFile().getParentFile());
                } catch (IOException e2) {
                    e2.printStackTrace();
                } catch (IllegalArgumentException e3) {
                    e3.printStackTrace();
                }
                throw th;
            }
        } catch (IOException e4) {
            e4.printStackTrace();
        } catch (IllegalArgumentException e5) {
            e5.printStackTrace();
        }
    }

    private void delete(PluginInfo pluginInfo) {
        try {
            FileUtils.forceDelete(new File(pluginInfo.getPath()));
            FileUtils.forceDelete(pluginInfo.getDexFile());
            if (Build.VERSION.SDK_INT < 21) {
                FileUtils.forceDelete(pluginInfo.getExtraOdexDir());
            }
            FileUtils.forceDelete(pluginInfo.getNativeLibsDir());
        } catch (IOException e) {
            e.printStackTrace();
        } catch (IllegalArgumentException e2) {
            e2.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUsedLocked(String str, boolean z) throws Throwable {
        PluginInfo plugin = MP.getPlugin(str, false);
        if (plugin == null) {
            return;
        }
        plugin.setIsUsed(z);
        this.mList.save(this.mContext);
        PluginInfoUpdater.updateIsUsed(RePluginInternal.getAppContext(), str, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean uninstallLocked(PluginInfo pluginInfo) {
        if (pluginInfo == null) {
            return false;
        }
        if (RePlugin.isPluginRunning(pluginInfo.getName())) {
            return uninstallLater(pluginInfo);
        }
        return uninstallNow(pluginInfo);
    }

    private boolean uninstallLater(PluginInfo pluginInfo) throws Throwable {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "Is running. Uninstall later! pn=" + pluginInfo.getName());
        }
        PluginInfo plugin = MP.getPlugin(pluginInfo.getName(), false);
        if (plugin == null) {
            return false;
        }
        plugin.setPendingDelete(pluginInfo);
        this.mList.save(this.mContext);
        return false;
    }

    private boolean uninstallNow(PluginInfo pluginInfo) throws Throwable {
        if (LogDebug.LOG) {
            LogDebug.i(TAG, "Not running. Uninstall now! pn=" + pluginInfo.getName());
        }
        PackageFilesUtil.forceDelete(pluginInfo);
        this.mList.remove(pluginInfo.getName());
        this.mList.save(this.mContext);
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public PluginRunningList getRunningPluginsLocked() {
        PluginRunningList pluginRunningList = new PluginRunningList();
        Iterator<PluginRunningList> it = this.mProcess2PluginsMap.values().iterator();
        while (it.hasNext()) {
            for (String str : it.next()) {
                if (!pluginRunningList.isRunning(str)) {
                    pluginRunningList.add(str);
                }
            }
        }
        return pluginRunningList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isPluginRunningLocked(String str, String str2) {
        if (TextUtils.isEmpty(str2)) {
            Iterator<PluginRunningList> it = this.mProcess2PluginsMap.values().iterator();
            while (it.hasNext()) {
                if (it.next().isRunning(str)) {
                    return true;
                }
            }
            return false;
        }
        PluginRunningList pluginRunningList = this.mProcess2PluginsMap.get(str2);
        return pluginRunningList != null && pluginRunningList.isRunning(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void syncRunningPluginsLocked(PluginRunningList pluginRunningList) {
        this.mProcess2PluginsMap.put(pluginRunningList.mProcessName, new PluginRunningList(pluginRunningList));
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "syncRunningPluginsLocked: Synced! pl=" + pluginRunningList + "; map=" + this.mProcess2PluginsMap);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void addToRunningPluginsLocked(String str, int i, String str2) {
        PluginRunningList pluginRunningList = this.mProcess2PluginsMap.get(str);
        if (pluginRunningList == null) {
            pluginRunningList = new PluginRunningList();
            this.mProcess2PluginsMap.put(str, pluginRunningList);
        }
        pluginRunningList.setProcessInfo(str, i);
        pluginRunningList.add(str2);
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "addToRunningPluginsLocked: Added! pl =" + pluginRunningList + "; map=" + this.mProcess2PluginsMap);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String[] getRunningProcessesByPluginLocked(String str) {
        ArrayList arrayList = new ArrayList();
        for (PluginRunningList pluginRunningList : this.mProcess2PluginsMap.values()) {
            if (pluginRunningList.isRunning(str)) {
                arrayList.add(pluginRunningList.mProcessName);
            }
        }
        return (String[]) arrayList.toArray(new String[0]);
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private class Stub extends IPluginManagerServer.Stub {
        private Stub() {
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public PluginInfo install(String str, boolean z) throws RemoteException {
            PluginInfo pluginInfoInstallLocked;
            PluginManagerServer.this.traceInstallPlugin("LOCKER-外部, 线程：" + Thread.currentThread().getName() + "，在临界区等待，当前时间: " + System.currentTimeMillis() + "\n", z);
            synchronized (PluginManagerServer.LOCKER) {
                PluginManagerServer.this.traceInstallPlugin("LOCKER-内部，线程：" + Thread.currentThread().getName() + "，进入临界区，将执行安装插件操作,当前时间: " + System.currentTimeMillis() + "\n", z);
                pluginInfoInstallLocked = PluginManagerServer.this.installLocked(str, z);
            }
            return pluginInfoInstallLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public List<PluginInfo> load() throws RemoteException {
            List<PluginInfo> listLoadLocked;
            synchronized (PluginManagerServer.LOCKER) {
                listLoadLocked = PluginManagerServer.this.loadLocked();
            }
            return listLoadLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public List<PluginInfo> updateAll() throws RemoteException {
            List<PluginInfo> listUpdateAllLocked;
            synchronized (PluginManagerServer.LOCKER) {
                listUpdateAllLocked = PluginManagerServer.this.updateAllLocked();
            }
            return listUpdateAllLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void updateUsed(String str, boolean z) throws RemoteException {
            synchronized (PluginManagerServer.LOCKER) {
                PluginManagerServer.this.updateUsedLocked(str, z);
            }
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public boolean uninstall(PluginInfo pluginInfo) throws RemoteException {
            boolean zUninstallLocked;
            synchronized (PluginManagerServer.LOCKER) {
                zUninstallLocked = PluginManagerServer.this.uninstallLocked(pluginInfo);
            }
            return zUninstallLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public PluginRunningList getRunningPlugins() throws RemoteException {
            PluginRunningList runningPluginsLocked;
            synchronized (PluginManagerServer.LOCKER) {
                runningPluginsLocked = PluginManagerServer.this.getRunningPluginsLocked();
            }
            return runningPluginsLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public boolean isPluginRunning(String str, String str2) throws RemoteException {
            boolean zIsPluginRunningLocked;
            synchronized (PluginManagerServer.LOCKER) {
                zIsPluginRunningLocked = PluginManagerServer.this.isPluginRunningLocked(str, str2);
            }
            return zIsPluginRunningLocked;
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void syncRunningPlugins(PluginRunningList pluginRunningList) throws RemoteException {
            synchronized (PluginManagerServer.LOCKER) {
                PluginManagerServer.this.syncRunningPluginsLocked(pluginRunningList);
            }
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public void addToRunningPlugins(String str, int i, String str2) throws RemoteException {
            synchronized (PluginManagerServer.LOCKER) {
                PluginManagerServer.this.addToRunningPluginsLocked(str, i, str2);
            }
        }

        @Override // com.qihoo360.replugin.packages.IPluginManagerServer
        public String[] getRunningProcessesByPlugin(String str) throws RemoteException {
            String[] runningProcessesByPluginLocked;
            synchronized (PluginManagerServer.LOCKER) {
                runningProcessesByPluginLocked = PluginManagerServer.this.getRunningProcessesByPluginLocked(str);
            }
            return runningProcessesByPluginLocked;
        }
    }
}
