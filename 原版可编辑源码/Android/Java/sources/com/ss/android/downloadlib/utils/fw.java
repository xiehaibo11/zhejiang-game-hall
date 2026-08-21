package com.ss.android.downloadlib.utils;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import com.kuaishou.weapon.p0.t;
import com.loc.at;
import com.ss.android.download.api.config.r;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.downloadlib.activity.JumpKllkActivity;
import com.ss.android.downloadlib.activity.TTDelegateActivity;
import com.ss.android.downloadlib.addownload.model.OpenAppResult;
import com.ss.android.downloadlib.constants.EventConstants;
import com.ss.android.downloadlib.event.AdEventHandler;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.HashMap;
import org.bouncycastle.i18n.ErrorBundle;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class fw {
    public static OpenAppResult rg(Context context, Uri uri) {
        if (context == null || uri == null || !"market".equals(uri.getScheme())) {
            return new OpenAppResult(6, 12);
        }
        try {
            Intent intent = new Intent("android.intent.action.VIEW", uri);
            if (!b.rg(context, intent)) {
                return new OpenAppResult(6, 13);
            }
            String strRz = com.ss.android.socialbase.appdownloader.c.pt.rz();
            if (b.pt(context, strRz) && !com.ss.android.socialbase.appdownloader.c.pt.c()) {
                intent.setPackage(strRz);
            }
            if (DownloadSetting.obtainGlobal().optBugFix("fix_jump_market")) {
                intent.addFlags(335544320);
            } else if (!(context instanceof Activity)) {
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            }
            if (DownloadSetting.obtainGlobal().optInt("test_jump_market_failed") == 1) {
                com.ss.android.downloadlib.exception.q.rg().rg(false, "jump market error");
                return new OpenAppResult(6, 25);
            }
            intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
            context.startActivity(intent);
            return new OpenAppResult(5);
        } catch (Exception unused) {
            return new OpenAppResult(6, 14);
        }
    }

    public static OpenAppResult rg(Context context, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return new OpenAppResult(6, 11);
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.c() && b.pt(context, "com.sec.android.app.samsungapps")) {
            return pt(context, str);
        }
        return rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str));
    }

    public static OpenAppResult rg(Context context, com.ss.android.downloadlib.addownload.model.pp ppVar, String str) {
        if (context == null || TextUtils.isEmpty(str)) {
            return new OpenAppResult(6, 11);
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.c() && b.pt(context, "com.sec.android.app.samsungapps")) {
            return pt(context, str);
        }
        if (!ppVar.df.isAd() || !ppVar.pt.enableAM()) {
            return rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str));
        }
        JSONArray jSONArrayOptJSONArray = com.ss.android.downloadlib.addownload.bm.rz().optJSONArray("am_plans");
        if (com.ss.android.socialbase.appdownloader.c.pt.df() && com.ss.android.socialbase.appdownloader.c.rg.rg(jSONArrayOptJSONArray, "am_0")) {
            df(context, ppVar, str);
            return new OpenAppResult(7, OpenAppResult.Source.AM_M1);
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.pt() && com.ss.android.socialbase.appdownloader.c.rg.rg(jSONArrayOptJSONArray, "am_3")) {
            return q(context, ppVar, str);
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.pp() && com.ss.android.socialbase.appdownloader.c.rg.rg(jSONArrayOptJSONArray, "am_2")) {
            pt(context, ppVar, str);
            return new OpenAppResult(7, OpenAppResult.Source.AM_M2);
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.df() && com.ss.android.socialbase.appdownloader.c.rg.rg(jSONArrayOptJSONArray, "am_6")) {
            return rg(context, rg(ppVar));
        }
        if (com.ss.android.socialbase.appdownloader.c.pt.q() && com.ss.android.socialbase.appdownloader.c.rg.rg(jSONArrayOptJSONArray, "am_5")) {
            pp(context, ppVar, str);
            return new OpenAppResult(7, OpenAppResult.Source.AM_V1);
        }
        return rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str));
    }

    private static OpenAppResult pt(Context context, String str) {
        try {
            Uri uri = Uri.parse("https://www.samsungapps.com/appquery/appDetail.as?appId=" + str);
            Intent intent = new Intent();
            intent.setClassName("com.sec.android.app.samsungapps", "com.sec.android.app.samsungapps.Main");
            intent.setData(uri);
            if (!(context instanceof Activity)) {
                intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            }
            intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
            context.startActivity(intent);
            return new OpenAppResult(5);
        } catch (Exception unused) {
            return new OpenAppResult(6, 14);
        }
    }

    private static void df(final Context context, final com.ss.android.downloadlib.addownload.model.pp ppVar, final String str) {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() {
            @Override
            public void run() {
                final JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
                final String strOptString = jSONObjectRz.optString("s");
                final JSONObject jSONObject = new JSONObject();
                String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("x"), strOptString);
                JSONObject jSONObject2 = new JSONObject();
                b.rg(jSONObject2, "p", str);
                b.rg(jSONObject2, t.e, Build.VERSION.INCREMENTAL);
                b.rg(jSONObject2, "m", Build.MODEL);
                b.rg(jSONObject2, "im", com.ss.android.downloadlib.rg.rg.df.rg(context));
                b.rg(jSONObject2, "d", com.ss.android.downloadlib.rg.rg.df.df(context));
                b.rg(jSONObject2, "t", "m");
                byte[] bytes = jSONObject2.toString().getBytes();
                com.ss.android.downloadlib.addownload.bm.pt().rg(strRg, com.ss.android.downloadlib.addownload.bm.z().rg(bytes, bytes.length), "application/octet-stream;tt-data=a", 0, new r() {
                    @Override
                    public void rg(String str2) {
                        fw.df(context, str, str2, ppVar, jSONObject, jSONObjectRz, strOptString);
                    }

                    @Override
                    public void rg(Throwable th) {
                        com.ss.android.downloadlib.df.rg.rg(fw.rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
                        b.rg(jSONObject, EventConstants.ExtraJson.KEY_MESSAGE, th != null ? th.getMessage() : "null");
                        fw.df(ppVar, jSONObject, 4, 1, BaseConstants.MARKET_PREFIX + str);
                    }
                });
            }
        });
    }

    private static String rg(String str, JSONObject jSONObject, String str2) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObject.optString(at.f), str2);
        String strRg2 = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObject.optString(at.g), str2);
        return (TextUtils.isEmpty(strRg) || TextUtils.isEmpty(strRg2)) ? str : str.replace(strRg, strRg2);
    }

    private static OpenAppResult q(Context context, com.ss.android.downloadlib.addownload.model.pp ppVar, String str) {
        Intent intent = new Intent(context, (Class<?>) JumpKllkActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra("p", str);
        intent.putExtra("id", ppVar.rg);
        intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        JSONObject jSONObject = new JSONObject();
        try {
            context.startActivity(intent);
            return new OpenAppResult(7, OpenAppResult.Source.AM_KLLK2);
        } catch (Throwable unused) {
            df(ppVar, jSONObject, 1, 3, BaseConstants.MARKET_PREFIX + str);
            return rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str));
        }
    }

    public static void rg(Context context, String str, long j, boolean z) {
        JSONObject jSONObject = new JSONObject();
        com.ss.android.downloadlib.addownload.model.pp ppVarPp = com.ss.android.downloadlib.addownload.model.c.rg().pp(j);
        try {
            JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
            String strOptString = jSONObjectRz.optString("s");
            String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString(com.tkay.expressad.d.a.b.w), strOptString);
            String strRg2 = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString(com.tkay.expressad.d.a.b.da), strOptString);
            String strRg3 = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("af"), strOptString);
            boolean zRg = com.ss.android.socialbase.appdownloader.c.rg.rg(jSONObjectRz, context, strRg2);
            StringBuilder sb = new StringBuilder(String.format(strRg, str, strRg3, strRg2));
            Intent intent = new Intent("android.intent.action.VIEW");
            String strRz = com.ss.android.socialbase.appdownloader.c.pt.rz();
            if (b.pt(context, strRz)) {
                intent.setPackage(strRz);
            }
            if (z) {
                sb.append(com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("ae"), strOptString));
            } else {
                intent.addFlags(335544320);
            }
            b.rg(jSONObject, "mf", Boolean.valueOf(zRg));
            b.rg(jSONObject, "if", Boolean.valueOf(z));
            intent.setData(Uri.parse(sb.toString()));
            intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
            context.startActivity(intent);
            com.ss.android.downloadlib.df.rg.rg(OpenAppResult.Source.AM_KLLK2, jSONObject, ppVarPp, true);
            if (zRg) {
                df(ppVarPp, jSONObject, -1, 3, sb.toString());
            } else {
                df(ppVarPp, jSONObject, 3, 3, sb.toString());
            }
        } catch (Exception unused) {
            com.ss.android.downloadlib.df.rg.rg(rg(com.ss.android.downloadlib.addownload.bm.getContext(), Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVarPp, true);
            df(ppVarPp, jSONObject, 2, 3, BaseConstants.MARKET_PREFIX + str);
        }
    }

    private static boolean pp(Context context, String str) {
        if (context == null) {
            context = com.ss.android.downloadlib.addownload.bm.getContext();
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Intent intent = new Intent("android.intent.action.VIEW");
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (DownloadSetting.obtainGlobal().optBugFix("fix_app_link_flag")) {
                intent.addFlags(32768);
            }
        }
        intent.setData(Uri.parse(str));
        intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        String strRz = com.ss.android.socialbase.appdownloader.c.pt.rz();
        if (b.pt(com.ss.android.downloadlib.addownload.bm.getContext(), strRz)) {
            intent.setPackage(strRz);
        }
        if (!b.rg(com.ss.android.downloadlib.addownload.bm.getContext(), intent)) {
            return false;
        }
        try {
            context.startActivity(intent);
            return true;
        } catch (Exception unused) {
            return false;
        }
    }

    private static boolean rg(Activity activity, String str, HashMap<String, String> map) {
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setData(Uri.parse(BaseConstants.MARKET_PREFIX + str));
        intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        intent.putExtra("param", map);
        String strRz = com.ss.android.socialbase.appdownloader.c.pt.rz();
        if (b.pt(com.ss.android.downloadlib.addownload.bm.getContext(), strRz)) {
            intent.setPackage(strRz);
        }
        if (!b.rg(com.ss.android.downloadlib.addownload.bm.getContext(), intent)) {
            return false;
        }
        try {
            activity.startActivity(intent);
            return true;
        } catch (Exception e) {
            com.ss.android.downloadlib.exception.q.rg().rg(e, "start v1");
            return false;
        }
    }

    private static void df(Context context, String str, String str2, com.ss.android.downloadlib.addownload.model.pp ppVar, JSONObject jSONObject, JSONObject jSONObject2, String str3) {
        b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, (Object) 1);
        try {
            String strRg = rg(com.ss.android.socialbase.appdownloader.c.q.rg(new JSONObject(str2).optString("a")), jSONObject2, str3);
            b.rg(jSONObject, EventConstants.ExtraJson.OPEN_URL, strRg);
            if (pp(context, strRg)) {
                df(ppVar, jSONObject, -1, 1, strRg);
                com.ss.android.downloadlib.df.rg.rg(OpenAppResult.Source.AM_M1, jSONObject, ppVar, true);
            } else {
                com.ss.android.downloadlib.df.rg.rg(rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
                df(ppVar, jSONObject, 2, 1, BaseConstants.MARKET_PREFIX + str);
            }
        } catch (Exception unused) {
            com.ss.android.downloadlib.df.rg.rg(rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
            df(ppVar, jSONObject, 3, 1, BaseConstants.MARKET_PREFIX + str);
        }
    }

    private static void pt(final Context context, final com.ss.android.downloadlib.addownload.model.pp ppVar, final String str) {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() {
            @Override
            public void run() {
                com.ss.android.downloadlib.df.rg.rg(fw.rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
                JSONObject jSONObject = new JSONObject();
                try {
                    JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
                    Thread.sleep(jSONObjectRz.optInt("m2_delay_millis", 1000));
                    com.ss.android.downloadlib.rg.df.rg.rg().rg(context, true);
                    com.ss.android.downloadlib.rg.df.df dfVar = new com.ss.android.downloadlib.rg.df.df();
                    dfVar.rg = 1;
                    dfVar.df = 0;
                    String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("v"), jSONObjectRz.optString("s"));
                    dfVar.q = String.format(strRg, str);
                    com.ss.android.downloadlib.rg.df.rg.rg().rg(dfVar, (com.ss.android.downloadlib.rg.df.pt) null);
                    com.ss.android.downloadlib.rg.df.rg.rg().df();
                    fw.df(ppVar, jSONObject, -1, 2, String.format(strRg, str));
                } catch (Throwable th) {
                    th.printStackTrace();
                    fw.df(ppVar, jSONObject, 1, 2, BaseConstants.MARKET_PREFIX + str);
                }
            }
        });
    }

    private static void pp(final Context context, final com.ss.android.downloadlib.addownload.model.pp ppVar, final String str) {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() {
            @Override
            public void run() {
                JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
                String strOptString = jSONObjectRz.optString("s");
                final JSONObject jSONObject = new JSONObject();
                String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("x"), strOptString);
                JSONObject jSONObject2 = new JSONObject();
                b.rg(jSONObject2, "t", "v");
                b.rg(jSONObject2, "p", str);
                byte[] bytes = jSONObject2.toString().getBytes();
                com.ss.android.downloadlib.addownload.bm.pt().rg(strRg, com.ss.android.downloadlib.addownload.bm.z().rg(bytes, bytes.length), "application/octet-stream;tt-data=a", 0, new r() {
                    @Override
                    public void rg(String str2) {
                        fw.df(context, str, str2, ppVar, jSONObject);
                    }

                    @Override
                    public void rg(Throwable th) {
                        com.ss.android.downloadlib.df.rg.rg(fw.rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
                        b.rg(jSONObject, EventConstants.ExtraJson.KEY_MESSAGE, th != null ? th.getMessage() : "null");
                        fw.df(ppVar, jSONObject, 7, 5, BaseConstants.MARKET_PREFIX + str);
                    }
                });
            }
        });
    }

    private static void df(Context context, String str, String str2, com.ss.android.downloadlib.addownload.model.pp ppVar, JSONObject jSONObject) {
        b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, (Object) 5);
        try {
            String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(new JSONObject(str2).optString("a"));
            if (!TextUtils.isEmpty(strRg)) {
                TTDelegateActivity.rg(str, ppVar.rg, strRg, jSONObject);
            } else {
                com.ss.android.downloadlib.df.rg.rg(rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
                df(ppVar, jSONObject, 5, 5, BaseConstants.MARKET_PREFIX + str);
            }
        } catch (Exception unused) {
            com.ss.android.downloadlib.df.rg.rg(rg(context, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVar, true);
            df(ppVar, jSONObject, 6, 5, BaseConstants.MARKET_PREFIX + str);
        }
    }

    public static void rg(Activity activity, String str, long j, String str2, String str3) {
        JSONObject jSONObject;
        int i;
        try {
            jSONObject = new JSONObject(str3);
        } catch (JSONException unused) {
            jSONObject = new JSONObject();
        }
        com.ss.android.downloadlib.addownload.model.pp ppVarPp = com.ss.android.downloadlib.addownload.model.c.rg().pp(j);
        try {
            JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
            boolean zRg = com.ss.android.socialbase.appdownloader.c.rg.rg(jSONObjectRz, activity, com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("bg"), jSONObjectRz.optString("s")));
            HashMap<String, String> mapDf = b.df(new JSONObject(str2));
            if (zRg && !mapDf.isEmpty() && rg(activity, str, mapDf)) {
                df(ppVarPp, jSONObject, -1, 5, BaseConstants.MARKET_PREFIX + str);
                com.ss.android.downloadlib.df.rg.rg(OpenAppResult.Source.AM_V1, jSONObject, ppVarPp, true);
                return;
            }
            if (zRg) {
                i = mapDf.isEmpty() ? 1 : 2;
            } else {
                i = 3;
            }
            df(ppVarPp, jSONObject, i, 5, BaseConstants.MARKET_PREFIX + str);
            com.ss.android.downloadlib.df.rg.rg(rg(activity, Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVarPp, true);
        } catch (Exception unused2) {
            com.ss.android.downloadlib.df.rg.rg(rg(com.ss.android.downloadlib.addownload.bm.getContext(), Uri.parse(BaseConstants.MARKET_PREFIX + str)), ppVarPp, true);
            df(ppVarPp, jSONObject, 4, 5, BaseConstants.MARKET_PREFIX + str);
        }
    }

    private static void df(com.ss.android.downloadlib.addownload.model.pp ppVar, JSONObject jSONObject, int i, int i2, String str) {
        b.rg(jSONObject, "error_code", Integer.valueOf(i));
        b.rg(jSONObject, EventConstants.ExtraJson.KEY_TYPE, Integer.valueOf(i2));
        b.rg(jSONObject, EventConstants.ExtraJson.KEY_REAL_MARKET_URL, str);
        b.rg(jSONObject, com.ss.android.socialbase.appdownloader.c.pt.rz(), Integer.valueOf(b.df(com.ss.android.downloadlib.addownload.bm.getContext(), com.ss.android.socialbase.appdownloader.c.pt.rz())));
        AdEventHandler.rg().df(EventConstants.Label.ANTI_MARKET_RESULT, jSONObject, ppVar);
    }

    static OpenAppResult df(Context context, String str) {
        if (TextUtils.isEmpty(str)) {
            return new OpenAppResult(4, 11);
        }
        if (context == null) {
            context = com.ss.android.downloadlib.addownload.bm.getContext();
        }
        Intent intentC = b.c(context, str);
        if (intentC == null) {
            return new OpenAppResult(4, 22);
        }
        intentC.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        try {
            context.startActivity(intentC);
            return new OpenAppResult(3);
        } catch (Exception unused) {
            return new OpenAppResult(4, 23);
        }
    }

    static OpenAppResult rg(Context context, String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        Intent intentC = b.c(context, str);
        if (intentC == null) {
            return new OpenAppResult(4, 22);
        }
        if (Build.VERSION.SDK_INT >= 26 && com.ss.android.downloadlib.addownload.bm.rz().optInt("open_package_mode") == 1 && com.ss.android.downloadlib.addownload.bm.b() != null && com.ss.android.downloadlib.addownload.bm.b().rg() && rgVar.z()) {
            TTDelegateActivity.df(str, rgVar);
            return new OpenAppResult(3);
        }
        intentC.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        try {
            context.startActivity(intentC);
            return new OpenAppResult(3);
        } catch (Exception unused) {
            return new OpenAppResult(4, 23);
        }
    }

    static OpenAppResult rg(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        return rg(com.ss.android.downloadlib.addownload.bm.getContext(), str, rgVar);
    }

    static OpenAppResult df(String str, com.ss.android.downloadad.api.rg.rg rgVar) {
        if (TextUtils.isEmpty(str)) {
            return new OpenAppResult(2, 21);
        }
        Context context = com.ss.android.downloadlib.addownload.bm.getContext();
        Uri uri = Uri.parse(str);
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setData(uri);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        intent.putExtra(EventConstants.ExtraJson.OPEN_URL, str);
        intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
        if (DownloadSetting.obtainGlobal().optBugFix("fix_app_link_flag")) {
            intent.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
        }
        if (b.df(context, intent)) {
            if (com.ss.android.downloadlib.addownload.bm.rz().optInt("open_url_mode") == 0 && com.ss.android.downloadlib.addownload.bm.b() != null && com.ss.android.downloadlib.addownload.bm.b().rg() && Build.VERSION.SDK_INT >= 26 && rgVar.z()) {
                TTDelegateActivity.rg(str, rgVar);
            } else {
                try {
                    com.ss.android.downloadlib.addownload.bm.getContext().startActivity(intent);
                } catch (Exception unused) {
                    return new OpenAppResult(2);
                }
            }
            return new OpenAppResult(1);
        }
        return new OpenAppResult(2, 24);
    }

    static OpenAppResult rg(com.ss.android.downloadad.api.rg.df dfVar, String str, String str2) {
        OpenAppResult openAppResultDf = df(str, dfVar);
        return (com.ss.android.downloadlib.df.c.rg(dfVar) && openAppResultDf.getType() == 2) ? rg(str2, dfVar) : openAppResultDf;
    }

    static boolean q(Context context, String str) {
        if (context == null) {
            return false;
        }
        try {
            Uri uri = Uri.parse(str);
            Intent intent = new Intent("android.intent.action.VIEW");
            intent.setData(uri);
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra(EventConstants.ExtraJson.OPEN_URL, str);
            intent.putExtra(BaseConstants.START_ONLY_FOR_ANDROID, true);
            context.startActivity(intent);
            return true;
        } catch (Throwable th) {
            th.printStackTrace();
            return false;
        }
    }

    public static Uri rg(com.ss.android.downloadlib.addownload.model.pp ppVar) {
        String strPp = ppVar.pp();
        Uri.Builder builder = new Uri.Builder();
        JSONObject jSONObject = new JSONObject();
        JSONObject jSONObjectRz = com.ss.android.downloadlib.addownload.bm.rz();
        String strRg = com.ss.android.socialbase.appdownloader.c.q.rg(jSONObjectRz.optString("bl"), jSONObjectRz.optString("s"));
        builder.scheme("market").authority(ErrorBundle.DETAIL_ENTRY).appendQueryParameter("id", strPp);
        if (!TextUtils.isEmpty(strRg)) {
            builder.appendPath(strRg);
        }
        Uri uriBuild = builder.build();
        df(ppVar, jSONObject, -1, 6, uriBuild.toString());
        return uriBuild;
    }
}
