package com.meizu.cloud.pushsdk.d.d;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicLong;

public class c implements d {
    private final int a;
    private final AtomicLong b = new AtomicLong(0);
    private final Map<Long, byte[]> c = new ConcurrentHashMap();
    private final List<Long> d = new CopyOnWriteArrayList();

    public c(int i) {
        this.a = i;
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.a.a aVar) {
        b(aVar);
    }

    @Override
    public boolean a() {
        return true;
    }

    @Override
    public boolean a(long j) {
        return this.d.remove(Long.valueOf(j)) && this.c.remove(Long.valueOf(j)) != null;
    }

    public long b(com.meizu.cloud.pushsdk.d.a.a aVar) {
        byte[] bArrA = a.a((Map<String, String>) aVar.a());
        long andIncrement = this.b.getAndIncrement();
        this.d.add(Long.valueOf(andIncrement));
        this.c.put(Long.valueOf(andIncrement), bArrA);
        return andIncrement;
    }

    @Override
    public long c() {
        return this.d.size();
    }

    @Override
    public com.meizu.cloud.pushsdk.d.b.c d() {
        LinkedList linkedList = new LinkedList();
        ArrayList arrayList = new ArrayList();
        int iC = (int) c();
        int i = this.a;
        if (iC > i) {
            iC = i;
        }
        for (int i2 = 0; i2 < iC; i2++) {
            Long l = this.d.get(i2);
            if (l != null) {
                com.meizu.cloud.pushsdk.d.a.c cVar = new com.meizu.cloud.pushsdk.d.a.c();
                cVar.a(a.a(this.c.get(l)));
                com.meizu.cloud.pushsdk.d.f.c.c("MemoryStore", " current key " + l + " payload " + cVar, new Object[0]);
                linkedList.add(l);
                arrayList.add(cVar);
            }
        }
        return new com.meizu.cloud.pushsdk.d.b.c(arrayList, linkedList);
    }
}
