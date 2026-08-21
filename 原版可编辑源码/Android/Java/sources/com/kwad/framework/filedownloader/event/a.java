package com.kwad.framework.filedownloader.event;

import com.kwad.framework.filedownloader.f.d;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.concurrent.Executor;

public class a {
    private final Executor adx = com.kwad.framework.filedownloader.f.b.j(10, "EventPool");
    private final HashMap<String, LinkedList<c>> ady = new HashMap<>();

    private static void a(LinkedList<c> linkedList, b bVar) {
        for (Object obj : linkedList.toArray()) {
            if (obj != null) {
                ((c) obj).a(bVar);
            }
        }
        if (bVar.adD != null) {
            bVar.adD.run();
        }
    }

    public final boolean a(String str, c cVar) {
        boolean zAdd;
        if (d.aeI) {
            d.e(this, "setListener %s", str);
        }
        if (cVar == null) {
            throw new IllegalArgumentException("listener must not be null!");
        }
        LinkedList<c> linkedList = this.ady.get(str);
        if (linkedList == null) {
            synchronized (str.intern()) {
                linkedList = this.ady.get(str);
                if (linkedList == null) {
                    HashMap<String, LinkedList<c>> map = this.ady;
                    LinkedList<c> linkedList2 = new LinkedList<>();
                    map.put(str, linkedList2);
                    linkedList = linkedList2;
                }
            }
        }
        synchronized (str.intern()) {
            zAdd = linkedList.add(cVar);
        }
        return zAdd;
    }

    public final boolean b(b bVar) {
        if (d.aeI) {
            d.e(this, "publish %s", bVar.getId());
        }
        if (bVar == null) {
            throw new IllegalArgumentException("event must not be null!");
        }
        String id = bVar.getId();
        LinkedList<c> linkedList = this.ady.get(id);
        if (linkedList == null) {
            synchronized (id.intern()) {
                linkedList = this.ady.get(id);
                if (linkedList == null) {
                    if (d.aeI) {
                        d.c(this, "No listener for this event %s", id);
                    }
                    return false;
                }
            }
        }
        a(linkedList, bVar);
        return true;
    }

    public final void c(final b bVar) {
        if (d.aeI) {
            d.e(this, "asyncPublishInNewThread %s", bVar.getId());
        }
        this.adx.execute(new Runnable() {
            @Override
            public final void run() {
                try {
                    a.this.b(bVar);
                } catch (Exception unused) {
                }
            }
        });
    }
}
