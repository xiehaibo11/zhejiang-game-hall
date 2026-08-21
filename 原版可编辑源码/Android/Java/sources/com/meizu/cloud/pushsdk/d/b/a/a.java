package com.meizu.cloud.pushsdk.d.b.a;

import com.meizu.cloud.pushsdk.c.c.i;
import com.meizu.cloud.pushsdk.d.b.a;
import com.meizu.cloud.pushsdk.d.b.e;
import com.meizu.cloud.pushsdk.d.b.f;
import com.meizu.cloud.pushsdk.d.b.g;
import com.meizu.cloud.pushsdk.d.d.c;
import com.meizu.cloud.pushsdk.d.d.d;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

public class a extends com.meizu.cloud.pushsdk.d.b.a {
    private final String h;
    private d i;
    private int j;

    public a(a.a aVar) {
        super(aVar);
        this.h = a.class.getSimpleName();
        com.meizu.cloud.pushsdk.d.d.a aVar2 = new com.meizu.cloud.pushsdk.d.d.a(this.a, this.e);
        this.i = aVar2;
        if (aVar2.a()) {
            return;
        }
        this.i = new c(this.e);
        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "init memory store", new Object[0]);
    }

    private LinkedList<g> a(LinkedList<e> linkedList) {
        LinkedList<g> linkedList2 = new LinkedList<>();
        LinkedList linkedList3 = new LinkedList();
        Iterator<e> it = linkedList.iterator();
        while (it.hasNext()) {
            linkedList3.add(b.a(b(it.next().a())));
        }
        com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Request Futures: %s", Integer.valueOf(linkedList3.size()));
        for (int i = 0; i < linkedList3.size(); i++) {
            int iIntValue = -1;
            try {
                iIntValue = ((Integer) ((Future) linkedList3.get(i)).get(5L, TimeUnit.SECONDS)).intValue();
            } catch (InterruptedException e) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Request Future was interrupted: %s", e.getMessage());
            } catch (ExecutionException e2) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Request Future failed: %s", e2.getMessage());
            } catch (TimeoutException e3) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Request Future had a timeout: %s", e3.getMessage());
            }
            if (linkedList.get(i).c()) {
                linkedList2.add(new g(true, linkedList.get(i).b()));
            } else {
                linkedList2.add(new g(a(iIntValue), linkedList.get(i).b()));
            }
        }
        return linkedList2;
    }

    private Callable<Boolean> a(final Long l) {
        return new Callable<Boolean>() {
            @Override
            public Boolean call() {
                return Boolean.valueOf(a.this.i.a(l.longValue()));
            }
        };
    }

    private LinkedList<Boolean> b(LinkedList<Long> linkedList) {
        boolean zBooleanValue;
        LinkedList<Boolean> linkedList2 = new LinkedList<>();
        LinkedList linkedList3 = new LinkedList();
        Iterator<Long> it = linkedList.iterator();
        while (it.hasNext()) {
            linkedList3.add(b.a(a(it.next())));
        }
        com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Removal Futures: %s", Integer.valueOf(linkedList3.size()));
        for (int i = 0; i < linkedList3.size(); i++) {
            try {
                zBooleanValue = ((Boolean) ((Future) linkedList3.get(i)).get(5L, TimeUnit.SECONDS)).booleanValue();
            } catch (InterruptedException e) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Removal Future was interrupted: %s", e.getMessage());
                zBooleanValue = false;
            } catch (ExecutionException e2) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Removal Future failed: %s", e2.getMessage());
                zBooleanValue = false;
            } catch (TimeoutException e3) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Removal Future had a timeout: %s", e3.getMessage());
                zBooleanValue = false;
            }
            linkedList2.add(Boolean.valueOf(zBooleanValue));
        }
        return linkedList2;
    }

    private Callable<Integer> b(final i iVar) {
        return new Callable<Integer>() {
            @Override
            public Integer call() {
                return Integer.valueOf(a.this.a(iVar));
            }
        };
    }

    private void c() {
        if (com.meizu.cloud.pushsdk.d.f.e.a(this.a)) {
            if (this.i.c() > 0) {
                this.j = 0;
                LinkedList<g> linkedListA = a(a(this.i.d()));
                com.meizu.cloud.pushsdk.d.f.c.c(this.h, "Processing emitter results.", new Object[0]);
                LinkedList<Long> linkedList = new LinkedList<>();
                int size = 0;
                int size2 = 0;
                for (g gVar : linkedListA) {
                    if (gVar.a()) {
                        linkedList.addAll(gVar.b());
                        size += gVar.b().size();
                    } else {
                        size2 += gVar.b().size();
                        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Request sending failed but we will retry later.", new Object[0]);
                    }
                }
                b(linkedList);
                com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Success Count: %s", Integer.valueOf(size));
                com.meizu.cloud.pushsdk.d.f.c.b(this.h, "Failure Count: %s", Integer.valueOf(size2));
                if (this.b != null) {
                    f fVar = this.b;
                    if (size2 != 0) {
                        fVar.a(size, size2);
                    } else {
                        fVar.a(size);
                    }
                }
                if (size2 > 0 && size == 0) {
                    if (com.meizu.cloud.pushsdk.d.f.e.a(this.a)) {
                        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Ensure collector path is valid: %s", b());
                    }
                    com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter loop stopping: failures.", new Object[0]);
                }
            } else {
                if (this.j >= this.d) {
                    com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter loop stopping: empty limit reached.", new Object[0]);
                    this.g.compareAndSet(true, false);
                    if (this.b != null) {
                        this.b.a(true);
                        return;
                    }
                    return;
                }
                this.j++;
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter database empty: " + this.j, new Object[0]);
                try {
                    this.f.sleep(this.c);
                } catch (InterruptedException e) {
                    com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter thread sleep interrupted: " + e.toString(), new Object[0]);
                }
            }
            c();
            return;
        }
        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter loop stopping: emitter offline.", new Object[0]);
        this.g.compareAndSet(true, false);
    }

    @Override
    public void a() {
        b.a(new Runnable() {
            @Override
            public void run() {
                if (a.this.g.compareAndSet(false, true)) {
                    a.this.c();
                }
            }
        });
    }

    @Override
    public void a(com.meizu.cloud.pushsdk.d.a.a aVar, boolean z) {
        this.i.a(aVar);
        com.meizu.cloud.pushsdk.d.f.c.a(this.h, "isRunning " + this.g + " attemptEmit " + z, new Object[0]);
        if (!z) {
            try {
                this.f.sleep(1L);
            } catch (InterruptedException e) {
                com.meizu.cloud.pushsdk.d.f.c.a(this.h, "Emitter add thread sleep interrupted: " + e.toString(), new Object[0]);
            }
        }
        if (this.g.compareAndSet(false, true)) {
            c();
        }
    }
}
