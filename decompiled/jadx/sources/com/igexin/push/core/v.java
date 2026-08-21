package com.igexin.push.core;

import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import com.igexin.assist.sdk.AssistPushManager;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.sdk.PushConsts;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URLEncoder;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class v {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static v f2588a;

    private v() {
    }

    public static v a() {
        if (f2588a == null) {
            f2588a = new v();
        }
        return f2588a;
    }

    public void a(int i, int i2, String str) {
        com.igexin.push.config.j.f2494a = i;
        com.igexin.push.config.j.b = i2;
        com.igexin.push.config.a.a().b();
        com.igexin.push.a.a.c.c().d();
    }

    public void a(int i, String str) {
        com.igexin.push.config.j.d = i;
        com.igexin.push.config.a.a().c();
        if (d.n) {
            com.igexin.b.a.c.b.a("setHeartbeatInterval heartbeatReq", new Object[0]);
            if (System.currentTimeMillis() - d.M > 5000) {
                d.M = System.currentTimeMillis();
                com.igexin.push.core.a.e.a().b();
            }
        }
    }

    public void a(Bundle bundle) {
        String string = bundle.getString("action");
        com.igexin.b.a.c.b.a("PushController|action pushmanager action = " + string, new Object[0]);
        if (TextUtils.isEmpty(string)) {
            return;
        }
        if (string.equals("setTag")) {
            a(bundle.getString("tags"), bundle.getString("sn"));
            return;
        }
        if (string.equals("setSilentTime")) {
            int i = bundle.getInt("beginHour", 0);
            int i2 = bundle.getInt(com.tkay.expressad.foundation.d.r.ag, 0);
            a(i, i2, d.g.getPackageName());
            AssistPushManager.getInstance().setSilentTime(d.g, i, i2);
            return;
        }
        if (string.equals("sendMessage")) {
            com.igexin.b.a.c.b.a("PushController onPushManagerMessage recevie action : sendMessage", new Object[0]);
            String string2 = bundle.getString("taskid");
            byte[] byteArray = bundle.getByteArray("extraData");
            com.igexin.b.a.c.b.a("PushController receive broadcast msg data , task id : " + string2 + " ######@##@@@#", new Object[0]);
            a(string2, byteArray);
            return;
        }
        if (string.equals("setHeartbeatInterval")) {
            a(bundle.getInt("interval", 0), d.g.getPackageName());
            return;
        }
        if (string.equals("setSocketTimeout")) {
            b(bundle.getInt("timeout", 0), d.g.getPackageName());
            return;
        }
        if (string.equals("sendFeedbackMessage")) {
            if (d.ac <= 200) {
                String string3 = bundle.getString("taskid");
                String string4 = bundle.getString("messageid");
                String string5 = bundle.getString("actionid");
                String str = string3 + Constants.COLON_SEPARATOR + string4 + Constants.COLON_SEPARATOR + string5;
                if (d.ab.get(str) == null) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    PushTaskBean pushTaskBean = new PushTaskBean();
                    pushTaskBean.setTaskId(string3);
                    pushTaskBean.setMessageId(string4);
                    pushTaskBean.setAppid(d.f2565a);
                    pushTaskBean.setAppKey(d.b);
                    com.igexin.push.core.a.e.a().b(pushTaskBean, string5);
                    d.ac++;
                    d.ab.put(str, Long.valueOf(jCurrentTimeMillis));
                    return;
                }
                return;
            }
            return;
        }
        if (string.equals("turnOffPush")) {
            c.a().g();
            AssistPushManager.getInstance().turnOffPush(d.g);
            return;
        }
        if (string.equals("bindAlias")) {
            String string6 = bundle.getString(PushConstants.SUB_ALIAS_STATUS_NAME);
            String string7 = bundle.getString("sn");
            com.igexin.b.a.c.b.a("PushController|onPushManagerMessage bindAlias...", new Object[0]);
            b(string6, string7);
            return;
        }
        if (string.equals("unbindAlias")) {
            String string8 = bundle.getString(PushConstants.SUB_ALIAS_STATUS_NAME);
            String string9 = bundle.getString("sn");
            boolean z = bundle.getBoolean("isSeft");
            com.igexin.b.a.c.b.a("PushController|onPushManagerMessage unbindAlias...", new Object[0]);
            a(string8, string9, z);
            return;
        }
        if (string.equals("sendApplinkFeedback")) {
            a(bundle.getString("url"));
        } else if (string.equals("setHwBadgeNum")) {
            com.igexin.push.util.b.a(bundle.getInt("badgeNum"), true);
        }
    }

    public void a(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            Uri uri = Uri.parse(str);
            String host = uri.getHost();
            String queryParameter = uri.getQueryParameter("p");
            if (!TextUtils.isEmpty(host) && !TextUtils.isEmpty(queryParameter)) {
                if (!com.igexin.push.util.a.b(host)) {
                    com.igexin.b.a.c.b.a("PushController|checkIsWhiteApplinkDomain is false, not feedback", new Object[0]);
                    return;
                }
                PushTaskBean pushTaskBean = new PushTaskBean();
                pushTaskBean.setTaskId("getuiapplinkup");
                pushTaskBean.setMessageId(queryParameter);
                pushTaskBean.setAppid(d.f2565a);
                pushTaskBean.setAppKey(d.b);
                com.igexin.push.core.a.e.a().b(pushTaskBean, PushConsts.SEND_MESSAGE_ERROR);
                return;
            }
            com.igexin.b.a.c.b.a("PushController|url " + str + " is invalid", new Object[0]);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("PushController|" + e.toString(), new Object[0]);
        }
    }

    public void a(String str, String str2) {
        if (TextUtils.isEmpty(d.u)) {
            r.a().a(str2, "10099");
            return;
        }
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("action", "set_tag");
                jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
                jSONObject.put("cid", d.u);
                jSONObject.put("appid", d.f2565a);
                jSONObject.put("tags", URLEncoder.encode(str, "utf-8"));
                jSONObject.put("sn", str2);
            } catch (Exception unused) {
            }
            String string = jSONObject.toString();
            com.igexin.push.core.b.e.a().a(new com.igexin.push.core.bean.h(jCurrentTimeMillis, string, (byte) 2, d.n ? jCurrentTimeMillis : 0L));
            com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
            bVar.b();
            bVar.d = "17258000";
            bVar.e = string;
            c.a().i().a("C-" + d.u, bVar);
            com.igexin.b.a.c.b.a("settag", new Object[0]);
        } catch (Exception unused2) {
        }
    }

    public void a(String str, String str2, boolean z) {
        if (z && TextUtils.isEmpty(d.u)) {
            r.a().c(str2, "10099");
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - d.O <= 1000) {
            com.igexin.b.a.c.b.a("PushController|unbindAlias frequently called", new Object[0]);
            return;
        }
        String str3 = new SimpleDateFormat("yyyy-MM-dd", Locale.getDefault()).format(new Date(jCurrentTimeMillis));
        if (!str3.equals(d.N)) {
            com.igexin.push.core.b.i.a().f(str3);
            com.igexin.push.core.b.i.a().a(0);
        }
        if (d.P >= 100) {
            com.igexin.b.a.c.b.a("PushController|unbindAlias times exceed", new Object[0]);
            return;
        }
        com.igexin.b.a.c.b.a("start unbindAlias ###", new Object[0]);
        d.O = jCurrentTimeMillis;
        com.igexin.push.core.b.i.a().a(d.P + 1);
        a(str, str2, true, z);
    }

    public void a(String str, String str2, boolean z, boolean z2) {
        if (TextUtils.isEmpty(d.u)) {
            r.a().b(str2, "10099");
            return;
        }
        try {
            long jCurrentTimeMillis = System.currentTimeMillis();
            JSONObject jSONObject = new JSONObject();
            String str3 = z ? "unbind_alias" : "bind_alias";
            byte b = z ? (byte) 8 : (byte) 7;
            try {
                jSONObject.put("action", str3);
                jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
                jSONObject.put("cid", d.u);
                jSONObject.put("appid", d.f2565a);
                jSONObject.put(PushConstants.SUB_ALIAS_STATUS_NAME, str);
                jSONObject.put("sn", str2);
                if (z) {
                    jSONObject.put("is_self", z2);
                }
            } catch (Exception unused) {
            }
            String string = jSONObject.toString();
            com.igexin.push.core.b.e.a().a(new com.igexin.push.core.bean.h(jCurrentTimeMillis, string, b, d.n ? jCurrentTimeMillis : 0L));
            com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
            bVar.b();
            bVar.d = "17258000";
            bVar.e = string;
            c.a().i().a("C-" + d.u, bVar);
            com.igexin.b.a.c.b.a(str3 + " = " + string, new Object[0]);
        } catch (Exception unused2) {
        }
    }

    public void a(String str, byte[] bArr) {
        if (d.u != null) {
            JSONObject jSONObject = new JSONObject();
            long jCurrentTimeMillis = System.currentTimeMillis();
            try {
                jSONObject.put("action", "sendmessage");
                jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
                jSONObject.put("cid", d.u);
                jSONObject.put("appid", d.f2565a);
                jSONObject.put("taskid", str);
                jSONObject.put("extraData", com.igexin.push.util.d.b(bArr, 0));
                String string = jSONObject.toString();
                com.igexin.push.core.b.e.a().a(new com.igexin.push.core.bean.h(jCurrentTimeMillis, string, (byte) 6, jCurrentTimeMillis));
                com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
                bVar.b();
                bVar.f2597a = (int) jCurrentTimeMillis;
                bVar.d = d.u;
                bVar.e = string;
                bVar.f = bArr;
                bVar.g = d.u;
                c.a().i().a("C-" + d.u, bVar);
                if (str == null || !str.startsWith("4T5@S_")) {
                    return;
                }
                com.igexin.b.a.c.b.a("PushController sending lbs report message : " + string, new Object[0]);
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a("PushController|" + th.toString(), new Object[0]);
            }
        }
    }

    public void b(int i, String str) {
        com.igexin.push.config.j.e = i;
        com.igexin.push.config.a.a().d();
    }

    public void b(String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - d.O <= 1000) {
            com.igexin.b.a.c.b.a("PushController|bindAlias frequently called", new Object[0]);
            return;
        }
        String str3 = new SimpleDateFormat("yyyy-MM-dd", Locale.getDefault()).format(new Date(jCurrentTimeMillis));
        if (!str3.equals(d.N)) {
            com.igexin.push.core.b.i.a().f(str3);
            com.igexin.push.core.b.i.a().a(0);
        }
        com.igexin.b.a.c.b.a("-> CoreRuntimeInfo.opAliasTimes:" + d.P, new Object[0]);
        if (d.P >= 100) {
            com.igexin.b.a.c.b.a("PushController|bindAlias times exceed", new Object[0]);
            return;
        }
        com.igexin.b.a.c.b.a("start bindAlias ###", new Object[0]);
        d.O = jCurrentTimeMillis;
        com.igexin.push.core.b.i.a().a(d.P + 1);
        a(str, str2, false, true);
    }
}
