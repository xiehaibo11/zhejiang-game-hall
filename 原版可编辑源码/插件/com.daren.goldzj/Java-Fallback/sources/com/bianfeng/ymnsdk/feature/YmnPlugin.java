package com.bianfeng.ymnsdk.feature;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Pair;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;

public abstract class YmnPlugin implements IPlugin {
    private Map<String, String> functionAliasNames;
    private Map<String, Integer> functionNames;
    private Map<a, Method> functions;

    public static class a {
        public final String a;
        public final Class<?>[] b;

        public a(String r1, Class<?>[] r2) {
            this.a = r1;
            this.b = r2;
        }

        public boolean equals(Object r5) {
            if (this != r5) goto L6;
            return true;
        L6:
            if (r5 != null) goto L9;
            return false;
        L9:
            if (a.class == r5.getClass()) goto L11;
            return false;
        L11:
            a r52 = (a) r5;
            String r2 = this.a;
            if (r2 != null) goto L17;
            if (r52.a == null) goto L20;
            return false;
        L20:
            if (Arrays.equals(this.b, r52.b) == true) goto L22;
            return false;
        L22:
            return true;
        L17:
            if (r2.equals(r52.a) == true) goto L20;
            return false;
        }

        public int hashCode() {
            String r0 = this.a;
            int r1 = 0;
            if (r0 != null) goto L5;
            int r02 = 0;
        L6:
            int r03 = r02 + 31;
            Class<?>[] r2 = this.b;
            if (r2 != null) goto L9;
            return r03;
        L9:
            int r3 = r2.length;
        L10:
            if (r1 >= r3) goto L12;
            r03 = (r03 * 31) + r2[r1].getName().hashCode();
            r1 = r1 + 1;
            goto L10
        L12:
            return r03;
        L5:
            r02 = r0.hashCode();
            goto L6
        }
    }

    public static class b {
        public static String a(IPlugin r7) {
            Class<?>[] r0 = r7.getClass().getInterfaces();
            if (r0 == null) goto L13;
            if (r0.length == 0) goto L13;
            int r1 = r0.length;
            int r4 = 0;
            int r5 = 1;
        L8:
            if (r4 >= r1) goto L11;
            r5 = (r5 * 31) + r0[r4].getName().hashCode();
            r4 = r4 + 1;
            goto L8
        L11:
            return String.format("%s_%d", new Object[]{r7.getPluginId(), Integer.valueOf(r5)});
        L13:
            return r7.getPluginName();
        }
    }

    public YmnPlugin() {
        this.functions = new HashMap();
        this.functionNames = new HashMap();
        this.functionAliasNames = new HashMap();
        Method[] r0 = getClass().getDeclaredMethods();
        int r1 = r0.length;
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L8;
        Method r3 = r0[r2];
        r3.setAccessible(true);
        YFunction r4 = (YFunction) r3.getAnnotation(YFunction.class);
        if (r4 == null) goto L7;
        loadYmnTagFunction(r3, r4);
    L7:
        r2 = r2 + 1;
        goto L3
    }

    private Pair<Class<?>[], String[]> fixGameFrameworkTypes(String r8, String... r9) {
        int r0 = r9.length;
        Class<?>[] r1 = new Class[r0];
        int r2 = 0;
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L6;
        r1[r3] = String.class;
        r3 = r3 + 1;
        goto L3
    L6:
        if (this.functions.containsKey(getFunctionKey(r8, r1)) == false) goto L9;
        Logger.i(String.format("%s(%s) found match types, args lenth is %d", new Object[]{getPluginName(), r8, Integer.valueOf(r0)}));
        return new Pair(r1, r9);
    L9:
        int r32 = r0 - 1;
        Logger.e(String.format("%s(%s) can't find match types, reset args lenth(%d -> %d)", new Object[]{getPluginName(), r8, Integer.valueOf(r0), Integer.valueOf(r32)}));
        if (r0 != 1) goto L13;
        return null;
    L13:
        String[] r02 = new String[r32];
    L14:
        if (r2 >= r32) goto L17;
        r02[r2] = r9[r2];
        r2 = r2 + 1;
        goto L14
    L17:
        return fixGameFrameworkTypes(r8, r02);
    }

    private String functionNameWithPluginPrefix(String r3) {
        if (r3.startsWith(getPluginName()) == false) goto L5;
        return r3;
    L5:
        return getPluginName() + "_" + r3;
    }

    private a getFunctionKey(String r2, Class<?>... r3) {
        return new a(formatFunctionName(r2), r3);
    }

    private int getFunctionNameValue(String r2) {
        if (this.functionNames.containsKey(r2) == false) goto L5;
        int r22 = this.functionNames.get(r2).intValue();
    L7:
        return r22 + 1;
    L5:
        r22 = 0;
        goto L7
    }

    private Pair<Boolean, Object> invokeFunction(String r5) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(r5, getPluginId(), getPluginVersion() + "", getSdkVersion());
        a r52 = getFunctionKey(r5, new Class[0]);
        if (this.functions.containsKey(r52) == false) goto L7;
        return new Pair(true, this.functions.get(r52).invoke(this, new Object[0]));
    L7:
        return new Pair(false, null);
    }

    private void loadYmnTagFunction(Method r4, YFunction r5) {
        String r0 = r5.name();
        String r52 = r5.alias();
        if (TextUtils.isEmpty(r52) == true) goto L5;
        this.functionAliasNames.put(r52, r0);
    L5:
        String r53 = formatFunctionName(r0);
        this.functionNames.put(r53, Integer.valueOf(getFunctionNameValue(r0)));
        a r54 = getFunctionKey(r0, r4.getParameterTypes());
        this.functions.put(r54, r4);
    }

    @Override
    public void callFunction(String r3, LinkedHashMap<String, String> r4) {
        if (isSupportFunction(r3) == false) goto L5;
        callFunctionWithResult(r3, r4);
        return;
    L5:
        Logger.d(String.format("%s not found function %s", new Object[]{getPluginName(), r3}));
    }

    @Override
    public String callFunctionWithResult(String r8, LinkedHashMap<String, String> r9) {
        Pair<Boolean, Object> r92 = invokeFunction(r8, new Object[]{r9}, new Class[]{LinkedHashMap.class});     // Catch: Exception -> L9
        if (((Boolean) r92.first).booleanValue() == true) goto L6;
        return null;
    L6:
        if (r92.second == null) goto L16;
        String r93 = r92.second.toString();     // Catch: Exception -> L9
        YmnDataFunUtils.getInstance().pluginFinish(r8, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, r93);     // Catch: Exception -> L9
        return r93;
    L16:
        return null;
    L9:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public String formatFunctionName(String r2) {
        if (this.functionAliasNames.containsKey(r2) == false) goto L6;
        r2 = this.functionAliasNames.get(r2);
    L6:
        return functionNameWithPluginPrefix(r2);
    }

    public YPlugin.Entrance getEntrance() {
        YPlugin r0 = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.entrance();
    }

    public YPlugin.Policy getPolicy() {
        YPlugin r0 = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.strategy();
    }

    public boolean isAcitityEntrance() {
        YPlugin.Entrance r0 = getEntrance();
        if (r0 != null) goto L5;
    L7:
        return false;
    L5:
        if (r0 != YPlugin.Entrance.ACTIVITY) goto L7;
        return true;
    }

    @Override
    public boolean isSupportFunction(String r2) {
        return this.functionNames.containsKey(formatFunctionName(r2));
    }

    public boolean matchAcitityEntrance(Context r1) {
        if ((r1 instanceof Activity) == true) goto L5;
        return false;
    L5:
        return isAcitityEntrance();
    }

    public boolean matchApplicationEntrance(Context r2) {
        YPlugin.Entrance r22 = getEntrance();
        if (r22 != null) goto L5;
    L7:
        return false;
    L5:
        if (r22 != YPlugin.Entrance.APPLICATION) goto L7;
        return true;
    }

    public boolean matchContextEntrance(Context r2) {
        YPlugin.Entrance r22 = getEntrance();
        if (r22 != null) goto L5;
    L7:
        return false;
    L5:
        if (r22 != YPlugin.Entrance.CONTEXT) goto L7;
        return true;
    }

    public boolean matchEntrance(Context r2) {
        if (matchAcitityEntrance(r2) == false) goto L5;
    L10:
        return true;
    L5:
        if (matchContextEntrance(r2) == true) goto L10;
        if (matchApplicationEntrance(r2) == true) goto L10;
        return false;
    }

    @Override
    public void callFunction(String r3, String... r4) {
        if (isSupportFunction(r3) == false) goto L5;
        callFunctionWithResult(r3, r4);
        return;
    L5:
        Logger.d(String.format("%s not found function %s", new Object[]{getPluginName(), r3}));
    }

    private Pair<Boolean, Object> invokeFunction(String r7, Object[] r8, Class<?>... r9) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(r7, getPluginId(), getPluginVersion() + "", getSdkVersion(), r8);
        a r72 = getFunctionKey(r7, r9);
        if (this.functions.containsKey(r72) == false) goto L7;
        return new Pair(true, this.functions.get(r72).invoke(this, r8));
    L7:
        return new Pair(false, null);
    }

    @Override
    public String callFunctionWithResult(String r8, String... r9) {
        if (r9 != null) goto L25;
    L13:
        Pair<Boolean, Object> r92 = invokeFunction(r8);     // Catch: Exception -> L21
    L14:
        Pair<Boolean, Object> r0 = r92;
    L16:
        if (((Boolean) r0.first).booleanValue() == true) goto L18;
        return null;
    L18:
        if (r0.second == null) goto L28;
        String r93 = r0.second.toString();     // Catch: Exception -> L21
        YmnDataFunUtils.getInstance().pluginFinish(r8, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, r93);     // Catch: Exception -> L21
        return r93;
    L21:
        e = move-exception;
        e.printStackTrace();
        return null;
    L28:
        return null;
    L25:
        if (r9.length == 0) goto L13;
        Pair<Class<?>[], String[]> r02 = fixGameFrameworkTypes(r8, r9);     // Catch: Exception -> L21
        if (r02 != null) goto L9;
        r0 = invokeFunction(r8);     // Catch: Exception -> L21
    L11:
        if (((Boolean) r0.first).booleanValue() == true) goto L16;
        r92 = invokeFunction(r8, new Object[]{r9}, new Class[]{String[].class});     // Catch: Exception -> L21
        goto L14
    L9:
        r0 = invokeFunction(r8, (Object[]) r02.second, (Class[]) r02.first);     // Catch: Exception -> L21
        goto L11
    }
}
