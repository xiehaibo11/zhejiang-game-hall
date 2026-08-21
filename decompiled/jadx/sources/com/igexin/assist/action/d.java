package com.igexin.assist.action;

import android.content.Context;
import android.content.pm.PackageManager;
import android.text.TextUtils;
import com.igexin.assist.MessageBean;
import com.igexin.assist.sdk.AssistPushConsts;
import java.util.UUID;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte[] f2415a;
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;

    d() {
    }

    private void a(Context context) {
        try {
            String str = com.igexin.push.core.d.f2565a;
            this.d = str;
            if (TextUtils.isEmpty(str) && context != null) {
                String string = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.getString(AssistPushConsts.GETUI_APPID);
                this.d = string;
                if (TextUtils.isEmpty(string)) {
                    this.d = com.igexin.push.core.b.a.a(context);
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
    }

    public void a(MessageBean messageBean) {
        try {
            Context context = messageBean.getContext();
            String stringMessage = messageBean.getStringMessage();
            if (!TextUtils.isEmpty(stringMessage) && context != null) {
                a(context);
                if (TextUtils.isEmpty(this.d)) {
                    return;
                }
                this.e = context.getPackageName();
                this.c = (TextUtils.isEmpty(messageBean.getMessageSource()) ? "" : messageBean.getMessageSource()) + UUID.randomUUID().toString();
                String strA = com.igexin.assist.util.a.a(stringMessage, this.d);
                if (TextUtils.isEmpty(strA)) {
                    return;
                }
                JSONObject jSONObject = new JSONObject(strA);
                if (jSONObject.has(AssistPushConsts.MSG_KEY_TASKID)) {
                    this.b = jSONObject.getString(AssistPushConsts.MSG_KEY_TASKID);
                }
                if (jSONObject.has(AssistPushConsts.MSG_KEY_ACTION)) {
                    this.f = jSONObject.getString(AssistPushConsts.MSG_KEY_ACTION);
                }
                if (jSONObject.has(AssistPushConsts.MSG_KEY_CONTENT) && !TextUtils.isEmpty(jSONObject.getString(AssistPushConsts.MSG_KEY_CONTENT))) {
                    this.f2415a = jSONObject.getString(AssistPushConsts.MSG_KEY_CONTENT).getBytes();
                }
                if (jSONObject.has(AssistPushConsts.MSG_KEY_ACTION_CHAINS)) {
                    String string = jSONObject.getString(AssistPushConsts.MSG_KEY_ACTION_CHAINS);
                    this.g = string;
                    if (TextUtils.isEmpty(string)) {
                        return;
                    }
                    JSONObject jSONObject2 = new JSONObject(this.g);
                    jSONObject2.put("extra_actionid", "40550");
                    this.g = jSONObject2.toString();
                }
            }
        } catch (Throwable unused) {
        }
    }

    public boolean a(boolean z) {
        return ((this.f2415a == null && (this.g == null || !z)) || TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.e) || TextUtils.isEmpty(this.d) || TextUtils.isEmpty(this.f) || TextUtils.isEmpty(this.c)) ? false : true;
    }

    public byte[] a() {
        return this.f2415a;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }

    public String d() {
        return this.d;
    }

    public String e() {
        return this.f;
    }

    public String f() {
        return this.g;
    }
}
