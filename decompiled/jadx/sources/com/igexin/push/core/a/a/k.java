package com.igexin.push.core.a.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.bean.l;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class k implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2503a = com.igexin.push.config.i.f2493a;

    private void a(String... strArr) {
        try {
            com.igexin.b.a.c.b.a(f2503a + "|del condition taskid = " + strArr.toString(), new Object[0]);
            com.igexin.push.core.c.a().k().a("message", new String[]{"taskid"}, strArr);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(f2503a + "|del condition" + th.toString(), new Object[0]);
        }
    }

    @Override // com.igexin.push.core.a.a.a
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.success;
    }

    @Override // com.igexin.push.core.a.a.a
    public BaseAction a(JSONObject jSONObject) {
        try {
            if (!jSONObject.has("do") || !jSONObject.has("actionid") || !jSONObject.has("taskid")) {
                return null;
            }
            l lVar = new l();
            lVar.setType("terminatetask");
            lVar.setActionId(jSONObject.getString("actionid"));
            lVar.setDoActionId(jSONObject.getString("do"));
            lVar.a(jSONObject.getString("taskid"));
            lVar.a(jSONObject.optBoolean("force"));
            return lVar;
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:54:0x01ad  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x017d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // com.igexin.push.core.a.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean b(com.igexin.push.core.bean.PushTaskBean r14, com.igexin.push.core.bean.BaseAction r15) {
        /*
            Method dump skipped, instruction units count: 449
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.a.a.k.b(com.igexin.push.core.bean.PushTaskBean, com.igexin.push.core.bean.BaseAction):boolean");
    }
}
