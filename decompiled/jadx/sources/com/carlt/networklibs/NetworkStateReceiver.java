package com.carlt.networklibs;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import com.carlt.networklibs.annotation.NetWork;
import com.carlt.networklibs.utils.Constants;
import com.carlt.networklibs.utils.NetworkUtils;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class NetworkStateReceiver extends BroadcastReceiver {
    private NetType netType = NetType.NONE;
    private Map<Object, List<MethodManager>> networkList = new HashMap();

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent == null || intent.getAction() == null) {
            Log.e(Constants.LOG_TAG, "intent or intent.getAction() is null");
        } else if (intent.getAction().equalsIgnoreCase("android.net.conn.CONNECTIVITY_CHANGE")) {
            NetType netType = NetworkUtils.getNetType();
            this.netType = netType;
            post(netType);
        }
    }

    private void post(NetType netType) {
        for (Object obj : this.networkList.keySet()) {
            List<MethodManager> list = this.networkList.get(obj);
            if (list != null) {
                for (MethodManager methodManager : list) {
                    if (methodManager.getType().isAssignableFrom(netType.getClass())) {
                        int i = AnonymousClass1.$SwitchMap$com$carlt$networklibs$NetType[methodManager.getNetType().ordinal()];
                        if (i == 1) {
                            invoke(methodManager, obj, netType);
                        } else if (i != 2) {
                            if (i == 3) {
                                if (netType == NetType.CMWAP || netType == NetType.NONE) {
                                    invoke(methodManager, obj, netType);
                                }
                            } else if (i == 4 && (netType == NetType.CMNET || netType == NetType.NONE)) {
                                invoke(methodManager, obj, netType);
                            }
                        } else if (netType == NetType.WIFI || netType == NetType.NONE) {
                            invoke(methodManager, obj, netType);
                        }
                    }
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.carlt.networklibs.NetworkStateReceiver$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$carlt$networklibs$NetType;

        static {
            int[] iArr = new int[NetType.values().length];
            $SwitchMap$com$carlt$networklibs$NetType = iArr;
            try {
                iArr[NetType.AUTO.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.WIFI.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.CMWAP.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.CMNET.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$carlt$networklibs$NetType[NetType.NONE.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    private void invoke(MethodManager methodManager, Object obj, NetType netType) {
        try {
            methodManager.getMethod().invoke(obj, netType);
        } catch (IllegalAccessException e) {
            e.printStackTrace();
        } catch (InvocationTargetException e2) {
            e2.printStackTrace();
        }
    }

    public void registerObserver(Object obj) {
        if (this.networkList.get(obj) == null) {
            this.networkList.put(obj, findAnnotation(obj));
        }
    }

    private List<MethodManager> findAnnotation(Object obj) {
        ArrayList arrayList = new ArrayList();
        for (Method method : obj.getClass().getMethods()) {
            NetWork netWork = (NetWork) method.getAnnotation(NetWork.class);
            if (netWork != null) {
                if (!method.getGenericReturnType().toString().equals("void")) {
                    throw new RuntimeException(method.getName() + "Method return must be void");
                }
                Class<?>[] parameterTypes = method.getParameterTypes();
                if (parameterTypes.length != 1) {
                    throw new RuntimeException(method.getName() + "Method can only have one parameter");
                }
                arrayList.add(new MethodManager(parameterTypes[0], netWork.netType(), method));
            }
        }
        return arrayList;
    }

    public void unRegisterObserver(Object obj) {
        if (this.networkList.isEmpty()) {
            return;
        }
        this.networkList.remove(obj);
    }

    public void unRegisterAllObserver() {
        if (!this.networkList.isEmpty()) {
            this.networkList.clear();
        }
        NetworkManager.getInstance().getApplication().unregisterReceiver(this);
        this.networkList = null;
    }
}
