package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import com.bianfeng.ymnsdk.entity.PluginConfig;
import com.bianfeng.ymnsdk.entity.PluginLocalState;
import com.bianfeng.ymnsdk.feature.YmnPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class c {
    private static HashMap<String, YmnPluginWrapper> a = new HashMap<>();
    private static volatile boolean b = false;
    private static YmnCallback c;

    public static void a(YmnCallback callback) {
        c = callback;
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
        List<YmnPluginWrapper> list = b.b(context);
        a(list);
    }

    private static void a(List<YmnPluginWrapper> items) {
        if (items != null && !items.isEmpty()) {
            for (YmnPluginWrapper plugin : items) {
                a.put(YmnPlugin.b.a(plugin), plugin);
            }
        }
    }

    private static void a(Context context) {
        PluginLocalState local = d.d(context);
        for (YmnPluginWrapper plugin : a.values()) {
            if (!plugin.isCheckedState()) {
                plugin.checkState(local);
                a("AfterCheckState", plugin);
            }
        }
    }

    private static void a(String step, YmnPluginWrapper plugin) {
        Logger.dRich(step + Constants.COLON_SEPARATOR + plugin.toString());
    }

    public static boolean a(String functionName) {
        Logger.d(String.format("isSupportFunction %s", functionName));
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isSupportFunction(functionName)) {
                Logger.e(String.format("插件 %s", plugin.getPluginName()));
                if (plugin.isWorking()) {
                    return true;
                }
                a(plugin);
                return false;
            }
        }
        return false;
    }

    public static void a(String functionName, LinkedHashMap<String, String> data) {
        Logger.d(String.format("callFunction %s", functionName));
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.callFunction(functionName, data);
            } else if (plugin.isSupportFunction(functionName)) {
                a(plugin);
            }
        }
    }

    public static String b(String functionName, LinkedHashMap<String, String> data) {
        Logger.d(String.format("callFunctionWithResult %s", functionName));
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                String result = plugin.callFunctionWithResult(functionName, data);
                if (result != null) {
                    return result;
                }
            } else if (plugin.isSupportFunction(functionName)) {
                a(plugin);
            }
        }
        return null;
    }

    public static void a(String functionName, String... args) {
        Logger.d(String.format("callFunction %s", functionName));
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.callFunction(functionName, args);
            } else if (plugin.isSupportFunction(functionName)) {
                a(plugin);
            }
        }
    }

    public static String b(String functionName, String... args) {
        String result;
        Logger.d(String.format("callFunctionWithResult %s", functionName));
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                if (functionName.contains("plugin_init") && functionName.contains(plugin.getPluginName()) && (result = plugin.inited()) != null) {
                    return result;
                }
                String result2 = plugin.callFunctionWithResult(functionName, args);
                if (result2 != null) {
                    return result2;
                }
            } else if (plugin.isSupportFunction(functionName)) {
                a(plugin);
            }
        }
        return null;
    }

    public static void a(YmnPluginWrapper plugin) {
        String message = String.format("%s插件未开启，请检查网络及远程配置", plugin.getPluginName());
        f fVar = new f(message);
        d.a(fVar);
        fVar.a();
    }

    public static void a(boolean mode) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.setDebugMode(mode);
            }
        }
    }

    private static void d(Context context) {
        PluginLocalState localState = d.d(context);
        Iterator<YmnPluginWrapper> it = a.values().iterator();
        while (it.hasNext()) {
            YmnPluginWrapper plugin = it.next();
            if (plugin.isWorking() && plugin.matchEntrance(context) && plugin.canDoInit()) {
                PluginConfig.PluginInfo localInfo = localState.getInfo(plugin);
                if (localInfo != null) {
                    plugin.setParams(localInfo.getParams());
                    plugin.setCfgs(localInfo.getCfg_detail());
                }
                plugin.registCallback(c);
                try {
                    if (!YmnsdkTypeUtils.isInitAlone() || !(context instanceof Activity)) {
                        plugin.onInit(context);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    Logger.e(plugin.getPluginName() + "初始化出问题了,版本为" + plugin.getPluginVersion() + "\n原因是--" + e.getLocalizedMessage());
                }
                a("AfterDoInit", plugin);
            }
        }
    }

    public static void a(Activity activity) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                try {
                    plugin.onCreate(activity);
                } catch (Exception e) {
                    Logger.e("onCreate 方法出异常 插件名：" + plugin.getPluginName() + "-- 插件版本：" + plugin.getSdkVersion() + "\n原因是--" + e.getLocalizedMessage());
                }
            }
        }
    }

    public static void e() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onStart();
            }
        }
    }

    public static void c() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onRestart();
            }
        }
    }

    public static void b() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onPause();
            }
        }
    }

    public static void d() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onResume();
            }
        }
    }

    public static void a(int requestCode, String[] permissions, int[] grantResults) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onRequestPermissionsResult(requestCode, permissions, grantResults);
            }
        }
    }

    public static void a(boolean hasFocus, Activity activity) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onWindowFocusChanged(hasFocus, activity);
            }
        }
    }

    public static void f() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onStop();
            }
        }
    }

    public static void a() {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onDestroy();
            }
        }
    }

    public static void a(Intent intent) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onNewIntent(intent);
            }
        }
    }

    public static void a(int requestCode, int resultCode, Intent data) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onActivityResult(requestCode, resultCode, data);
            }
        }
    }

    public static void a(Map<String, String> data, String key) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking() && plugin.getPluginName().equalsIgnoreCase(key)) {
                Logger.i("onLogin==" + key);
                plugin.onLogin(data);
            }
        }
    }

    public static void a(Map<String, String> data) {
        for (YmnPluginWrapper plugin : a.values()) {
            if (plugin.isWorking()) {
                plugin.onPay(data);
            }
        }
    }
}
