package com.xiaomi.mipush.sdk;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import org.json.JSONArray;
import org.json.JSONObject;

public class HWPushHelper {
    private static boolean a;

    public static void convertMessage(Intent intent) {
        i.a(intent);
    }

    public static boolean hasNetwork(Context context) {
        return i.a(context);
    }

    public static boolean isHmsTokenSynced(Context context) {
        String strA = i.a(e.a);
        if (TextUtils.isEmpty(strA)) {
            return false;
        }
        String strA2 = i.a(context, strA);
        String strA3 = af.a(context).a(au.c);
        return (TextUtils.isEmpty(strA2) || TextUtils.isEmpty(strA3) || !"synced".equals(strA3)) ? false : true;
    }

    public static boolean isUserOpenHmsPush(Context context) {
        return MiPushClient.getOpenHmsPush(context);
    }

    public static boolean needConnect() {
        return a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x002a, code lost:
    
        r2 = r3.getString("pushMsg");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void notifyHmsNotificationMessageClicked(Context context, String str) {
        String string = "";
        if (!TextUtils.isEmpty(str)) {
            try {
                JSONArray jSONArray = new JSONArray(str);
                if (jSONArray.length() > 0) {
                    int i = 0;
                    while (true) {
                        if (i >= jSONArray.length()) {
                            break;
                        }
                        JSONObject jSONObject = jSONArray.getJSONObject(i);
                        if (jSONObject.has("pushMsg")) {
                            break;
                        } else {
                            i++;
                        }
                    }
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.d(e.toString());
            }
        }
        PushMessageReceiver pushMessageReceiverA = i.a(context);
        if (pushMessageReceiverA != null) {
            MiPushMessage miPushMessageA = i.a(string);
            if (miPushMessageA.getExtra().containsKey("notify_effect")) {
                return;
            }
            pushMessageReceiverA.onNotificationMessageClicked(context, miPushMessageA);
        }
    }

    public static void notifyHmsPassThoughMessageArrived(Context context, String str) {
        String string = "";
        try {
            if (!TextUtils.isEmpty(str)) {
                JSONObject jSONObject = new JSONObject(str);
                if (jSONObject.has("content")) {
                    string = jSONObject.getString("content");
                }
            }
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.d(e.toString());
        }
        PushMessageReceiver pushMessageReceiverA = i.a(context);
        if (pushMessageReceiverA != null) {
            pushMessageReceiverA.onReceivePassThroughMessage(context, i.a(string));
        }
    }

    public static void registerHuaWeiAssemblePush(Context context) {
        AbstractPushManager abstractPushManagerA = f.a(context).a(e.a);
        if (abstractPushManagerA != null) {
            abstractPushManagerA.register();
        }
    }

    public static void reportError(String str, int i) {
        i.a(str, i);
    }

    public static synchronized void setConnectTime(Context context) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("last_connect_time", System.currentTimeMillis()).commit();
    }

    public static synchronized void setGetTokenTime(Context context) {
        context.getSharedPreferences("mipush_extra", 0).edit().putLong("last_get_token_time", System.currentTimeMillis()).commit();
    }

    public static void setNeedConnect(boolean z) {
        a = z;
    }

    public static synchronized boolean shouldGetToken(Context context) {
        return Math.abs(System.currentTimeMillis() - context.getSharedPreferences("mipush_extra", 0).getLong("last_get_token_time", -1L)) > 172800000;
    }

    public static synchronized boolean shouldTryConnect(Context context) {
        return Math.abs(System.currentTimeMillis() - context.getSharedPreferences("mipush_extra", 0).getLong("last_connect_time", -1L)) > 5000;
    }

    public static void uploadToken(Context context, String str) {
        i.a(context, e.a, str);
    }
}
