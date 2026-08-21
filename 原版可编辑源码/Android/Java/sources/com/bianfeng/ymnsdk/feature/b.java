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

    public static void a(Context context) {
        try {
            AssetManager am = context.getAssets();
            if (ResourceUtil.assetFileExist(context, "plugins.ymn")) {
                Gson gson = new Gson();
                a = (Map) gson.fromJson(new InputStreamReader(am.open("plugins.ymn")), new a().getType());
            }
        } catch (Exception e) {
            Logger.e("YmnPluginLoader 的init" + e.getMessage());
        }
    }

    static class a extends TypeToken<Map<String, JsonElement>> {
        a() {
        }
    }

    public static List<YmnPluginWrapper> b(Context context) {
        if (a.containsKey("apiClass")) {
            Gson gson = new Gson();
            List<String> clsNames = (List) gson.fromJson(a.get("apiClass"), List.class);
            clsNames.add(YmnBaseInterface.class.getName());
            clsNames.add(FixExcutorInterface.class.getName());
            return a(clsNames);
        }
        return a(context, context.getPackageCodePath());
    }

    public static List<YmnPluginWrapper> a(Context context, String apkFile) {
        try {
            return a(new DexFile(apkFile));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static List<YmnPluginWrapper> a(DexFile dexFile) {
        YmnPluginWrapper plugin;
        long startTime = System.currentTimeMillis();
        List<YmnPluginWrapper> plugins = new ArrayList<>();
        Enumeration<String> entries = dexFile.entries();
        while (entries.hasMoreElements()) {
            String clsName = entries.nextElement();
            if (!a(clsName) && b(clsName) && (plugin = c(clsName)) != null) {
                plugins.add(plugin);
            }
        }
        long endTime = System.currentTimeMillis();
        Logger.dRich("load plugins(debug model) cost millis " + (endTime - startTime));
        return plugins;
    }

    private static List<YmnPluginWrapper> a(List<String> clsNames) {
        YmnPluginWrapper plugin;
        long startTime = System.currentTimeMillis();
        List<YmnPluginWrapper> plugins = new ArrayList<>();
        for (String clsName : clsNames) {
            if (!TextUtils.isEmpty(clsName) && (plugin = c(clsName)) != null) {
                plugins.add(plugin);
            }
        }
        long endTime = System.currentTimeMillis();
        Logger.dRich("load plugins(fast model) cost millis " + (endTime - startTime));
        return plugins;
    }

    private static YmnPluginWrapper c(String clsName) {
        try {
            Class<?> cls = Class.forName(clsName);
            if (a(cls)) {
                YmnPluginWrapper plugin = (YmnPluginWrapper) cls.newInstance();
                Logger.i(String.format("load plugin %s success", YmnPlugin.b.a(plugin)));
                return plugin;
            }
            return null;
        } catch (Exception e) {
            Logger.e("YmnPluginLoader 的loadPlugin" + e.getMessage());
            return null;
        }
    }

    private static boolean a(String clsName) {
        if (clsName.startsWith("android.support") || clsName.contains("$")) {
            return true;
        }
        return false;
    }

    private static boolean b(String clsName) {
        if (clsName.contains("Interface") || clsName.contains("Executor")) {
            return true;
        }
        return false;
    }

    private static boolean a(Class<?> cls) {
        return YmnPluginWrapper.class.isAssignableFrom(cls) && cls.getAnnotation(YPlugin.class) != null;
    }
}
