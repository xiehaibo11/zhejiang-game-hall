package com.igexin.push.core.a.a;

import android.content.Intent;
import android.text.TextUtils;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class h implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2500a = com.igexin.push.config.i.f2493a;

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.bean.j jVar = (com.igexin.push.core.bean.j) baseAction;
        try {
            Intent intentA = com.igexin.push.util.b.a(jVar.a(), 0);
            intentA.setPackage(com.igexin.push.core.d.g.getPackageName());
            intentA.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (com.igexin.push.util.a.b(intentA, com.igexin.push.core.d.g)) {
                return com.igexin.push.core.a.success;
            }
            com.igexin.b.a.c.b.a(f2500a + "|execute failed, activity not exist", new Object[0]);
            com.igexin.push.core.a.e.a().a(pushTaskBean.getId(), pushTaskBean.getMessageId(), jVar.b());
            return com.igexin.push.core.a.stop;
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2500a + "|execute exception = " + th.toString(), new Object[0]);
            com.igexin.push.core.a.e.a().a(pushTaskBean.getId(), pushTaskBean.getMessageId(), jVar.b());
            return com.igexin.push.core.a.stop;
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (!jSONObject.has("do") || !jSONObject.has("actionid") || !jSONObject.has("type") || !jSONObject.has("uri") || !jSONObject.has("do_failed")) {
                return null;
            }
            String strOptString = jSONObject.optString("uri");
            if (TextUtils.isEmpty(strOptString)) {
                return null;
            }
            com.igexin.push.core.bean.j jVar = new com.igexin.push.core.bean.j();
            jVar.setType("startmyactivity");
            jVar.setActionId(jSONObject.getString("actionid"));
            jVar.setDoActionId(jSONObject.getString("do"));
            jVar.a(strOptString);
            jVar.b(jSONObject.optString("do_failed"));
            return jVar;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.a.e eVarA;
        String id;
        String messageId;
        String strB;
        com.igexin.push.core.bean.j jVar = (com.igexin.push.core.bean.j) baseAction;
        try {
            Intent intentA = com.igexin.push.util.b.a(jVar.a(), 0);
            intentA.setPackage(com.igexin.push.core.d.g.getPackageName());
            intentA.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            if (com.igexin.push.util.a.b(intentA, com.igexin.push.core.d.g)) {
                com.igexin.push.core.d.g.startActivity(intentA);
                eVarA = com.igexin.push.core.a.e.a();
                id = pushTaskBean.getTaskId();
                messageId = pushTaskBean.getMessageId();
                strB = jVar.getDoActionId();
            } else {
                com.igexin.b.a.c.b.a(f2500a + "|execute failed, activity not exist", new Object[0]);
                eVarA = com.igexin.push.core.a.e.a();
                id = pushTaskBean.getId();
                messageId = pushTaskBean.getMessageId();
                strB = jVar.b();
            }
            eVarA.a(id, messageId, strB);
            return true;
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2500a + "|execute exception = " + th.getMessage(), new Object[0]);
            com.igexin.push.core.a.e.a().a(pushTaskBean.getId(), pushTaskBean.getMessageId(), jVar.b());
            return true;
        }
    }
}
