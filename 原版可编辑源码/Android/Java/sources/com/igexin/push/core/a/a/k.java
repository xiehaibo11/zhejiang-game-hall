package com.igexin.push.core.a.a;

import android.app.NotificationManager;
import android.database.Cursor;
import android.text.TextUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.bean.l;
import com.igexin.push.core.r;
import com.igexin.push.core.w;
import org.json.JSONObject;

public class k implements a {
    private static final String a = com.igexin.push.config.i.a;

    private void a(String... strArr) {
        try {
            com.igexin.b.a.c.b.a(a + "|del condition taskid = " + strArr.toString(), new Object[0]);
            com.igexin.push.core.c.a().k().a("message", new String[]{"taskid"}, strArr);
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a(a + "|del condition" + th.toString(), new Object[0]);
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean b(PushTaskBean pushTaskBean, BaseAction baseAction) {
        boolean z;
        l lVar = (l) baseAction;
        String strA = lVar.a();
        NotificationManager notificationManager = (NotificationManager) com.igexin.push.core.d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        if (TextUtils.isEmpty(strA)) {
            z = false;
        } else {
            Cursor cursorA = null;
            try {
                cursorA = com.igexin.push.core.c.a().k().a("message", new String[]{"taskid"}, new String[]{strA}, null, "id ASC");
                if (cursorA == null || !cursorA.moveToFirst()) {
                    com.igexin.b.a.c.b.a(a + "| terminateTaskId not found in table   " + strA, new Object[0]);
                    z = false;
                } else {
                    byte[] blob = cursorA.getBlob(cursorA.getColumnIndex("msgextra"));
                    String strA2 = com.igexin.push.core.a.e.a().a(strA, cursorA.getString(cursorA.getColumnIndex("messageid")));
                    if (new com.igexin.push.core.b.d(com.igexin.push.core.d.g).a(strA) || blob != null) {
                        com.igexin.b.a.c.b.a(a + "| revocation  transmit message ", new Object[0]);
                        r.a().b(strA);
                        z = true;
                    } else {
                        com.igexin.b.a.c.b.a(a + "| is not transmit", new Object[0]);
                        z = false;
                    }
                    try {
                        if (TextUtils.isEmpty(strA2)) {
                            com.igexin.b.a.c.b.a(a + "| cacheid not found ", new Object[0]);
                        } else {
                            PushTaskBean pushTaskBean2 = com.igexin.push.core.d.Z.get(strA2);
                            if (pushTaskBean2 != null) {
                                pushTaskBean2.setStop(true);
                            }
                            if (com.igexin.push.core.d.aa.containsKey(strA)) {
                                int iIntValue = com.igexin.push.core.d.aa.get(strA).intValue();
                                notificationManager.cancel(iIntValue);
                                try {
                                    com.igexin.push.core.d.aa.remove(strA);
                                    com.igexin.b.a.c.b.a(a + "| cancle notify notifID = " + iIntValue, new Object[0]);
                                    z = true;
                                } catch (Throwable th) {
                                    th = th;
                                    z = true;
                                    try {
                                        com.igexin.b.a.c.b.a(a + "| TerminateTaskAction error " + th.getMessage(), new Object[0]);
                                        if (cursorA != null) {
                                        }
                                        if (!z) {
                                        }
                                        if (!TextUtils.isEmpty(baseAction.getDoActionId())) {
                                        }
                                        return true;
                                    } finally {
                                        if (cursorA != null) {
                                            cursorA.close();
                                        }
                                    }
                                }
                            } else {
                                com.igexin.b.a.c.b.a(a + "| is not notify or notify has handle", new Object[0]);
                            }
                        }
                        a(strA);
                    } catch (Throwable th2) {
                        th = th2;
                    }
                }
            } catch (Throwable th3) {
                th = th3;
                z = false;
            }
        }
        if (!z) {
            try {
                if (lVar.b()) {
                    com.igexin.b.a.c.b.a(a + " | cancelAll()", new Object[0]);
                    notificationManager.cancelAll();
                    com.igexin.assist.sdk.a.j(com.igexin.push.core.d.g);
                }
            } catch (Throwable unused) {
            }
        }
        if (!TextUtils.isEmpty(baseAction.getDoActionId())) {
            w.a().b(pushTaskBean.getTaskId(), pushTaskBean.getMessageId(), baseAction.getDoActionId());
        }
        return true;
    }
}
