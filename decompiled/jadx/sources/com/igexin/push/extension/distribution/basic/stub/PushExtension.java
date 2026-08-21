package com.igexin.push.extension.distribution.basic.stub;

import android.content.Context;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.igexin.push.core.bean.BaseAction;
import com.igexin.push.core.bean.PushTaskBean;
import com.igexin.push.core.c;
import com.igexin.push.core.d;
import com.igexin.push.extension.distribution.basic.a.e;
import com.igexin.push.extension.distribution.basic.a.g;
import com.igexin.push.extension.distribution.basic.a.h;
import com.igexin.push.extension.distribution.basic.a.i;
import com.igexin.push.extension.distribution.basic.d.b;
import com.igexin.push.extension.stub.IPushExtension;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class PushExtension implements IPushExtension {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, com.igexin.push.core.a.a.a> f2639a;
    private static Set<String> b;

    public PushExtension() {
        f2639a = new HashMap();
        HashSet hashSet = new HashSet();
        b = hashSet;
        hashSet.add(RemoteMessageConst.NOTIFICATION);
        b.add("terminatetask");
        b.add("starthome");
        b.add("startintent");
        b.add("startmyactivity");
    }

    private com.igexin.push.core.a.a.a a(String str) {
        Map<String, com.igexin.push.core.a.a.a> map;
        com.igexin.push.core.a.a.a hVar;
        if (TextUtils.isEmpty(str) || !b.contains(str)) {
            return null;
        }
        if (!f2639a.containsKey(str) || f2639a.get(str) == null) {
            String str2 = RemoteMessageConst.NOTIFICATION;
            if (str.equals(RemoteMessageConst.NOTIFICATION)) {
                map = f2639a;
                hVar = new com.igexin.push.extension.distribution.basic.a.a();
            } else {
                str2 = "terminatetask";
                if (str.equals("terminatetask")) {
                    map = f2639a;
                    hVar = new i();
                } else {
                    str2 = "starthome";
                    if (str.equals("starthome")) {
                        map = f2639a;
                        hVar = new e();
                    } else {
                        str2 = "startintent";
                        if (str.equals("startintent")) {
                            map = f2639a;
                            hVar = new g();
                        } else {
                            str2 = "startmyactivity";
                            if (str.equals("startmyactivity")) {
                                map = f2639a;
                                hVar = new h();
                            }
                        }
                    }
                }
            }
            map.put(str2, hVar);
        }
        return f2639a.get(str);
    }

    private void a() {
        if (!com.igexin.push.extension.distribution.basic.g.e.a()) {
            com.igexin.push.extension.distribution.basic.c.e.k = com.igexin.push.extension.distribution.basic.c.e.f2629a.getCacheDir() + "/ImgCache/";
        }
        com.igexin.push.extension.distribution.basic.c.e.e = new com.igexin.push.extension.distribution.basic.e.a(com.igexin.push.extension.distribution.basic.c.e.f2629a);
        DisplayMetrics displayMetrics = com.igexin.push.extension.distribution.basic.c.e.f2629a.getResources().getDisplayMetrics();
        int i = displayMetrics.widthPixels;
        int i2 = displayMetrics.heightPixels;
        if (i2 > i) {
            com.igexin.push.extension.distribution.basic.c.e.b = i2;
            com.igexin.push.extension.distribution.basic.c.e.c = i;
        } else {
            com.igexin.push.extension.distribution.basic.c.e.b = i;
            com.igexin.push.extension.distribution.basic.c.e.c = i2;
        }
        com.igexin.push.core.a.e.a().g();
        c.a().f();
    }

    private void b() {
        try {
            com.igexin.push.extension.distribution.basic.c.c.a().c();
            com.igexin.push.extension.distribution.basic.c.c.a().d();
        } catch (Throwable unused) {
        }
    }

    private void c() {
        b.a().b();
        if (com.igexin.push.extension.distribution.basic.c.e.d == null) {
            com.igexin.push.extension.distribution.basic.c.e.d = com.igexin.b.b.a.a(d.g.getPackageName() + System.currentTimeMillis());
            b.a().a(4, com.igexin.push.extension.distribution.basic.c.e.d);
        }
    }

    private void d() {
        boolean z;
        try {
            com.igexin.push.extension.distribution.basic.c.e.l = new com.igexin.push.extension.distribution.basic.e.b(com.igexin.push.extension.distribution.basic.c.e.f2629a);
            z = true;
        } catch (Throwable unused) {
            z = false;
        }
        new Thread(new a(this, z)).start();
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public boolean executeAction(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.a.a.a aVarA;
        if (pushTaskBean == null || baseAction == null || (aVarA = a(baseAction.getType())) == null || pushTaskBean.isStop()) {
            return false;
        }
        return aVarA.b(pushTaskBean, baseAction);
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public boolean init(Context context) {
        com.igexin.b.a.c.b.a("EXT-PushExtension|ext init ###", new Object[0]);
        if (context == null) {
            com.igexin.b.a.c.b.a("EXT-PushExtension|context = null", new Object[0]);
            return false;
        }
        com.igexin.push.extension.distribution.basic.c.e.f2629a = context;
        a();
        b();
        c();
        d();
        return true;
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public boolean isActionSupported(String str) {
        return str != null && b.contains(str);
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public void onDestroy() {
        com.igexin.push.extension.distribution.basic.c.c.a().f();
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public BaseAction parseAction(JSONObject jSONObject) {
        if (jSONObject == null || !jSONObject.has("type")) {
            return null;
        }
        try {
            com.igexin.push.core.a.a.a aVarA = a(jSONObject.getString("type"));
            if (aVarA != null) {
                return aVarA.a(jSONObject);
            }
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // com.igexin.push.extension.stub.IPushExtension
    public com.igexin.push.core.a prepareExecuteAction(PushTaskBean pushTaskBean, BaseAction baseAction) {
        com.igexin.push.core.a.a.a aVarA;
        return (pushTaskBean == null || baseAction == null || (aVarA = a(baseAction.getType())) == null) ? com.igexin.push.core.a.stop : aVarA.a(pushTaskBean, baseAction);
    }
}
