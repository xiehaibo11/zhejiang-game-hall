package com.alipay.security.mobile.module.http;

import android.content.Context;
import com.alipay.android.phone.mrpc.core.aa;
import com.alipay.android.phone.mrpc.core.h;
import com.alipay.android.phone.mrpc.core.w;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportRequest;
import com.alipay.tscenter.biz.rpc.report.general.model.DataReportResult;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class b implements a {
    private static b d;
    private static DataReportResult e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private w f1359a;
    private com.alipay.tscenter.biz.rpc.a.a b;
    private com.alipay.tscenter.biz.rpc.report.general.a c;

    private b(Context context, String str) {
        this.f1359a = null;
        this.b = null;
        this.c = null;
        aa aaVar = new aa();
        aaVar.a(str);
        this.f1359a = new h(context);
        this.b = (com.alipay.tscenter.biz.rpc.a.a) this.f1359a.a(com.alipay.tscenter.biz.rpc.a.a.class, aaVar);
        this.c = (com.alipay.tscenter.biz.rpc.report.general.a) this.f1359a.a(com.alipay.tscenter.biz.rpc.report.general.a.class, aaVar);
    }

    public static synchronized b a(Context context, String str) {
        if (d == null) {
            d = new b(context, str);
        }
        return d;
    }

    @Override // com.alipay.security.mobile.module.http.a
    public DataReportResult a(DataReportRequest dataReportRequest) throws InterruptedException {
        if (dataReportRequest == null) {
            return null;
        }
        if (this.c != null) {
            e = null;
            new Thread(new c(this, dataReportRequest)).start();
            for (int i = 300000; e == null && i >= 0; i -= 50) {
                Thread.sleep(50L);
            }
        }
        return e;
    }

    @Override // com.alipay.security.mobile.module.http.a
    public boolean a(String str) {
        com.alipay.tscenter.biz.rpc.a.a aVar;
        if (com.alipay.security.mobile.module.a.a.a(str) || (aVar = this.b) == null) {
            return false;
        }
        String strA = null;
        try {
            com.alipay.security.mobile.module.a.a.f(str);
            strA = aVar.a();
        } catch (Throwable unused) {
        }
        if (com.alipay.security.mobile.module.a.a.a(strA)) {
            return false;
        }
        return ((Boolean) new JSONObject(strA).get("success")).booleanValue();
    }
}
