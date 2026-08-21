package com.kwad.sdk.core.report;

import com.kwad.sdk.core.report.g;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public final class q<T extends g> implements o<T> {
    private final Map<String, T> arn = new LinkedHashMap();

    @Override
    private synchronized void j(T t) {
        this.arn.put(t.actionId, t);
    }

    @Override
    public final synchronized List<T> BX() {
        ArrayList arrayList;
        arrayList = new ArrayList(this.arn.size());
        Iterator<Map.Entry<String, T>> it = this.arn.entrySet().iterator();
        while (it.hasNext()) {
            arrayList.add(it.next().getValue());
        }
        return arrayList;
    }

    @Override
    public final synchronized long size() {
        int size;
        size = this.arn.size();
        com.kwad.sdk.core.e.c.d("MemReportCache", "size() = " + size);
        return size;
    }

    @Override
    public final synchronized void t(List<T> list) {
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            this.arn.remove(it.next().actionId);
        }
    }
}
