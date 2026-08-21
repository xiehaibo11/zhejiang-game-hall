package com.kwad.sdk.crash.online.monitor.block;

import android.os.Looper;
import android.util.Printer;
import com.kwad.sdk.utils.s;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class a {
    private static volatile boolean aAA;
    private static volatile boolean aAB;
    private static volatile boolean aAw;
    private static String aAx;
    private static List<String> aAy;
    private static List<String> aAz;

    public static boolean EW() {
        if (aAw) {
            return false;
        }
        try {
            return ((Printer) s.f(Looper.getMainLooper(), "mLogging")) != null;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("perfMonitor.MonitorDetector", "hasBlockMonitor ", e);
            aAw = true;
            return false;
        }
    }

    public static boolean EX() {
        if (aAB) {
            return aAA;
        }
        try {
            String str = new String(com.kwad.sdk.core.a.c.AL().decode("Y29tLnRlbmNlbnQubWF0cml4Lk1hdHJpeA=="));
            com.kwad.sdk.core.e.c.d("perfMonitor.MonitorDetector", "hasMatrix after:" + str);
            if (Class.forName(str) != null) {
                return true;
            }
        } catch (ClassNotFoundException unused) {
        }
        aAA = false;
        aAB = true;
        return aAA;
    }

    public static void a(com.kwad.sdk.crash.online.monitor.a.a aVar) {
        aAy = aVar.aAV;
        aAz = aVar.aAW;
    }

    private static boolean a(List<String> list, boolean z) {
        if (aAw) {
            return false;
        }
        try {
            Printer printer = (Printer) s.f(Looper.getMainLooper(), "mLogging");
            if (printer != null) {
                aAx = printer.getClass().getName();
                com.kwad.sdk.core.e.c.d("perfMonitor.MonitorDetector", "originPrinter name:" + printer.getClass().getName());
                if (z) {
                    e.eI(aAx);
                }
                Iterator<String> it = list.iterator();
                while (it.hasNext()) {
                    String str = new String(com.kwad.sdk.core.a.c.AL().decode(it.next()));
                    com.kwad.sdk.core.e.c.d("perfMonitor.MonitorDetector", "printer after:" + str);
                    if (printer.getClass().getName().contains(str)) {
                        com.kwad.sdk.core.e.c.d("perfMonitor.MonitorDetector", "printer monitor");
                        return true;
                    }
                }
            } else {
                com.kwad.sdk.core.e.c.d("perfMonitor.MonitorDetector", "printer not hook");
            }
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.e("perfMonitor.MonitorDetector", "hasBlockMonitor ", e);
            aAw = true;
        }
        return false;
    }

    public static boolean bq(boolean z) {
        List<String> list = aAy;
        return (list == null || list.isEmpty()) ? f("Y29tLnRlbmNlbnQubWF0cml4LnRyYWNlLmNvcmUuTG9vcGVyTW9uaXRvcg==", true) : a(aAy, true);
    }

    public static boolean br(boolean z) {
        List<String> list = aAz;
        if (list == null || list.isEmpty()) {
            return false;
        }
        return a(aAz, false);
    }

    private static boolean f(String str, boolean z) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(str);
        return a(arrayList, z);
    }
}
