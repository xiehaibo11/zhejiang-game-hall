package com.mbridge.msdk.foundation.same.f;

import com.mbridge.msdk.foundation.same.net.f.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.z;

/* JADX INFO: compiled from: ReportTask.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3423a;
    private String b;

    public a(String str, String str2) {
        this.f3423a = str;
        this.b = str2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            z.d("ReportTask", "start report");
            new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j()).post(0, d.a().f3453a, e.a(this.f3423a, com.mbridge.msdk.foundation.controller.a.f().j(), this.b), new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.foundation.same.f.a.1
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str) {
                    z.d("ReportTask", str);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str) {
                    z.d("ReportTask", str);
                }
            });
        } catch (Throwable th) {
            z.d("ReportTask", th.getMessage());
        }
    }
}
