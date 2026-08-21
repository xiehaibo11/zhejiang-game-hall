package com.huawei.updatesdk.b.c;

import com.huawei.hms.common.PackageConstants;
import java.util.ArrayList;
import java.util.List;

public class e extends c {
    @Override
    public String a() {
        return PackageConstants.SERVICES_PACKAGE_APPMARKET_TV;
    }

    @Override
    public int b() {
        return 1;
    }

    @Override
    String c() {
        return com.huawei.updatesdk.a.a.d.h.c.a("ro.product.manufacturer", "");
    }

    @Override
    String d() {
        return com.huawei.updatesdk.a.a.d.h.c.a("ro.product.hw_model", "");
    }

    @Override
    public List<String> g() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("CE1EF7188F820973C191227D95D54311ED3A65EC83E37009E898A1C058BBC775");
        return arrayList;
    }
}
