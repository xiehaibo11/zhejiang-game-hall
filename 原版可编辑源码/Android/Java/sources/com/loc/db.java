package com.loc;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

public final class db {
    private ef b;
    private List<eg> a = new ArrayList();
    private ArrayList<eg> c = new ArrayList<>();

    private static List<eg> a(List<eg> list) {
        ArrayList arrayList = new ArrayList();
        HashMap map = new HashMap();
        for (int i = 0; i < list.size(); i++) {
            eg egVar = list.get(i);
            map.put(Integer.valueOf(egVar.c), egVar);
        }
        arrayList.addAll(map.values());
        return arrayList;
    }

    private boolean a(ef efVar) {
        float f = 10.0f;
        if (efVar.g > 10.0f) {
            f = 200.0f;
        } else if (efVar.g > 2.0f) {
            f = 50.0f;
        }
        return efVar.a(this.b) > ((double) f);
    }

    private static boolean a(ef efVar, long j, long j2) {
        return j > 0 && j2 - j < ((long) ((efVar.g > 10.0f ? 1 : (efVar.g == 10.0f ? 0 : -1)) >= 0 ? 2000 : com.alipay.sdk.data.a.a));
    }

    private static boolean a(List<eg> list, List<eg> list2) {
        if (list != null && list2 != null) {
            int size = list.size();
            int size2 = list2.size();
            int i = size + size2;
            if (size <= size2) {
                list2 = list;
                list = list2;
            }
            HashMap map = new HashMap(list.size());
            Iterator<eg> it = list.iterator();
            while (it.hasNext()) {
                map.put(Long.valueOf(it.next().a), 1);
            }
            Iterator<eg> it2 = list2.iterator();
            int i2 = 0;
            while (it2.hasNext()) {
                if (((Integer) map.get(Long.valueOf(it2.next().a))) != null) {
                    i2++;
                }
            }
            if (((double) i2) * 2.0d >= ((double) i) * 0.5d) {
                return true;
            }
        }
        return false;
    }

    private List<eg> b(List<eg> list) {
        Collections.sort(list, new Comparator<eg>() {
            private static int a(eg egVar, eg egVar2) {
                return egVar2.c - egVar.c;
            }

            @Override
            public final int compare(eg egVar, eg egVar2) {
                return a(egVar, egVar2);
            }
        });
        return list;
    }

    private void b(List<eg> list, List<eg> list2) {
        list.clear();
        if (list2 != null) {
            List<eg> listB = b(a(list2));
            int size = listB.size();
            if (size > 40) {
                size = 40;
            }
            for (int i = 0; i < size; i++) {
                list.add(listB.get(i));
            }
        }
    }

    private boolean b(ef efVar, List<eg> list, boolean z, long j, long j2) {
        if (!z || !a(efVar, j, j2) || list == null || list.size() <= 0) {
            return false;
        }
        if (this.b == null) {
            return true;
        }
        boolean zA = a(efVar);
        return !zA ? !a(list, this.a) : zA;
    }

    final List<eg> a(ef efVar, List<eg> list, boolean z, long j, long j2) {
        if (!b(efVar, list, z, j, j2)) {
            return null;
        }
        b(this.c, list);
        this.a.clear();
        this.a.addAll(list);
        this.b = efVar;
        return this.c;
    }
}
