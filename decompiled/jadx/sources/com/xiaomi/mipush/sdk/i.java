package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.ResolveInfo;
import android.os.Bundle;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.xiaomi.push.Cif;
import com.xiaomi.push.bj;
import com.xiaomi.push.bk;
import com.xiaomi.push.bo;
import com.xiaomi.push.service.ba;
import com.xiaomi.push.w;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static HashMap<String, String> f8011a = new HashMap<>();

    public static int a() {
        Integer num = (Integer) bk.a("com.xiaomi.assemble.control.AssembleConstants", "ASSEMBLE_VERSION_CODE");
        if (num == null) {
            return 0;
        }
        return num.intValue();
    }

    private static int a(Context context, e eVar, String str) {
        SharedPreferences sharedPreferences = context.getSharedPreferences("mipush_extra", 0);
        String strA = a(eVar);
        String string = sharedPreferences.getString(strA, "");
        String strM93c = b.m85a(context).m93c();
        String string2 = sharedPreferences.getString("last_check_token", "");
        if (TextUtils.isEmpty(strA)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : can not find the key of token used in sp file");
            return 0;
        }
        if (TextUtils.isEmpty(string)) {
            return 1;
        }
        if (!string.equals(str)) {
            return 2;
        }
        if (!TextUtils.equals(strM93c, string2)) {
            return 3;
        }
        if (m110a(eVar)) {
            if (a() != sharedPreferences.getInt(b(eVar), 0)) {
                return 4;
            }
        }
        return 0;
    }

    public static MiPushMessage a(String str) {
        MiPushMessage miPushMessage = new MiPushMessage();
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has("messageId")) {
                    miPushMessage.setMessageId(jSONObject.getString("messageId"));
                }
                if (jSONObject.has("description")) {
                    miPushMessage.setDescription(jSONObject.getString("description"));
                }
                if (jSONObject.has("title")) {
                    miPushMessage.setTitle(jSONObject.getString("title"));
                }
                if (jSONObject.has("content")) {
                    miPushMessage.setContent(jSONObject.getString("content"));
                }
                if (jSONObject.has("passThrough")) {
                    miPushMessage.setPassThrough(jSONObject.getInt("passThrough"));
                }
                if (jSONObject.has("notifyType")) {
                    miPushMessage.setNotifyType(jSONObject.getInt("notifyType"));
                }
                if (jSONObject.has("messageType")) {
                    miPushMessage.setMessageType(jSONObject.getInt("messageType"));
                }
                if (jSONObject.has(PushConstants.SUB_ALIAS_STATUS_NAME)) {
                    miPushMessage.setAlias(jSONObject.getString(PushConstants.SUB_ALIAS_STATUS_NAME));
                }
                if (jSONObject.has("topic")) {
                    miPushMessage.setTopic(jSONObject.getString("topic"));
                }
                if (jSONObject.has("user_account")) {
                    miPushMessage.setUserAccount(jSONObject.getString("user_account"));
                }
                if (jSONObject.has(RemoteMessageConst.Notification.NOTIFY_ID)) {
                    miPushMessage.setNotifyId(jSONObject.getInt(RemoteMessageConst.Notification.NOTIFY_ID));
                }
                if (jSONObject.has("category")) {
                    miPushMessage.setCategory(jSONObject.getString("category"));
                }
                if (jSONObject.has("isNotified")) {
                    miPushMessage.setNotified(jSONObject.getBoolean("isNotified"));
                }
                if (jSONObject.has("extra")) {
                    JSONObject jSONObject2 = jSONObject.getJSONObject("extra");
                    Iterator<String> itKeys = jSONObject2.keys();
                    HashMap map = new HashMap();
                    while (itKeys != null && itKeys.hasNext()) {
                        String next = itKeys.next();
                        map.put(next, jSONObject2.getString(next));
                    }
                    if (map.size() > 0) {
                        miPushMessage.setExtra(map);
                    }
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d(e.toString());
            }
        }
        return miPushMessage;
    }

    protected static PushMessageReceiver a(Context context) {
        ResolveInfo next;
        Intent intent = new Intent("com.xiaomi.mipush.RECEIVE_MESSAGE");
        intent.setPackage(context.getPackageName());
        try {
            List<ResolveInfo> listQueryBroadcastReceivers = context.getPackageManager().queryBroadcastReceivers(intent, 32);
            if (listQueryBroadcastReceivers != null) {
                Iterator<ResolveInfo> it = listQueryBroadcastReceivers.iterator();
                while (it.hasNext()) {
                    next = it.next();
                    if (next.activityInfo != null && next.activityInfo.packageName.equals(context.getPackageName())) {
                        break;
                    }
                }
                next = null;
            } else {
                next = null;
            }
            if (next != null) {
                return (PushMessageReceiver) com.xiaomi.push.v.a(context, next.activityInfo.name).newInstance();
            }
            return null;
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d(e.toString());
            return null;
        }
    }

    static String a(Context context, e eVar) {
        SharedPreferences sharedPreferences = context.getSharedPreferences("mipush_extra", 0);
        String strA = a(eVar);
        if (TextUtils.isEmpty(strA)) {
            return null;
        }
        return sharedPreferences.getString(strA, "");
    }

    protected static synchronized String a(Context context, String str) {
        String str2;
        str2 = f8011a.get(str);
        if (TextUtils.isEmpty(str2)) {
            str2 = "";
        }
        return str2;
    }

    public static String a(e eVar) {
        int i = k.f8013a[eVar.ordinal()];
        if (i == 1) {
            return "hms_push_token";
        }
        if (i == 2) {
            return "fcm_push_token_v2";
        }
        if (i == 3) {
            return "cos_push_token";
        }
        if (i != 4) {
            return null;
        }
        return "ftos_push_token";
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static HashMap<String, String> m104a(Context context, e eVar) {
        w.a aVarA;
        int iA;
        HashMap<String, String> map = new HashMap<>();
        String strA = a(eVar);
        if (TextUtils.isEmpty(strA)) {
            return map;
        }
        int i = k.f8013a[eVar.ordinal()];
        String string = null;
        ApplicationInfo applicationInfo = null;
        if (i != 1) {
            if (i == 2) {
                aVarA = new w.a(Constants.COLON_SEPARATOR, Constants.WAVE_SEPARATOR).a("brand", ag.FCM.name()).a("token", a(context, strA)).a("package_name", context.getPackageName());
                iA = a();
                if (iA == 0) {
                    iA = 40090;
                }
            } else if (i == 3) {
                string = "brand:" + ag.OPPO.name() + Constants.WAVE_SEPARATOR + "token" + Constants.COLON_SEPARATOR + a(context, strA) + Constants.WAVE_SEPARATOR + "package_name" + Constants.COLON_SEPARATOR + context.getPackageName();
            } else if (i == 4) {
                aVarA = new w.a(Constants.COLON_SEPARATOR, Constants.WAVE_SEPARATOR).a("brand", ag.VIVO.name()).a("token", a(context, strA)).a("package_name", context.getPackageName());
                iA = a();
                if (iA != 0) {
                }
                string = aVarA.toString();
            }
            aVarA.a("version", Integer.valueOf(iA));
            string = aVarA.toString();
        } else {
            try {
                applicationInfo = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128);
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d(e.toString());
            }
            string = "brand:" + n.a(context).name() + Constants.WAVE_SEPARATOR + "token" + Constants.COLON_SEPARATOR + a(context, strA) + Constants.WAVE_SEPARATOR + "package_name" + Constants.COLON_SEPARATOR + context.getPackageName() + Constants.WAVE_SEPARATOR + "app_id" + Constants.COLON_SEPARATOR + (applicationInfo != null ? applicationInfo.metaData.getInt(Constants.HUAWEI_HMS_CLIENT_APPID) : -1);
        }
        map.put(Constants.ASSEMBLE_PUSH_REG_INFO, string);
        return map;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    static void m105a(Context context) {
        boolean z = false;
        SharedPreferences sharedPreferences = context.getSharedPreferences("mipush_extra", 0);
        String strA = a(e.ASSEMBLE_PUSH_HUAWEI);
        String strA2 = a(e.ASSEMBLE_PUSH_FCM);
        if (!TextUtils.isEmpty(sharedPreferences.getString(strA, "")) && TextUtils.isEmpty(sharedPreferences.getString(strA2, ""))) {
            z = true;
        }
        if (z) {
            ao.a(context).a(2, strA);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m106a(Context context, e eVar) {
        String strA = a(eVar);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        com.xiaomi.push.t.a(context.getSharedPreferences("mipush_extra", 0).edit().putString(strA, ""));
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m107a(Context context, e eVar, String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        int iA = a(context, eVar, str);
        if (iA == 0) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : do not need to send token");
            return;
        }
        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : send token upload, check:" + iA);
        a(eVar, str);
        au auVarA = l.a(eVar);
        if (auVarA == null) {
            return;
        }
        ao.a(context).a((String) null, auVarA, eVar);
    }

    public static void a(Intent intent) {
        Bundle extras;
        if (intent == null || (extras = intent.getExtras()) == null || !extras.containsKey("pushMsg")) {
            return;
        }
        intent.putExtra(PushMessageHelper.KEY_MESSAGE, a(extras.getString("pushMsg")));
    }

    private static synchronized void a(e eVar, String str) {
        String strA = a(eVar);
        if (TextUtils.isEmpty(strA)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : can not find the key of token used in sp file");
        } else if (TextUtils.isEmpty(str)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : token is null");
        } else {
            f8011a.put(strA, str);
        }
    }

    public static void a(String str, int i) {
        MiTinyDataClient.upload("hms_push_error", str, 1L, "error code = " + i);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m108a(Context context) {
        if (context == null) {
            return false;
        }
        return bj.b(context);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m109a(Context context, e eVar) {
        if (l.m112a(eVar) != null) {
            return ba.a(context).a(l.m112a(eVar).a(), true);
        }
        return false;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m110a(e eVar) {
        return eVar == e.ASSEMBLE_PUSH_FTOS || eVar == e.ASSEMBLE_PUSH_FCM;
    }

    public static boolean a(Cif cif, e eVar) {
        if (cif == null || cif.m478a() == null || cif.m478a().m445a() == null) {
            return false;
        }
        return (eVar == e.ASSEMBLE_PUSH_FCM ? "FCM" : "").equalsIgnoreCase(cif.m478a().m445a().get("assemble_push_type"));
    }

    public static byte[] a(Context context, Cif cif, e eVar) {
        if (a(cif, eVar)) {
            return bo.m158a(a(context, eVar));
        }
        return null;
    }

    public static String b(e eVar) {
        return a(eVar) + "_version";
    }

    public static void b(Context context) {
        f.a(context).register();
    }

    public static void b(Context context, e eVar, String str) {
        com.xiaomi.push.al.a(context).a(new j(str, context, eVar));
    }

    public static String c(e eVar) {
        int i = k.f8013a[eVar.ordinal()];
        if (i == 1) {
            return "hms_push_error";
        }
        if (i == 2) {
            return "fcm_push_error";
        }
        if (i == 3) {
            return "cos_push_error";
        }
        if (i != 4) {
            return null;
        }
        return "ftos_push_error";
    }

    public static void c(Context context) {
        f.a(context).unregister();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static synchronized void d(Context context, e eVar, String str) {
        String strA = a(eVar);
        if (TextUtils.isEmpty(strA)) {
            com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : can not find the key of token used in sp file");
            return;
        }
        SharedPreferences.Editor editorEdit = context.getSharedPreferences("mipush_extra", 0).edit();
        editorEdit.putString(strA, str).putString("last_check_token", b.m85a(context).m93c());
        if (m110a(eVar)) {
            editorEdit.putInt(b(eVar), a());
        }
        com.xiaomi.push.t.a(editorEdit);
        com.xiaomi.channel.commonutils.logger.b.m43a("ASSEMBLE_PUSH : update sp file success!  " + str);
    }
}
