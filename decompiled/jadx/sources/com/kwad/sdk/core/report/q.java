package com.kwad.sdk.core.report;

import com.kwad.sdk.core.report.g;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public final class q<T extends g> implements o<T> {
    private final Map<String, T> arn = new LinkedHashMap();

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.kwad.sdk.core.report.o
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public synchronized void j(T t) {
        this.arn.put(t.actionId, t);
    }

    @Override // com.kwad.sdk.core.report.o
    public final synchronized List<T> BX() {
        ArrayList arrayList;
        arrayList = new ArrayList(this.arn.size());
        Iterator<Map.Entry<String, T>> it = this.arn.entrySet().iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().getValue());
        }
        return arrayList;
    }

    @Override // com.kwad.sdk.core.report.o
    public final synchronized long size() {
        int size;
        size = this.arn.size();
        com.kwad.sdk.core.e.c.d("MemReportCache", "size() = " + size);
        return size;
    }

    @Override // com.kwad.sdk.core.report.o
    public final synchronized void t(List<T> list) {
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            this.arn.remove(it.next().actionId);
        }
    }
}
