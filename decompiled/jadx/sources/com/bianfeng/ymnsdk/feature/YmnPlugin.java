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

/* JADX INFO: loaded from: classes.dex */
public abstract class YmnPlugin implements IPlugin {
    private Map<a, Method> functions = new HashMap();
    private Map<String, Integer> functionNames = new HashMap();
    private Map<String, String> functionAliasNames = new HashMap();

    public YPlugin.Policy getPolicy() {
        YPlugin tagPlugin = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (tagPlugin != null) {
            return tagPlugin.strategy();
        }
        return null;
    }

    public YPlugin.Entrance getEntrance() {
        YPlugin tagPlugin = (YPlugin) getClass().getAnnotation(YPlugin.class);
        if (tagPlugin != null) {
            return tagPlugin.entrance();
        }
        return null;
    }

    public boolean matchEntrance(Context context) {
        return matchAcitityEntrance(context) || matchContextEntrance(context) || matchApplicationEntrance(context);
    }

    public boolean matchAcitityEntrance(Context context) {
        if (context instanceof Activity) {
            return isAcitityEntrance();
        }
        return false;
    }

    public boolean isAcitityEntrance() {
        YPlugin.Entrance tag = getEntrance();
        return tag != null && tag == YPlugin.Entrance.ACTIVITY;
    }

    public boolean matchContextEntrance(Context context) {
        YPlugin.Entrance tag = getEntrance();
        return tag != null && tag == YPlugin.Entrance.CONTEXT;
    }

    public boolean matchApplicationEntrance(Context context) {
        YPlugin.Entrance tag = getEntrance();
        return tag != null && tag == YPlugin.Entrance.APPLICATION;
    }

    public YmnPlugin() {
        Method[] methods = getClass().getDeclaredMethods();
        for (Method method : methods) {
            method.setAccessible(true);
            YFunction tagFunction = (YFunction) method.getAnnotation(YFunction.class);
            if (tagFunction != null) {
                loadYmnTagFunction(method, tagFunction);
            }
        }
    }

    private void loadYmnTagFunction(Method method, YFunction tagFunction) {
        String functionName = tagFunction.name();
        String functionAliasName = tagFunction.alias();
        if (!TextUtils.isEmpty(functionAliasName)) {
            this.functionAliasNames.put(functionAliasName, functionName);
        }
        String functionNameKey = formatFunctionName(functionName);
        this.functionNames.put(functionNameKey, Integer.valueOf(getFunctionNameValue(functionName)));
        String initName = getPluginName() + "_plugin_init";
        this.functionNames.put(initName, Integer.valueOf(getFunctionNameValue(initName)));
        a functionKey = getFunctionKey(functionName, method.getParameterTypes());
        this.functions.put(functionKey, method);
    }

    private a getFunctionKey(String functionName, Class<?>... types) {
        return new a(formatFunctionName(functionName), types);
    }

    private int getFunctionNameValue(String functionName) {
        int count = 0;
        if (this.functionNames.containsKey(functionName)) {
            count = this.functionNames.get(functionName).intValue();
        }
        return count + 1;
    }

    public String formatFunctionName(String functionName) {
        String realName = functionName;
        if (this.functionAliasNames.containsKey(functionName)) {
            String realName2 = this.functionAliasNames.get(functionName);
            realName = realName2;
        }
        return functionNameWithPluginPrefix(realName);
    }

    private String functionNameWithPluginPrefix(String functionName) {
        if (!functionName.startsWith(getPluginName())) {
            return getPluginName() + "_" + functionName;
        }
        return functionName;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public boolean isSupportFunction(String functionName) {
        return this.functionNames.containsKey(formatFunctionName(functionName));
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void callFunction(String functionName, LinkedHashMap<String, String> data) {
        if (isSupportFunction(functionName)) {
            callFunctionWithResult(functionName, data);
        } else {
            Logger.d(String.format("%s not found function %s", getPluginName(), functionName));
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String callFunctionWithResult(String functionName, LinkedHashMap<String, String> data) {
        try {
            Pair<Boolean, Object> result = invokeFunction(functionName, new Object[]{data}, LinkedHashMap.class);
            if (((Boolean) result.first).booleanValue() && result.second != null) {
                String d = result.second.toString();
                YmnDataFunUtils.getInstance().pluginFinish(functionName, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, d);
                return d;
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void callFunction(String functionName, String... data) {
        if (isSupportFunction(functionName)) {
            callFunctionWithResult(functionName, data);
        } else {
            Logger.d(String.format("%s not found function %s", getPluginName(), functionName));
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public String callFunctionWithResult(String functionName, String... data) {
        Pair<Boolean, Object> result;
        if (data == null) {
            result = invokeFunction(functionName);
        } else {
            try {
                if (data.length == 0) {
                    result = invokeFunction(functionName);
                } else {
                    Pair<Class<?>[], String[]> types = fixGameFrameworkTypes(functionName, data);
                    if (types == null) {
                        result = invokeFunction(functionName);
                    } else {
                        result = invokeFunction(functionName, (Object[]) types.second, (Class[]) types.first);
                    }
                    if (!((Boolean) result.first).booleanValue()) {
                        result = invokeFunction(functionName, new Object[]{data}, String[].class);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
        if (((Boolean) result.first).booleanValue() && result.second != null) {
            String d = result.second.toString();
            YmnDataFunUtils.getInstance().pluginFinish(functionName, getPluginId(), getPluginVersion() + "", getSdkVersion(), 0, d);
            return d;
        }
        return null;
    }

    private Pair<Boolean, Object> invokeFunction(String functionName) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(functionName, getPluginId(), getPluginVersion() + "", getSdkVersion());
        a key = getFunctionKey(functionName, new Class[0]);
        if (this.functions.containsKey(key)) {
            Method method = this.functions.get(key);
            Object result = method.invoke(this, new Object[0]);
            return new Pair<>(true, result);
        }
        return new Pair<>(false, null);
    }

    private Pair<Boolean, Object> invokeFunction(String functionName, Object[] data, Class<?>... types) throws Exception {
        YmnDataFunUtils.getInstance().pluginStart(functionName, getPluginId(), getPluginVersion() + "", getSdkVersion(), data);
        a key = getFunctionKey(functionName, types);
        if (this.functions.containsKey(key)) {
            Method method = this.functions.get(key);
            Object result = method.invoke(this, data);
            return new Pair<>(true, result);
        }
        return new Pair<>(false, null);
    }

    private Pair<Class<?>[], String[]> fixGameFrameworkTypes(String functionName, String... data) {
        int length = data.length;
        Class<?>[] types = new Class[length];
        for (int i = 0; i < length; i++) {
            types[i] = String.class;
        }
        a key = getFunctionKey(functionName, types);
        if (this.functions.containsKey(key)) {
            Logger.i(String.format("%s(%s) found match types, args lenth is %d", getPluginName(), functionName, Integer.valueOf(length)));
            return new Pair<>(types, data);
        }
        Logger.e(String.format("%s(%s) can't find match types, reset args lenth(%d -> %d)", getPluginName(), functionName, Integer.valueOf(length), Integer.valueOf(length - 1)));
        if (length == 1) {
            return null;
        }
        String[] args = new String[length - 1];
        for (int i2 = 0; i2 < length - 1; i2++) {
            args[i2] = data[i2];
        }
        return fixGameFrameworkTypes(functionName, args);
    }

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f1431a;
        public final Class<?>[] b;

        public a(String functionName, Class<?>[] types) {
            this.f1431a = functionName;
            this.b = types;
        }

        public int hashCode() {
            int i = 1 * 31;
            String str = this.f1431a;
            int result = i + (str == null ? 0 : str.hashCode());
            Class<?>[] clsArr = this.b;
            if (clsArr == null) {
                return result;
            }
            for (Class<?> type : clsArr) {
                result = (result * 31) + type.getName().hashCode();
            }
            return result;
        }

        public boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || getClass() != obj.getClass()) {
                return false;
            }
            a other = (a) obj;
            String str = this.f1431a;
            if (str == null) {
                if (other.f1431a != null) {
                    return false;
                }
            } else if (!str.equals(other.f1431a)) {
                return false;
            }
            if (Arrays.equals(this.b, other.b)) {
                return true;
            }
            return false;
        }
    }

    public static class b {
        public static String a(IPlugin plugin) {
            Class<?>[] interfaces = plugin.getClass().getInterfaces();
            if (interfaces == null || interfaces.length == 0) {
                return plugin.getPluginName();
            }
            int result = 1;
            for (Class<?> type : interfaces) {
                result = (result * 31) + type.getName().hashCode();
            }
            return String.format("%s_%d", plugin.getPluginId(), Integer.valueOf(result));
        }
    }
}
