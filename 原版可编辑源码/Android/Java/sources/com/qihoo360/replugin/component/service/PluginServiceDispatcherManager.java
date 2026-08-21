package com.qihoo360.replugin.component.service;

import android.content.Context;
import android.content.ServiceConnection;
import android.os.Handler;
import android.util.Log;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.utils.basic.ArrayMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceDispatcherManager {
    private static final byte[] SERVICES_LOCKER = new byte[0];
    private static final String TAG = "PSDM";
    private ArrayMap<Context, ArrayMap<ServiceConnection, ServiceDispatcher>> mServices = new ArrayMap<>();
    private ArrayMap<Context, ArrayMap<ServiceConnection, ServiceDispatcher>> mUnboundServices = new ArrayMap<>();

    public ServiceDispatcher get(ServiceConnection serviceConnection, Context context, Handler handler, int i, int i2) {
        ServiceDispatcher serviceDispatcher;
        synchronized (SERVICES_LOCKER) {
            ArrayMap<ServiceConnection, ServiceDispatcher> arrayMap = this.mServices.get(context);
            serviceDispatcher = arrayMap != null ? arrayMap.get(serviceConnection) : null;
            if (serviceDispatcher == null) {
                serviceDispatcher = new ServiceDispatcher(serviceConnection, context, handler, i, i2);
                if (arrayMap == null) {
                    arrayMap = new ArrayMap<>();
                    this.mServices.put(context, arrayMap);
                }
                arrayMap.put(serviceConnection, serviceDispatcher);
            } else {
                serviceDispatcher.validate(context, handler);
            }
        }
        return serviceDispatcher;
    }

    public ServiceDispatcher forget(Context context, ServiceConnection serviceConnection) {
        ServiceDispatcher serviceDispatcher;
        ServiceDispatcher serviceDispatcher2;
        synchronized (SERVICES_LOCKER) {
            ArrayMap<ServiceConnection, ServiceDispatcher> arrayMap = this.mServices.get(context);
            if (arrayMap != null && (serviceDispatcher2 = arrayMap.get(serviceConnection)) != null) {
                arrayMap.remove(serviceConnection);
                serviceDispatcher2.doForget();
                if (arrayMap.size() == 0) {
                    this.mServices.remove(context);
                }
                if ((serviceDispatcher2.getFlags() & 2) != 0) {
                    ArrayMap<ServiceConnection, ServiceDispatcher> arrayMap2 = this.mUnboundServices.get(context);
                    if (arrayMap2 == null) {
                        arrayMap2 = new ArrayMap<>();
                        this.mUnboundServices.put(context, arrayMap2);
                    }
                    IllegalArgumentException illegalArgumentException = new IllegalArgumentException("Originally unbound here:");
                    illegalArgumentException.fillInStackTrace();
                    serviceDispatcher2.setUnbindLocation(illegalArgumentException);
                    arrayMap2.put(serviceConnection, serviceDispatcher2);
                }
                return serviceDispatcher2;
            }
            ArrayMap<ServiceConnection, ServiceDispatcher> arrayMap3 = this.mUnboundServices.get(context);
            if (arrayMap3 != null && (serviceDispatcher = arrayMap3.get(serviceConnection)) != null) {
                IllegalArgumentException illegalArgumentException2 = new IllegalArgumentException("Unbinding Service " + serviceConnection + " that was already unbound", serviceDispatcher.getUnbindLocation());
                if (LogDebug.LOG) {
                    Log.e(TAG, "forgetServiceDispatcher(): Unbind Error!", illegalArgumentException2);
                }
                return null;
            }
            if (context == null) {
                IllegalStateException illegalStateException = new IllegalStateException("Unbinding Service " + serviceConnection + " from Context that is no longer in use");
                if (LogDebug.LOG) {
                    Log.e(TAG, "forgetServiceDispatcher(): Unbind Error!", illegalStateException);
                }
                return null;
            }
            IllegalArgumentException illegalArgumentException3 = new IllegalArgumentException("Service not registered: " + serviceConnection);
            if (LogDebug.LOG) {
                Log.e(TAG, "forgetServiceDispatcher(): Unbind Error!", illegalArgumentException3);
            }
            return null;
        }
    }
}
