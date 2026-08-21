package com.bykv.vk.openvk.live;

import android.app.Application;
import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.res.Resources;
import android.os.Bundle;
import android.text.TextUtils;
import com.bykv.vk.openvk.TTAppContextHolder;
import com.bykv.vk.openvk.TTPluginListener;
import com.bykv.vk.openvk.api.plugin.PluginConstants;
import com.bykv.vk.openvk.api.plugin.c;
import com.bytedance.android.live.base.api.ILiveHostContextParam;
import com.bytedance.android.live.base.api.ILiveInitCallback;
import com.bytedance.android.live.base.api.IOuterLiveService;
import com.bytedance.android.openliveplugin.LivePluginHelper;
import com.bytedance.pangle.Zeus;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class rg {
    private static SharedPreferences rg;

    public static Bundle rg(c cVar, String str) {
        Bundle bundle = new Bundle();
        bundle.putString("app_id", str);
        String strRg = c.rg("com.byted.live.lite");
        if (TextUtils.isEmpty(strRg)) {
            strRg = "0.0.0.0";
        }
        bundle.putString(PluginConstants.KEY_PLUGIN_VERSION, strRg);
        bundle.putString("sdk_version", rg(TTAppContextHolder.getContext()));
        return bundle;
    }

    public static void rg(c cVar, final Bundle bundle, final TTPluginListener tTPluginListener) {
        cVar.df(new TTPluginListener() { // from class: com.bykv.vk.openvk.live.rg.1
            @Override // com.bykv.vk.openvk.TTPluginListener
            public String packageName() {
                return "com.byted.live.lite";
            }

            @Override // com.bykv.vk.openvk.TTPluginListener
            public void onPluginListener(int i, ClassLoader classLoader, Resources resources, Bundle bundle2) {
                TTPluginListener tTPluginListener2 = tTPluginListener;
                if (tTPluginListener2 != null) {
                    tTPluginListener2.onPluginListener(i, classLoader, resources, bundle2);
                }
            }

            @Override // com.bykv.vk.openvk.TTPluginListener
            public Bundle config() {
                return bundle;
            }
        });
    }

    public static String rg(Context context) {
        try {
            ApplicationInfo applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            if (applicationInfo == null) {
                return null;
            }
            String string = applicationInfo.metaData.getString(TTLiveConstants.LIVE_META_KEY);
            if (TextUtils.isEmpty(string)) {
                return null;
            }
            return c.rg(new JSONObject(string).optInt(TTLiveConstants.LIVE_API_VERSION_KEY));
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    public static boolean rg(final Context context, final String str, final ILiveHostContextParam.Builder builder, final ILiveInitCallback iLiveInitCallback) {
        try {
            com.bykv.vk.openvk.df.rg.rg().rg(new Runnable() { // from class: com.bykv.vk.openvk.live.rg.2
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        LivePluginHelper.init((Application) context, str, builder, iLiveInitCallback);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            });
            return true;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    public static boolean rg() {
        try {
            com.bykv.vk.openvk.df.rg.rg().rg(new Runnable() { // from class: com.bykv.vk.openvk.live.rg.3
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        LivePluginHelper.initLiveCommerce();
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            });
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean rg(Context context, Bundle bundle) {
        if (context != null && bundle != null && bundle.containsKey(TTLiveConstants.ROOMID_KEY)) {
            long j = bundle.getLong(TTLiveConstants.ROOMID_KEY);
            try {
                IOuterLiveService iOuterLiveService = (IOuterLiveService) LivePluginHelper.getLiveRoomService();
                if (iOuterLiveService == null) {
                    return false;
                }
                iOuterLiveService.enterLiveRoom(context, j, bundle);
                return true;
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return false;
    }

    public static void rg(long j) {
        if (rg == null) {
            rg = TTAppContextHolder.getContext().getSharedPreferences("csj_live", 0);
        }
        try {
            if (rg != null) {
                int i = rg.getInt("live_init_" + j, 0);
                SharedPreferences.Editor editorEdit = rg.edit();
                editorEdit.putInt("live_init_" + j, i + 1);
                editorEdit.commit();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static void df(long j) {
        if (rg == null) {
            rg = TTAppContextHolder.getContext().getSharedPreferences("csj_live", 0);
        }
        try {
            if (rg != null) {
                SharedPreferences.Editor editorEdit = rg.edit();
                editorEdit.putInt("live_init_" + j, 0);
                editorEdit.commit();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public static boolean q(long j) {
        int i;
        if (rg == null) {
            rg = TTAppContextHolder.getContext().getSharedPreferences("csj_live", 0);
        }
        SharedPreferences sharedPreferences = rg;
        if (sharedPreferences != null) {
            i = sharedPreferences.getInt("live_init_" + j, 0);
        } else {
            i = 0;
        }
        return i < 5;
    }

    public static void pt(long j) {
        try {
            Zeus.unInstallPlugin("com.byted.live.lite");
        } catch (Throwable th) {
            th.printStackTrace();
        }
        df(j);
    }
}
