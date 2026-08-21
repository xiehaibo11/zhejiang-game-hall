package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
class ee implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f8131a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ ed f321a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ String f322a;
    final /* synthetic */ String b;
    final /* synthetic */ String c;

    ee(ed edVar, String str, Context context, String str2, String str3) {
        this.f321a = edVar;
        this.f322a = str;
        this.f8131a = context;
        this.b = str2;
        this.c = str3;
    }

    @Override // java.lang.Runnable
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
        if (TextUtils.isEmpty(this.f322a)) {
            context = this.f8131a;
            str = "null";
            str2 = "A receive a incorrect message with empty info";
        } else {
            try {
                dz.a(this.f8131a, this.f322a, 1001, "get message");
                JSONObject jSONObject = new JSONObject(this.f322a);
                String strOptString = jSONObject.optString("action");
                String strOptString2 = jSONObject.optString("awakened_app_packagename");
                String strOptString3 = jSONObject.optString("awake_app_packagename");
                String strOptString4 = jSONObject.optString("awake_app");
                String strOptString5 = jSONObject.optString("awake_type");
                int iOptInt = jSONObject.optInt("awake_foreground", 0);
                if (this.b.equals(strOptString3) && this.c.equals(strOptString4)) {
                    if (!TextUtils.isEmpty(strOptString5) && !TextUtils.isEmpty(strOptString3) && !TextUtils.isEmpty(strOptString4) && !TextUtils.isEmpty(strOptString2)) {
                        this.f321a.b(strOptString3);
                        this.f321a.a(strOptString4);
                        ec ecVar = new ec();
                        ecVar.b(strOptString);
                        ecVar.a(strOptString2);
                        ecVar.a(iOptInt);
                        ecVar.d(this.f322a);
                        if ("service".equals(strOptString5)) {
                            if (TextUtils.isEmpty(strOptString)) {
                                ecVar.c("com.xiaomi.mipush.sdk.PushMessageHandler");
                                edVar = this.f321a;
                                efVar = ef.SERVICE_COMPONENT;
                                context3 = this.f8131a;
                            } else {
                                edVar = this.f321a;
                                efVar = ef.SERVICE_ACTION;
                                context3 = this.f8131a;
                            }
                        } else if (ef.ACTIVITY.f324a.equals(strOptString5)) {
                            edVar = this.f321a;
                            efVar = ef.ACTIVITY;
                            context3 = this.f8131a;
                        } else if (ef.PROVIDER.f324a.equals(strOptString5)) {
                            edVar = this.f321a;
                            efVar = ef.PROVIDER;
                            context3 = this.f8131a;
                        } else {
                            context2 = this.f8131a;
                            str3 = this.f322a;
                            str4 = "A receive a incorrect message with unknown type " + strOptString5;
                        }
                        edVar.a(efVar, context3, ecVar);
                        return;
                    }
                    context2 = this.f8131a;
                    str3 = this.f322a;
                    str4 = "A receive a incorrect message with empty type";
                    dz.a(context2, str3, 1008, str4);
                    return;
                }
                dz.a(this.f8131a, this.f322a, 1008, "A receive a incorrect message with incorrect package info" + strOptString3);
                return;
            } catch (JSONException e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                context = this.f8131a;
                str = this.f322a;
                str2 = "A meet a exception when receive the message";
            }
        }
        dz.a(context, str, 1008, str2);
    }
}
