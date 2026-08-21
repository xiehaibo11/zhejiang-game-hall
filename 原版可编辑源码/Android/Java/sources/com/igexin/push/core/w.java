package com.igexin.push.core;

import android.app.NotificationManager;
import android.content.ContentValues;
import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.os.Message;
import android.text.TextUtils;
import com.bianfeng.libuniverse.Device;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.extension.stub.IPushExtension;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class w {
    private static w a;
    private static Map<String, com.igexin.push.core.a.a.a> b;
    private static Set<String> c;

    private w() {
        c = new HashSet();
        b = new HashMap();
        c.add("goto");
        c.add(RemoteMessageConst.NOTIFICATION);
        c.add("terminatetask");
        c.add("startmyactivity");
        c.add("startapp");
        c.add("null");
        c.add("startweb");
        c.add("checkapp");
        c.add("enablelog");
        c.add("disablelog");
    }

    private com.igexin.push.core.a.a.a a(String str) {
        Map<String, com.igexin.push.core.a.a.a> map;
        com.igexin.push.core.a.a.a cVar;
        if (TextUtils.isEmpty(str) || !c.contains(str)) {
            return null;
        }
        com.igexin.push.core.a.a.a aVar = b.get(str);
        if (aVar != null) {
            return aVar;
        }
        String str2 = "goto";
        if (str.equals("goto")) {
            map = b;
            cVar = new com.igexin.push.core.a.a.f();
        } else {
            str2 = RemoteMessageConst.NOTIFICATION;
            if (str.equals(RemoteMessageConst.NOTIFICATION)) {
                map = b;
                cVar = new com.igexin.push.core.a.a.g();
            } else {
                str2 = "terminatetask";
                if (str.equals("terminatetask")) {
                    map = b;
                    cVar = new com.igexin.push.core.a.a.k();
                } else {
                    str2 = "startmyactivity";
                    if (str.equals("startmyactivity")) {
                        map = b;
                        cVar = new com.igexin.push.core.a.a.h();
                    } else {
                        str2 = "startapp";
                        if (str.equals("startapp")) {
                            map = b;
                            cVar = new com.igexin.push.core.a.a.j();
                        } else {
                            str2 = "null";
                            if (str.equals("null")) {
                                map = b;
                                cVar = new com.igexin.push.core.a.a.e();
                            } else {
                                str2 = "startweb";
                                if (str.equals("startweb")) {
                                    map = b;
                                    cVar = new com.igexin.push.core.a.a.i();
                                } else {
                                    str2 = "checkapp";
                                    if (str.equals("checkapp")) {
                                        map = b;
                                        cVar = new com.igexin.push.core.a.a.b();
                                    } else {
                                        str2 = "enablelog";
                                        if (!str.equals("enablelog")) {
                                            str2 = "disablelog";
                                            if (str.equals("disablelog")) {
                                                map = b;
                                                cVar = new com.igexin.push.core.a.a.c();
                                            }
                                            return b.get(str);
                                        }
                                        map = b;
                                        cVar = new com.igexin.push.core.a.a.d();
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        map.put(str2, cVar);
        return b.get(str);
    }

    public static w a() {
        if (a == null) {
            a = new w();
        }
        return a;
    }

    private void a(int i, String str, String str2) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("status", Integer.valueOf(i));
        n.a().b(str, contentValues);
    }

    private boolean a(JSONObject jSONObject) {
        try {
            JSONObject jSONObject2 = jSONObject.getJSONObject("condition");
            if (jSONObject2.has(Device.NETWORN_WIFI) || jSONObject2.has("screenOn") || jSONObject2.has("ssid") || jSONObject2.has(com.tkay.expressad.foundation.d.r.ag)) {
                return false;
            }
            return !jSONObject2.has("netConnected");
        } catch (Exception unused) {
            return true;
        }
    }

    private void b(JSONObject jSONObject, PushTaskBean pushTaskBean) {
        try {
            JSONObject jSONObject2 = jSONObject.getJSONObject("condition");
            HashMap map = new HashMap();
            if (jSONObject2.has(Device.NETWORN_WIFI)) {
                map.put(Device.NETWORN_WIFI, jSONObject2.getString(Device.NETWORN_WIFI));
            }
            if (jSONObject2.has("screenOn")) {
                map.put("screenOn", jSONObject2.getString("screenOn"));
            }
            if (jSONObject2.has("ssid")) {
                map.put("ssid", jSONObject2.getString("ssid"));
                if (jSONObject2.has("bssid")) {
                    map.put("bssid", jSONObject2.getString("bssid"));
                }
            }
            if (jSONObject2.has(com.tkay.expressad.foundation.d.r.ag)) {
                String string = jSONObject2.getString(com.tkay.expressad.foundation.d.r.ag);
                if (string.contains(Constants.ACCEPT_TIME_SEPARATOR_SERVER)) {
                    int iIndexOf = string.indexOf(Constants.ACCEPT_TIME_SEPARATOR_SERVER);
                    String strSubstring = string.substring(0, iIndexOf);
                    String strSubstring2 = string.substring(iIndexOf + 1, string.length());
                    map.put("startTime", strSubstring);
                    map.put("endTime", strSubstring2);
                }
            }
            if (jSONObject2.has("netConnected")) {
                map.put("netConnected", jSONObject2.getString("netConnected"));
            }
            if (jSONObject2.has("expiredTime")) {
                String string2 = jSONObject2.getString("expiredTime");
                if (!TextUtils.isEmpty(string2) && TextUtils.isDigitsOnly(string2)) {
                    map.put("expiredTime", string2);
                }
            }
            pushTaskBean.setConditionMap(map);
        } catch (Exception unused) {
        }
    }

    private boolean f() {
        if (d.Z.isEmpty() && d.p) {
            Cursor cursorA = null;
            try {
                cursorA = c.a().k().a("message", new String[]{"status"}, new String[]{"0"}, null, null);
                if (cursorA != null) {
                    while (cursorA.moveToNext()) {
                        byte[] blob = cursorA.getBlob(cursorA.getColumnIndex("msgextra"));
                        try {
                            JSONObject jSONObject = new JSONObject(new String(com.igexin.b.b.a.c(cursorA.getBlob(cursorA.getColumnIndex(DBDefinition.SEGMENT_INFO)))));
                            String string = jSONObject.getString("id");
                            String string2 = jSONObject.getString("appid");
                            String string3 = jSONObject.getString("messageid");
                            String string4 = jSONObject.getString("taskid");
                            String string5 = jSONObject.getString("appkey");
                            JSONArray jSONArray = jSONObject.getJSONArray("action_chains");
                            String strA = com.igexin.push.core.a.e.a().a(string4, string3);
                            PushTaskBean pushTaskBean = new PushTaskBean();
                            pushTaskBean.setAppid(string2);
                            pushTaskBean.setMessageId(string3);
                            pushTaskBean.setTaskId(string4);
                            pushTaskBean.setId(string);
                            pushTaskBean.setAppKey(string5);
                            pushTaskBean.setCurrentActionid(1);
                            pushTaskBean.setStatus(cursorA.getInt(cursorA.getColumnIndex("status")));
                            if (blob != null) {
                                pushTaskBean.setMsgExtra(blob);
                            }
                            if (jSONObject.has("condition")) {
                                b(jSONObject, pushTaskBean);
                            }
                            if (jSONArray.length() > 0 && !a(jSONObject, pushTaskBean)) {
                                com.igexin.b.a.c.b.a("PushMessageExecutor|load task from db parseActionChains result = false ####### " + jSONObject.toString(), new Object[0]);
                            }
                            d.Z.put(strA, pushTaskBean);
                        } catch (JSONException unused) {
                        }
                    }
                }
                d.p = false;
            } catch (Throwable th) {
                try {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|checkPushMessageMapValue error:" + th.toString(), new Object[0]);
                } finally {
                    if (cursorA != null) {
                        cursorA.close();
                    }
                }
            }
            if (cursorA != null) {
            }
        }
        return d.Z.isEmpty();
    }

    public void a(ContentValues contentValues) {
        try {
            if (d.an < 1000) {
                n.a().a(contentValues.getAsString("taskid"), contentValues);
            } else {
                int iA = c.a().k().a("message", "id IN (SELECT id from message where status IS NULL or status=1 or status=2 order by id asc limit 250)");
                d.an -= iA;
                if (iA < 250) {
                    d.an -= c.a().k().a("message", "id IN (SELECT id from message where status=0 order by id asc limit " + (250 - iA) + ")");
                }
                n.a().a(contentValues.getAsString("taskid"), contentValues);
            }
            d.an++;
        } catch (Throwable unused) {
        }
    }

    public void a(Intent intent) {
        String stringExtra = intent.getStringExtra("taskid");
        String stringExtra2 = intent.getStringExtra("messageid");
        String stringExtra3 = intent.getStringExtra("actionid");
        String stringExtra4 = intent.getStringExtra("accesstoken");
        String stringExtra5 = intent.hasExtra("title") ? intent.getStringExtra("title") : "";
        String stringExtra6 = intent.hasExtra("content") ? intent.getStringExtra("content") : "";
        int intExtra = intent.getIntExtra("notifID", 0);
        NotificationManager notificationManager = (NotificationManager) d.g.getSystemService(RemoteMessageConst.NOTIFICATION);
        if (intExtra != 0) {
            notificationManager.cancel(intExtra);
        } else if (d.aa.containsKey(stringExtra)) {
            intExtra = d.aa.get(stringExtra).intValue();
            notificationManager.cancel(intExtra);
        }
        d.aa.remove(stringExtra);
        if (stringExtra4.equals(d.ad)) {
            r.a().b(stringExtra, stringExtra2, stringExtra5, stringExtra6);
            b(stringExtra, stringExtra2, stringExtra3);
        }
    }

    public void a(String str, String str2) {
        Bundle bundle = new Bundle();
        bundle.putString("taskid", str);
        bundle.putString("messageid", str2);
        Message messageObtain = Message.obtain();
        messageObtain.what = CoreConsts.f;
        messageObtain.obj = bundle;
        c.a().a(messageObtain);
    }

    public boolean a(String str, String str2, String str3) {
        if (Thread.currentThread().getId() == c.a().e()) {
            b(str, str2, str3);
            return true;
        }
        Bundle bundle = new Bundle();
        bundle.putString("taskid", str);
        bundle.putString("messageid", str2);
        bundle.putString("actionid", str3);
        Message messageObtain = Message.obtain();
        messageObtain.what = CoreConsts.g;
        messageObtain.obj = bundle;
        return c.a().a(messageObtain);
    }

    public boolean a(JSONObject jSONObject, PushTaskBean pushTaskBean) {
        boolean z;
        com.igexin.b.a.c.b.a("PushMessageExecutor------parse pushmessage actionchain json start-------", new Object[0]);
        ArrayList arrayList = new ArrayList();
        try {
            JSONArray jSONArray = jSONObject.getJSONArray("action_chains");
            for (int i = 0; i < jSONArray.length(); i++) {
                String string = ((JSONObject) jSONArray.get(i)).getString("type");
                Iterator<IPushExtension> it = com.igexin.push.extension.a.a().b().iterator();
                while (true) {
                    if (!it.hasNext()) {
                        z = false;
                        break;
                    }
                    if (it.next().isActionSupported(string)) {
                        z = true;
                        break;
                    }
                }
                if (!z) {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|extension not suport type = " + string, new Object[0]);
                    if (!c.contains(string)) {
                        com.igexin.b.a.c.b.a("PushMessageExecutor|action cannot be supported! --" + string, new Object[0]);
                        return false;
                    }
                }
            }
            for (int i2 = 0; i2 < jSONArray.length(); i2++) {
                JSONObject jSONObject2 = (JSONObject) jSONArray.get(i2);
                String string2 = jSONObject2.getString("type");
                com.igexin.b.a.c.b.a("PushMessageExecutor|start parse type = " + string2, new Object[0]);
                BaseAction action = null;
                Iterator<IPushExtension> it2 = com.igexin.push.extension.a.a().b().iterator();
                while (it2.hasNext() && (action = it2.next().parseAction(jSONObject2)) == null) {
                }
                if (action == null) {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|extension can't process type = " + string2, new Object[0]);
                    com.igexin.push.core.a.a.a aVarA = a(string2);
                    if (aVarA != null) {
                        BaseAction baseActionA = aVarA.a(jSONObject2);
                        if (baseActionA != null) {
                            baseActionA.setSupportExt(false);
                        }
                        action = baseActionA;
                    }
                } else {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|extension process type = " + string2 + " success", new Object[0]);
                }
                if (action == null) {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|action chains can't parse, throw ++++++", new Object[0]);
                    return false;
                }
                arrayList.add(action);
            }
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushMessageExecutor|" + th.toString(), new Object[0]);
        }
        pushTaskBean.setActionChains(arrayList);
        com.igexin.b.a.c.b.a("PushMessageExecutor------parse pushmessage actionchain json end-------", new Object[0]);
        return true;
    }

    public boolean a(JSONObject jSONObject, byte[] bArr, boolean z) {
        int i;
        try {
            if (!jSONObject.has("action") || !jSONObject.getString("action").equals("pushmessage")) {
                return true;
            }
            String string = jSONObject.getString("id");
            String string2 = jSONObject.getString("appid");
            String string3 = jSONObject.getString("messageid");
            String string4 = jSONObject.getString("taskid");
            String string5 = jSONObject.getString("appkey");
            JSONArray jSONArray = jSONObject.getJSONArray("action_chains");
            com.igexin.b.a.c.b.a("pushmessage|" + string4 + "|" + string3 + "|" + string2 + "|" + z, new Object[0]);
            if (!string2.equals(d.a)) {
                com.igexin.b.a.c.b.a("PushMessageExecutor receieve error pushmessage", new Object[0]);
                return true;
            }
            PushTaskBean pushTaskBean = new PushTaskBean();
            pushTaskBean.setAppid(string2);
            pushTaskBean.setMessageId(string3);
            pushTaskBean.setTaskId(string4);
            pushTaskBean.setId(string);
            pushTaskBean.setAppKey(string5);
            pushTaskBean.setCurrentActionid(1);
            String strA = com.igexin.push.core.a.e.a().a(string4, string3);
            if (z) {
                com.igexin.push.core.a.e.a().c(pushTaskBean, "0");
                if (com.igexin.push.util.a.a(System.currentTimeMillis())) {
                    return true;
                }
                if (com.igexin.push.util.a.a(jSONObject)) {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|message have loop", new Object[0]);
                    return true;
                }
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("messageid", string3);
            contentValues.put("taskid", string4);
            contentValues.put("appid", string2);
            contentValues.put("key", "CACHE_" + strA);
            contentValues.put(DBDefinition.SEGMENT_INFO, com.igexin.b.b.a.b(jSONObject.toString().getBytes()));
            contentValues.put("createtime", Long.valueOf(System.currentTimeMillis()));
            if (bArr != null) {
                contentValues.put("msgextra", bArr);
                pushTaskBean.setMsgExtra(bArr);
            }
            if (jSONArray.length() > 0 && !a(jSONObject, pushTaskBean)) {
                com.igexin.b.a.c.b.a("PushMessageExecutor parseActionChains result = false #######", new Object[0]);
                return true;
            }
            if (!z) {
                if (jSONObject.has("condition")) {
                    b(jSONObject, pushTaskBean);
                }
                pushTaskBean.setStatus(CoreConsts.l);
                d.Z.put(strA, pushTaskBean);
                return true;
            }
            try {
                if (n.a().a(string4)) {
                    return true;
                }
                if (jSONObject.has("condition")) {
                    b(jSONObject, pushTaskBean);
                    pushTaskBean.setStatus(CoreConsts.k);
                    i = CoreConsts.k;
                } else {
                    pushTaskBean.setStatus(CoreConsts.l);
                    i = CoreConsts.l;
                }
                contentValues.put("status", Integer.valueOf(i));
                a(contentValues);
                d.Z.put(strA, pushTaskBean);
                if (jSONObject.has("condition")) {
                    d();
                    return true;
                }
                a(string4, string3);
                return true;
            } catch (Exception unused) {
                return true;
            }
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("PushMessageExecutor " + e.toString(), new Object[0]);
            return true;
        }
    }

    public void b(String str, String str2) {
        com.igexin.b.a.c.b.a("PushMessageExecutor do processActionExecute", new Object[0]);
        if (str2 == null || str == null) {
            return;
        }
        try {
            if (c.a() == null || c(str, str2) != a.a) {
                return;
            }
            a(str, str2, "1");
        } catch (Throwable th) {
            com.igexin.b.a.c.b.a("PushMessageExecutor|" + th.toString(), new Object[0]);
        }
    }

    public boolean b() {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (d.I <= 0) {
            d.I = jCurrentTimeMillis - 60000;
            return true;
        }
        if (jCurrentTimeMillis - d.I <= 60000) {
            return false;
        }
        d.I = jCurrentTimeMillis;
        return true;
    }

    public boolean b(String str, String str2, String str3) {
        String strA = com.igexin.push.core.a.e.a().a(str, str2);
        PushTaskBean pushTaskBean = d.Z.get(strA);
        if (pushTaskBean == null) {
            Cursor cursorA = null;
            try {
                cursorA = c.a().k().a("message", new String[]{"taskid", "messageid"}, new String[]{str, str2}, null, null);
            } catch (Throwable th) {
                try {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|" + th.toString(), new Object[0]);
                    if (cursorA != null) {
                    }
                } finally {
                    if (cursorA != null) {
                        cursorA.close();
                    }
                }
            }
            if (cursorA != null && cursorA.getCount() > 0) {
                while (cursorA.moveToNext()) {
                    a().a(new JSONObject(new String(com.igexin.b.b.a.c(cursorA.getBlob(cursorA.getColumnIndexOrThrow(DBDefinition.SEGMENT_INFO))))), cursorA.getBlob(cursorA.getColumnIndexOrThrow("msgextra")), false);
                    PushTaskBean pushTaskBean2 = d.Z.get(str + Constants.COLON_SEPARATOR + str2);
                    if (pushTaskBean2 == null) {
                        return false;
                    }
                    pushTaskBean = pushTaskBean2;
                }
                if (cursorA != null) {
                    cursorA.close();
                }
            }
            if (cursorA != null) {
                cursorA.close();
            }
            return false;
        }
        int executeTimes = pushTaskBean.getExecuteTimes();
        if (executeTimes >= 50) {
            try {
                d.Z.remove(strA);
            } catch (Exception e) {
                com.igexin.b.a.c.b.a("PushMessageExecutor|" + e.toString(), new Object[0]);
            }
            return true;
        }
        pushTaskBean.setExecuteTimes(executeTimes + 1);
        com.igexin.push.core.a.e.a().c(pushTaskBean, str3);
        try {
            BaseAction baseAction = pushTaskBean.getBaseAction(str3);
            if (baseAction == null) {
                return false;
            }
            if (baseAction.isSupportExt()) {
                Iterator<IPushExtension> it = com.igexin.push.extension.a.a().b().iterator();
                while (it.hasNext()) {
                    if (it.next().executeAction(pushTaskBean, baseAction)) {
                        return true;
                    }
                }
            }
            try {
                com.igexin.push.core.a.a.a aVarA = a(baseAction.getType());
                if (aVarA != null && !pushTaskBean.isStop()) {
                    return aVarA.b(pushTaskBean, baseAction);
                }
                return false;
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (Throwable th3) {
            th = th3;
        }
        com.igexin.b.a.c.b.a("PushMessageExecutor|" + th.toString(), new Object[0]);
        return false;
    }

    public a c(String str, String str2) {
        a aVar = a.a;
        PushTaskBean pushTaskBean = d.Z.get(com.igexin.push.core.a.e.a().a(str, str2));
        if (pushTaskBean == null) {
            return a.c;
        }
        int i = 0;
        for (BaseAction baseAction : pushTaskBean.getActionChains()) {
            a aVarA = a.c;
            if (baseAction == null) {
                return aVarA;
            }
            Iterator<IPushExtension> it = com.igexin.push.extension.a.a().b().iterator();
            while (it.hasNext() && (aVarA = it.next().prepareExecuteAction(pushTaskBean, baseAction)) == a.c) {
            }
            if (aVarA == a.c) {
                com.igexin.push.core.a.a.a aVarA2 = a(baseAction.getType());
                if (aVarA2 == null) {
                    return aVarA;
                }
                aVarA = aVarA2.a(pushTaskBean, baseAction);
                if (aVarA == a.c) {
                    return aVarA;
                }
            }
            if (aVar == a.a) {
                aVar = aVarA;
            }
            if (aVarA == a.b) {
                i++;
            }
        }
        return (i == 0 || d.a(str, Integer.valueOf(i), true)) ? aVar : a.a;
    }

    public void c() {
        long jCurrentTimeMillis = System.currentTimeMillis() - 604800000;
        c.a().k().a("message", "createtime <= " + jCurrentTimeMillis);
    }

    public void d() {
        String key;
        PushTaskBean value;
        int i;
        try {
            if (f()) {
                return;
            }
            for (Map.Entry<String, PushTaskBean> entry : d.Z.entrySet()) {
                try {
                    key = entry.getKey();
                    value = entry.getValue();
                } catch (Exception e) {
                    com.igexin.b.a.c.b.a("PushMessageExecutor|" + e.toString(), new Object[0]);
                }
                if (value == null) {
                    return;
                }
                if (value.getStatus() == CoreConsts.k) {
                    String taskId = value.getTaskId();
                    Map<String, String> conditionMap = value.getConditionMap();
                    if (conditionMap == null) {
                        return;
                    }
                    if (conditionMap.size() > 0) {
                        if (conditionMap.containsKey("expiredTime") && Long.parseLong(conditionMap.get("expiredTime")) < System.currentTimeMillis()) {
                            a(CoreConsts.m, taskId, key);
                            i = CoreConsts.l;
                        } else if (!conditionMap.containsKey("endTime") || Long.parseLong(conditionMap.get("endTime")) >= System.currentTimeMillis()) {
                            if (conditionMap.containsKey(Device.NETWORN_WIFI)) {
                                int i2 = Integer.parseInt(conditionMap.get(Device.NETWORN_WIFI));
                                com.igexin.push.util.a.c();
                                if (i2 != d.r) {
                                }
                            }
                            if (conditionMap.containsKey("screenOn")) {
                                int i3 = Integer.parseInt(conditionMap.get("screenOn"));
                                com.igexin.push.util.a.d();
                                if (i3 != d.s) {
                                }
                            }
                            if (!conditionMap.containsKey("startTime") || Long.parseLong(conditionMap.get("startTime")) <= System.currentTimeMillis()) {
                                if (conditionMap.containsKey("netConnected")) {
                                    try {
                                        if (Integer.parseInt(conditionMap.get("netConnected")) != com.igexin.push.util.a.f()) {
                                        }
                                    } catch (Exception unused) {
                                    }
                                }
                            }
                        } else {
                            a(CoreConsts.m, taskId, key);
                            i = CoreConsts.l;
                        }
                        value.setStatus(i);
                    }
                    a(taskId, value.getMessageId());
                    a(CoreConsts.l, taskId, key);
                    i = CoreConsts.l;
                    value.setStatus(i);
                } else {
                    continue;
                }
            }
        } catch (Exception e2) {
            com.igexin.b.a.c.b.a("PushMessageExecutor|" + e2.toString(), new Object[0]);
        }
    }

    public void e() {
        Cursor cursorA = null;
        try {
            com.igexin.push.b.b bVarK = c.a().k();
            cursorA = bVarK.a("message", new String[]{"status"}, new String[]{"0"}, null, null);
            if (cursorA != null) {
                while (cursorA.moveToNext()) {
                    byte[] blob = cursorA.getBlob(cursorA.getColumnIndex(DBDefinition.SEGMENT_INFO));
                    long j = cursorA.getLong(cursorA.getColumnIndex("createtime"));
                    try {
                        JSONObject jSONObject = new JSONObject(new String(com.igexin.b.b.a.c(blob)));
                        String string = jSONObject.getString("taskid");
                        if (jSONObject.has("condition") && !a(jSONObject) && System.currentTimeMillis() - j > 259200000) {
                            com.igexin.b.a.c.b.a("PushMessageExecutor|del condition taskid = " + string, new Object[0]);
                            bVarK.a("message", new String[]{"taskid"}, new String[]{string});
                        }
                    } catch (Throwable th) {
                        com.igexin.b.a.c.b.a("PushMessageExecutor|del condition" + th.toString(), new Object[0]);
                    }
                }
            }
            if (cursorA == null) {
            }
        } catch (Throwable th2) {
            try {
                com.igexin.b.a.c.b.a("PushMessageExecutor|del condition" + th2.toString(), new Object[0]);
            } finally {
                if (cursorA != null) {
                    cursorA.close();
                }
            }
        }
    }
}
