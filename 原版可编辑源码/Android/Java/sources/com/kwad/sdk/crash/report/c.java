package com.kwad.sdk.crash.report;

import android.util.Log;
import com.kwad.sdk.crash.model.message.ExceptionMessage;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CountDownLatch;

public abstract class c implements e {
    private ArrayList<a> aBj = new ArrayList<>();

    static class a {
        private ExceptionMessage aBk;
        private int aBl;

        a(ExceptionMessage exceptionMessage, int i) {
            this.aBk = exceptionMessage;
            this.aBl = i;
        }
    }

    private void Fg() {
        if (this.aBj.isEmpty()) {
            return;
        }
        try {
            Iterator<a> it = this.aBj.iterator();
            while (it.hasNext()) {
                a next = it.next();
                b(next.aBk, next.aBl, null);
                it.remove();
            }
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    private static boolean a(String str, List<String> list) {
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            if (str.contains(it.next())) {
                return true;
            }
        }
        return false;
    }

    private void b(ExceptionMessage exceptionMessage, int i, CountDownLatch countDownLatch) {
        if (exceptionMessage == null || !c(exceptionMessage)) {
            return;
        }
        if (i == 3) {
            com.kwad.sdk.crash.report.a.b(exceptionMessage);
        }
        ArrayList arrayList = new ArrayList(1);
        arrayList.add(com.kwad.sdk.crash.report.request.c.d(exceptionMessage));
        com.kwad.sdk.crash.report.request.b.a(arrayList, countDownLatch);
    }

    private boolean c(ExceptionMessage exceptionMessage) {
        try {
            com.kwad.sdk.crash.e eVarEC = com.kwad.sdk.crash.e.EC();
            if (eVarEC.EH() != null && eVarEC.EG() != 2) {
                List<com.kwad.sdk.crash.a> list = eVarEC.EH().azJ;
                double d = eVarEC.EH().azq;
                String appId = eVarEC.getAppId();
                String sdkVersion = eVarEC.getSdkVersion();
                for (com.kwad.sdk.crash.a aVar : list) {
                    if (aVar != null && (com.kwad.sdk.crash.utils.c.b(aVar.azn) || aVar.azn.contains(appId))) {
                        if (com.kwad.sdk.crash.utils.c.b(aVar.azo) || aVar.azo.contains(sdkVersion)) {
                            if (com.kwad.sdk.crash.utils.c.b(aVar.azp) || a(exceptionMessage.mCrashDetail, aVar.azp)) {
                                d = aVar.azq;
                            }
                        }
                    }
                }
                return Math.random() < d;
            }
            return true;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w("BaseExceptionUploader", Log.getStackTraceString(e));
            return true;
        }
    }

    public final void a(ExceptionMessage exceptionMessage, int i, CountDownLatch countDownLatch) {
        try {
            Fg();
            b(exceptionMessage, i, countDownLatch);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            this.aBj.add(new a(exceptionMessage, i));
            if (countDownLatch != null) {
                countDownLatch.countDown();
            }
        }
    }
}
