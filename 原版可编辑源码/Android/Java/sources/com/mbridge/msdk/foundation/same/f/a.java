package com.mbridge.msdk.foundation.same.f;

import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;

public final class a implements Runnable {
    private String a;
    private String b;

    public a(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    @Override
    public final void run() {
        try {
            z.d("ReportTask", "start report");
            new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, d.a().a, e.a(this.a, com.mbridge.msdk.foundation.controller.a.f().j(), this.b), new com.mbridge.msdk.foundation.same.report.d.b() {
                @Override
                public final void onSuccess(String str) {
                    z.d("ReportTask", str);
                }

                @Override
                public final void onFailed(String str) {
                    z.d("ReportTask", str);
                }
            });
        } catch (Throwable th) {
            z.d("ReportTask", th.getMessage());
        }
    }
}
