package com.kwad.sdk;

import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.sdk.commercial.model.SDKInitMsg;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.utils.aw;

public final class l {
    private static int ahl;

    public static void S(long j) {
        final long jCurrentTimeMillis = j > 0 ? System.currentTimeMillis() - j : -1L;
        ahl++;
        com.kwad.sdk.utils.g.execute(new aw() {
            @Override
            public final void doTask() {
                KSLoggerReporter.a(ILoggerReporter.Category.APM_LOG, com.kwai.adclient.kscommerciallogger.model.a.aNe, new SDKInitMsg().setLaunchIntervalTime(jCurrentTimeMillis).setInitCount(l.ahl).setInitStatus(0).toJson());
            }
        });
    }

    public static void T(final long j) {
        if (j > com.heytap.mcssdk.constant.a.q) {
            j = -1;
        }
        com.kwad.sdk.utils.g.execute(new aw() {
            @Override
            public final void doTask() {
                KSLoggerReporter.a(ILoggerReporter.Category.APM_LOG, com.kwai.adclient.kscommerciallogger.model.a.aNe, new SDKInitMsg().setTotalDurationTime(j).setInitCount(l.ahl).setInitStatus(1).toJson());
            }
        });
    }

    public static void a(final com.kwai.adclient.kscommerciallogger.model.d dVar, final String str) {
        com.kwad.sdk.utils.g.execute(new aw() {
            @Override
            public final void doTask() {
                KSLoggerReporter.a(ILoggerReporter.Category.ERROR_LOG, dVar, new SDKInitMsg().setInitCount(l.ahl).setErrorReason(str).setInitStatus(2).toJson());
            }
        });
    }
}
