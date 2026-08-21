package com.kwad.framework.filedownloader.a;

import com.kwad.framework.filedownloader.f.f;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class d {
    public static b a(Map<String, List<String>> map, b bVar, List<String> list) throws IllegalAccessException {
        int responseCode = bVar.getResponseCode();
        String strAY = bVar.aY("Location");
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (bd(responseCode)) {
            if (strAY == null) {
                throw new IllegalAccessException(f.b("receive %d (redirect) but the location is null with response [%s]", Integer.valueOf(responseCode), bVar.uf()));
            }
            if (com.kwad.framework.filedownloader.f.d.aeI) {
                com.kwad.framework.filedownloader.f.d.c(d.class, "redirect to %s with %d, %s", strAY, Integer.valueOf(responseCode), arrayList);
            }
            bVar.ug();
            bVar = a(map, strAY);
            arrayList.add(strAY);
            bVar.execute();
            responseCode = bVar.getResponseCode();
            strAY = bVar.aY("Location");
            i++;
            if (i >= 10) {
                throw new IllegalAccessException(f.b("redirect too many times! %s", arrayList));
            }
        }
        if (list != null) {
            list.addAll(arrayList);
        }
        return bVar;
    }

    private static b a(Map<String, List<String>> map, String str) {
        b bVarBc = com.kwad.framework.filedownloader.download.b.up().bc(str);
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (value != null) {
                Iterator<String> it = value.iterator();
                while (it.hasNext()) {
                    bVarBc.addHeader(key, it.next());
                }
            }
        }
        return bVarBc;
    }

    private static boolean bd(int i) {
        return i == 301 || i == 302 || i == 303 || i == 300 || i == 307 || i == 308;
    }
}
