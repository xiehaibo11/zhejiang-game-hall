package com.igexin.push.extension.distribution.basic.a;

import android.content.Intent;
import android.content.pm.ResolveInfo;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class g implements com.igexin.push.core.a.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2618a = "EXT-" + g.class.getName();

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    @Override // com.igexin.push.core.a.a.a
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (jSONObject.has("do") && jSONObject.has("actionid") && jSONObject.has("type") && jSONObject.has("intent") && jSONObject.has("do_failed") && jSONObject.has("t")) {
                String string = jSONObject.getString("intent");
                String string2 = jSONObject.getString("t");
                String string3 = jSONObject.getString("do");
                String string4 = jSONObject.getString("do_failed");
                if ((!string2.equals("0") && !string2.equals("1")) || string4.equals("") || string3.equals("0")) {
                    return null;
                }
                com.igexin.push.extension.distribution.basic.b.c cVar = new com.igexin.push.extension.distribution.basic.b.c();
                cVar.setType("startintent");
                cVar.setActionId(jSONObject.getString("actionid"));
                cVar.setDoActionId(jSONObject.getString("do"));
                cVar.b(string);
                cVar.a(string2);
                cVar.c(jSONObject.getString("do_failed"));
                return cVar;
            }
        } catch (Exception unused) {
        }
        return null;
    }

    @Override // com.igexin.push.core.a.a.a
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.a.e eVarA;
        String taskId;
        String messageId;
        String strC;
        com.igexin.push.extension.distribution.basic.b.c cVar = (com.igexin.push.extension.distribution.basic.b.c) baseAction;
        try {
            Intent intentA = com.igexin.push.util.b.a(cVar.b(), 0);
            try {
                if (cVar.a().equals("0")) {
                    intentA.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    com.igexin.push.core.d.g.startActivity(intentA);
                    eVarA = com.igexin.push.core.a.e.a();
                    taskId = pushTaskBean.getTaskId();
                    messageId = pushTaskBean.getMessageId();
                } else {
                    if (!cVar.a().equals("1")) {
                        return true;
                    }
                    List<ResolveInfo> listQueryIntentServices = com.igexin.push.core.d.g.getPackageManager().queryIntentServices(intentA, 0);
                    if (listQueryIntentServices == null || listQueryIntentServices.size() <= 0) {
                        com.igexin.b.a.c.b.a("StartIntentAction err intent=" + cVar.b() + " t=" + cVar.a(), new Object[0]);
                        eVarA = com.igexin.push.core.a.e.a();
                        taskId = pushTaskBean.getTaskId();
                        messageId = pushTaskBean.getMessageId();
                        strC = cVar.c();
                        eVarA.a(taskId, messageId, strC);
                        return true;
                    }
                    com.igexin.push.core.d.g.startService(intentA);
                    eVarA = com.igexin.push.core.a.e.a();
                    taskId = pushTaskBean.getTaskId();
                    messageId = pushTaskBean.getMessageId();
                }
                strC = cVar.getDoActionId();
                eVarA.a(taskId, messageId, strC);
                return true;
            } catch (Exception unused) {
                com.igexin.b.a.c.b.a(f2618a + "|executeAction err intent=" + cVar.b() + " t=" + cVar.a(), new Object[0]);
                com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), cVar.c());
                return true;
            }
        } catch (Exception unused2) {
            return true;
        }
    }
}
