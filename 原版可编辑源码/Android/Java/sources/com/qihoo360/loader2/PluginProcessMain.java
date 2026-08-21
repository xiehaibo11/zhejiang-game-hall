package com.qihoo360.loader2;

import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.loader2.IPluginHost;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.PluginManagerProxy;
import com.qihoo360.replugin.packages.PluginManagerServer;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProcessMain {
    private static long sPersisistCookie;
    private static boolean sPersisistCookieInitialized;
    private static IPluginHost sPluginHostLocal;
    private static IPluginHost sPluginHostRemote;
    public static final String TAG = PluginProcessMain.class.getSimpleName();
    static HashMap<String, IBinder> sBinders = new HashMap<>();
    private static final Map<String, ProcessClientRecord> ALL = new HashMap();
    private static final ReentrantReadWriteLock PROCESS_CLIENT_LOCK = new ReentrantReadWriteLock();
    private static final Object COOKIE_LOCK = new Object();

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private interface Action<T> {
        T call();
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class ProcessClientRecord implements IBinder.DeathRecipient {
        IBinder binder;
        IPluginClient client;
        int index;
        String name;
        int pid;
        String plugin;
        PluginManagerServer pluginManager;

        public ProcessClientRecord(String str, String str2, int i, int i2, IBinder iBinder, IPluginClient iPluginClient, PluginManagerServer pluginManagerServer) {
            this.name = str;
            this.plugin = str2;
            this.pid = i;
            this.index = i2;
            this.binder = iBinder;
            this.client = iPluginClient;
            this.pluginManager = pluginManagerServer;
        }

        @Override
        public void binderDied() {
            PluginProcessMain.handleBinderDied(this);
        }

        public String toString() {
            if (LogDebug.LOG) {
                return super.toString() + " {name=" + this.name + " plugin=" + this.plugin + " pid=" + this.pid + " index=" + this.index + " binder=" + this.binder + " client=" + this.client + "}";
            }
            return super.toString();
        }

        public IPluginClient getClient() {
            return this.client;
        }
    }

    static final String dump() {
        JSONArray jSONArray;
        int length;
        JSONArray jSONArray2;
        int length2;
        JSONArray jSONArray3 = new JSONArray();
        JSONArray jSONArray4 = new JSONArray();
        Iterator<ProcessClientRecord> it = ALL.values().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            try {
                IPluginClient client = it.next().getClient();
                if (client != null) {
                    String strDumpActivities = client.dumpActivities();
                    if (!TextUtils.isEmpty(strDumpActivities) && (length2 = (jSONArray2 = new JSONArray(strDumpActivities)).length()) > 0) {
                        for (int i = 0; i < length2; i++) {
                            jSONArray3.put(jSONArray2.getJSONObject(i));
                        }
                    }
                    String strDumpServices = client.dumpServices();
                    if (!TextUtils.isEmpty(strDumpServices) && (length = (jSONArray = new JSONArray(strDumpServices)).length()) > 0) {
                        for (int i2 = 0; i2 < length; i2++) {
                            jSONArray4.put(jSONArray.getJSONObject(i2));
                        }
                    }
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        JSONArray jSONArray5 = new JSONArray();
        List<PluginInfo> plugins = MP.getPlugins(false);
        if (plugins != null) {
            for (PluginInfo pluginInfo : plugins) {
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put(pluginInfo.getName(), pluginInfo.toString());
                    jSONArray5.put(jSONObject);
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
        }
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject2.put("activity", jSONArray3);
            jSONObject2.put("service", jSONArray4);
            jSONObject2.put(IPluginManager.KEY_PLUGIN, jSONArray5);
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        return jSONObject2.toString();
    }

    static final void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        if (LogDebug.DUMP_ENABLED) {
            printWriter.println("--- ALL.length = " + ALL.size() + " ---");
            Iterator<ProcessClientRecord> it = ALL.values().iterator();
            while (it.hasNext()) {
                printWriter.println(it.next());
            }
            printWriter.println();
            StubProcessManager.dump(printWriter);
            printWriter.println();
            printWriter.println();
            PluginTable.dump(fileDescriptor, printWriter, strArr);
        }
    }

    static final void installHost(IPluginHost iPluginHost) {
        sPluginHostLocal = iPluginHost;
        try {
            PluginManagerProxy.connectToServer(iPluginHost);
        } catch (RemoteException e) {
            e.printStackTrace();
        }
    }

    static final void connectToHostSvc() {
        IBinder iBinderProxyFetchHostBinder = PluginProviderStub.proxyFetchHostBinder(PMF.getApplicationContext());
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "host binder = " + iBinderProxyFetchHostBinder);
        }
        if (iBinderProxyFetchHostBinder == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p.p fhb fail");
            System.exit(1);
        }
        try {
            iBinderProxyFetchHostBinder.linkToDeath(new IBinder.DeathRecipient() {
                @Override
                public void binderDied() {
                    LogRelease.i(LogDebug.PLUGIN_TAG, "p.p d, p.h s n");
                    if (PluginManager.isPluginProcess()) {
                        LogRelease.i(LogDebug.MAIN_TAG, "p p e, pp q n");
                        System.exit(0);
                    }
                    IPluginHost unused = PluginProcessMain.sPluginHostRemote = null;
                    PluginManagerProxy.disconnect();
                }
            }, 0);
        } catch (RemoteException e) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p.p p.h l2a: " + e.getMessage(), e);
            System.exit(1);
        }
        sPluginHostRemote = IPluginHost.Stub.asInterface(iBinderProxyFetchHostBinder);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "host binder.i = " + sPluginHostRemote);
        }
        try {
            PluginManagerProxy.connectToServer(sPluginHostRemote);
            PluginManagerProxy.syncRunningPlugins();
        } catch (RemoteException e2) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p.p p.h l3a: " + e2.getMessage(), e2);
            System.exit(1);
        }
        PMF.sPluginMgr.attach();
    }

    public static final IPluginHost getPluginHost() {
        IPluginHost iPluginHost = sPluginHostLocal;
        if (iPluginHost != null) {
            return iPluginHost;
        }
        if (sPluginHostRemote == null) {
            if (LogDebug.LOG && IPC.isPersistentProcess()) {
                LogDebug.e(LogDebug.PLUGIN_TAG, "插件框架未正常初始化");
                throw new RuntimeException("插件框架未正常初始化");
            }
            connectToHostSvc();
        }
        return sPluginHostRemote;
    }

    static final long getPersistentCookie() {
        long j;
        synchronized (COOKIE_LOCK) {
            if (!sPersisistCookieInitialized) {
                sPersisistCookieInitialized = true;
                if (IPC.isPersistentProcess()) {
                    sPersisistCookie = System.currentTimeMillis();
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "generate cookie: " + sPersisistCookie);
                    }
                }
            }
            j = sPersisistCookie;
        }
        return j;
    }

    static final IPluginClient probePluginClient(final String str, final int i, final PluginBinderInfo pluginBinderInfo) {
        return (IPluginClient) readProcessClientLock(new Action<IPluginClient>() {
            /* JADX WARN: Removed duplicated region for block: B:20:0x004f A[ADDED_TO_REGION, RETURN] */
            /* JADX WARN: Removed duplicated region for block: B:21:0x0050  */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public IPluginClient call() {
                for (ProcessClientRecord processClientRecord : PluginProcessMain.ALL.values()) {
                    int i2 = i;
                    if (i2 == -1) {
                        if (TextUtils.equals(processClientRecord.plugin, Constant.PLUGIN_NAME_UI)) {
                            if (!PluginProcessMain.isBinderAlive(processClientRecord) || !processClientRecord.binder.pingBinder()) {
                                return null;
                            }
                            pluginBinderInfo.pid = processClientRecord.pid;
                            pluginBinderInfo.index = processClientRecord.index;
                            return processClientRecord.client;
                        }
                    } else if (PluginProcessHost.isCustomPluginProcess(i2)) {
                        if (TextUtils.equals(processClientRecord.plugin, PluginProcessMain.getProcessStringByIndex(i))) {
                            if (!PluginProcessMain.isBinderAlive(processClientRecord)) {
                                return null;
                            }
                            pluginBinderInfo.pid = processClientRecord.pid;
                            pluginBinderInfo.index = processClientRecord.index;
                            return processClientRecord.client;
                        }
                    } else if (TextUtils.equals(processClientRecord.plugin, str)) {
                        if (!PluginProcessMain.isBinderAlive(processClientRecord)) {
                        }
                    }
                }
                return null;
            }
        });
    }

    private static String getProcessStringByIndex(int i) {
        return PluginProcessHost.PROCESS_PLUGIN_SUFFIX2 + (i + 100);
    }

    static final IPluginClient probePluginClientByPid(final int i, final PluginBinderInfo pluginBinderInfo) {
        return (IPluginClient) readProcessClientLock(new Action<IPluginClient>() {
            @Override
            public IPluginClient call() {
                for (ProcessClientRecord processClientRecord : PluginProcessMain.ALL.values()) {
                    if (processClientRecord.pid == i) {
                        if (!PluginProcessMain.isBinderAlive(processClientRecord) || !processClientRecord.binder.pingBinder()) {
                            return null;
                        }
                        pluginBinderInfo.pid = processClientRecord.pid;
                        pluginBinderInfo.index = processClientRecord.index;
                        return processClientRecord.client;
                    }
                }
                return null;
            }
        });
    }

    static final void sendIntent2Process(final String str, Intent intent, boolean z) {
        sendIntent2Client((Map) readProcessClientLock(new Action<Map<String, ProcessClientRecord>>() {
            @Override
            public Map<String, ProcessClientRecord> call() {
                HashMap map = new HashMap();
                for (ProcessClientRecord processClientRecord : PluginProcessMain.ALL.values()) {
                    if (TextUtils.isEmpty(str) || TextUtils.equals(processClientRecord.name, str)) {
                        map.put(processClientRecord.name, processClientRecord);
                    }
                }
                return map;
            }
        }), intent, z);
    }

    static final void sendIntent2Plugin(final String str, Intent intent, boolean z) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        sendIntent2Client((Map) readProcessClientLock(new Action<Map<String, ProcessClientRecord>>() {
            @Override
            public Map<String, ProcessClientRecord> call() {
                HashMap map = new HashMap(16);
                for (ProcessClientRecord processClientRecord : PluginProcessMain.ALL.values()) {
                    if (TextUtils.equals(processClientRecord.plugin, str)) {
                        map.put(processClientRecord.name, processClientRecord);
                    }
                }
                return map;
            }
        }), intent, z);
    }

    private static void sendIntent2Client(Map<String, ProcessClientRecord> map, Intent intent, boolean z) {
        for (ProcessClientRecord processClientRecord : map.values()) {
            if (isBinderAlive(processClientRecord)) {
                if (z) {
                    try {
                        processClientRecord.client.sendIntentSync(intent);
                    } catch (Throwable th) {
                        LogRelease.e(LogDebug.PLUGIN_TAG, "p.p sic e: " + th.getMessage(), th);
                    }
                } else {
                    processClientRecord.client.sendIntent(intent);
                }
            }
        }
    }

    static final boolean isProcessAlive(final String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return ((Boolean) readProcessClientLock(new Action<Boolean>() {
            @Override
            public Boolean call() {
                return Boolean.valueOf(PluginProcessMain.isBinderAlive((ProcessClientRecord) PluginProcessMain.ALL.get(str)));
            }
        })).booleanValue();
    }

    private static boolean isBinderAlive(ProcessClientRecord processClientRecord) {
        return (processClientRecord == null || processClientRecord.binder == null || processClientRecord.client == null || !processClientRecord.binder.isBinderAlive()) ? false : true;
    }

    static final int sumActivities() {
        return ((Integer) readProcessClientLock(new Action<Integer>() {
            @Override
            public Integer call() {
                Iterator it = PluginProcessMain.ALL.values().iterator();
                int i = 0;
                while (it.hasNext()) {
                    ProcessClientRecord processClientRecord = (ProcessClientRecord) it.next();
                    if (PluginProcessMain.isBinderAlive(processClientRecord)) {
                        try {
                            int iSumActivities = processClientRecord.client.sumActivities();
                            if (iSumActivities == -1) {
                                return -1;
                            }
                            i += iSumActivities;
                        } catch (Throwable th) {
                            LogRelease.e(LogDebug.PLUGIN_TAG, "ppm.sa e: " + th.getMessage(), th);
                        }
                    }
                }
                return Integer.valueOf(i);
            }
        })).intValue();
    }

    @Deprecated
    static final int allocProcess(String str, int i) {
        if (Constant.PLUGIN_NAME_UI.equals(str) || i == -1) {
            return -1;
        }
        if (PluginProcessHost.isCustomPluginProcess(i)) {
            return i;
        }
        if (PluginTable.getPluginInfo(str) == null) {
            if (!LogDebug.LOG) {
                return Integer.MIN_VALUE;
            }
            LogDebug.d(LogDebug.PLUGIN_TAG, "alloc process: plugin not found: name=" + str);
            return Integer.MIN_VALUE;
        }
        return StubProcessManager.allocProcess(str);
    }

    static final String attachProcess(int i, String str, int i2, IBinder iBinder, IPluginClient iPluginClient, String str2, PluginManagerServer pluginManagerServer) {
        String defaultPluginName = getDefaultPluginName(i, i2, iBinder, iPluginClient, str2);
        final ProcessClientRecord processClientRecord = new ProcessClientRecord(str, defaultPluginName, i, i2, iBinder, iPluginClient, pluginManagerServer);
        try {
            processClientRecord.binder.linkToDeath(processClientRecord, 0);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "ap l2d: " + th.getMessage(), th);
        }
        writeProcessClientLock(new Action<Void>() {
            @Override
            public Void call() {
                PluginProcessMain.ALL.put(processClientRecord.name, processClientRecord);
                return null;
            }
        });
        return defaultPluginName;
    }

    static final boolean attachActivity(int i, int i2, String str, String str2, String str3) {
        return StubProcessManager.attachActivity(i, i2, str, str2, str3);
    }

    static final boolean detachActivity(int i, int i2, String str, String str2, String str3) {
        return StubProcessManager.detachActivity(i, i2, str, str2, str3);
    }

    static final boolean attachService(int i, int i2, String str, String str2) {
        return StubProcessManager.attachService(i, i2, str, str2);
    }

    static final boolean detachService(int i, int i2, String str, String str2) {
        return StubProcessManager.detachService(i, i2, str, str2);
    }

    static final void attachBinder(int i, IBinder iBinder) {
        StubProcessManager.attachBinder(i, iBinder);
    }

    static final void detachBinder(int i, IBinder iBinder) {
        StubProcessManager.detachBinder(i, iBinder);
    }

    static final int sumBinders(int i) {
        return StubProcessManager.sumBinders(i);
    }

    static final int getPidByProcessName(final String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        if (TextUtils.equals(str, IPC.getCurrentProcessName())) {
            return IPC.getCurrentProcessId();
        }
        return ((Integer) readProcessClientLock(new Action<Integer>() {
            @Override
            public Integer call() {
                ProcessClientRecord processClientRecord = (ProcessClientRecord) PluginProcessMain.ALL.get(str);
                if (processClientRecord != null && PluginProcessMain.isBinderAlive(processClientRecord)) {
                    return Integer.valueOf(processClientRecord.pid);
                }
                return -1;
            }
        })).intValue();
    }

    static final String getProcessNameByPid(final int i) {
        if (i == IPC.getCurrentProcessId()) {
            return IPC.getCurrentProcessName();
        }
        return (String) readProcessClientLock(new Action<String>() {
            @Override
            public String call() {
                for (ProcessClientRecord processClientRecord : PluginProcessMain.ALL.values()) {
                    if (processClientRecord.pid == i && PluginProcessMain.isBinderAlive(processClientRecord)) {
                        return processClientRecord.name;
                    }
                }
                return null;
            }
        });
    }

    private static final void handleBinderDied(ProcessClientRecord processClientRecord) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin process has died: plugin=" + processClientRecord.plugin + " index=" + processClientRecord.index + " pid=" + processClientRecord.pid);
        }
        handleBinderDiedLocked(processClientRecord);
    }

    private static final String getDefaultPluginName(int i, int i2, IBinder iBinder, IPluginClient iPluginClient, String str) {
        if (i2 == -1) {
            return Constant.PLUGIN_NAME_UI;
        }
        if (PluginProcessHost.isCustomPluginProcess(i2)) {
            return getProcessStringByIndex(i2);
        }
        if (PluginManager.isPluginProcess(i2)) {
            return StubProcessManager.attachStubProcess(i, i2, iBinder, iPluginClient, str);
        }
        return null;
    }

    private static final void handleBinderDiedLocked(final ProcessClientRecord processClientRecord) {
        if (processClientRecord == null) {
            return;
        }
        writeProcessClientLock(new Action<Void>() {
            @Override
            public Void call() {
                ProcessClientRecord processClientRecord2 = (ProcessClientRecord) PluginProcessMain.ALL.get(processClientRecord.name);
                if (processClientRecord2 != processClientRecord) {
                    return null;
                }
                PluginProcessMain.ALL.remove(processClientRecord2.name);
                return null;
            }
        });
        StubProcessManager.setProcessStop(processClientRecord.binder);
        processClientRecord.pluginManager.onClientProcessKilled(processClientRecord.name);
    }

    private static <T> T writeProcessClientLock(Action<T> action) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            PROCESS_CLIENT_LOCK.writeLock().lock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) WRITING", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            T tCall = action.call();
            PROCESS_CLIENT_LOCK.writeLock().unlock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) WRITING DONE", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            return tCall;
        } catch (Throwable th) {
            PROCESS_CLIENT_LOCK.writeLock().unlock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) WRITING DONE", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            throw th;
        }
    }

    private static <T> T readProcessClientLock(Action<T> action) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            PROCESS_CLIENT_LOCK.readLock().lock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) READING", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            T tCall = action.call();
            PROCESS_CLIENT_LOCK.readLock().unlock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) READING DONE", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            return tCall;
        } catch (Throwable th) {
            PROCESS_CLIENT_LOCK.readLock().unlock();
            if (LogDebug.LOG) {
                Log.d(TAG, String.format("%s(%sms@%s) READING DONE", Thread.currentThread().getStackTrace()[3], Long.valueOf(System.currentTimeMillis() - jCurrentTimeMillis), Thread.currentThread()));
            }
            throw th;
        }
    }
}
