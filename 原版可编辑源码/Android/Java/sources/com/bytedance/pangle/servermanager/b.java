package com.bytedance.pangle.servermanager;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.content.pm.ProviderInfo;
import android.net.Uri;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.RemoteException;
import com.bytedance.pangle.Zeus;
import com.bytedance.pangle.c;
import com.bytedance.pangle.d;
import com.bytedance.pangle.log.ZeusLogger;
import com.bytedance.pangle.service.client.ServiceManagerNative;
import com.qihoo360.replugin.RePlugin;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

public final class b {
    private static final Object a = new Object();
    private static final Object b = new Object();
    private static final Object c = new Object();
    private static final Map<String, Boolean> d = new ConcurrentHashMap();
    private static final Map<String, d> e = new ConcurrentHashMap();
    private static c f;

    public static d a(String str) {
        Boolean bool = d.get(str);
        if (bool == null || !bool.booleanValue()) {
            e.remove(str);
        }
        if (e.get(str) == null) {
            synchronized (b) {
                d dVar = (d) a("service", str);
                if (dVar == null) {
                    ZeusLogger.errReport(ZeusLogger.TAG_SERVER, "getServiceManager failed!!!");
                    return null;
                }
                e.put(str, dVar);
            }
        }
        return e.get(str);
    }

    public static c a() {
        Boolean bool = d.get(RePlugin.PLUGIN_NAME_MAIN);
        if (bool == null || !bool.booleanValue()) {
            f = null;
        }
        if (f == null) {
            synchronized (c) {
                c cVar = (c) a("package", RePlugin.PLUGIN_NAME_MAIN);
                if (cVar == null) {
                    ZeusLogger.errReport(ZeusLogger.TAG_SERVER, "getPackageManager failed!!!");
                    return null;
                }
                f = cVar;
            }
        }
        return f;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x008d  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0095 A[Catch: RemoteException -> 0x009a, TRY_LEAVE, TryCatch #0 {RemoteException -> 0x009a, blocks: (B:15:0x0056, B:30:0x0090, B:32:0x0095, B:20:0x0077, B:23:0x0081), top: B:41:0x0056 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static IInterface a(String str, final String str2) {
        final IBinder iBinder;
        if (!Zeus.hasInit()) {
            throw new RuntimeException("generateServerManager 请先初始化Zeus, processName:".concat(String.valueOf(str2)));
        }
        ProviderInfo providerInfo = Zeus.getServerManagerHashMap().get(str2);
        if (providerInfo == null) {
            throw new RuntimeException("宿主中没有找对对应进程的serverManager ".concat(String.valueOf(str2)));
        }
        Bundle bundleCall = Zeus.getAppApplication().getContentResolver().call(Uri.parse("content://" + providerInfo.authority), "query_binder", str, (Bundle) null);
        if (bundleCall != null) {
            bundleCall.setClassLoader(AbsServerManager.class.getClassLoader());
            a aVar = (a) bundleCall.getParcelable("binder");
            iBinder = aVar != null ? aVar.a : null;
        }
        if (iBinder != null && iBinder.isBinderAlive()) {
            try {
                byte b2 = 0;
                iBinder.linkToDeath(new IBinder.DeathRecipient() {
                    @Override
                    public final void binderDied() {
                        b.d.put(str2, Boolean.FALSE);
                        ZeusLogger.w(ZeusLogger.TAG_SERVER, "generateServerManager binderDied.");
                        HashMap<ServiceConnection, HashSet<ComponentName>> map = ServiceManagerNative.getInstance().process2ConnAndService.get(iBinder);
                        for (ServiceConnection serviceConnection : map.keySet()) {
                            Iterator<ComponentName> it = map.get(serviceConnection).iterator();
                            while (it.hasNext()) {
                                serviceConnection.onServiceDisconnected(it.next());
                            }
                        }
                    }
                }, 0);
                d.put(str2, Boolean.TRUE);
                int iHashCode = str.hashCode();
                if (iHashCode != -807062458) {
                    b2 = (iHashCode == 1984153269 && str.equals("service")) ? (byte) 1 : (byte) -1;
                    if (b2 != 0) {
                        return c.a.a(iBinder);
                    }
                    if (b2 == 1) {
                        return d.a.a(iBinder);
                    }
                } else {
                    if (str.equals("package")) {
                    }
                    if (b2 != 0) {
                    }
                }
            } catch (RemoteException e2) {
                ZeusLogger.errReport(ZeusLogger.TAG_SERVER, "generateServerManager failed.", e2);
            }
        }
        return null;
    }
}
