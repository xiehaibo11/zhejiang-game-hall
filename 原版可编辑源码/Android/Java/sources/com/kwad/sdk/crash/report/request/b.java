package com.kwad.sdk.crash.report.request;

import com.kwad.sdk.core.network.BaseResultData;
import com.kwad.sdk.core.network.g;
import com.kwad.sdk.core.network.m;
import com.kwad.sdk.core.network.p;
import com.kwad.sdk.crash.report.ReportEvent;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import org.json.JSONObject;

public final class b {

    public interface a {
        void onError(int i, String str);

        void onSuccess();
    }

    public static void a(List<ReportEvent> list, CountDownLatch countDownLatch) {
        a(list, countDownLatch, null);
    }

    public static void a(final List<ReportEvent> list, final CountDownLatch countDownLatch, final a aVar) {
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "CrashReportRequestManager request");
        if (list == null || list.size() <= 0) {
            return;
        }
        new m<com.kwad.sdk.crash.report.request.a, CrashReportResult>() {
            @Override
            private com.kwad.sdk.crash.report.request.a createRequest() {
                return new com.kwad.sdk.crash.report.request.a(list);
            }

            private static CrashReportResult eO(String str) {
                JSONObject jSONObject = new JSONObject(str);
                CrashReportResult crashReportResult = new CrashReportResult();
                crashReportResult.parseJson(jSONObject);
                return crashReportResult;
            }

            @Override
            public final boolean enableMonitorReport() {
                return false;
            }

            @Override
            public final BaseResultData parseData(String str) {
                return eO(str);
            }
        }.request(new p<com.kwad.sdk.crash.report.request.a, CrashReportResult>() {
            private void Fi() {
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.onSuccess();
                }
            }

            private void n(int i, String str) {
                CountDownLatch countDownLatch2 = countDownLatch;
                if (countDownLatch2 != null) {
                    countDownLatch2.countDown();
                }
                a aVar2 = aVar;
                if (aVar2 != null) {
                    aVar2.onError(i, str);
                }
            }

            @Override
            public final void onError(g gVar, int i, String str) {
                n(i, str);
            }

            @Override
            public final void onSuccess(g gVar, BaseResultData baseResultData) {
                Fi();
            }
        });
    }
}
