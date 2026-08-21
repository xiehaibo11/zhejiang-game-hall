package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

class ee implements Runnable {
    final Context a;
    final ed a;
    final String a;
    final String b;
    final String c;

    ee(ed edVar, String str, Context context, String str2, String str3) {
        this.a = edVar;
        this.a = str;
        this.a = context;
        this.b = str2;
        this.c = str3;
    }

    @Override
    public void run() {
        Context context;
        String str;
        String str2;
        Context context2;
        String str3;
        String str4;
        ed edVar;
        ef efVar;
        Context context3;
        if (TextUtils.isEmpty(this.a)) {
            context = this.a;
            str = "null";
            str2 = "A receive a incorrect message with empty info";
        } else {
            try {
                dz.a(this.a, this.a, 1001, "get message");
                JSONObject jSONObject = new JSONObject(this.a);
                String strOptString = jSONObject.optString("action");
                String strOptString2 = jSONObject.optString("awakened_app_packagename");
                String strOptString3 = jSONObject.optString("awake_app_packagename");
                String strOptString4 = jSONObject.optString("awake_app");
                String strOptString5 = jSONObject.optString("awake_type");
                int iOptInt = jSONObject.optInt("awake_foreground", 0);
                if (this.b.equals(strOptString3) && this.c.equals(strOptString4)) {
                    if (!TextUtils.isEmpty(strOptString5) && !TextUtils.isEmpty(strOptString3) && !TextUtils.isEmpty(strOptString4) && !TextUtils.isEmpty(strOptString2)) {
                        this.a.b(strOptString3);
                        this.a.a(strOptString4);
                        ec ecVar = new ec();
                        ecVar.b(strOptString);
                        ecVar.a(strOptString2);
                        ecVar.a(iOptInt);
                        ecVar.d(this.a);
                        if ("service".equals(strOptString5)) {
                            if (TextUtils.isEmpty(strOptString)) {
                                ecVar.c("com.xiaomi.mipush.sdk.PushMessageHandler");
                                edVar = this.a;
                                efVar = ef.c;
                                context3 = this.a;
                            } else {
                                edVar = this.a;
                                efVar = ef.b;
                                context3 = this.a;
                            }
                        } else if (ef.a.a.equals(strOptString5)) {
                            edVar = this.a;
                            efVar = ef.a;
                            context3 = this.a;
                        } else if (ef.d.a.equals(strOptString5)) {
                            edVar = this.a;
                            efVar = ef.d;
                            context3 = this.a;
                        } else {
                            context2 = this.a;
                            str3 = this.a;
                            str4 = "A receive a incorrect message with unknown type " + strOptString5;
                        }
                        edVar.a(efVar, context3, ecVar);
                        return;
                    }
                    context2 = this.a;
                    str3 = this.a;
                    str4 = "A receive a incorrect message with empty type";
                    dz.a(context2, str3, 1008, str4);
                    return;
                }
                dz.a(this.a, this.a, 1008, "A receive a incorrect message with incorrect package info" + strOptString3);
                return;
            } catch (JSONException e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                context = this.a;
                str = this.a;
                str2 = "A meet a exception when receive the message";
            }
        }
        dz.a(context, str, 1008, str2);
    }
}
