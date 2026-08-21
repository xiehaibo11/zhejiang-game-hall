package com.tkay.core.common.k;

import android.content.Context;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.g;
import com.tkay.core.common.h.a.c;
import com.tkay.core.common.h.k;
import com.tkay.core.common.o;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class d extends o<g> {
    private static volatile d f;

    private d(Context context) {
        super(context);
    }

    public static d a(Context context) {
        if (f == null) {
            synchronized (d.class) {
                if (f == null) {
                    f = new d(context);
                }
            }
        }
        return f;
    }

    @Override // com.tkay.core.common.o
    protected final void a(final List<g> list) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.k.d.1
            @Override // java.lang.Runnable
            public final void run() {
                ArrayList arrayList = new ArrayList();
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    arrayList.add(((g) it.next()).a().toString());
                }
                com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(m.a().f()).b(m.a().o());
                if (aVarB != null) {
                    if (aVarB.u() == 1) {
                        com.tkay.core.common.h.a.a aVar = new com.tkay.core.common.h.a.a(arrayList);
                        aVar.a(1, aVarB.t());
                        aVar.a();
                        aVar.a((c.a) null);
                        return;
                    }
                    com.tkay.core.common.h.b bVar = new com.tkay.core.common.h.b(d.this.e, aVarB.u(), arrayList);
                    bVar.p();
                    bVar.a(0, (k) null);
                    return;
                }
                com.tkay.core.common.h.b bVar2 = new com.tkay.core.common.h.b(d.this.e, 0, arrayList);
                bVar2.p();
                bVar2.a(0, (k) null);
            }
        });
    }
}
