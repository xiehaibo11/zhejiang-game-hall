package com.igexin.push.c;

import java.util.Comparator;
import java.util.Map;

class n implements Comparator<Map.Entry<String, j>> {
    final m a;

    n(m mVar) {
        this.a = mVar;
    }

    @Override
    public int compare(Map.Entry<String, j> entry, Map.Entry<String, j> entry2) {
        return (int) (entry.getValue().e() - entry2.getValue().e());
    }
}
