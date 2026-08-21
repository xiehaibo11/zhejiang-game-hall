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
    private Map<a, Method> functions = new HashMap();
    private Map<String, Integer> functionNames = new HashMap();
    private Map<String, String> functionAliasNames = new HashMap();

    public static class a {
        public final String a;
        public final Class<?>[] b;

        public a(String str, Class<?>[] clsArr) {
            this.a = str;
            this.b = clsArr;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || a.class != obj.getClass()) {
                return false;
            }
            a aVar = (a) obj;
            String str = this.a;
            if (str == null) {
                if (aVar.a != null) {
                    return false;
                }
            } else if (!str.equals(aVar.a)) {
                return false;
            }
            return Arrays.equals(this.b, aVar.b);
        }

        public int hashCode() {
            String str = this.a;
            int iHashCode = (str == null ? 0 : str.hashCode()) + 31;
            Class<?>[] clsArr = this.b;
            if (clsArr == null) {
                return iHashCode;
            }
            for (Class<?> cls : clsArr) {
                iHashCode = (iHashCode * 31) + cls.getName().hashCode();
            }
            return iHashCode;
        }
    }

    public static class b {
        public static String a(IPlugin iPlugin) {
            Class<?>[] interfaces = iPlugin.getClass().getInterfaces();
            if (interfaces == null || interfaces.length == 0) {
                return iPlugin.getPluginName();
            }
            int iHashCode = 1;
            for (Class<?> cls : interfaces) {
                iHashCode = (iHashCode * 31) + cls.getName().hashCode();
            }
            return String.format("%s_%d", iPlugin.getPluginId(), Integer.valueOf(iHashCode));
        }
    }

    public YmnPlugin() {
        for (Method method : getClass().getDeclaredMethods()) {
            method.setAccessible(true);
            YFunction yFunction = (YFunction) method.getAnnotation(YFunction.class);
            if (yFunction != null) {
                loadYmnTagFunction(method, yFunction);
            }
        }
    }

    private Pair<Class<?>[], String[]> fixGameFrameworkTypes(String str, String... strArr) {
        int length = strArr.length;
        Class<?>[] clsArr = new Class[length];
        for (int i = 0; i < length; i++) {
            clsArr[i] = String.class;
        }
        if (this.functions.containsKey(getFunctionKey(str, clsArr))) {
            Logger.i(String.format("%s(%s) found match types, args lenth is %d", getPluginName(), str, Integer.valueOf(length)));
            return new Pair<>(clsArr, strArr);
        }
        int i2 = length - 1;
        Logger.e(String.format("%s(%s) can't find match types, reset args lenth(%d -> %d)", getPluginName(), str, Integer.valueOf(length), Integer.valueOf(i2)));
        if (length == 1) {
            return null;
        }
        String[] strArr2 = new String[i2];
        for (int i3 = 0; i3 < i2; i3++) {
            strArr2[i3] = strArr[i3];
        }
        return fixGameFrameworkTypes(str, strArr2);
    }

    private String functionNameWithPluginPrefix(String str) {
        if (str.startsWith(getPluginName())) {
            return str;
        }
        return getPluginName() + "_" + str;
    }

    private a getFunctionKey(String str, Class<?>... clsArr) {
        return new a(formatFunctionName(str), clsArr);
    }

    private int getFunctionNameValue(String str) {
        return (this.functionNames.containsKey(str) ? this.functionNames.get(str).intValue() : 0) + 1;
    }

    private Pair<Boolean, Object> invokeFunction(String str) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(str, getPluginId(), getPluginVersion() + "", getSdkVersion());
        a functionKey = getFunctionKey(str, new Class[0]);
        return this.functions.containsKey(functionKey) ? new Pair<>(true, this.functions.get(functionKey).invoke(this, new Object[0])) : new Pair<>(false, null);
    }

    private void loadYmnTagFunction(Method method, YFunction yFunction) {
        String strName = yFunction.name();
        String strAlias = yFunction.alias();
        if (!TextUtils.isEmpty(strAlias)) {
            this.functionAliasNames.put(strAlias, strName);
        }
        this.functionNames.put(formatFunctionName(strName), Integer.valueOf(getFunctionNameValue(strName)));
        this.functions.put(getFunctionKey(strName, method.getParameterTypes()), method);
    }

    @Override
    public void callFunction(String str, LinkedHashMap<String, String> linkedHashMap) {
        if (isSupportFunction(str)) {
            callFunctionWithResult(str, linkedHashMap);
        } else {
            Logger.d(String.format("%s not found function %s", getPluginName(), str));
        }
    }

    @Override
    public String callFunctionWithResult(String str, LinkedHashMap<String, String> linkedHashMap) {
        try {
            Pair<Boolean, Object> pairInvokeFunction = invokeFunction(str, new Object[]{linkedHashMap}, LinkedHashMap.class);
            if (!((Boolean) pairInvokeFunction.first).booleanValue() || pairInvokeFunction.second == null) {
                return null;
            }
            String string = pairInvokeFunction.second.toString();
            YmnDataFunUtils.getInstance().pluginFinish(str, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, string);
            return string;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public String formatFunctionName(String str) {
        if (this.functionAliasNames.containsKey(str)) {
            str = this.functionAliasNames.get(str);
        }
        return functionNameWithPluginPrefix(str);
    }

    public YPlugin.Entrance getEntrance() {
        YPlugin yPlugin = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (yPlugin != null) {
            return yPlugin.entrance();
        }
        return null;
    }

    public YPlugin.Policy getPolicy() {
        YPlugin yPlugin = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (yPlugin != null) {
            return yPlugin.strategy();
        }
        return null;
    }

    public boolean isAcitityEntrance() {
        YPlugin.Entrance entrance = getEntrance();
        return entrance != null && entrance == YPlugin.Entrance.ACTIVITY;
    }

    @Override
    public boolean isSupportFunction(String str) {
        return this.functionNames.containsKey(formatFunctionName(str));
    }

    public boolean matchAcitityEntrance(Context context) {
        if (context instanceof Activity) {
            return isAcitityEntrance();
        }
        return false;
    }

    public boolean matchApplicationEntrance(Context context) {
        YPlugin.Entrance entrance = getEntrance();
        return entrance != null && entrance == YPlugin.Entrance.APPLICATION;
    }

    public boolean matchContextEntrance(Context context) {
        YPlugin.Entrance entrance = getEntrance();
        return entrance != null && entrance == YPlugin.Entrance.CONTEXT;
    }

    public boolean matchEntrance(Context context) {
        return matchAcitityEntrance(context) || matchContextEntrance(context) || matchApplicationEntrance(context);
    }

    @Override
    public void callFunction(String str, String... strArr) {
        if (isSupportFunction(str)) {
            callFunctionWithResult(str, strArr);
        } else {
            Logger.d(String.format("%s not found function %s", getPluginName(), str));
        }
    }

    private Pair<Boolean, Object> invokeFunction(String str, Object[] objArr, Class<?>... clsArr) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(str, getPluginId(), getPluginVersion() + "", getSdkVersion(), objArr);
        a functionKey = getFunctionKey(str, clsArr);
        if (this.functions.containsKey(functionKey)) {
            return new Pair<>(true, this.functions.get(functionKey).invoke(this, objArr));
        }
        return new Pair<>(false, null);
    }

    @Override
    public String callFunctionWithResult(String str, String... strArr) {
        Pair<Boolean, Object> pairInvokeFunction;
        Pair<Boolean, Object> pairInvokeFunction2;
        if (strArr != null) {
            try {
                if (strArr.length != 0) {
                    Pair<Class<?>[], String[]> pairFixGameFrameworkTypes = fixGameFrameworkTypes(str, strArr);
                    if (pairFixGameFrameworkTypes == null) {
                        pairInvokeFunction = invokeFunction(str);
                    } else {
                        pairInvokeFunction = invokeFunction(str, (Object[]) pairFixGameFrameworkTypes.second, (Class[]) pairFixGameFrameworkTypes.first);
                    }
                    if (!((Boolean) pairInvokeFunction.first).booleanValue()) {
                        pairInvokeFunction2 = invokeFunction(str, new Object[]{strArr}, String[].class);
                        pairInvokeFunction = pairInvokeFunction2;
                    }
                } else {
                    pairInvokeFunction2 = invokeFunction(str);
                    pairInvokeFunction = pairInvokeFunction2;
                }
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        } else {
            pairInvokeFunction2 = invokeFunction(str);
            pairInvokeFunction = pairInvokeFunction2;
        }
        if (!((Boolean) pairInvokeFunction.first).booleanValue() || pairInvokeFunction.second == null) {
            return null;
        }
        String string = pairInvokeFunction.second.toString();
        YmnDataFunUtils.getInstance().pluginFinish(str, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, string);
        return string;
    }
}
