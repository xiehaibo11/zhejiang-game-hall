package com.tencent.open.b;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tencent.connect.common.Constants;
import com.tencent.open.log.SLog;
import com.tencent.open.utils.k;
import com.tencent.open.utils.l;
import com.tencent.open.utils.m;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;

public class b {
    private static b a;
    private String b = "";
    private String c = "";
    private String d = "";
    private String e = "";
    private String f = "";
    private String g = "";
    private String h = "";
    private List<Serializable> i = Collections.synchronizedList(new ArrayList());
    private List<Serializable> j = Collections.synchronizedList(new ArrayList());
    private Executor k = l.b();
    private boolean l;

    public static synchronized b a() {
        if (a == null) {
            a = new b();
        }
        return a;
    }

    private b() {
    }

    public void a(String str, Context context) {
        SLog.i("AttaReporter", PointCategory.INIT);
        this.b = str;
        this.c = k.a(context);
        this.e = m.d(context, com.tencent.open.utils.g.b());
        this.f = com.tencent.open.utils.g.b();
        this.g = k.b(context) ? "1" : "0";
        this.h = m.c(context, "com.tencent.mobileqq");
        c();
        g.a();
    }

    private void c() {
        while (!this.j.isEmpty()) {
            c cVar = (c) this.j.remove(0);
            cVar.a.put("appid", this.b);
            cVar.a.put("app_name", this.c);
            cVar.a.put(Constants.PARAM_APP_VER, this.e);
            cVar.a.put("pkg_name", this.f);
            cVar.a.put("qq_install", this.g);
            cVar.a.put(Constants.PARAM_QQ_VER, this.h);
            cVar.a.put("openid", this.d);
            cVar.a.put("time_appid_openid", cVar.a.get("time") + "_" + this.b + "_" + this.d);
            StringBuilder sb = new StringBuilder();
            sb.append("fixDirtyData--------------------------");
            sb.append(cVar);
            SLog.i("AttaReporter", sb.toString());
            this.i.add(cVar);
        }
    }

    public void a(String str) {
        SLog.i("AttaReporter", "updateOpenId");
        if (str == null) {
            str = "";
        }
        this.d = str;
    }

    public void a(String str, String str2) {
        a(str, str2, null);
    }

    public void a(String str, String str2, Map<String, Object> map) {
        a(str, str2, "", map);
    }

    public void a(String str, Object obj) {
        a(str, "", obj, null);
    }

    public void a(String str, String str2, Object obj, Map<String, Object> map) {
        c cVarB = b(str, str2, obj, map);
        if (TextUtils.isEmpty(this.b) || TextUtils.isEmpty(this.c) || com.tencent.open.utils.g.a() == null) {
            SLog.i("AttaReporter", "attaReport cancel appid=" + this.b + ", mAppName=" + this.c + ", context=" + com.tencent.open.utils.g.a() + ", " + cVarB);
            this.j.add(cVarB);
            return;
        }
        a(cVarB);
    }

    private void a(final c cVar) {
        this.k.execute(new Runnable() {
            @Override
            public void run() {
                b.this.i.add(cVar);
                if (m.b(com.tencent.open.utils.g.a())) {
                    try {
                        b.this.d();
                        return;
                    } catch (Exception e) {
                        SLog.e("AttaReporter", "Exception", e);
                        return;
                    }
                }
                SLog.i("AttaReporter", "attaReport net disconnect, " + cVar);
            }
        });
    }

    private c b(String str, String str2, Object obj, Map<String, Object> map) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        HashMap map2 = new HashMap();
        map2.put("attaid", "09400051119");
        map2.put("token", "9389887874");
        map2.put("time_appid_openid", jCurrentTimeMillis + "_" + this.b + "_" + this.d);
        map2.put("time", String.valueOf(jCurrentTimeMillis));
        map2.put("openid", this.d);
        map2.put("appid", this.b);
        map2.put("app_name", this.c);
        map2.put(Constants.PARAM_APP_VER, this.e);
        map2.put("pkg_name", this.f);
        map2.put("os", "AND");
        map2.put("os_ver", Build.VERSION.RELEASE);
        map2.put("sdk_ver", Constants.SDK_VERSION);
        map2.put(Constants.PARAM_MODEL_NAME, com.tencent.open.utils.f.a().c(com.tencent.open.utils.g.a()));
        map2.put("interface_name", str);
        map2.put("interface_data", str2);
        map2.put("interface_result", obj == null ? "" : obj.toString());
        map2.put("qq_install", this.g);
        map2.put(Constants.PARAM_QQ_VER, this.h);
        if (map != null && !map.isEmpty()) {
            Object obj2 = map.get("reserve1");
            map2.put("reserve1", obj2 == null ? "" : obj2.toString());
            Object obj3 = map.get("reserve2");
            map2.put("reserve2", obj3 == null ? "" : obj3.toString());
            Object obj4 = map.get("reserve3");
            map2.put("reserve3", obj4 == null ? "" : obj4.toString());
            Object obj5 = map.get("reserve4");
            map2.put("reserve4", obj5 != null ? obj5.toString() : "");
        }
        return new c((HashMap<String, String>) map2);
    }

    private void d() {
        SLog.i("AttaReporter", "attaReportAtSubThread");
        if (!this.l) {
            List<Serializable> listB = g.b("report_atta");
            this.l = listB.isEmpty();
            this.i.addAll(listB);
            Iterator<Serializable> it = listB.iterator();
            while (it.hasNext()) {
                SLog.i("AttaReporter", "attaReportAtSubThread from db = " + it.next());
            }
        }
        ArrayList arrayList = new ArrayList();
        while (!this.i.isEmpty()) {
            c cVar = (c) this.i.remove(0);
            if (!b(cVar)) {
                arrayList.add(cVar);
            }
        }
        if (!arrayList.isEmpty()) {
            SLog.i("AttaReporter", "attaReportAtSubThread fail size=" + arrayList.size());
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                SLog.i("AttaReporter", "attaReportAtSubThread fail cache to db, " + ((c) ((Serializable) it2.next())));
            }
            g.a("report_atta", arrayList);
            this.l = false;
            return;
        }
        if (this.l) {
            return;
        }
        SLog.i("AttaReporter", "attaReportAtSubThread clear db");
        g.a("report_atta");
        this.l = true;
    }

    private boolean b(c cVar) {
        int i = 0;
        do {
            i++;
            try {
                SLog.i("AttaReporter", "doAttaReportItem post " + cVar);
                return com.tencent.open.a.f.a().b("https://h.trace.qq.com/kv", cVar.a).d() == 200;
            } catch (Exception e) {
                SLog.i("AttaReporter", "Exception", e);
            }
        } while (i < 2);
        return false;
    }

    public static String b() {
        return a().b;
    }
}
