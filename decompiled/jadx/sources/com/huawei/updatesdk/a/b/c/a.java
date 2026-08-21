package com.huawei.updatesdk.a.b.c;

import com.huawei.updatesdk.service.appmgr.bean.d;
import com.huawei.updatesdk.service.appmgr.bean.e;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Map<String, Class> f2307a;

    static {
        HashMap map = new HashMap();
        f2307a = map;
        map.put(d.APIMETHOD, e.class);
        f2307a.put(com.huawei.updatesdk.service.appmgr.bean.a.APIMETHOD, com.huawei.updatesdk.service.appmgr.bean.b.class);
    }

    public static com.huawei.updatesdk.a.b.c.c.d a(String str) throws InstantiationException {
        Class cls = f2307a.get(str);
        if (cls != null) {
            return (com.huawei.updatesdk.a.b.c.c.d) cls.newInstance();
        }
        throw new InstantiationException("ResponseBean class not found, method:" + str);
    }
}
