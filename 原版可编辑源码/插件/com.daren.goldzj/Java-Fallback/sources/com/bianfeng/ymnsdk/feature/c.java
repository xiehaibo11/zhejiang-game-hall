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
    private static HashMap<String, YmnPluginWrapper> a;
    private static volatile boolean b;
    private static YmnCallback c;

    static {
        a = new HashMap();
        b = false;
    }

    public static void a(YmnCallback r0) {
        c = r0;
    }

    public static void b(Context r1) {
        if (b == true) goto L5;
        b = true;
        b.a(r1);
        c(r1);
    L5:
        a.a(r1, a);
        a(r1);
        d(r1);
    }

    private static void c(Context r0) {
        a(b.b(r0));
    }

    private static void d(Context r5) {
        PluginLocalState r0 = d.d(r5);
        Iterator<YmnPluginWrapper> r1 = a.values().iterator();
    L4:
        if (r1.hasNext() == false) goto L20;
        YmnPluginWrapper r2 = r1.next();
        if (r2.isWorking() == false) goto L4;
        if (r2.matchEntrance(r5) == false) goto L4;
        if (r2.canDoInit() == false) goto L4;
        PluginConfig.PluginInfo r3 = r0.getInfo(r2);
        if (r3 == null) goto L14;
        r2.setParams(r3.getParams());
        r2.setCfgs(r3.getCfg_detail());
    L14:
        r2.registCallback(c);
        r2.onInit(r5);     // Catch: Exception -> L17
    L19:
        a("AfterDoInit", r2);
    L17:
        e = move-exception;
        e.printStackTrace();
        Logger.e(r2.getPluginName() + "初始化出问题了,版本为" + r2.getPluginVersion());
        goto L19
    }

    public static void e() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onStart();
        goto L4
    }

    public static void f() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onStop();
        goto L4
    }

    private static void a(List<YmnPluginWrapper> r3) {
        if (r3 != null) goto L4;
        return;
    L4:
        if (r3.isEmpty() == true) goto L11;
        Iterator<YmnPluginWrapper> r32 = r3.iterator();
    L7:
        if (r32.hasNext() == false) goto L12;
        YmnPluginWrapper r0 = r32.next();
        a.put(YmnPlugin.b.a(r0), r0);
        goto L7
    L12:
        return;
    }

    public static void c() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onRestart();
        goto L4
    }

    private static void a(Context r3) {
        PluginLocalState r32 = d.d(r3);
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isCheckedState() == true) goto L4;
        r1.checkState(r32);
        a("AfterCheckState", r1);
        goto L4
    }

    private static void a(String r1, YmnPluginWrapper r2) {
        Logger.dRich(r1 + ":" + r2.toString());
    }

    public static boolean a(String r5) {
        Logger.d(String.format("isSupportFunction %s", new Object[]{r5}));
        Iterator<YmnPluginWrapper> r1 = a.values().iterator();
    L4:
        if (r1.hasNext() == false) goto L11;
        YmnPluginWrapper r3 = r1.next();
        if (r3.isSupportFunction(r5) == false) goto L4;
        Logger.e(String.format("插件 %s", new Object[]{r3.getPluginName()}));
        if (r3.isWorking() == false) goto L10;
        return true;
    L10:
        a(r3);
    L11:
        return false;
    }

    public static String b(String r3, LinkedHashMap<String, String> r4) {
        Logger.d(String.format("callFunctionWithResult %s", new Object[]{r3}));
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L13;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == true) goto L7;
        if (r1.isSupportFunction(r3) == false) goto L4;
        a(r1);
        goto L4
    L7:
        String r12 = r1.callFunctionWithResult(r3, r4);
        if (r12 == null) goto L4;
        return r12;
    L13:
        return null;
    }

    public static void d() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onResume();
        goto L4
    }

    public static void a(String r3, LinkedHashMap<String, String> r4) {
        Logger.d(String.format("callFunction %s", new Object[]{r3}));
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L11;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == true) goto L7;
        if (r1.isSupportFunction(r3) == false) goto L4;
        a(r1);
        goto L4
    L7:
        r1.callFunction(r3, r4);
        goto L4
    }

    public static String b(String r3, String... r4) {
        Logger.d(String.format("callFunctionWithResult %s", new Object[]{r3}));
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L20;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == true) goto L8;
        if (r1.isSupportFunction(r3) == false) goto L4;
        a(r1);
        goto L4
    L8:
        if (r3.contains("plugin_init") == true) goto L10;
    L14:
        String r12 = r1.callFunctionWithResult(r3, r4);
        if (r12 == null) goto L4;
        return r12;
    L10:
        if (r3.contains(r1.getPluginName()) == false) goto L14;
        String r2 = r1.inited();
        if (r2 == null) goto L14;
        return r2;
    L20:
        return null;
    }

    public static void a(String r3, String... r4) {
        Logger.d(String.format("callFunction %s", new Object[]{r3}));
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L11;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == true) goto L7;
        if (r1.isSupportFunction(r3) == false) goto L4;
        a(r1);
        goto L4
    L7:
        r1.callFunction(r3, r4);
        goto L4
    }

    public static void a(YmnPluginWrapper r2) {
        d.a(new f(String.format("%s插件未开启，请检查网络及远程配置", new Object[]{r2.getPluginName()}))).a();
    }

    public static void b() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onPause();
        goto L4
    }

    public static void a(boolean r3) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.setDebugMode(r3);
        goto L4
    }

    public static void a(Activity r4) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L10;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onCreate(r4);     // Catch: Exception -> L9
    L9:
        Logger.e("onCreate 方法出异常 插件名：" + r1.getPluginName() + "-- 插件版本：" + r1.getSdkVersion());
        goto L4
    }

    public static void a(int r3, String[] r4, int[] r5) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onRequestPermissionsResult(r3, r4, r5);
        goto L4
    }

    public static void a(boolean r3, Activity r4) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onWindowFocusChanged(r3, r4);
        goto L4
    }

    public static void a() {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onDestroy();
        goto L4
    }

    public static void a(Intent r3) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onNewIntent(r3);
        goto L4
    }

    public static void a(int r3, int r4, Intent r5) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onActivityResult(r3, r4, r5);
        goto L4
    }

    public static void a(Map<String, String> r4, String r5) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L10;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        if (r1.getPluginName().equalsIgnoreCase(r5) == false) goto L4;
        Logger.i("onLogin==" + r5);
        r1.onLogin(r4);
        goto L4
    }

    public static void a(Map<String, String> r3) {
        Iterator<YmnPluginWrapper> r0 = a.values().iterator();
    L4:
        if (r0.hasNext() == false) goto L8;
        YmnPluginWrapper r1 = r0.next();
        if (r1.isWorking() == false) goto L4;
        r1.onPay(r3);
        goto L4
    }
}
