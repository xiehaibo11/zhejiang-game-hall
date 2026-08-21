package com.qihoo360.mobilesafe.svcmanager;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Binder;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.SystemClock;
import android.util.Log;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.mobilesafe.svcmanager.IServiceChannel;
import com.qihoo360.replugin.IBinderGetter;
import com.qihoo360.replugin.base.IPC;
import java.lang.ref.SoftReference;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class QihooServiceManager {
    private static final boolean DEBUG;
    private static final IBinder PROCESS_DEATH_AGENT;
    private static final String TAG;
    private static Map<String, SoftReference<IBinder>> sCache;
    private static IServiceChannel sServerChannel;
    private static Uri sServiceChannelUri;

    static {
        boolean z = BuildConfig.DEBUG;
        DEBUG = z;
        TAG = z ? "QihooServiceManager" : QihooServiceManager.class.getSimpleName();
        sServiceChannelUri = null;
        PROCESS_DEATH_AGENT = new Binder();
        sCache = Collections.synchronizedMap(new HashMap());
    }

    public static IBinder getService(Context context, String str) {
        IBinder service;
        if (DEBUG) {
            Log.d(TAG, "[getService] begin = " + SystemClock.elapsedRealtime());
        }
        SoftReference<IBinder> softReference = sCache.get(str);
        if (softReference != null) {
            service = softReference.get();
            if (service != null) {
                if (service.isBinderAlive() && service.pingBinder()) {
                    if (DEBUG) {
                        Log.d(TAG, "[getService] Found service from cache: " + str);
                        Log.d(TAG, "[getService] end = " + SystemClock.elapsedRealtime());
                    }
                    return service;
                }
                sCache.remove(str);
            }
        } else {
            service = null;
        }
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel == null) {
            return null;
        }
        try {
            service = serverChannel.getService(str);
            if (service != null) {
                if (DEBUG) {
                    Log.d(TAG, "[getService] Found service from remote service channel: " + str);
                }
                service = ServiceWrapper.factory(context, str, service);
                sCache.put(str, new SoftReference<>(service));
            }
        } catch (RemoteException e) {
            if (DEBUG) {
                Log.e(TAG, "[getService] Error when getting service from service channel...", e);
            }
        }
        if (DEBUG) {
            Log.d(TAG, "[getService] end = " + SystemClock.elapsedRealtime());
        }
        return service;
    }

    public static boolean addService(Context context, String str, IBinder iBinder) {
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel == null) {
            return false;
        }
        try {
            serverChannel.addService(str, iBinder);
            return true;
        } catch (RemoteException e) {
            if (!DEBUG) {
                return true;
            }
            Log.e(TAG, "Add service failed...", e);
            return true;
        }
    }

    public static boolean addService(Context context, String str, IBinderGetter iBinderGetter) {
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel == null) {
            return false;
        }
        try {
            serverChannel.addServiceDelayed(str, iBinderGetter);
            return true;
        } catch (RemoteException e) {
            if (!DEBUG) {
                return true;
            }
            Log.e(TAG, "Add service failed...", e);
            return true;
        }
    }

    public static boolean removeService(Context context, String str, IBinder iBinder) {
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel == null) {
            return false;
        }
        try {
            serverChannel.removeService(str);
            return true;
        } catch (RemoteException e) {
            if (!DEBUG) {
                return true;
            }
            Log.e(TAG, "Remove service failed...", e);
            return true;
        }
    }

    public static IBinder getPluginService(Context context, String str, String str2) {
        IBinder service = getService(context, str2);
        if (service != null) {
            return service;
        }
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel == null) {
            return null;
        }
        try {
            service = serverChannel.getPluginService(str, str2, PROCESS_DEATH_AGENT);
            PluginServiceReferenceManager.onPluginServiceObtained(context, str, str2, service);
            return service;
        } catch (RemoteException e) {
            if (!DEBUG) {
                return service;
            }
            Log.e(TAG, "[getPluginService] Error when getting plugin service from service channel...", e);
            return service;
        }
    }

    static IServiceChannel getServerChannel(Context context) {
        Throwable th;
        Cursor cursorQuery;
        IServiceChannel iServiceChannel;
        if (DEBUG) {
            Log.d(TAG, "[getServerChannel] begin = " + SystemClock.elapsedRealtime());
        }
        IServiceChannel iServiceChannel2 = sServerChannel;
        if (iServiceChannel2 != null && iServiceChannel2.asBinder().isBinderAlive() && sServerChannel.asBinder().pingBinder()) {
            return sServerChannel;
        }
        if (IPC.isPersistentProcess()) {
            return ServiceChannelImpl.sServiceChannelImpl;
        }
        Cursor cursor = null;
        IServiceChannel iServiceChannelAsInterface = null;
        try {
            if (context == null) {
                return null;
            }
            try {
                cursorQuery = context.getContentResolver().query(getServiceChannelUri(), null, null, null, null);
            } catch (Exception e) {
                e = e;
                iServiceChannel = null;
            }
            try {
                iServiceChannelAsInterface = IServiceChannel.Stub.asInterface(ServiceChannelCursor.getBinder(cursorQuery));
                sServerChannel = iServiceChannelAsInterface;
                if (cursorQuery != null) {
                    try {
                        cursorQuery.close();
                    } catch (Exception e2) {
                        if (DEBUG) {
                            Log.e(TAG, "Error closing cursor: ", e2);
                        }
                    }
                }
            } catch (Exception e3) {
                e = e3;
                IServiceChannel iServiceChannel3 = iServiceChannelAsInterface;
                cursor = cursorQuery;
                iServiceChannel = iServiceChannel3;
                if (DEBUG) {
                    Log.e(TAG, "Error fetching service manager binder object using provider: ", e);
                }
                if (cursor != null) {
                    try {
                        cursor.close();
                    } catch (Exception e4) {
                        if (DEBUG) {
                            Log.e(TAG, "Error closing cursor: ", e4);
                        }
                    }
                }
                iServiceChannelAsInterface = iServiceChannel;
            } catch (Throwable th2) {
                th = th2;
                if (cursorQuery != null) {
                    try {
                        cursorQuery.close();
                    } catch (Exception e5) {
                        if (DEBUG) {
                            Log.e(TAG, "Error closing cursor: ", e5);
                        }
                    }
                }
                throw th;
            }
            if (DEBUG) {
                Log.d(TAG, "[getServerChannel] end = " + SystemClock.elapsedRealtime());
            }
            return iServiceChannelAsInterface;
        } catch (Throwable th3) {
            th = th3;
            cursorQuery = null;
        }
    }

    static Uri getServiceChannelUri() {
        if (sServiceChannelUri == null) {
            sServiceChannelUri = Uri.parse("content://" + ServiceProvider.AUTHORITY + "/" + ServiceProvider.PATH_SERVER_CHANNEL);
        }
        return sServiceChannelUri;
    }

    static void onPluginServiceReleased(Context context, String str, String str2) {
        IServiceChannel serverChannel = getServerChannel(context);
        if (serverChannel != null) {
            try {
                serverChannel.onPluginServiceRefReleased(str, str2);
            } catch (RemoteException e) {
                if (DEBUG) {
                    Log.d(TAG, "Error releaseing plugin service reference: ", e);
                }
            }
        }
    }
}
