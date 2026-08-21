package com.kwad.sdk.pngencrypt.chunk;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class w {
    private final e aGi;
    private final boolean aGj;

    public w(e eVar) {
        this.aGi = eVar;
        this.aGj = !(eVar instanceof f);
    }

    private List<? extends t> fk(String str) {
        ArrayList arrayList = new ArrayList();
        arrayList.addAll(this.aGi.aj("tEXt", str));
        arrayList.addAll(this.aGi.aj("zTXt", str));
        arrayList.addAll(this.aGi.aj("iTXt", str));
        return arrayList;
    }

    public final String fl(String str) {
        List<? extends t> listFk = fk(str);
        if (listFk.isEmpty()) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        Iterator<? extends t> it = listFk.iterator();
        while (it.hasNext()) {
            sb.append(it.next().Hk());
            sb.append("\n");
        }
        return sb.toString().trim();
    }
}
