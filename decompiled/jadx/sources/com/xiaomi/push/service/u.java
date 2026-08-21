package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import com.xiaomi.push.fx;

/* JADX INFO: loaded from: classes4.dex */
public class u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static t f8392a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static a f1019a;

    public interface a {
        void a();
    }

    private static int a(Context context) {
        return context.getSharedPreferences("mipush_account", 0).getInt("enc_req_fail_count", 0);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static synchronized t m694a(Context context) {
        if (f8392a != null) {
            return f8392a;
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
            com.xiaomi.channel.commonutils.logger.b.m43a("read_phone_state permission changes.");
        }
        t tVar = new t(string, string2, string3, string4, string5, string6, i);
        f8392a = tVar;
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
        To view partially-correct add '--show-bad-code' argument
    */
    public static synchronized com.xiaomi.push.service.t a(android.content.Context r17, java.lang.String r18, java.lang.String r19, java.lang.String r20) {
        /*
            Method dump skipped, instruction units count: 819
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.u.a(android.content.Context, java.lang.String, java.lang.String, java.lang.String):com.xiaomi.push.service.t");
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static String m695a(Context context) {
        t tVarM694a = m694a(context);
        if (tVarM694a != null && !TextUtils.isEmpty(tVarM694a.f1018a)) {
            String[] strArrSplit = tVarM694a.f1018a.split("@");
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
        } else if (com.xiaomi.push.q.China.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://cn.register.xmpush.xiaomi.com";
        } else if (com.xiaomi.push.q.Global.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.Europe.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://fr.register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.Russia.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://ru.register.xmpush.global.xiaomi.com";
        } else if (com.xiaomi.push.q.India.name().equals(strA)) {
            sb = new StringBuilder();
            str = "https://idmb.register.xmpush.global.xiaomi.com";
        } else {
            sb = new StringBuilder();
            sb.append("https://");
            str = com.xiaomi.push.ae.m117a() ? "sandbox.xmpush.xiaomi.com" : "register.xmpush.xiaomi.com";
        }
        sb.append(str);
        sb.append(str2);
        return sb.toString();
    }

    public static void a() {
        a aVar = f1019a;
        if (aVar != null) {
            aVar.a();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m696a(Context context) {
        context.getSharedPreferences("mipush_account", 0).edit().clear().commit();
        f8392a = null;
        a();
    }

    private static void a(Context context, int i) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_account", 0).edit();
        editorEdit.putInt("enc_req_fail_count", i);
        editorEdit.commit();
    }

    public static void a(Context context, t tVar) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_account", 0).edit();
        editorEdit.putString("uuid", tVar.f1018a);
        editorEdit.putString("security", tVar.c);
        editorEdit.putString("token", tVar.b);
        editorEdit.putString("app_id", tVar.d);
        editorEdit.putString("package_name", tVar.f);
        editorEdit.putString("app_token", tVar.e);
        editorEdit.putString("device_id", com.xiaomi.push.j.i(context));
        editorEdit.putInt("env_type", tVar.f8391a);
        editorEdit.commit();
        a();
    }

    public static void a(a aVar) {
        f1019a = aVar;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static boolean m697a(Context context) {
        return context.getPackageName().equals("com.xiaomi.xmsf");
    }
}
