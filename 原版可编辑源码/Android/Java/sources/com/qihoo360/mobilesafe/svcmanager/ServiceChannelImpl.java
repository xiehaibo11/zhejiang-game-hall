package com.qihoo360.mobilesafe.svcmanager;

import android.database.MatrixCursor;
import android.os.DeadObjectException;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.mobilesafe.svcmanager.IServiceChannel;
import com.qihoo360.replugin.IBinderGetter;
import java.util.concurrent.ConcurrentHashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ServiceChannelImpl {
    private static final boolean DEBUG;
    private static final String TAG;
    private static ConcurrentHashMap<String, IBinderGetter> sDelayedServices;
    static MatrixCursor sServiceChannelCursor;
    static IServiceChannel.Stub sServiceChannelImpl;
    private static ConcurrentHashMap<String, IBinder> sServices;

    ServiceChannelImpl() {
    }

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "ServiceChannelImpl" : ServiceChannelImpl.class.getSimpleName();
        sServices = new ConcurrentHashMap<>();
        sDelayedServices = new ConcurrentHashMap<>();
        IServiceChannel.Stub stub = new IServiceChannel.Stub() {
            @Override
            public IBinder getService(String str) throws RemoteException {
                if (ServiceChannelImpl.DEBUG) {
                    Log.d(ServiceChannelImpl.TAG, "[getService] --> serviceName = " + str);
                }
                if (!TextUtils.isEmpty(str)) {
                    IBinder iBinder = (IBinder) ServiceChannelImpl.sServices.get(str);
                    if (iBinder == null) {
                        return fetchFromDelayedMap(str);
                    }
                    if (iBinder.isBinderAlive() && iBinder.pingBinder()) {
                        return iBinder;
                    }
                    if (ServiceChannelImpl.DEBUG) {
                        Log.d(ServiceChannelImpl.TAG, "[getService] --> service died:" + str);
                    }
                    ServiceChannelImpl.sServices.remove(str);
                    return null;
                }
                throw new IllegalArgumentException();
            }

            private IBinder fetchFromDelayedMap(String str) {
                IBinderGetter iBinderGetter = (IBinderGetter) ServiceChannelImpl.sDelayedServices.get(str);
                if (iBinderGetter == null) {
                    return null;
                }
                try {
                    IBinder iBinder = iBinderGetter.get();
                    addService(str, iBinder);
                    return iBinder;
                } catch (DeadObjectException e) {
                    if (ServiceChannelImpl.DEBUG) {
                        e.printStackTrace();
                    }
                    ServiceChannelImpl.sDelayedServices.remove(str);
                    return null;
                } catch (RemoteException e2) {
                    if (ServiceChannelImpl.DEBUG) {
                        e2.printStackTrace();
                    }
                    return null;
                }
            }

            @Override
            public void addService(String str, IBinder iBinder) throws RemoteException {
                ServiceChannelImpl.sServices.put(str, iBinder);
            }

            @Override
            public void addServiceDelayed(String str, IBinderGetter iBinderGetter) throws RemoteException {
                ServiceChannelImpl.sDelayedServices.put(str, iBinderGetter);
            }

            @Override
            public void removeService(String str) throws RemoteException {
                ServiceChannelImpl.sServices.remove(str);
            }

            @Override
            public IBinder getPluginService(String str, String str2, IBinder iBinder) throws RemoteException {
                return PluginServiceManager.getPluginService(str, str2, getCallingPid(), iBinder);
            }

            @Override
            public void onPluginServiceRefReleased(String str, String str2) throws RemoteException {
                PluginServiceManager.onRefReleased(str, str2, getCallingPid());
            }
        };
        sServiceChannelImpl = stub;
        sServiceChannelCursor = ServiceChannelCursor.makeCursor(stub);
    }
}
