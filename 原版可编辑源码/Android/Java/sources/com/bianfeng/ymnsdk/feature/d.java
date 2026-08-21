package com.bianfeng.ymnsdk.feature;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.ymnsdk.YmnStrategy;
import com.bianfeng.ymnsdk.action.ActionAttachment;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV3;
import com.bianfeng.ymnsdk.entity.PluginLocalState;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.entity.UrlLocalState;
import com.bianfeng.ymnsdk.feature.f;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.ResourceUtil;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.util.HashMap;
import java.util.Map;

public class d {
    private static Gson a = new Gson();

    public static void c(Context context) {
        Logger.updateState();
    }

    public static PluginLocalState d(Context context) {
        try {
            return (PluginLocalState) a(context, "ymn_plugin_local_states", PluginLocalState.class);
        } catch (Exception e) {
            e.printStackTrace();
            return new PluginLocalState();
        }
    }

    public static Map<String, UrlConfig> f(Context context) {
        Map<String, UrlConfig> remoteConfigs = new HashMap<>();
        String configs = ResourceUtil.readPreferences(context, "ymn_url_remote_configs");
        if (!TextUtils.isEmpty(configs)) {
            Map<String, UrlConfig> remoteConfigs2 = (Map) a.fromJson(configs, new a().getType());
            return remoteConfigs2;
        }
        return remoteConfigs;
    }

    static class a extends TypeToken<Map<String, UrlConfig>> {
        a() {
        }
    }

    public static void a(Context context, UrlConfig config) {
        try {
            Map<String, UrlConfig> remoteConfigs = f(context);
            remoteConfigs.put(config.getGid(), config);
            a(context, "ymn_url_remote_configs", remoteConfigs);
            UrlLocalState localState = e(context);
            UrlConfig maxLevelConfig = b(context);
            localState.updateConfig(maxLevelConfig);
            a(context, localState);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static UrlLocalState e(Context context) {
        String config = ResourceUtil.readPreferences(context, "ymn_url_local_states");
        if (TextUtils.isEmpty(config)) {
            UrlConfig urlConfig = b(context);
            if (urlConfig == null) {
                return null;
            }
            UrlLocalState localState = new UrlLocalState(urlConfig);
            a(context, localState);
            return localState;
        }
        return (UrlLocalState) a.fromJson(config, UrlLocalState.class);
    }

    private static UrlConfig b(Context context) {
        Map<String, UrlConfig> remoteConfigs = f(context);
        UrlConfig maxLevel = null;
        for (UrlConfig item : remoteConfigs.values()) {
            if (maxLevel == null || item.getLevel() > maxLevel.getLevel()) {
                maxLevel = item;
            }
        }
        return maxLevel;
    }

    public static void a(Context context, UrlLocalState localState) {
        a(context, "ymn_url_local_states", localState);
    }

    public static void a(Context context) {
        ResourceUtil.removePreferences(context, "ymn_url_local_states");
        ResourceUtil.removePreferences(context, "ymn_url_remote_configs");
    }

    public static <T> T a(Context context, String str, Class<T> cls) throws Exception {
        String preferences = ResourceUtil.readPreferences(context, str);
        if (!TextUtils.isEmpty(preferences)) {
            return (T) a.fromJson(preferences, (Class) cls);
        }
        return cls.newInstance();
    }

    public static void a(Context context, String cfgKey, Object localState) {
        if (localState != null) {
            ResourceUtil.savePreferences(context, cfgKey, a.toJson(localState));
        }
    }

    public static <T extends ActionSupport> T a(T actionSupport) {
        if (YmnStrategy.withStrategy(1)) {
            actionSupport.setAttachment(new ActionAttachment.a());
        }
        return actionSupport;
    }

    static class b implements f.a {
        b() {
        }

        @Override
        public void a(String message) {
            Log.e("YmnSDK", message + "");
        }
    }

    public static f a(f warning) {
        if (YmnStrategy.withStrategy(2)) {
            warning.a(new b());
        }
        return warning;
    }

    public static <T extends ActionSupportV2> T a(T actionSupport) {
        if (YmnStrategy.withStrategy(1)) {
            actionSupport.setAttachment(new ActionAttachment.a());
        }
        return actionSupport;
    }

    public static <T extends ActionSupportV3> T a(T actionSupport) {
        if (YmnStrategy.withStrategy(1)) {
            actionSupport.setAttachment(new ActionAttachment.a());
        }
        return actionSupport;
    }
}
