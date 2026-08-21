package com.qihoo360.replugin.component.service.server;

import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.ContextWrapper;
import android.content.Intent;
import android.content.pm.ServiceInfo;
import android.os.Binder;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.Messenger;
import android.os.RemoteException;
import android.util.Log;
import com.qihoo360.i.Factory;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.loader2.mgr.IServiceConnection;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.base.ThreadUtils;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.JSONHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.utils.basic.ArrayMap;
import com.qq.e.comm.constants.ErrorCode;
import com.vivo.push.PushClientConstants;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Map;
import java.util.concurrent.Callable;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginServiceServer {
    private static final byte[] LOCKER = new byte[0];
    private static final String TAG = "PluginServiceServer";
    private static final int WHAT_ON_START_COMMAND = 1;
    private Method mAttachBaseContextMethod;
    private final Context mContext;
    final ArrayMap<Integer, ProcessRecord> mProcesses = new ArrayMap<>();
    final ArrayMap<IBinder, ArrayList<ConnectionBindRecord>> mServiceConnections = new ArrayMap<>();
    private final ArrayMap<ComponentName, ServiceRecord> mServicesByName = new ArrayMap<>();
    private final ArrayMap<Intent.FilterComparison, ServiceRecord> mServicesByIntent = new ArrayMap<>();
    private Handler mHandler = new Handler(Looper.getMainLooper()) { // from class: com.qihoo360.replugin.component.service.server.PluginServiceServer.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what != 1) {
                return;
            }
            Intent intent = (Intent) message.getData().getParcelable("intent");
            ServiceRecord serviceRecord = (ServiceRecord) message.obj;
            if (intent != null && serviceRecord != null) {
                serviceRecord.service.onStartCommand(intent, 0, 0);
            } else if (LogDebug.LOG) {
                LogDebug.e(LogDebug.PLUGIN_TAG, "pss.onStartCommand fail.");
            }
        }
    };
    private final Stub mStub = new Stub();

    public PluginServiceServer(Context context) {
        this.mContext = context;
    }

    ComponentName startServiceLocked(Intent intent, Messenger messenger) {
        Intent intentCloneIntentLocked = cloneIntentLocked(intent);
        ComponentName component = intentCloneIntentLocked.getComponent();
        ServiceRecord serviceRecordRetrieveServiceLocked = retrieveServiceLocked(intentCloneIntentLocked);
        if (serviceRecordRetrieveServiceLocked == null || !installServiceIfNeededLocked(serviceRecordRetrieveServiceLocked)) {
            return null;
        }
        serviceRecordRetrieveServiceLocked.startRequested = true;
        this.mServicesByName.put(component, serviceRecordRetrieveServiceLocked);
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.startService(): Start! in=" + intentCloneIntentLocked + "; sr=" + serviceRecordRetrieveServiceLocked);
        }
        Message messageObtainMessage = this.mHandler.obtainMessage(1);
        Bundle bundle = new Bundle();
        bundle.putParcelable("intent", intentCloneIntentLocked);
        messageObtainMessage.setData(bundle);
        messageObtainMessage.obj = serviceRecordRetrieveServiceLocked;
        this.mHandler.sendMessage(messageObtainMessage);
        return component;
    }

    int stopServiceLocked(Intent intent) {
        Intent intentCloneIntentLocked = cloneIntentLocked(intent);
        ServiceRecord serviceLocked = getServiceLocked(intentCloneIntentLocked);
        if (serviceLocked == null) {
            return 0;
        }
        serviceLocked.startRequested = false;
        recycleServiceIfNeededLocked(serviceLocked);
        if (!LogDebug.LOG) {
            return 1;
        }
        LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.stopService(): Stop! in=" + intentCloneIntentLocked + "; sr=" + serviceLocked);
        return 1;
    }

    int bindServiceLocked(Intent intent, IServiceConnection iServiceConnection, int i, Messenger messenger) {
        Intent intentCloneIntentLocked = cloneIntentLocked(intent);
        ComponentName component = intentCloneIntentLocked.getComponent();
        ProcessRecord processRecordRetrieveProcessRecordLocked = retrieveProcessRecordLocked(messenger);
        ServiceRecord serviceRecordRetrieveServiceLocked = retrieveServiceLocked(intentCloneIntentLocked);
        if (serviceRecordRetrieveServiceLocked == null || !installServiceIfNeededLocked(serviceRecordRetrieveServiceLocked)) {
            return 0;
        }
        ProcessBindRecord processBindRecordRetrieveAppBindingLocked = serviceRecordRetrieveServiceLocked.retrieveAppBindingLocked(intentCloneIntentLocked, processRecordRetrieveProcessRecordLocked);
        insertConnectionToRecords(serviceRecordRetrieveServiceLocked, processBindRecordRetrieveAppBindingLocked, iServiceConnection, i);
        if (processBindRecordRetrieveAppBindingLocked.intent.hasBound) {
            callConnectedMethodLocked(iServiceConnection, component, processBindRecordRetrieveAppBindingLocked.intent.binder);
        } else if (processBindRecordRetrieveAppBindingLocked.intent.apps.size() > 0) {
            IBinder iBinderOnBind = serviceRecordRetrieveServiceLocked.service.onBind(intentCloneIntentLocked);
            processBindRecordRetrieveAppBindingLocked.intent.hasBound = true;
            processBindRecordRetrieveAppBindingLocked.intent.binder = iBinderOnBind;
            if (iBinderOnBind != null) {
                callConnectedMethodLocked(iServiceConnection, component, iBinderOnBind);
            }
        }
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.bindService(): Bind! inb=" + processBindRecordRetrieveAppBindingLocked + "; fl=" + i + "; sr=" + serviceRecordRetrieveServiceLocked);
        }
        return 1;
    }

    private void insertConnectionToRecords(ServiceRecord serviceRecord, ProcessBindRecord processBindRecord, IServiceConnection iServiceConnection, int i) {
        ConnectionBindRecord connectionBindRecord = new ConnectionBindRecord(processBindRecord, iServiceConnection, i);
        IBinder iBinderAsBinder = iServiceConnection.asBinder();
        ArrayList<ConnectionBindRecord> arrayList = serviceRecord.connections.get(iBinderAsBinder);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            serviceRecord.connections.put(iBinderAsBinder, arrayList);
        }
        arrayList.add(connectionBindRecord);
        processBindRecord.connections.add(connectionBindRecord);
        processBindRecord.client.connections.add(connectionBindRecord);
        ArrayList<ConnectionBindRecord> arrayList2 = this.mServiceConnections.get(iBinderAsBinder);
        if (arrayList2 == null) {
            arrayList2 = new ArrayList<>();
            this.mServiceConnections.put(iBinderAsBinder, arrayList2);
        }
        arrayList2.add(connectionBindRecord);
    }

    boolean unbindServiceLocked(IServiceConnection iServiceConnection) {
        ArrayList<ConnectionBindRecord> arrayList = this.mServiceConnections.get(iServiceConnection.asBinder());
        if (arrayList == null) {
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.unbindService(): clist is null!");
            }
            return false;
        }
        while (arrayList.size() > 0) {
            ConnectionBindRecord connectionBindRecord = arrayList.get(0);
            removeConnectionLocked(connectionBindRecord);
            if (arrayList.size() > 0 && arrayList.get(0) == connectionBindRecord) {
                arrayList.remove(0);
            }
        }
        return true;
    }

    private void removeConnectionLocked(ConnectionBindRecord connectionBindRecord) {
        IBinder iBinderAsBinder = connectionBindRecord.conn.asBinder();
        ProcessBindRecord processBindRecord = connectionBindRecord.binding;
        ServiceRecord serviceRecord = processBindRecord.service;
        ArrayList<ConnectionBindRecord> arrayList = serviceRecord.connections.get(iBinderAsBinder);
        if (arrayList != null) {
            arrayList.remove(connectionBindRecord);
            if (arrayList.size() == 0) {
                serviceRecord.connections.remove(iBinderAsBinder);
            }
        }
        processBindRecord.connections.remove(connectionBindRecord);
        processBindRecord.client.connections.remove(connectionBindRecord);
        ArrayList<ConnectionBindRecord> arrayList2 = this.mServiceConnections.get(iBinderAsBinder);
        if (arrayList2 != null) {
            arrayList2.remove(connectionBindRecord);
            if (arrayList2.size() == 0) {
                this.mServiceConnections.remove(iBinderAsBinder);
            }
        }
        if (processBindRecord.connections.size() == 0) {
            processBindRecord.intent.apps.remove(processBindRecord.client);
        }
        if (connectionBindRecord.serviceDead) {
            return;
        }
        if (processBindRecord.intent.apps.size() == 0 && processBindRecord.intent.hasBound) {
            processBindRecord.intent.hasBound = false;
            serviceRecord.service.onUnbind(processBindRecord.intent.intent.getIntent());
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.removeConnectionLocked(): boundRef is 0, call onUnbind(), sr=" + serviceRecord);
            }
            if ((connectionBindRecord.flags & 1) != 0) {
                recycleServiceIfNeededLocked(serviceRecord);
                return;
            }
            return;
        }
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.removeConnectionLocked(): Not unbind, sr=" + serviceRecord);
        }
    }

    public IPluginServiceServer getService() {
        return this.mStub;
    }

    private Intent cloneIntentLocked(Intent intent) {
        return new Intent(intent);
    }

    private ServiceRecord getServiceLocked(Intent intent) {
        return this.mServicesByName.get(intent.getComponent());
    }

    private ServiceRecord retrieveServiceLocked(Intent intent) {
        ComponentName component = intent.getComponent();
        ServiceRecord serviceRecord = this.mServicesByName.get(component);
        if (serviceRecord != null) {
            return serviceRecord;
        }
        Intent.FilterComparison filterComparison = new Intent.FilterComparison(intent);
        ServiceRecord serviceRecord2 = this.mServicesByIntent.get(filterComparison);
        if (serviceRecord2 != null) {
            return serviceRecord2;
        }
        String packageName = component.getPackageName();
        String className = component.getClassName();
        if (!RePlugin.isPluginInstalled(packageName)) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psm.is: p n ex " + className);
            return null;
        }
        ComponentList componentListQueryPluginComponentList = Factory.queryPluginComponentList(packageName);
        if (componentListQueryPluginComponentList == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installServiceLocked(): Fetch Component List Error! pn=" + packageName);
            }
            return null;
        }
        ServiceInfo service = componentListQueryPluginComponentList.getService(component.getClassName());
        if (service == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installServiceLocked(): Not register! pn=" + packageName);
            }
            return null;
        }
        ServiceRecord serviceRecord3 = new ServiceRecord(component, filterComparison, service);
        this.mServicesByName.put(component, serviceRecord3);
        this.mServicesByIntent.put(filterComparison, serviceRecord3);
        return serviceRecord3;
    }

    private boolean installServiceIfNeededLocked(final ServiceRecord serviceRecord) {
        if (serviceRecord.service != null) {
            return true;
        }
        try {
            Boolean bool = (Boolean) ThreadUtils.syncToMainThread(new Callable<Boolean>() { // from class: com.qihoo360.replugin.component.service.server.PluginServiceServer.2
                /* JADX WARN: Can't rename method to resolve collision */
                @Override // java.util.concurrent.Callable
                public Boolean call() {
                    return Boolean.valueOf(PluginServiceServer.this.installServiceLocked(serviceRecord));
                }
            }, ErrorCode.UNKNOWN_ERROR);
            if (bool == null) {
                return false;
            }
            return bool.booleanValue();
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.e(LogDebug.PLUGIN_TAG, "pss.isinl e:", th);
            }
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean installServiceLocked(ServiceRecord serviceRecord) {
        Context contextQueryPluginContext = Factory.queryPluginContext(serviceRecord.plugin);
        if (contextQueryPluginContext == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "installServiceLocked(): Fetch Context Error! pn=" + serviceRecord.plugin);
            }
            return false;
        }
        ClassLoader classLoader = contextQueryPluginContext.getClassLoader();
        if (classLoader == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psm.is: cl n " + serviceRecord.className);
            return false;
        }
        try {
            Service service = (Service) classLoader.loadClass(serviceRecord.serviceInfo.name).newInstance();
            try {
                attachBaseContextLocked(service, contextQueryPluginContext);
                service.onCreate();
                serviceRecord.service = service;
                ComponentName pitComponentName = getPitComponentName();
                serviceRecord.pitComponentName = pitComponentName;
                startPitService(pitComponentName);
                return true;
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "psm.is: abc e", th);
                return false;
            }
        } catch (Throwable th2) {
            LogRelease.e(TAG, "isl: ni f " + serviceRecord.plugin, th2);
            return false;
        }
    }

    private void callConnectedMethodLocked(IServiceConnection iServiceConnection, ComponentName componentName, IBinder iBinder) {
        try {
            iServiceConnection.connected(componentName, iBinder);
        } catch (RemoteException e) {
            if (BuildConfig.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    private void recycleServiceIfNeededLocked(ServiceRecord serviceRecord) {
        if (serviceRecord.startRequested) {
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.recycleServiceIfNeededLocked(): Not Recycle because startRequested is true! sr=" + serviceRecord);
                return;
            }
            return;
        }
        if (serviceRecord.hasAutoCreateConnections()) {
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.recycleServiceIfNeededLocked(): Not Recycle because bindingCount > 0! sr=" + serviceRecord);
                return;
            }
            return;
        }
        recycleServiceLocked(serviceRecord);
    }

    private void recycleServiceLocked(ServiceRecord serviceRecord) {
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "PSM.recycleServiceLocked(): Recycle Now!");
        }
        for (int size = serviceRecord.connections.size() - 1; size >= 0; size--) {
            ArrayList<ConnectionBindRecord> arrayListValueAt = serviceRecord.connections.valueAt(size);
            for (int i = 0; i < arrayListValueAt.size(); i++) {
                ConnectionBindRecord connectionBindRecord = arrayListValueAt.get(i);
                connectionBindRecord.serviceDead = true;
                callConnectedMethodLocked(connectionBindRecord.conn, serviceRecord.name, null);
            }
        }
        this.mServicesByName.remove(serviceRecord.name);
        this.mServicesByIntent.remove(serviceRecord.intent);
        if (serviceRecord.bindings.size() > 0) {
            serviceRecord.bindings.clear();
        }
        serviceRecord.service.onDestroy();
        ComponentName pitComponentName = getPitComponentName();
        serviceRecord.pitComponentName = pitComponentName;
        stopPitService(pitComponentName);
    }

    private void attachBaseContextLocked(ContextWrapper contextWrapper, Context context) throws IllegalAccessException, NoSuchFieldException, NoSuchMethodException, InvocationTargetException {
        if (this.mAttachBaseContextMethod == null) {
            Method declaredMethod = ContextWrapper.class.getDeclaredMethod("attachBaseContext", Context.class);
            this.mAttachBaseContextMethod = declaredMethod;
            declaredMethod.setAccessible(true);
        }
        this.mAttachBaseContextMethod.invoke(contextWrapper, context);
        Field declaredField = Service.class.getDeclaredField("mApplication");
        if (declaredField != null) {
            declaredField.setAccessible(true);
            declaredField.set(contextWrapper, context.getApplicationContext());
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    class Stub extends IPluginServiceServer.Stub {
        Stub() {
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public ComponentName startService(Intent intent, Messenger messenger) throws RemoteException {
            ComponentName componentNameStartServiceLocked;
            synchronized (PluginServiceServer.LOCKER) {
                componentNameStartServiceLocked = PluginServiceServer.this.startServiceLocked(intent, messenger);
            }
            return componentNameStartServiceLocked;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public int stopService(Intent intent, Messenger messenger) throws RemoteException {
            int iStopServiceLocked;
            synchronized (PluginServiceServer.LOCKER) {
                iStopServiceLocked = PluginServiceServer.this.stopServiceLocked(intent);
            }
            return iStopServiceLocked;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public int bindService(Intent intent, IServiceConnection iServiceConnection, int i, Messenger messenger) throws RemoteException {
            int iBindServiceLocked;
            synchronized (PluginServiceServer.LOCKER) {
                iBindServiceLocked = PluginServiceServer.this.bindServiceLocked(intent, iServiceConnection, i, messenger);
            }
            return iBindServiceLocked;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public boolean unbindService(IServiceConnection iServiceConnection) throws RemoteException {
            boolean zUnbindServiceLocked;
            synchronized (PluginServiceServer.LOCKER) {
                zUnbindServiceLocked = PluginServiceServer.this.unbindServiceLocked(iServiceConnection);
            }
            return zUnbindServiceLocked;
        }

        @Override // com.qihoo360.replugin.component.service.server.IPluginServiceServer
        public String dump() throws RemoteException {
            String strDump;
            synchronized (PluginServiceServer.LOCKER) {
                strDump = PluginServiceServer.this.dump();
            }
            return strDump;
        }
    }

    private ProcessRecord retrieveProcessRecordLocked(Messenger messenger) {
        int callingPid = Binder.getCallingPid();
        ProcessRecord processRecord = this.mProcesses.get(Integer.valueOf(callingPid));
        if (processRecord != null) {
            return processRecord;
        }
        ProcessRecord processRecord2 = new ProcessRecord(callingPid, messenger);
        this.mProcesses.put(Integer.valueOf(callingPid), processRecord2);
        return processRecord2;
    }

    private ComponentName getPitComponentName() {
        return PluginPitService.makeComponentName(this.mContext, PluginClientHelper.getProcessInt(IPC.getCurrentProcessName()).intValue());
    }

    private void startPitService(ComponentName componentName) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "startPitService: Start " + componentName);
        }
        Intent intent = new Intent();
        intent.setComponent(componentName);
        try {
            this.mContext.startService(intent);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void stopPitService(ComponentName componentName) {
        if (LogDebug.LOG) {
            LogDebug.d(TAG, "stopPitService: Stop " + componentName);
        }
        Intent intent = new Intent();
        intent.setComponent(componentName);
        try {
            this.mContext.stopService(intent);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String dump() {
        ArrayMap<ComponentName, ServiceRecord> arrayMap = this.mServicesByName;
        if (arrayMap == null || arrayMap.isEmpty()) {
            return null;
        }
        JSONArray jSONArray = new JSONArray();
        for (Map.Entry<ComponentName, ServiceRecord> entry : this.mServicesByName.entrySet()) {
            ComponentName key = entry.getKey();
            ServiceRecord value = entry.getValue();
            JSONObject jSONObject = new JSONObject();
            JSONHelper.putNoThrows(jSONObject, PushClientConstants.TAG_CLASS_NAME, key.getClassName());
            JSONHelper.putNoThrows(jSONObject, IPluginManager.KEY_PROCESS, value.getServiceInfo().processName);
            JSONHelper.putNoThrows(jSONObject, IPluginManager.KEY_PLUGIN, value.getPlugin());
            JSONHelper.putNoThrows(jSONObject, "pitClassName", value.getPitComponentName().getClassName());
            jSONArray.put(jSONObject);
        }
        return jSONArray.toString();
    }
}
