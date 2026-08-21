package com.huawei.hms.framework.network.grs.c;

import android.content.Context;
import com.huawei.hms.framework.common.Logger;
import com.huawei.hms.framework.common.NetworkUtil;
import com.huawei.hms.framework.common.hianalytics.HianalyticsHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
class g implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ long f2070a;
    final /* synthetic */ Context b;
    final /* synthetic */ ArrayList c;
    final /* synthetic */ JSONArray d;

    g(long j, Context context, ArrayList arrayList, JSONArray jSONArray) {
        this.f2070a = j;
        this.b = context;
        this.c = arrayList;
        this.d = jSONArray;
    }

    @Override // java.lang.Runnable
    public void run() {
        boolean z;
        com.huawei.hms.framework.network.grs.c.b.a aVar = new com.huawei.hms.framework.network.grs.c.b.a();
        aVar.put("total_time", this.f2070a);
        aVar.put("network_type", NetworkUtil.getNetworkType(this.b));
        Iterator it = this.c.iterator();
        while (true) {
            if (!it.hasNext()) {
                z = false;
                break;
            }
            f fVar = (f) it.next();
            if (fVar.m()) {
                aVar.put(h.b(fVar));
                it.remove();
                z = true;
                break;
            }
        }
        if (!z && this.c.size() > 0) {
            ArrayList arrayList = this.c;
            f fVar2 = (f) arrayList.get(arrayList.size() - 1);
            aVar.put(h.b(fVar2));
            this.c.remove(fVar2);
        }
        if (this.c.size() > 0) {
            Iterator it2 = this.c.iterator();
            while (it2.hasNext()) {
                this.d.put(new JSONObject((Map<String, Object>) h.b((f) it2.next())));
            }
        }
        if (this.d.length() > 0) {
            aVar.put("failed_info", this.d.toString());
        }
        Logger.d("HaReportHelper", "grssdk report data to aiops is: %s", new JSONObject((Map<String, Object>) aVar.get()));
        HianalyticsHelper.getInstance().onEvent(aVar.get(), "networkkit_grs");
    }
}
