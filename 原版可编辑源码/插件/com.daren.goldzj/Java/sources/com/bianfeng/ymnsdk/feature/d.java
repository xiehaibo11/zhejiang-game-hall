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

    class a extends TypeToken<Map<String, UrlConfig>> {
        a() {
        }
    }

    class b implements f.a {
        b() {
        }

        @Override
        public void a(String str) {
            Log.e("YmnSDK", str + "");
        }
    }

    public static void a(Context context, UrlConfig urlConfig) {
        try {
            Map<String, UrlConfig> mapF = f(context);
            mapF.put(urlConfig.getGid(), urlConfig);
            a(context, "ymn_url_remote_configs", mapF);
            UrlLocalState urlLocalStateE = e(context);
            urlLocalStateE.updateConfig(b(context));
            a(context, urlLocalStateE);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static UrlConfig b(Context context) {
        UrlConfig urlConfig = null;
        for (UrlConfig urlConfig2 : f(context).values()) {
            if (urlConfig == null || urlConfig2.getLevel() > urlConfig.getLevel()) {
                urlConfig = urlConfig2;
            }
        }
        return urlConfig;
    }

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

    public static UrlLocalState e(Context context) {
        String preferences = ResourceUtil.readPreferences(context, "ymn_url_local_states");
        if (!TextUtils.isEmpty(preferences)) {
            return (UrlLocalState) a.fromJson(preferences, UrlLocalState.class);
        }
        UrlConfig urlConfigB = b(context);
        if (urlConfigB == null) {
            return null;
        }
        UrlLocalState urlLocalState = new UrlLocalState(urlConfigB);
        a(context, urlLocalState);
        return urlLocalState;
    }

    public static Map<String, UrlConfig> f(Context context) {
        HashMap map = new HashMap();
        String preferences = ResourceUtil.readPreferences(context, "ymn_url_remote_configs");
        return !TextUtils.isEmpty(preferences) ? (Map) a.fromJson(preferences, new a().getType()) : map;
    }

    public static void a(Context context, UrlLocalState urlLocalState) {
        a(context, "ymn_url_local_states", urlLocalState);
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

    public static void a(Context context, String str, Object obj) {
        if (obj != null) {
            ResourceUtil.savePreferences(context, str, a.toJson(obj));
        }
    }

    public static <T extends ActionSupport> T a(T t) {
        if (YmnStrategy.withStrategy(1)) {
            t.setAttachment(new ActionAttachment.a());
        }
        return t;
    }

    public static f a(f fVar) {
        if (YmnStrategy.withStrategy(2)) {
            fVar.a(new b());
        }
        return fVar;
    }

    public static <T extends ActionSupportV2> T a(T t) {
        if (YmnStrategy.withStrategy(1)) {
            t.setAttachment(new ActionAttachment.a());
        }
        return t;
    }

    public static <T extends ActionSupportV3> T a(T t) {
        if (YmnStrategy.withStrategy(1)) {
            t.setAttachment(new ActionAttachment.a());
        }
        return t;
    }
}
