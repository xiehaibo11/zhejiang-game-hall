package com.igexin.assist.action;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.igexin.assist.MessageBean;
import com.igexin.assist.util.AssistUtils;
import com.igexin.b.a.c.a.f;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.a.e;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.r;
import com.igexin.sdk.PushConsts;
import com.igexin.sdk.message.GTTransmitMessage;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class MessageManger {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ExecutorService f2411a;
    private String b;

    private MessageManger() {
        this.f2411a = Executors.newSingleThreadExecutor();
    }

    /* synthetic */ MessageManger(a aVar) {
        this();
    }

    private PushTaskBean a(d dVar) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        PushTaskBean pushTaskBean = new PushTaskBean();
        pushTaskBean.setAppid(dVar.d());
        pushTaskBean.setMessageId(dVar.c());
        pushTaskBean.setTaskId(dVar.b());
        pushTaskBean.setId(String.valueOf(jCurrentTimeMillis));
        pushTaskBean.setAppKey(com.igexin.push.core.d.b);
        pushTaskBean.setCurrentActionid(1);
        return pushTaskBean;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, d dVar) {
        if (!com.igexin.push.core.d.h.get()) {
            AssistUtils.startGetuiService(context);
        }
        if (dVar == null) {
            return;
        }
        Message messageObtain = Message.obtain();
        messageObtain.what = CoreConsts.j;
        messageObtain.obj = dVar.f();
        Bundle bundle = new Bundle();
        bundle.putString("content", dVar.f());
        if (dVar.a() != null) {
            bundle.putByteArray("payload", dVar.a());
        }
        messageObtain.setData(bundle);
        com.igexin.push.core.c.a().a(messageObtain);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, String str, boolean z) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        new com.igexin.push.core.b.d(context).c(str);
        if (com.igexin.push.core.d.h.get()) {
            a(str, z);
        } else {
            new Handler(Looper.getMainLooper()).postDelayed(new a(this, str, z), 1000L);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(d dVar, Context context) {
        String str;
        if (dVar == null || context == null) {
            return;
        }
        try {
            com.igexin.push.core.b.d dVar2 = new com.igexin.push.core.b.d(context);
            boolean zA = dVar2.a(dVar.b());
            if (zA) {
                str = "1";
            } else {
                dVar2.b(dVar.b());
                str = "0";
            }
            Bundle bundle = new Bundle();
            bundle.putInt("action", 10001);
            bundle.putSerializable(PushConsts.KEY_MESSAGE_DATA, new GTTransmitMessage(dVar.b(), dVar.c(), dVar.c() + Constants.COLON_SEPARATOR + dVar.b(), dVar.a(), false).setRepeatMessage(zA));
            r.a().a(bundle);
            feedbackPushMessage(context, dVar, getBrandCode(context) + str);
        } catch (Throwable unused) {
        }
    }

    private void a(String str) {
        try {
            r.a().a(str);
        } catch (Exception unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:6:0x0023 A[Catch: Exception -> 0x0041, TryCatch #0 {Exception -> 0x0041, blocks: (B:4:0x001b, B:6:0x0023, B:8:0x002e, B:10:0x0038), top: B:14:0x001b }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(java.lang.String r3, boolean r4) {
        /*
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "other token = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "Assist_MessageManger"
            android.util.Log.e(r1, r0)
            r2.a(r3)
            if (r4 != 0) goto L23
            java.lang.String r0 = com.igexin.push.core.d.B     // Catch: java.lang.Exception -> L41
            boolean r0 = r3.equals(r0)     // Catch: java.lang.Exception -> L41
            if (r0 != 0) goto L41
        L23:
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L41
            r0.c(r3)     // Catch: java.lang.Exception -> L41
            boolean r3 = com.igexin.push.core.d.n     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L36
            com.igexin.push.core.a.e r3 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Exception -> L41
            r3.f()     // Catch: java.lang.Exception -> L41
            goto L41
        L36:
            if (r4 == 0) goto L41
            com.igexin.push.core.b.i r3 = com.igexin.push.core.b.i.a()     // Catch: java.lang.Exception -> L41
            java.lang.String r4 = ""
            r3.d(r4)     // Catch: java.lang.Exception -> L41
        L41:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.assist.action.MessageManger.a(java.lang.String, boolean):void");
    }

    public static MessageManger getInstance() {
        return c.f2414a;
    }

    public void addMessage(MessageBean messageBean) {
        ExecutorService executorService = this.f2411a;
        if (executorService != null) {
            executorService.execute(new b(this, messageBean));
        }
    }

    public void feedbackPushMessage(Context context, d dVar, String str) {
        try {
            if (com.igexin.push.core.d.h.get()) {
                e.a().a(a(dVar), str);
            } else {
                com.igexin.push.core.b.d dVar2 = new com.igexin.push.core.b.d(context);
                long jCurrentTimeMillis = System.currentTimeMillis();
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
                jSONObject.put("messageid", dVar.c());
                jSONObject.put("taskid", dVar.b());
                jSONObject.put("multaid", str);
                jSONObject.put("timestamp", String.valueOf(System.currentTimeMillis()));
                dVar2.a(dVar.b(), jSONObject);
            }
        } catch (Throwable unused) {
        }
    }

    public String getBrandCode(Context context) {
        String str;
        if (!TextUtils.isEmpty(this.b)) {
            return this.b;
        }
        if (com.igexin.assist.sdk.a.d(context)) {
            str = "2";
        } else if (com.igexin.assist.sdk.a.b(context)) {
            str = "3";
        } else if (com.igexin.assist.sdk.a.c(context)) {
            str = "4";
        } else if (com.igexin.assist.sdk.a.e(context)) {
            str = "5";
        } else {
            if (!com.igexin.assist.sdk.a.f(context)) {
                if (com.igexin.assist.sdk.a.g(context)) {
                    str = "7";
                }
                return this.b;
            }
            str = "6";
        }
        this.b = str;
        return this.b;
    }

    public void log(String str) {
        f.a().a(str);
    }
}
