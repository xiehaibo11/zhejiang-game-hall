package com.huawei.hms.common.data;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import org.json.simple.JSONArray;

public final class FreezableUtils {
    public static <T, E extends Freezable<T>> ArrayList<T> freeze(ArrayList<E> arrayList) {
        return freezeIterable(arrayList);
    }

    public static <T, E extends Freezable<T>> ArrayList<T> freezeIterable(Iterable<E> iterable) {
        JSONArray jSONArray = (ArrayList<T>) new ArrayList();
        Iterator<E> it = iterable.iterator();
        while (it.hasNext()) {
            jSONArray.add(it.next().freeze());
        }
        return jSONArray;
    }

    public static <T, E extends Freezable<T>> ArrayList<T> freeze(E[] eArr) {
        return freezeIterable(Arrays.asList(eArr));
    }
}
