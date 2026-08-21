package com.vivo.push.b;

import android.text.TextUtils;
import java.util.HashMap;

public final class x extends com.vivo.push.o {
    private HashMap<String, String> a;
    private long b;

    public x() {
        super(2012);
    }

    public x(long j) {
        this();
        this.b = j;
    }

    public final void a(HashMap<String, String> map) {
        this.a = map;
    }

    @Override
    public final void c(com.vivo.push.a aVar) {
        aVar.a("ReporterCommand.EXTRA_PARAMS", this.a);
        aVar.a("ReporterCommand.EXTRA_REPORTER_TYPE", this.b);
    }

    public final void d() {
        String string;
        if (this.a == null) {
            string = "reportParams is empty";
        } else {
            StringBuilder sb = new StringBuilder("report message reportType:");
            sb.append(this.b);
            sb.append(",msgId:");
            String str = this.a.get(com.heytap.mcssdk.constant.b.c);
            if (TextUtils.isEmpty(str)) {
                str = this.a.get("message_id");
            }
            sb.append(str);
            string = sb.toString();
        }
        com.vivo.push.util.p.d("ReporterCommand", string);
    }

    @Override
    public final void d(com.vivo.push.a aVar) {
        this.a = (HashMap) aVar.d("ReporterCommand.EXTRA_PARAMS");
        this.b = aVar.b("ReporterCommand.EXTRA_REPORTER_TYPE", this.b);
    }

    @Override
    public final String toString() {
        return "ReporterCommand（" + this.b + ")";
    }
}
