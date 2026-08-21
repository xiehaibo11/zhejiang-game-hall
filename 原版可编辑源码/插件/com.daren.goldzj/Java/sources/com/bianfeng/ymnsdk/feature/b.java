package com.bianfeng.ymnsdk.feature;

import android.content.Context;
import android.content.res.AssetManager;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.YmnPlugin;
import com.bianfeng.ymnsdk.feature.plugin.FixExcutorInterface;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceUtil;
import com.google.gson.Gson;
import com.google.gson.JsonElement;
import com.google.gson.reflect.TypeToken;
import dalvik.system.DexFile;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class b {
    private static Map<String, JsonElement> a = new HashMap();

    class a extends TypeToken<Map<String, JsonElement>> {
        a() {
        }
    }

    public static void a(Context context) {
        try {
            AssetManager assets = context.getAssets();
            if (ResourceUtil.assetFileExist(context, "plugins.ymn")) {
                a = (Map) new Gson().fromJson(new InputStreamReader(assets.open("plugins.ymn")), new a().getType());
            }
        } catch (Exception e) {
            Logger.e("YmnPluginLoader 的init" + e.getMessage());
        }
    }

    public static List<YmnPluginWrapper> b(Context context) {
        if (!a.containsKey("apiClass")) {
            return a(context, context.getPackageCodePath());
        }
        List list = (List) new Gson().fromJson(a.get("apiClass"), List.class);
        list.add(YmnBaseInterface.class.getName());
        list.add(FixExcutorInterface.class.getName());
        return a((List<String>) list);
    }

    private static YmnPluginWrapper c(String str) {
        try {
            Class<?> cls = Class.forName(str);
            if (!a(cls)) {
                return null;
            }
            YmnPluginWrapper ymnPluginWrapper = (YmnPluginWrapper) cls.newInstance();
            Logger.i(String.format("load plugin %s success", YmnPlugin.b.a(ymnPluginWrapper)));
            return ymnPluginWrapper;
        } catch (Exception e) {
            Logger.e("YmnPluginLoader 的loadPlugin" + e.getMessage());
            return null;
        }
    }

    private static boolean b(String str) {
        return str.contains("Interface") || str.contains("Executor");
    }

    public static List<YmnPluginWrapper> a(Context context, String str) {
        try {
            return a(new DexFile(str));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static List<YmnPluginWrapper> a(DexFile dexFile) {
        YmnPluginWrapper ymnPluginWrapperC;
        long jCurrentTimeMillis = System.currentTimeMillis();
        ArrayList arrayList = new ArrayList();
        Enumeration<String> enumerationEntries = dexFile.entries();
        while (enumerationEntries.hasMoreElements()) {
            String strNextElement = enumerationEntries.nextElement();
            if (!a(strNextElement) && b(strNextElement) && (ymnPluginWrapperC = c(strNextElement)) != null) {
                arrayList.add(ymnPluginWrapperC);
            }
        }
        Logger.dRich("load plugins(debug model) cost millis " + (System.currentTimeMillis() - jCurrentTimeMillis));
        return arrayList;
    }

    private static List<YmnPluginWrapper> a(List<String> list) {
        YmnPluginWrapper ymnPluginWrapperC;
        long jCurrentTimeMillis = System.currentTimeMillis();
        ArrayList arrayList = new ArrayList();
        for (String str : list) {
            if (!TextUtils.isEmpty(str) && (ymnPluginWrapperC = c(str)) != null) {
                arrayList.add(ymnPluginWrapperC);
            }
        }
        Logger.dRich("load plugins(fast model) cost millis " + (System.currentTimeMillis() - jCurrentTimeMillis));
        return arrayList;
    }

    private static boolean a(String str) {
        return str.startsWith("android.support") || str.contains("$");
    }

    private static boolean a(Class<?> cls) {
        return YmnPluginWrapper.class.isAssignableFrom(cls) && cls.getAnnotation(YPlugin.class) != null;
    }
}
