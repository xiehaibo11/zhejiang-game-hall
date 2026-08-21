package com.xiaomi.push.service;

import android.util.Pair;
import com.xiaomi.push.hp;
import com.xiaomi.push.hq;
import com.xiaomi.push.hs;
import com.xiaomi.push.hu;
import com.xiaomi.push.ig;
import com.xiaomi.push.ih;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class bb {
    public static int a(ba baVar, hp hpVar) {
        return baVar.a(hpVar, bc.f8326a[hpVar.ordinal()] != 1 ? 0 : 1);
    }

    private static List<Pair<Integer, Object>> a(List<hu> list, boolean z) {
        if (com.xiaomi.push.ag.a(list)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (hu huVar : list) {
            int iA = huVar.a();
            hq hqVarA = hq.a(huVar.b());
            if (hqVarA != null) {
                if (z && huVar.f525a) {
                    arrayList.add(new Pair(Integer.valueOf(iA), null));
                } else {
                    int i = bc.b[hqVarA.ordinal()];
                    arrayList.add(i != 1 ? i != 2 ? i != 3 ? i != 4 ? null : new Pair(Integer.valueOf(iA), Boolean.valueOf(huVar.g())) : new Pair(Integer.valueOf(iA), huVar.m430a()) : new Pair(Integer.valueOf(iA), Long.valueOf(huVar.m429a())) : new Pair(Integer.valueOf(iA), Integer.valueOf(huVar.c())));
                }
            }
        }
        return arrayList;
    }

    public static void a(ba baVar, ig igVar) {
        baVar.a(a(igVar.a(), true));
        baVar.b();
    }

    public static void a(ba baVar, ih ihVar) {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (hs hsVar : ihVar.a()) {
            arrayList.add(new Pair<>(hsVar.m425a(), Integer.valueOf(hsVar.a())));
            List<Pair<Integer, Object>> listA = a(hsVar.f517a, false);
            if (!com.xiaomi.push.ag.a(listA)) {
                arrayList2.addAll(listA);
            }
        }
        baVar.a(arrayList, arrayList2);
        baVar.b();
    }
}
