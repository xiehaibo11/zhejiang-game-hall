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
import java.util.Iterator;
import java.util.Map;

public class d {
    private static Gson a;

    class a extends TypeToken<Map<String, UrlConfig>> {
        a() {
        }
    }

    class b implements f.a {
        b() {
        }

        @Override
        public void a(String r2) {
            Log.e("YmnSDK", r2 + "");
        }
    }

    static {
        a = new Gson();
    }

    public static void a(Context r2, UrlConfig r3) {
        Map<String, UrlConfig> r0 = f(r2);     // Catch: Exception -> L4
        r0.put(r3.getGid(), r3);     // Catch: Exception -> L4
        a(r2, "ymn_url_remote_configs", r0);     // Catch: Exception -> L4
        UrlLocalState r32 = e(r2);     // Catch: Exception -> L4
        r32.updateConfig(b(r2));     // Catch: Exception -> L4
        a(r2, r32);     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        e.printStackTrace();
    }

    private static UrlConfig b(Context r4) {
        Iterator<UrlConfig> r42 = f(r4).values().iterator();
        UrlConfig r0 = null;
    L4:
        if (r42.hasNext() == false) goto L10;
        UrlConfig r1 = r42.next();
        if (r0 == null) goto L9;
        if (r1.getLevel() <= r0.getLevel()) goto L4;
    L9:
        r0 = r1;
        goto L4
    L10:
        return r0;
    }

    public static void c(Context r0) {
        Logger.updateState();
    }

    public static PluginLocalState d(Context r2) {
        return (PluginLocalState) a(r2, "ymn_plugin_local_states", PluginLocalState.class);
    L5:
        e = move-exception;
        e.printStackTrace();
        return new PluginLocalState();
    }

    public static UrlLocalState e(Context r2) {
        String r0 = ResourceUtil.readPreferences(r2, "ymn_url_local_states");
        if (TextUtils.isEmpty(r0) == false) goto L9;
        UrlConfig r02 = b(r2);
        if (r02 == null) goto L7;
        UrlLocalState r1 = new UrlLocalState(r02);
        a(r2, r1);
        return r1;
    L7:
        return null;
    L9:
        return (UrlLocalState) a.fromJson(r0, UrlLocalState.class);
    }

    public static Map<String, UrlConfig> f(Context r2) {
        HashMap r0 = new HashMap();
        String r22 = ResourceUtil.readPreferences(r2, "ymn_url_remote_configs");
        if (TextUtils.isEmpty(r22) == false) goto L5;
        return r0;
    L5:
        return (Map) a.fromJson(r22, new a().getType());
    }

    public static void a(Context r1, UrlLocalState r2) {
        a(r1, "ymn_url_local_states", r2);
    }

    public static void a(Context r1) {
        ResourceUtil.removePreferences(r1, "ymn_url_local_states");
        ResourceUtil.removePreferences(r1, "ymn_url_remote_configs");
    }

    public static <T> T a(Context r0, String r1, Class<T> r2) throws Exception {
        String r02 = ResourceUtil.readPreferences(r0, r1);
        if (TextUtils.isEmpty(r02) == true) goto L7;
        return (T) a.fromJson(r02, r2);
    L7:
        return r2.newInstance();
    }

    public static void a(Context r1, String r2, Object r3) {
        if (r3 == null) goto L5;
        ResourceUtil.savePreferences(r1, r2, a.toJson(r3));
        return;
    }

    public static <T extends ActionSupport> T a(T r1) {
        if (YmnStrategy.withStrategy(1) == false) goto L5;
        r1.setAttachment(new ActionAttachment.a());
    L5:
        return r1;
    }

    public static f a(f r1) {
        if (YmnStrategy.withStrategy(2) == false) goto L5;
        r1.a(new b());
    L5:
        return r1;
    }

    public static <T extends ActionSupportV2> T a(T r1) {
        if (YmnStrategy.withStrategy(1) == false) goto L5;
        r1.setAttachment(new ActionAttachment.a());
    L5:
        return r1;
    }

    public static <T extends ActionSupportV3> T a(T r1) {
        if (YmnStrategy.withStrategy(1) == false) goto L5;
        r1.setAttachment(new ActionAttachment.a());
    L5:
        return r1;
    }
}
