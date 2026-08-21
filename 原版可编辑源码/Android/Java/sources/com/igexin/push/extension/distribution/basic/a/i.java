package com.igexin.push.extension.distribution.basic.a;

import android.app.NotificationManager;
import android.database.Cursor;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import org.json.JSONObject;

public class i implements com.igexin.push.core.a.a.a {
    private static final String a = "EXT-" + i.class.getName();

    private void a(String str) {
        if (com.igexin.push.extension.distribution.basic.c.e.l.a()) {
            try {
                com.igexin.b.a.c.b.a(a + "|del condition taskid = " + str, new Object[0]);
                com.igexin.push.extension.distribution.basic.c.e.l.a("message", new String[]{"taskid"}, new String[]{str});
                com.igexin.push.extension.distribution.basic.c.e.l.close();
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(a + "|del condition" + th.toString(), new Object[0]);
            }
        }
    }

    @Override
    public com.igexin.push.core.a a(PushTaskBean pushTaskBean, BaseAction baseAction) {
        return com.igexin.push.core.a.a;
    }

    @Override
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        boolean z;
        PushTaskBean pushTaskBean2;
        com.igexin.push.extension.distribution.basic.b.e eVar = (com.igexin.push.extension.distribution.basic.b.e) baseAction;
        String strA = eVar.a();
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        if (TextUtils.isEmpty(strA)) {
            z = false;
        } else {
            Cursor cursorA = null;
            try {
                cursorA = com.igexin.push.core.c.a().k().a("message", new String[]{"taskid"}, new String[]{strA}, null, "id ASC");
            } catch (Throwable unused) {
            }
            if (cursorA == null) {
                z = false;
                if (cursorA != null) {
                    cursorA.close();
                }
            } else {
                String strA2 = cursorA.moveToFirst() ? com.igexin.push.core.a.e.a().a(strA, cursorA.getString(cursorA.getColumnIndex("messageid"))) : "";
                if (!strA2.equals("") && (pushTaskBean2 = com.igexin.push.core.d.Z.get(strA2)) != null) {
                    pushTaskBean2.setStop(true);
                    try {
                        a(strA);
                        String strValueOf = String.valueOf(pushTaskBean2.getPerActionid());
                        if (!strValueOf.equals("0") && pushTaskBean2.getBaseAction(strValueOf).getType().equals(RemoteMessageConst.NOTIFICATION) && com.igexin.push.core.d.aa.containsKey(strA)) {
                            notificationManager.cancel(com.igexin.push.core.d.aa.get(strA).intValue());
                            try {
                                com.igexin.push.core.d.aa.remove(strA);
                                com.igexin.b.a.c.b.a(a + "remove terminateTaskId from cache", new Object[0]);
                                z = true;
                            } catch (Throwable unused2) {
                                z = true;
                                if (cursorA != null) {
                                }
                                if (!z) {
                                }
                                if (!baseAction.getDoActionId().equals("")) {
                                }
                                return true;
                            }
                        } else {
                            z = false;
                        }
                    } catch (Throwable unused3) {
                        z = false;
                        if (cursorA != null) {
                        }
                        if (!z) {
                        }
                        if (!baseAction.getDoActionId().equals("")) {
                        }
                        return true;
                    }
                    try {
                        com.igexin.push.core.e.a aVarA = com.igexin.push.core.e.b.a().a((Long) 11111111L);
                        if (aVarA != null && aVarA.b().equals(strA)) {
                            com.igexin.push.core.e.b.a().b(aVarA);
                        }
                    } catch (Throwable unused4) {
                        if (cursorA != null) {
                        }
                        if (!z) {
                        }
                        if (!baseAction.getDoActionId().equals("")) {
                        }
                        return true;
                    }
                }
                if (cursorA != null) {
                }
            }
        }
        if (!z) {
            try {
                if (eVar.b()) {
                    com.igexin.b.a.c.b.a(a + " | cancelAll()", new Object[0]);
                    notificationManager.cancelAll();
                    com.igexin.push.extension.distribution.basic.g.a.c(com.igexin.push.core.d.g);
                }
            } catch (Throwable unused5) {
            }
        }
        if (!baseAction.getDoActionId().equals("")) {
            com.igexin.push.core.a.e.a().a(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), baseAction.getDoActionId());
        }
        return true;
    }
}
