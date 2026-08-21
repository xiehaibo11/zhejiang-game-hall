package com.kwad.sdk.crash.online.monitor.block;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class b {
    private static List<String> aAG = null;
    private static List<String> aAH = null;
    private static int aAI = 5;

    public static void a(com.kwad.sdk.crash.online.monitor.a.a aVar) {
        aAG = new ArrayList();
        if (aVar.aAU == null || aVar.aAU.isEmpty()) {
            aAG.add("com.kwad");
            aAG.add("com.kwai");
            aAG.add("com.ksad");
            aAG.add("tkruntime");
            aAG.add("tachikoma");
            aAG.add("kuaishou");
        } else {
            aAG.addAll(aVar.aAU);
        }
        aAI = aVar.aAZ;
        aAH = new ArrayList();
        if (aVar.aAT != null && !aVar.aAT.isEmpty()) {
            aAH.addAll(aVar.aAT);
            return;
        }
        aAH.add("android.");
        aAH.add("androidx.");
        aAH.add("org.");
        aAH.add("java.");
    }

    private static boolean eA(String str) {
        List<String> list = aAH;
        if (list == null) {
            return false;
        }
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            if (str.contains(it.next())) {
                return true;
            }
        }
        return false;
    }

    private static boolean eB(String str) {
        List<String> list = aAG;
        if (list == null) {
            return false;
        }
        Iterator<String> it = list.iterator();
        while (it.hasNext()) {
            if (str.contains(it.next())) {
                return true;
            }
        }
        return false;
    }

    public static String eC(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        String[] strArrSplit = str.split("\n");
        com.kwad.sdk.core.e.c.d("perfMonitor.Filter", "stacks after split:" + strArrSplit.length);
        boolean z = false;
        int i = 0;
        for (String str2 : strArrSplit) {
            if (z || !eA(str2)) {
                if (i >= aAI) {
                    return "";
                }
                if (eB(str2)) {
                    return str;
                }
                i++;
                z = true;
            }
        }
        return "";
    }
}
