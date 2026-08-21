package com.igexin.push.core.a;

import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.util.SparseArray;
import com.igexin.assist.sdk.AssistPushConsts;
import com.igexin.push.core.CoreConsts;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.x;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Iterator;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class e extends a {
    private static SparseArray<a> b;
    private static e c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ExecutorService f2505a = new ThreadPoolExecutor(0, 1, 30, TimeUnit.SECONDS, new LinkedBlockingQueue());

    private e() {
        SparseArray<a> sparseArray = new SparseArray<>();
        b = sparseArray;
        sparseArray.put(0, new j());
        b.put(5, new l());
        b.put(37, new n());
        b.put(9, new s());
        b.put(20, new r());
        b.put(26, new i());
        b.put(97, new k());
    }

    public static e a() {
        if (c == null) {
            c = new e();
        }
        return c;
    }

    public static boolean a(long j) {
        return com.igexin.push.util.a.a(j);
    }

    private void m() {
        com.igexin.push.core.c.a().i().i();
        if (com.igexin.push.core.w.a().b()) {
            com.igexin.b.a.c.b.a("CoreAction|network changed check condition status", new Object[0]);
            com.igexin.push.core.w.a().d();
        }
    }

    public Class a(Context context) {
        return x.a().c(context);
    }

    public String a(String str, String str2) {
        return str + Constants.COLON_SEPARATOR + str2;
    }

    public void a(Intent intent) throws Throwable {
        com.igexin.b.a.c.b.a("CoreAction|onServiceInitialize ##", new Object[0]);
        if (intent != null) {
            com.igexin.push.core.c.a().a(false);
            com.igexin.push.core.d.o = false;
            if (com.igexin.push.core.d.n) {
                com.igexin.push.core.r.a().c();
                com.igexin.push.core.d.o = true;
            }
            if (!x.a().b(com.igexin.push.core.d.g) || com.igexin.push.core.d.U == null) {
                return;
            }
            String name = x.a().c(com.igexin.push.core.d.g).getName();
            if (!name.equals(CoreConsts.n)) {
                byte[] bArrB = com.igexin.b.b.a.b(name.getBytes());
                if (bArrB != null) {
                    com.igexin.push.util.c.a(bArrB, com.igexin.push.core.d.U, false);
                    return;
                }
                return;
            }
            if (new File(com.igexin.push.core.d.U).delete()) {
                com.igexin.b.a.c.b.a("del " + com.igexin.push.core.d.U + " success ~~~", new Object[0]);
            }
        }
    }

    public void a(Bundle bundle) {
        com.igexin.push.core.v.a().a(bundle);
    }

    public void a(PushTaskBean pushTaskBean, String str) {
        a(pushTaskBean, AssistPushConsts.PUSHMESSAGE_ACTION_MULTI_BRAND_RECEIVE + str, "ok");
    }

    public void a(PushTaskBean pushTaskBean, String str, String str2) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("action", "pushmessage_feedback");
            jSONObject.put("appid", pushTaskBean.getAppid());
            jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
            jSONObject.put("appkey", pushTaskBean.getAppKey());
            jSONObject.put("messageid", pushTaskBean.getMessageId());
            jSONObject.put("taskid", pushTaskBean.getTaskId());
            jSONObject.put("actionid", str);
            jSONObject.put("result", str2);
            jSONObject.put("timestamp", String.valueOf(System.currentTimeMillis()));
        } catch (Exception unused) {
        }
        String string = jSONObject.toString();
        com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
        bVar.b();
        bVar.f2597a = (int) jCurrentTimeMillis;
        bVar.d = "17258000";
        bVar.e = string;
        bVar.g = com.igexin.push.core.d.u;
        com.igexin.push.core.b.e.a().a(new com.igexin.push.core.bean.h(jCurrentTimeMillis, string, (byte) 3, com.igexin.push.core.d.n ? jCurrentTimeMillis : 0L));
        if (com.igexin.push.core.c.a().i() != null) {
            com.igexin.push.core.c.a().i().a("C-" + com.igexin.push.core.d.u, bVar);
        }
        com.igexin.b.a.c.b.a("feedback|" + pushTaskBean.getTaskId() + "|" + pushTaskBean.getMessageId() + "|" + str, new Object[0]);
    }

    void a(String str) {
        this.f2505a.execute(new f(this, str));
    }

    void a(JSONObject jSONObject, String str) {
        try {
            PushTaskBean pushTaskBean = new PushTaskBean();
            pushTaskBean.parse(jSONObject);
            a(pushTaskBean, str);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("CoreAction " + e.toString(), new Object[0]);
        }
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(com.igexin.b.a.d.e eVar) {
        return false;
    }

    public boolean a(com.igexin.push.d.c.c cVar) {
        if (cVar == null) {
            return false;
        }
        a aVar = b.get(cVar.i);
        if ((cVar instanceof com.igexin.push.d.c.h) || (cVar instanceof com.igexin.push.d.c.k) || (cVar instanceof com.igexin.push.d.c.l) || (cVar instanceof com.igexin.push.d.c.o) || (cVar instanceof com.igexin.push.d.c.p) || (cVar instanceof com.igexin.push.d.c.f)) {
            com.igexin.b.a.c.b.a("CoreAction|receive : " + cVar.getClass().getName() + " resp ~~~~", new Object[0]);
            com.igexin.b.a.b.a.a.f.a().a(cVar.getClass().getName());
        }
        if ((cVar instanceof com.igexin.push.d.c.k) || (cVar instanceof com.igexin.push.d.c.l) || (cVar instanceof com.igexin.push.d.c.o)) {
            com.igexin.push.core.d.F = 0L;
            com.igexin.push.c.i.a().d().b();
        }
        if (aVar != null) {
            aVar.a(cVar);
        }
        com.igexin.push.f.b.b.i().j();
        return true;
    }

    @Override // com.igexin.push.core.a.a
    public boolean a(Object obj) {
        com.igexin.push.e.a aVarI = com.igexin.push.core.c.a().i();
        if ((obj instanceof com.igexin.push.d.c.c) && aVarI != null) {
            aVarI.a((com.igexin.push.d.c.c) obj);
        } else if (obj instanceof com.igexin.push.d.b.b) {
            com.igexin.b.a.c.b.a("CoreAction|TcpExceptionNotify###", new Object[0]);
            aVarI.f();
        } else if (obj instanceof com.igexin.push.d.b.a) {
            com.igexin.b.a.c.b.a("CoreAction|TcpDisconnectSuccessNotify ###", new Object[0]);
            if (com.igexin.push.core.d.n) {
                com.igexin.push.core.d.n = false;
                com.igexin.b.a.c.b.a("CoreAction|broadcast online state = offline", new Object[0]);
                com.igexin.push.core.r.a().b();
            }
            aVarI.g();
        }
        return false;
    }

    public boolean a(String str, String str2, String str3) {
        return com.igexin.push.core.w.a().a(str, str2, str3);
    }

    public boolean a(JSONObject jSONObject, PushTaskBean pushTaskBean) {
        return com.igexin.push.core.w.a().a(jSONObject, pushTaskBean);
    }

    public void b() {
        com.igexin.b.a.c.b.a("CoreAction|send heart beat data ........", new Object[0]);
        com.igexin.push.core.c.a().i().a("H-" + com.igexin.push.core.d.u, new com.igexin.push.d.c.f(), true);
    }

    public void b(Intent intent) {
        if (intent == null || !intent.hasExtra("isSlave")) {
            return;
        }
        boolean booleanExtra = intent.getBooleanExtra("isSlave", false);
        com.igexin.b.a.c.b.a("CoreAction|onServiceInitializeForSlave isSlave =" + booleanExtra, new Object[0]);
        if (booleanExtra) {
            com.igexin.push.core.c.a().a(true);
            if (com.igexin.push.core.d.n) {
                com.igexin.push.core.r.a().c();
            }
        }
    }

    public void b(PushTaskBean pushTaskBean, String str) {
        a(pushTaskBean, str, "ok");
    }

    void b(String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("action", "received");
            jSONObject.put("id", str);
        } catch (JSONException unused) {
        }
        String string = jSONObject.toString();
        com.igexin.push.d.c.n nVar = new com.igexin.push.d.c.n();
        nVar.b();
        ((com.igexin.push.d.c.b) nVar).f2597a = (int) System.currentTimeMillis();
        nVar.d = "17258000";
        nVar.e = string;
        nVar.g = com.igexin.push.core.d.u;
        com.igexin.push.core.c.a().i().a("C-" + com.igexin.push.core.d.u, nVar);
    }

    public void c() {
        if (com.igexin.push.core.d.n) {
            com.igexin.b.a.c.b.a("CoreAction|resetDelayTime, ignore ~~~~~", new Object[0]);
            return;
        }
        int iRandom = (int) ((Math.random() * 50.0d) + 200.0d);
        com.igexin.b.a.c.b.a("CoreAction|screen on or onresume, resetDelay = " + iRandom, new Object[0]);
        com.igexin.push.core.d.F = (long) iRandom;
        com.igexin.push.f.b.f.i().j();
    }

    public void c(Intent intent) {
        StringBuilder sb;
        if (intent == null || intent.getAction() == null) {
            return;
        }
        try {
            String action = intent.getAction();
            com.igexin.b.a.c.b.a("CoreAction|action = " + action, new Object[0]);
            if ("android.net.conn.CONNECTIVITY_CHANGE".equals(action)) {
                if (com.igexin.b.a.b.c.b() != null) {
                    m();
                    return;
                }
                return;
            }
            if (CoreConsts.b.equals(action)) {
                com.igexin.push.core.w.a().a(intent);
                return;
            }
            if (!CoreConsts.f2497a.equals(action)) {
                if ("android.intent.action.TIME_SET".equals(action)) {
                    if (com.igexin.push.config.j.b != 0) {
                        com.igexin.push.a.a.c.c().d();
                        return;
                    }
                    return;
                } else if (!"android.intent.action.SCREEN_ON".equals(action)) {
                    if ("android.intent.action.SCREEN_OFF".equals(action)) {
                        com.igexin.push.core.d.s = 0;
                        return;
                    }
                    return;
                } else {
                    com.igexin.push.core.d.s = 1;
                    if (com.igexin.push.core.w.a().b()) {
                        com.igexin.push.core.w.a().d();
                    }
                    if (Build.VERSION.SDK_INT >= 26) {
                        c();
                        return;
                    }
                    return;
                }
            }
            String stringExtra = intent.getStringExtra("checkpackage");
            String stringExtra2 = intent.getStringExtra("accesstoken");
            com.igexin.b.a.c.b.a("CoreAction|checkpackage = " + stringExtra + " , accesstoken = " + stringExtra2, new Object[0]);
            if (stringExtra == null || stringExtra2 == null || !stringExtra.equals(com.igexin.push.core.d.g.getPackageName())) {
                return;
            }
            intent.setAction(CoreConsts.b);
            intent.putExtra("accesstoken", com.igexin.push.core.d.ad);
            com.igexin.push.core.d.g.sendBroadcast(intent);
            PushTaskBean pushTaskBean = new PushTaskBean();
            pushTaskBean.setAppid(intent.getStringExtra("appid"));
            pushTaskBean.setMessageId(intent.getStringExtra("messageid"));
            pushTaskBean.setTaskId(intent.getStringExtra("taskid"));
            pushTaskBean.setId(intent.getStringExtra("id"));
            pushTaskBean.setAppKey(com.igexin.push.core.d.b);
            try {
                int i = Integer.parseInt(intent.getStringExtra("feedbackid")) + 30010;
                pushTaskBean.setCurrentActionid(i);
                if (intent.getBooleanExtra("isFloat", false)) {
                    sb = new StringBuilder();
                    sb.append("notifyFloat:");
                    sb.append(intent.getStringExtra("bigStyle"));
                } else {
                    sb = new StringBuilder();
                    sb.append("notifyStyle:");
                    sb.append(intent.getStringExtra("notifyStyle"));
                }
                String string = sb.toString();
                a().a(pushTaskBean, i + "", string);
            } catch (Exception unused) {
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("CoreAction" + th.toString(), new Object[0]);
        }
    }

    public void c(PushTaskBean pushTaskBean, String str) {
        this.f2505a.execute(new h(this, pushTaskBean, str));
    }

    void d() {
        try {
            for (com.igexin.push.core.bean.h hVar : com.igexin.push.core.b.e.a().b()) {
                if (hVar.d() + com.heytap.mcssdk.constant.a.q <= System.currentTimeMillis()) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    JSONObject jSONObject = new JSONObject(hVar.b());
                    com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
                    bVar.b();
                    bVar.f2597a = (int) jCurrentTimeMillis;
                    bVar.d = "17258000";
                    if (jSONObject.has("extraData")) {
                        bVar.f = com.igexin.push.util.d.a(jSONObject.optString("extraData").getBytes(), 0);
                        jSONObject.remove("extraData");
                    }
                    bVar.e = hVar.b();
                    bVar.g = com.igexin.push.core.d.u;
                    com.igexin.b.a.c.b.a("freshral|" + hVar.b(), new Object[0]);
                    com.igexin.push.core.b.e.a().a(hVar.a(), System.currentTimeMillis() + com.heytap.mcssdk.constant.a.q);
                    com.igexin.push.core.c.a().i().a("C-" + com.igexin.push.core.d.u, bVar);
                    return;
                }
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("CoreActionfreshRAL error :" + th.toString(), new Object[0]);
        }
    }

    void e() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("action", "request_deviceid");
            jSONObject.put("id", String.valueOf(jCurrentTimeMillis));
        } catch (JSONException unused) {
        }
        String string = jSONObject.toString();
        com.igexin.push.d.c.b bVar = new com.igexin.push.d.c.b();
        bVar.b();
        bVar.f2597a = (int) jCurrentTimeMillis;
        bVar.d = "17258000";
        bVar.e = string;
        bVar.g = com.igexin.push.core.d.u;
        com.igexin.push.core.c.a().i().a("C-" + com.igexin.push.core.d.u, bVar);
        com.igexin.b.a.c.b.a("CoreAction|deviceidReq", new Object[0]);
    }

    public void f() {
        try {
            if (System.currentTimeMillis() - com.igexin.push.core.d.H > 86400000) {
                com.igexin.push.core.b.i.a().b(0);
                com.igexin.push.core.b.i.a().d(System.currentTimeMillis());
            }
            if (com.igexin.push.core.d.am <= 5) {
                com.igexin.push.core.b.i.a().b(com.igexin.push.core.d.am + 1);
                com.igexin.b.a.b.c.b().a(new g(this), false, true);
            }
        } catch (Throwable unused) {
        }
    }

    public boolean g() {
        return false;
    }

    public void h() {
        String[] list;
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd", Locale.getDefault());
        String str = simpleDateFormat.format(new Date());
        File file = new File("/sdcard/libs//");
        String str2 = com.igexin.push.core.d.e;
        if (str2 == null) {
            str2 = "unknowPacageName";
        }
        if (file.exists() && (list = file.list()) != null) {
            int length = list.length;
            for (int i = 0; i < length; i++) {
                int length2 = list[i].length();
                if (list[i].startsWith(str2) && list[i].endsWith(com.tkay.china.common.a.a.f) && length2 > str2.length() + 14 && str2.equals(list[i].substring(0, length2 - 15))) {
                    try {
                        if (Math.abs((simpleDateFormat.parse(str).getTime() - simpleDateFormat.parse(list[i].substring(str2.length() + 1, length2 - 4)).getTime()) / 86400000) > 6) {
                            File file2 = new File("/sdcard/libs//" + list[i]);
                            if (file2.exists()) {
                                file2.delete();
                            }
                        }
                    } catch (Exception unused) {
                    }
                }
            }
        }
    }

    public void i() {
        com.igexin.push.util.a.d();
    }

    public void j() {
        int i = com.igexin.push.core.d.ac - 100;
        if (i < 0) {
            i = 0;
        }
        com.igexin.push.core.d.ac = i;
        long jCurrentTimeMillis = System.currentTimeMillis();
        Iterator<Map.Entry<String, Long>> it = com.igexin.push.core.d.ab.entrySet().iterator();
        while (it.hasNext()) {
            Map.Entry<String, Long> next = it.next();
            next.getKey();
            if (jCurrentTimeMillis - next.getValue().longValue() > 3600000) {
                it.remove();
            }
        }
    }

    public void k() {
        if (com.igexin.push.core.d.L < System.currentTimeMillis()) {
            com.igexin.push.core.b.i.a().a(false);
        }
    }

    public void l() {
        if (!com.igexin.push.core.d.W) {
            com.igexin.push.core.d.W = com.igexin.b.a.b.c.b().a(com.igexin.push.f.b.b.i(), false, true);
        }
        if (!com.igexin.push.core.d.X) {
            com.igexin.push.core.d.X = com.igexin.b.a.b.c.b().a(com.igexin.push.f.b.f.i(), true, true);
        }
        if (com.igexin.push.core.d.Y) {
            return;
        }
        com.igexin.push.core.c.a().d();
    }
}
