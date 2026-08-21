package com.vivo.push.b;

import android.text.TextUtils;
import java.util.HashMap;

/* JADX INFO: loaded from: classes4.dex */
public final class x extends com.vivo.push.o {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private HashMap<String, String> f7894a;
    private long b;

    public x() {
        super(2012);
    }

    public x(long j) {
        this();
        this.b = j;
    }

    public final void a(HashMap<String, String> map) {
        this.f7894a = map;
    }

    @Override // com.vivo.push.o
    public final void c(com.vivo.push.a aVar) {
        aVar.a("ReporterCommand.EXTRA_PARAMS", this.f7894a);
        aVar.a("ReporterCommand.EXTRA_REPORTER_TYPE", this.b);
    }

    public final void d() {
        String string;
        if (this.f7894a == null) {
            string = "reportParams is empty";
        } else {
            StringBuilder sb = new StringBuilder("report message reportType:");
            sb.append(this.b);
            sb.append(",msgId:");
            String str = this.f7894a.get(com.heytap.mcssdk.constant.b.c);
            if (TextUtils.isEmpty(str)) {
                str = this.f7894a.get("message_id");
            }
            sb.append(str);
            string = sb.toString();
        }
        com.vivo.push.util.p.d("ReporterCommand", string);
    }

    @Override // com.vivo.push.o
    public final void d(com.vivo.push.a aVar) {
        this.f7894a = (HashMap) aVar.d("ReporterCommand.EXTRA_PARAMS");
        this.b = aVar.b("ReporterCommand.EXTRA_REPORTER_TYPE", this.b);
    }

    @Override // com.vivo.push.o
    public final String toString() {
        return "ReporterCommand（" + this.b + ")";
    }
}
