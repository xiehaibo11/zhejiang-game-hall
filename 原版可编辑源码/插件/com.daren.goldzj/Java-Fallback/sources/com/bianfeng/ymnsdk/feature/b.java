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
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class b {
    private static Map<String, JsonElement> a;

    class a extends TypeToken<Map<String, JsonElement>> {
        a() {
        }
    }

    static {
        a = new HashMap();
    }

    public static void a(Context r3) {
        AssetManager r1 = r3.getAssets();     // Catch: Exception -> L7
        if (ResourceUtil.assetFileExist(r3, "plugins.ymn") == false) goto L12;
        a = (Map) new Gson().fromJson(new InputStreamReader(r1.open("plugins.ymn")), new a().getType());     // Catch: Exception -> L7
        return;
    L12:
        return;
    L7:
        e = move-exception;
        Logger.e("YmnPluginLoader 的init" + e.getMessage());
    }

    public static List<YmnPluginWrapper> b(Context r2) {
        if (a.containsKey("apiClass") == false) goto L7;
        List r22 = (List) new Gson().fromJson(a.get("apiClass"), List.class);
        r22.add(YmnBaseInterface.class.getName());
        r22.add(FixExcutorInterface.class.getName());
        return a(r22);
    L7:
        return a(r2, r2.getPackageCodePath());
    }

    private static YmnPluginWrapper c(String r4) {
        Class<?> r42 = Class.forName(r4);     // Catch: Exception -> L8
        if (a(r42) == false) goto L14;
        YmnPluginWrapper r43 = (YmnPluginWrapper) r42.newInstance();     // Catch: Exception -> L8
        Logger.i(String.format("load plugin %s success", new Object[]{YmnPlugin.b.a(r43)}));     // Catch: Exception -> L8
        return r43;
    L14:
        return null;
    L8:
        e = move-exception;
        Logger.e("YmnPluginLoader 的loadPlugin" + e.getMessage());
        return null;
    }

    private static boolean b(String r1) {
        if (r1.contains("Interface") == false) goto L5;
        return true;
    L5:
        if (r1.contains("Executor") == true) goto L11;
        return false;
    L11:
        return true;
    }

    public static List<YmnPluginWrapper> a(Context r0, String r1) {
        return a(new DexFile(r1));
    L4:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    private static List<YmnPluginWrapper> a(DexFile r6) {
        long r0 = System.currentTimeMillis();
        ArrayList r2 = new ArrayList();
        Enumeration<String> r62 = r6.entries();
    L4:
        if (r62.hasMoreElements() == false) goto L12;
        String r3 = r62.nextElement();
        if (a(r3) == true) goto L4;
        if (b(r3) == false) goto L4;
        YmnPluginWrapper r32 = c(r3);
        if (r32 == null) goto L4;
        r2.add(r32);
        goto L4
    L12:
        Logger.dRich("load plugins(debug model) cost millis " + (System.currentTimeMillis() - r0));
        return r2;
    }

    private static List<YmnPluginWrapper> a(List<String> r6) {
        long r0 = System.currentTimeMillis();
        ArrayList r2 = new ArrayList();
        Iterator<String> r62 = r6.iterator();
    L4:
        if (r62.hasNext() == false) goto L10;
        String r3 = r62.next();
        if (TextUtils.isEmpty(r3) == true) goto L4;
        YmnPluginWrapper r32 = c(r3);
        if (r32 == null) goto L4;
        r2.add(r32);
        goto L4
    L10:
        Logger.dRich("load plugins(fast model) cost millis " + (System.currentTimeMillis() - r0));
        return r2;
    }

    private static boolean a(String r1) {
        if (r1.startsWith("android.support") == false) goto L5;
        return true;
    L5:
        if (r1.contains("$") == true) goto L11;
        return false;
    L11:
        return true;
    }

    private static boolean a(Class<?> r2) {
        if (YmnPluginWrapper.class.isAssignableFrom(r2) == true) goto L6;
        return false;
    L6:
        if (r2.getAnnotation(YPlugin.class) == null) goto L9;
        return true;
    L9:
        return false;
    }
}
