package com.kwad.sdk.crash.online.monitor.block;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.crash.online.monitor.block.BlockEvent;
import com.kwad.sdk.crash.online.monitor.block.report.BlockReportAction;
import com.kwad.sdk.crash.report.h;
import com.kwad.sdk.crash.report.request.b;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    /* JADX INFO: Access modifiers changed from: private */
    public static boolean BQ() {
        int iFa = Fa();
        Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
        if (context == null) {
            return false;
        }
        long size = com.kwad.sdk.crash.online.monitor.block.report.a.bw(context).size();
        com.kwad.sdk.core.e.c.d("perfMonitor.Reporter", "size:" + size + " limit:" + iFa);
        return size >= ((long) iFa);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static int Fa() {
        com.kwad.sdk.crash.online.monitor.a.a aVarEY = d.EY();
        if (aVarEY != null) {
            return aVarEY.aBa;
        }
        return 20;
    }

    public static void a(String str, long j, long j2, String str2, String str3, boolean z) {
        try {
            h(b(str, j, j2, str2, str3), false);
        } catch (Throwable unused) {
        }
    }

    private static String b(String str, long j, long j2, String str2, String str3) {
        try {
            if (TextUtils.isEmpty(str)) {
                return "";
            }
            str = eH(b.eC(str));
            if (TextUtils.isEmpty(str)) {
                return "";
            }
            if (j2 == 0) {
                j2 = 2000;
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w("perfMonitor.Reporter", Log.getStackTraceString(e));
        }
        return c(str, j, j2, str2, str3).toJson().toString();
    }

    private static BlockEvent c(String str, long j, long j2, String str2, String str3) {
        BlockEvent blockEvent = new BlockEvent();
        blockEvent.blockDuration = j2;
        blockEvent.currentActivity = str2;
        blockEvent.processName = str3;
        BlockEvent.a aVar = new BlockEvent.a();
        aVar.aAE = str;
        if (j == 0) {
            j = System.currentTimeMillis();
        }
        aVar.aAC = j;
        aVar.repeatCount = (int) (j2 / blockEvent.blockLoopInterval);
        blockEvent.stackTraceSample.add(aVar);
        return blockEvent;
    }

    private static String eE(String str) {
        String strEF = eF(b.eC(str));
        return !TextUtils.isEmpty(strEF) ? c(strEF, 0L, 2000L, "", "").toJson().toString() : "";
    }

    private static String eF(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            if (str.contains("at ")) {
                str = str.substring(str.indexOf("at "));
            }
            String strReplaceAll = eG(str.replaceAll("at ", "")).replaceAll("\\)", "\\)\n");
            if (strReplaceAll.contains("\n")) {
                strReplaceAll = strReplaceAll.replaceAll("\n", "\n\tat ");
            }
            return "\n\tat " + (strReplaceAll + "_").replaceAll("\n\tat _", "\n");
        } catch (Exception e) {
            Log.e("perfMonitor.Reporter", Log.getStackTraceString(e));
            return str;
        }
    }

    private static String eG(String str) {
        return str != null ? Pattern.compile("\\s*|\t|\r|\n").matcher(str).replaceAll("") : "";
    }

    private static String eH(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            boolean zStartsWith = str.startsWith(" \n");
            com.kwad.sdk.core.e.c.d("perfMonitor.Reporter", "oldVersion:" + zStartsWith);
            if (zStartsWith) {
                if (str.contains("at ")) {
                    str = str.substring(str.indexOf("at "));
                }
                str = str.replaceAll(Constants.COLON_SEPARATOR, "\\.") + "\n";
            }
            String strReplaceAll = str.replaceAll("at ", "").replaceAll(" ", "");
            if (strReplaceAll.contains("\n")) {
                strReplaceAll = strReplaceAll.replaceAll("\n", "\n\tat ");
            }
            return "\n\tat " + (strReplaceAll + "_").replaceAll("\n\tat _", "\n");
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.w("perfMonitor.Reporter", Log.getStackTraceString(e));
            return str;
        }
    }

    public static void eI(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        com.kwad.sdk.core.e.c.d("perfMonitor.Reporter", "reportPrinterName:" + str);
        if (d.EZ()) {
            c cVar = new c();
            cVar.aAL = str;
            cVar.aAN = a.EX();
            KSLoggerReporter.x(cVar.toJson());
        }
    }

    public static void eJ(String str) {
        try {
            c cVar = new c();
            cVar.errorMsg = str;
            cVar.aAN = a.EX();
            KSLoggerReporter.x(cVar.toJson());
        } catch (Exception unused) {
        }
        com.kwad.sdk.core.e.c.w("perfMonitor.Reporter", str);
    }

    public static void g(String str, boolean z) {
        String strEE = eE(str);
        if (TextUtils.isEmpty(strEE)) {
            return;
        }
        h(strEE, false);
    }

    private static void h(final String str, final boolean z) {
        g.execute(new aw() { // from class: com.kwad.sdk.crash.online.monitor.block.e.1
            @Override // com.kwad.sdk.utils.aw
            public final void doTask() {
                if (TextUtils.isEmpty(str)) {
                    return;
                }
                if (z || e.Fa() == 1) {
                    com.kwad.sdk.core.e.c.d("perfMonitor.Reporter", "report now :" + str);
                    h.ae("perf-block", str);
                    return;
                }
                BlockReportAction blockReportAction = new BlockReportAction(str);
                com.kwad.sdk.core.e.c.d("perfMonitor.Reporter", "write to db :" + blockReportAction.toJson().toString());
                final Context context = ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getContext();
                if (context == null) {
                    return;
                }
                com.kwad.sdk.crash.online.monitor.block.report.a.bw(context).j(blockReportAction);
                if (e.BQ()) {
                    final List<com.kwad.sdk.core.report.g> listBX = com.kwad.sdk.crash.online.monitor.block.report.a.bw(context).BX();
                    ArrayList arrayList = new ArrayList();
                    Iterator<com.kwad.sdk.core.report.g> it = listBX.iterator();
                    while (it.hasNext()) {
                        arrayList.add(((BlockReportAction) it.next()).msg);
                    }
                    h.a("perf-block", arrayList, new b.a() { // from class: com.kwad.sdk.crash.online.monitor.block.e.1.1
                        @Override // com.kwad.sdk.crash.report.request.b.a
                        public final void onError(int i, String str2) {
                            com.kwad.sdk.core.e.c.w("perfMonitor.Reporter", "errorCode:" + i + " errorMsg:" + str2);
                        }

                        @Override // com.kwad.sdk.crash.report.request.b.a
                        public final void onSuccess() {
                            com.kwad.sdk.crash.online.monitor.block.report.a.bw(context).t(listBX);
                        }
                    });
                }
            }
        });
    }
}
