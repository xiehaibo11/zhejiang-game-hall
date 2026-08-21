package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.ymnsdk.entity.PluginConfig;
import com.bianfeng.ymnsdk.entity.PluginLocalState;
import com.bianfeng.ymnsdk.feature.YmnPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class c {
    private static HashMap<String, YmnPluginWrapper> a = new HashMap<>();
    private static volatile boolean b = false;
    private static YmnCallback c;

    public static void a(YmnCallback ymnCallback) {
        c = ymnCallback;
    }

    public static void b(Context context) {
        if (!b) {
            b = true;
            b.a(context);
            c(context);
        }
        a.a(context, a);
        a(context);
        d(context);
    }

    private static void c(Context context) {
        a(b.b(context));
    }

    private static void d(Context context) {
        PluginLocalState pluginLocalStateD = d.d(context);
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking() && ymnPluginWrapper.matchEntrance(context) && ymnPluginWrapper.canDoInit()) {
                PluginConfig.PluginInfo info = pluginLocalStateD.getInfo(ymnPluginWrapper);
                if (info != null) {
                    ymnPluginWrapper.setParams(info.getParams());
                    ymnPluginWrapper.setCfgs(info.getCfg_detail());
                }
                ymnPluginWrapper.registCallback(c);
                try {
                    ymnPluginWrapper.onInit(context);
                } catch (Exception e) {
                    e.printStackTrace();
                    Logger.e(ymnPluginWrapper.getPluginName() + "初始化出问题了,版本为" + ymnPluginWrapper.getPluginVersion());
                }
                a("AfterDoInit", ymnPluginWrapper);
            }
        }
    }

    public static void e() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onStart();
            }
        }
    }

    public static void f() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onStop();
            }
        }
    }

    private static void a(List<YmnPluginWrapper> list) {
        if (list == null || list.isEmpty()) {
            return;
        }
        for (YmnPluginWrapper ymnPluginWrapper : list) {
            a.put(YmnPlugin.b.a(ymnPluginWrapper), ymnPluginWrapper);
        }
    }

    public static void c() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onRestart();
            }
        }
    }

    private static void a(Context context) {
        PluginLocalState pluginLocalStateD = d.d(context);
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (!ymnPluginWrapper.isCheckedState()) {
                ymnPluginWrapper.checkState(pluginLocalStateD);
                a("AfterCheckState", ymnPluginWrapper);
            }
        }
    }

    private static void a(String str, YmnPluginWrapper ymnPluginWrapper) {
        Logger.dRich(str + ":" + ymnPluginWrapper.toString());
    }

    public static boolean a(String str) {
        Logger.d(String.format("isSupportFunction %s", str));
        Iterator<YmnPluginWrapper> it = a.values().iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            YmnPluginWrapper next = it.next();
            if (next.isSupportFunction(str)) {
                Logger.e(String.format("插件 %s", next.getPluginName()));
                if (next.isWorking()) {
                    return true;
                }
                a(next);
            }
        }
        return false;
    }

    public static String b(String str, LinkedHashMap<String, String> linkedHashMap) {
        Logger.d(String.format("callFunctionWithResult %s", str));
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                String strCallFunctionWithResult = ymnPluginWrapper.callFunctionWithResult(str, linkedHashMap);
                if (strCallFunctionWithResult != null) {
                    return strCallFunctionWithResult;
                }
            } else if (ymnPluginWrapper.isSupportFunction(str)) {
                a(ymnPluginWrapper);
            }
        }
        return null;
    }

    public static void d() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onResume();
            }
        }
    }

    public static void a(String str, LinkedHashMap<String, String> linkedHashMap) {
        Logger.d(String.format("callFunction %s", str));
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.callFunction(str, linkedHashMap);
            } else if (ymnPluginWrapper.isSupportFunction(str)) {
                a(ymnPluginWrapper);
            }
        }
    }

    public static String b(String str, String... strArr) {
        String strInited;
        Logger.d(String.format("callFunctionWithResult %s", str));
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                if (str.contains("plugin_init") && str.contains(ymnPluginWrapper.getPluginName()) && (strInited = ymnPluginWrapper.inited()) != null) {
                    return strInited;
                }
                String strCallFunctionWithResult = ymnPluginWrapper.callFunctionWithResult(str, strArr);
                if (strCallFunctionWithResult != null) {
                    return strCallFunctionWithResult;
                }
            } else if (ymnPluginWrapper.isSupportFunction(str)) {
                a(ymnPluginWrapper);
            }
        }
        return null;
    }

    public static void a(String str, String... strArr) {
        Logger.d(String.format("callFunction %s", str));
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.callFunction(str, strArr);
            } else if (ymnPluginWrapper.isSupportFunction(str)) {
                a(ymnPluginWrapper);
            }
        }
    }

    public static void a(YmnPluginWrapper ymnPluginWrapper) {
        d.a(new f(String.format("%s插件未开启，请检查网络及远程配置", ymnPluginWrapper.getPluginName()))).a();
    }

    public static void b() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onPause();
            }
        }
    }

    public static void a(boolean z) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.setDebugMode(z);
            }
        }
    }

    public static void a(Activity activity) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                try {
                    ymnPluginWrapper.onCreate(activity);
                } catch (Exception unused) {
                    Logger.e("onCreate 方法出异常 插件名：" + ymnPluginWrapper.getPluginName() + "-- 插件版本：" + ymnPluginWrapper.getSdkVersion());
                }
            }
        }
    }

    public static void a(int i, String[] strArr, int[] iArr) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onRequestPermissionsResult(i, strArr, iArr);
            }
        }
    }

    public static void a(boolean z, Activity activity) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onWindowFocusChanged(z, activity);
            }
        }
    }

    public static void a() {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onDestroy();
            }
        }
    }

    public static void a(Intent intent) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onNewIntent(intent);
            }
        }
    }

    public static void a(int i, int i2, Intent intent) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onActivityResult(i, i2, intent);
            }
        }
    }

    public static void a(Map<String, String> map, String str) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking() && ymnPluginWrapper.getPluginName().equalsIgnoreCase(str)) {
                Logger.i("onLogin==" + str);
                ymnPluginWrapper.onLogin(map);
            }
        }
    }

    public static void a(Map<String, String> map) {
        for (YmnPluginWrapper ymnPluginWrapper : a.values()) {
            if (ymnPluginWrapper.isWorking()) {
                ymnPluginWrapper.onPay(map);
            }
        }
    }
}
