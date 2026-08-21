package com.huawei.updatesdk.b.c;

import android.os.Build;
import java.util.ArrayList;
import java.util.List;

public class f extends c {
    @Override
    public String a() {
        return "com.huawei.appmarketwear";
    }

    @Override
    public int b() {
        return 2;
    }

    @Override
    String c() {
        return com.huawei.updatesdk.a.a.d.h.c.a("ro.product.manufacturer", "");
    }

    @Override
    String d() {
        return com.huawei.updatesdk.a.a.d.h.e.a() ? Build.PRODUCT : "";
    }

    @Override
    public List<String> g() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("CE1EF7188F820973C191227D95D54311ED3A65EC83E37009E898A1C058BBC775");
        return arrayList;
    }
}
