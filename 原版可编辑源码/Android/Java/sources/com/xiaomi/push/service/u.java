package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import com.xiaomi.push.fx;
import java.io.IOException;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

public class u {
    private static t a;
    private static a a;

    public interface a {
        void a();
    }

    private static int a(Context context) {
        return context.getSharedPreferences("mipush_account", 0).getInt("enc_req_fail_count", 0);
    }

    public static synchronized t a(Context context) {
        if (a != null) {
            return a;
        }
        SharedPreferences sharedPreferences = context.getSharedPreferences("mipush_account", 0);
        String string = sharedPreferences.getString("uuid", null);
        String string2 = sharedPreferences.getString("token", null);
        String string3 = sharedPreferences.getString("security", null);
        String string4 = sharedPreferences.getString("app_id", null);
        String string5 = sharedPreferences.getString("app_token", null);
        String string6 = sharedPreferences.getString("package_name", null);
        String string7 = sharedPreferences.getString("device_id", null);
        int i = sharedPreferences.getInt("env_type", 1);
        if (!TextUtils.isEmpty(string7) && com.xiaomi.push.j.a(string7)) {
            string7 = com.xiaomi.push.j.i(context);
            sharedPreferences.edit().putString("device_id", string7).commit();
        }
        if (TextUtils.isEmpty(string) || TextUtils.isEmpty(string2) || TextUtils.isEmpty(string3)) {
            return null;
        }
        String strI = com.xiaomi.push.j.i(context);
        if (!"com.xiaomi.xmsf".equals(context.getPackageName()) && !TextUtils.isEmpty(strI) && !TextUtils.isEmpty(string7) && !string7.equals(strI)) {
            com.xiaomi.channel.commonutils.logger.b.a("read_phone_state permission changes.");
        }
        t tVar = new t(string, string2, string3, string4, string5, string6, i);
        a = tVar;
        return tVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:104:0x0317  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x031b A[Catch: all -> 0x0330, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:11:0x0045  */
    /* JADX WARN: Removed duplicated region for block: B:14:0x0057 A[Catch: all -> 0x0330, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x006e  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x007e  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x009e A[Catch: all -> 0x0330, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:35:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00cf A[Catch: all -> 0x0330, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0140 A[Catch: all -> 0x0330, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0186 A[Catch: all -> 0x0330, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0005, B:6:0x001a, B:8:0x0024, B:10:0x003a, B:12:0x0046, B:14:0x0057, B:15:0x005c, B:19:0x0068, B:23:0x0074, B:27:0x0080, B:28:0x008a, B:34:0x009e, B:36:0x00a7, B:38:0x00cf, B:40:0x00db, B:41:0x00ee, B:43:0x00f8, B:45:0x00fe, B:46:0x0112, B:48:0x0118, B:49:0x011d, B:51:0x0140, B:52:0x0149, B:53:0x0180, B:55:0x0186, B:56:0x018d, B:59:0x019c, B:60:0x01cd, B:62:0x01ed, B:65:0x01f4, B:67:0x020b, B:70:0x0212, B:76:0x0230, B:78:0x0236, B:99:0x02ed, B:100:0x02fe, B:106:0x031b, B:108:0x0321, B:109:0x0329, B:103:0x0305, B:74:0x0219, B:31:0x0096), top: B:115:0x0005, inners: #2, #6, #7 }] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x020a  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0211  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static synchronized t a(Context context, String str, String str2, String str3) {
        String strSubstring;
        String strA;
        String str4;
        PackageInfo packageInfo;
        int iA;
        boolean z;
        com.xiaomi.push.bh bhVarA;
        boolean z2;
        String str5;
        JSONObject jSONObject;
        TreeMap treeMap = new TreeMap();
        treeMap.put(com.tkay.expressad.foundation.d.r.aC, com.xiaomi.push.j.a(context, false));
        if (a == null || TextUtils.isEmpty(a.a)) {
            strSubstring = null;
            com.xiaomi.push.ba.a(context).a(treeMap);
            strA = com.xiaomi.push.j.a(context);
            if (!TextUtils.isEmpty(strA)) {
                treeMap.put("gaid", strA);
            }
            String str6 = !a(context) ? "1000271" : str2;
            String str7 = !a(context) ? "420100086271" : str3;
            str4 = !a(context) ? "com.xiaomi.xmsf" : str;
            treeMap.put("appid", str6);
            treeMap.put("apptoken", str7);
            try {
                packageInfo = context.getPackageManager().getPackageInfo(str4, 16384);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                packageInfo = null;
            }
            treeMap.put("appversion", packageInfo == null ? String.valueOf(packageInfo.versionCode) : "0");
            treeMap.put("sdkversion", Integer.toString(40090));
            treeMap.put("packagename", str4);
            treeMap.put("model", Build.MODEL);
            treeMap.put("board", Build.BOARD);
            if (!com.xiaomi.push.m.d()) {
                String strD = com.xiaomi.push.j.d(context);
                String str8 = TextUtils.isEmpty(strD) ? "" : "" + com.xiaomi.push.bp.a(strD);
                String strF = com.xiaomi.push.j.f(context);
                if (!TextUtils.isEmpty(str8) && !TextUtils.isEmpty(strF)) {
                    str8 = str8 + Constants.ACCEPT_TIME_SEPARATOR_SP + strF;
                }
                if (!TextUtils.isEmpty(str8)) {
                    treeMap.put(Constants.EXTRA_KEY_IMEI_MD5, str8);
                }
            }
            treeMap.put("os", Build.VERSION.RELEASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Build.VERSION.INCREMENTAL);
            iA = com.xiaomi.push.j.a();
            if (iA >= 0) {
                treeMap.put("space_id", Integer.toString(iA));
            }
            treeMap.put("brand", Build.BRAND + "");
            treeMap.put("ram", com.xiaomi.push.j.a());
            treeMap.put("rom", com.xiaomi.push.j.b());
            JSONObject jSONObject2 = new JSONObject();
            for (Map.Entry entry : treeMap.entrySet()) {
                try {
                    jSONObject2.put((String) entry.getKey(), entry.getValue());
                } catch (JSONException e2) {
                    com.xiaomi.channel.commonutils.logger.b.d("failed to add data in json format: k=" + ((String) entry.getKey()) + ",v=" + ((String) entry.getValue()) + ". " + e2);
                }
            }
            String strA2 = bs.a(jSONObject2.toString());
            TreeMap treeMap2 = new TreeMap();
            treeMap2.put("requestData", strA2);
            treeMap2.put("keyPairVer", "1");
            if (a(context) < 2 || TextUtils.isEmpty(strA2)) {
                z = false;
            } else {
                com.xiaomi.channel.commonutils.logger.b.a("r.data = " + strA2);
                z = true;
            }
            String strA3 = a(context, z);
            if (z) {
                treeMap = treeMap2;
            }
            try {
                bhVarA = com.xiaomi.push.bj.a(context, strA3, treeMap);
            } catch (IOException e3) {
                com.xiaomi.channel.commonutils.logger.b.d("device registration request failed. " + e3);
                bhVarA = null;
            }
            if (bhVarA != null || bhVarA.a != 200) {
                z2 = z;
                if (z2 && com.xiaomi.push.bj.c(context)) {
                    a(context, a(context) + 1);
                }
                com.xiaomi.channel.commonutils.logger.b.a("fail to register push account. meet error.");
                return null;
            }
            String strA4 = bhVarA.a();
            if (!TextUtils.isEmpty(strA4)) {
                try {
                    jSONObject = new JSONObject(strA4);
                } catch (JSONException e4) {
                    e = e4;
                    z2 = z;
                } catch (Throwable th) {
                    th = th;
                    z2 = z;
                }
                try {
                    if (jSONObject.getInt("code") == 0) {
                        JSONObject jSONObject3 = jSONObject.getJSONObject("data");
                        String string = jSONObject3.getString("ssecurity");
                        String string2 = jSONObject3.getString("token");
                        String string3 = jSONObject3.getString("userId");
                        if (TextUtils.isEmpty(strSubstring)) {
                            strSubstring = "an" + com.xiaomi.push.bp.a(6);
                        }
                        t tVar = new t(string3 + "@xiaomi.com/" + strSubstring, string2, string, str6, str7, str4, com.xiaomi.push.ae.a());
                        a(context, tVar);
                        a = tVar;
                        a(context, 0);
                        com.xiaomi.channel.commonutils.logger.b.a("device registration is successful. " + string3);
                        return tVar;
                    }
                    z2 = z;
                    x.a(context, jSONObject.getInt("code"), jSONObject.optString("description"));
                    com.xiaomi.channel.commonutils.logger.b.a("device registration resp: " + strA4);
                } catch (JSONException e5) {
                    e = e5;
                    str5 = "failed to parse respone json data. " + e;
                    com.xiaomi.channel.commonutils.logger.b.d(str5);
                } catch (Throwable th2) {
                    th = th2;
                    str5 = "unknow throwable. " + th;
                    com.xiaomi.channel.commonutils.logger.b.d(str5);
                }
                str5 = "failed to parse respone json data. " + e;
                com.xiaomi.channel.commonutils.logger.b.d(str5);
            }
            if (z2) {
                a(context, a(context) + 1);
            }
            com.xiaomi.channel.commonutils.logger.b.a("fail to register push account. meet error.");
            return null;
        }
        treeMap.put("uuid", a.a);
        int iLastIndexOf = a.a.lastIndexOf("/");
        if (iLastIndexOf != -1) {
            strSubstring = a.a.substring(iLastIndexOf + 1);
        }
        com.xiaomi.push.ba.a(context).a(treeMap);
        strA = com.xiaomi.push.j.a(context);
        if (!TextUtils.isEmpty(strA)) {
        }
        if (!a(context)) {
        }
        if (!a(context)) {
        }
        if (!a(context)) {
        }
        treeMap.put("appid", str6);
        treeMap.put("apptoken", str7);
        packageInfo = context.getPackageManager().getPackageInfo(str4, 16384);
        treeMap.put("appversion", packageInfo == null ? String.valueOf(packageInfo.versionCode) : "0");
        treeMap.put("sdkversion", Integer.toString(40090));
        treeMap.put("packagename", str4);
        treeMap.put("model", Build.MODEL);
        treeMap.put("board", Build.BOARD);
        if (!com.xiaomi.push.m.d()) {
        }
        treeMap.put("os", Build.VERSION.RELEASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Build.VERSION.INCREMENTAL);
        iA = com.xiaomi.push.j.a();
        if (iA >= 0) {
        }
        treeMap.put("brand", Build.BRAND + "");
        treeMap.put("ram", com.xiaomi.push.j.a());
        treeMap.put("rom", com.xiaomi.push.j.b());
        JSONObject jSONObject22 = new JSONObject();
        while (r9.hasNext()) {
        }
        String strA22 = bs.a(jSONObject22.toString());
        TreeMap treeMap22 = new TreeMap();
        treeMap22.put("requestData", strA22);
        treeMap22.put("keyPairVer", "1");
        if (a(context) < 2) {
            z = false;
            String strA32 = a(context, z);
            if (z) {
            }
            bhVarA = com.xiaomi.push.bj.a(context, strA32, treeMap);
            if (bhVarA != null) {
                z2 = z;
                if (z2) {
                }
                com.xiaomi.channel.commonutils.logger.b.a("fail to register push account. meet error.");
                return null;
            }
        }
    }

    public static String a(Context context) {
        t tVarA = a(context);
        if (tVarA != null && !TextUtils.isEmpty(tVarA.a)) {
            String[] strArrSplit = tVarA.a.split("@");
            if (strArrSplit.length > 0) {
                return strArrSplit[0];
            }
        }
        return null;
    }

    private static String a(Context context, boolean z) {
        StringBuilder sb;
        String str;
        String strA = com.xiaomi.push.service.a.a(context).a();
        String str2 = z ? "/pass/v2/register/encrypt" : "/pass/v2/register";
        if (com.xiaomi.push.ae.b()) {
            sb = new StringBuilder();
            sb.append("http://");
            sb.append(fx.b);
            str = ":9085";
        } else if (com.xiaomi.push.q.a.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://cn.register.xmpush.xiaomi.com";
        } else if (com.xiaomi.push.q.b.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.c.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://fr.register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.d.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://ru.register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.e.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://idmb.register.xmpush.global.xiaomi.com";
        } else {
            sb = new StringBuilder();
            sb.append("https://");
            str = com.xiaomi.push.ae.a() ? "sandbox.xmpush.xiaomi.com" : "register.xmpush.xiaomi.com";
        }
        sb.append(str);
        sb.append(str2);
        return sb.toString();
    }

    public static void a() {
        a aVar = a;
        if (aVar != null) {
            aVar.a();
        }
    }

    public static void a(Context context) {
        context.getSharedPreferences("mipush_account", 0).edit().clear().commit();
        a = null;
        a();
    }

    private static void a(Context context, int i) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_account", 0).edit();
        editorEdit.putInt("enc_req_fail_count", i);
        editorEdit.commit();
    }

    public static void a(Context context, t tVar) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_account", 0).edit();
        editorEdit.putString("uuid", tVar.a);
        editorEdit.putString("security", tVar.c);
        editorEdit.putString("token", tVar.b);
        editorEdit.putString("app_id", tVar.d);
        editorEdit.putString("package_name", tVar.f);
        editorEdit.putString("app_token", tVar.e);
        editorEdit.putString("device_id", com.xiaomi.push.j.i(context));
        editorEdit.putInt("env_type", tVar.a);
        editorEdit.commit();
        a();
    }

    public static void a(a aVar) {
        a = aVar;
    }

    private static boolean a(Context context) {
        return context.getPackageName().equals("com.xiaomi.xmsf");
    }
}
