package com.huawei.hms.hatool;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;
import java.util.UUID;

/* JADX INFO: loaded from: classes.dex */
public class t {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public List<q> f2119a;
    public String b;
    public String c;
    public String d;

    public t(List<q> list, String str, String str2, String str3) {
        this.f2119a = list;
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    public void a() {
        if (!"_default_config_tag".equals(this.c)) {
            a(this.f2119a, this.c, this.b);
            return;
        }
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        ArrayList arrayList4 = new ArrayList();
        for (q qVar : this.f2119a) {
            String strC = qVar.c();
            if (TextUtils.isEmpty(strC) || "oper".equals(strC)) {
                arrayList4.add(qVar);
            } else if ("maint".equals(strC)) {
                arrayList.add(qVar);
            } else if ("preins".equals(strC)) {
                arrayList2.add(qVar);
            } else if ("diffprivacy".equals(strC)) {
                arrayList3.add(qVar);
            }
        }
        a(arrayList4, "oper", "_default_config_tag");
        a(arrayList, "maint", "_default_config_tag");
        a(arrayList2, "preins", "_default_config_tag");
        a(arrayList3, "diffprivacy", "_default_config_tag");
    }

    public final void a(List<q> list, String str, String str2) {
        if (list.isEmpty()) {
            return;
        }
        int size = (list.size() / 500) + 1;
        for (int i = 0; i < size; i++) {
            int i2 = i * 500;
            List<q> listSubList = list.subList(i2, Math.min(list.size(), i2 + 500));
            String strReplace = UUID.randomUUID().toString().replace(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "");
            long jCurrentTimeMillis = System.currentTimeMillis();
            long jB = ((long) c.b(str2, str)) * 86400000;
            ArrayList arrayList = new ArrayList();
            for (q qVar : listSubList) {
                if (!p0.a(qVar.b(), jCurrentTimeMillis, jB)) {
                    arrayList.add(qVar);
                }
            }
            if (arrayList.size() > 0) {
                new u(str2, str, this.d, arrayList, strReplace).a();
            } else {
                y.e("hmsSdk", "No data to report handler");
            }
        }
    }
}
