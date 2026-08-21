package com.bykv.vk.openvk.api.plugin;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Pair;
import com.bykv.vk.openvk.AdConfig;
import com.bykv.vk.openvk.TTCustomController;
import com.bykv.vk.openvk.TTVfManager;
import com.bykv.vk.openvk.TTVfSdk;
import com.bykv.vk.openvk.api.plugin.fw;
import com.tkay.expressad.foundation.d.r;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

final class pt {
    private static SharedPreferences q;
    private static ScheduledExecutorService df = Executors.newSingleThreadScheduledExecutor(new fw.df("tt_pangle_thread_pl_report"));
    private static final List<Pair<String, JSONObject>> pt = new ArrayList();
    static final Map<String, String> rg = new HashMap();
    private static volatile boolean pp = false;

    public static void rg(Context context) {
        q = context.getSharedPreferences("tt_sdk_settings_other", 0);
    }

    public static final void rg(int i, String str, long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(r.ag, Long.valueOf(j));
            jSONObject.putOpt("code", Integer.valueOf(i));
            jSONObject.putOpt("message", str);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        pp("plugin_load_failed", jSONObject);
    }

    public static void rg(String str, JSONObject jSONObject) {
        pp("zeus_" + str, jSONObject);
    }

    public static void rg() {
        if (pp) {
            return;
        }
        try {
            pp = true;
            df.shutdown();
        } catch (Throwable unused) {
        }
    }

    private static void pp(String str, JSONObject jSONObject) {
        if (jSONObject == null) {
            return;
        }
        TTVfManager vfManager = TTVfSdk.getVfManager();
        if (vfManager != null) {
            Bundle bundle = new Bundle();
            bundle.putInt("action", 1);
            bundle.putString("event_name", str);
            bundle.putString("event_extra", jSONObject.toString());
            vfManager.getExtra(Bundle.class, bundle);
            return;
        }
        df(str, jSONObject);
    }

    public static final void df(int i, String str, long j) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.putOpt(r.ag, Long.valueOf(j));
            jSONObject.putOpt("code", Integer.valueOf(i));
            jSONObject.putOpt("message", str);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        df("plugin_load_failed", jSONObject);
    }

    public static void df(final String str, final JSONObject jSONObject) {
        if (pp) {
            return;
        }
        df.execute(new Runnable() {
            @Override
            public void run() throws Throwable {
                ArrayList arrayList = new ArrayList();
                arrayList.add(pt.c(str, jSONObject));
                pt.q(arrayList);
            }
        });
    }

    public static void rg(final List<JSONObject> list) {
        if (pp) {
            return;
        }
        if (list != null && list.isEmpty() && pt.isEmpty()) {
            return;
        }
        df.execute(new Runnable() {
            @Override
            public void run() throws Throwable {
                pt.q(list);
            }
        });
    }

    private static JSONObject c(String str, JSONObject jSONObject) {
        String str2 = "5.1.1.4";
        JSONObject jSONObject2 = new JSONObject();
        try {
            jSONObject.put("os_api", Build.VERSION.SDK_INT);
            jSONObject.put("support_abi", Arrays.toString(Build.VERSION.SDK_INT >= 21 ? Build.SUPPORTED_ABIS : new String[]{Build.CPU_ABI, Build.CPU_ABI2}));
            jSONObject2.put("ad_sdk_version", "5.1.1.4");
            String strRg = c.rg("com.bykv.vk");
            if (!TextUtils.isEmpty(strRg)) {
                str2 = strRg;
            }
            jSONObject2.put(PluginConstants.KEY_PLUGIN_VERSION, str2);
            jSONObject2.put("timestamp", System.currentTimeMillis() / 1000);
            jSONObject2.put("is_plugin", true);
            jSONObject2.put("event_extra", jSONObject != null ? jSONObject.toString() : "");
            jSONObject2.put("type", str);
            JSONObject jSONObject3 = new JSONObject();
            jSONObject3.put("model", Build.MODEL);
            jSONObject3.put("vendor", Build.MANUFACTURER);
            jSONObject3.put("imei", rg.get("imei"));
            jSONObject3.put("oaid", rg.get("oaid"));
            jSONObject2.put("device_info", jSONObject3);
        } catch (JSONException unused) {
        }
        return jSONObject2;
    }

    public static void q(String str, JSONObject jSONObject) {
        pt.add(new Pair<>(str, jSONObject));
    }

    private static void q(List<JSONObject> list) throws Throwable {
        if (list == null) {
            return;
        }
        SharedPreferences sharedPreferences = q;
        String str = String.format("https://%s%s", sharedPreferences != null ? sharedPreferences.getString("url_alog", "api-access.pangolin-sdk-toutiao.com") : "api-access.pangolin-sdk-toutiao.com", "/api/ad/union/sdk/stats/batch/");
        JSONObject jSONObject = new JSONObject();
        try {
            if (pt.size() > 0) {
                Iterator<Pair<String, JSONObject>> it = pt.iterator();
                while (it.hasNext()) {
                    Pair<String, JSONObject> next = it.next();
                    list.add(c((String) next.first, (JSONObject) next.second));
                    it.remove();
                }
            }
            jSONObject.put("stats_list", new JSONArray((Collection<Object>) list));
        } catch (JSONException unused) {
        }
        com.bykv.vk.openvk.api.plugin.rg.q.rg().rg(true, str, com.bykv.vk.openvk.api.plugin.df.df.rg(jSONObject).toString().getBytes());
    }

    public static void rg(final Bundle bundle) {
        if (pp) {
            return;
        }
        df.execute(new Runnable() {
            @Override
            public void run() throws Throwable {
                Bundle bundle2 = bundle;
                if (bundle2 == null) {
                    return;
                }
                try {
                    String string = bundle2.getString("event_name");
                    String string2 = bundle.getString("event_extra");
                    JSONObject jSONObject = TextUtils.isEmpty(string2) ? new JSONObject() : new JSONObject(string2);
                    ArrayList arrayList = new ArrayList();
                    arrayList.add(pt.c(string, jSONObject));
                    pt.q(arrayList);
                } catch (Exception unused) {
                }
            }
        });
    }

    public static void rg(AdConfig adConfig) {
        if (adConfig == null) {
            return;
        }
        rg.put("appid", adConfig.getAppId());
        Object extra = adConfig.getExtra("plugin_update_conf");
        if (extra instanceof Integer) {
            String string = ((Integer) extra).toString();
            Map<String, String> map = rg;
            if (string == null) {
                string = "2";
            }
            map.put("plugin_update_conf", string);
        }
        TTCustomController customController = adConfig.getCustomController();
        if (customController != null) {
            try {
                rg.put("oaid", customController.getDevOaid());
                rg.put("imei", customController.getDevImei());
            } catch (Exception unused) {
            }
        }
    }
}
