package com.igexin.push.extension.distribution.basic.a;

import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class i implements com.igexin.push.core.a.a.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2619a = "EXT-" + i.class.getName();

    private void a(String str) {
        if (com.igexin.push.extension.distribution.basic.c.e.l.a()) {
            try {
                com.igexin.b.a.c.b.a(f2619a + "|del condition taskid = " + str, new Object[0]);
                com.igexin.push.extension.distribution.basic.c.e.l.a("message", new String[]{"taskid"}, new String[]{str});
                com.igexin.push.extension.distribution.basic.c.e.l.close();
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2619a + "|del condition" + th.toString(), new Object[0]);
            }
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
            com.igexin.push.extension.distribution.basic.b.e eVar = new com.igexin.push.extension.distribution.basic.b.e();
            eVar.setType("terminatetask");
            eVar.setActionId(jSONObject.getString("actionid"));
            eVar.setDoActionId(jSONObject.getString("do"));
            eVar.a(jSONObject.getString("taskid"));
            eVar.a(jSONObject.optBoolean("force"));
            return eVar;
        } catch (Exception unused) {
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00e5  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00e9 A[PHI: r3 r4
      0x00e9: PHI (r3v6 boolean) = (r3v5 boolean), (r3v8 boolean) binds: [B:39:0x00ef, B:35:0x00e7] A[DONT_GENERATE, DONT_INLINE]
      0x00e9: PHI (r4v5 android.database.Cursor) = (r4v4 android.database.Cursor), (r4v6 android.database.Cursor) binds: [B:39:0x00ef, B:35:0x00e7] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0126  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x00f6 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    @Override // com.igexin.push.core.a.a.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean b(com.igexin.push.core.bean.PushTaskBean r16, com.igexin.push.core.bean.BaseAction r17) {
        /*
            Method dump skipped, instruction units count: 314
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.a.i.b(com.igexin.push.core.bean.PushTaskBean, com.igexin.push.core.bean.BaseAction):boolean");
    }
}
