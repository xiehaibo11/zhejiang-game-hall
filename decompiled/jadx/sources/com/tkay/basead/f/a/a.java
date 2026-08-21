package com.tkay.basead.f.a;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.basead.a.b.b;
import com.tkay.basead.a.f;
import com.tkay.basead.c.c;
import com.tkay.core.c.d;
import com.tkay.core.c.e;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.t;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f5679a;
    private Context b;

    private a(Context context) {
        this.b = context.getApplicationContext();
    }

    public static a a(Context context) {
        if (f5679a == null) {
            f5679a = new a(context);
        }
        return f5679a;
    }

    public final void a(String str) {
        List<r> listF;
        t tVarE;
        d dVarA = e.a(this.b).a(str);
        if (dVarA == null || (listF = dVarA.F()) == null || (tVarE = dVarA.E()) == null) {
            return;
        }
        f.a();
        if (listF != null) {
            int size = listF.size();
            for (int i = 0; i < size; i++) {
                i iVar = new i();
                iVar.m = tVarE;
                f.a(str, true, listF.get(i), iVar, null);
            }
        }
    }

    public final r a(String str, String str2) {
        d dVarA = e.a(this.b).a(str);
        if (dVarA == null) {
            return null;
        }
        return dVarA.e(str2);
    }

    public final String b(String str) {
        d dVarA = e.a(this.b).a(str);
        if (dVarA == null) {
            return "";
        }
        List<r> listF = dVarA.F();
        ArrayList arrayList = new ArrayList();
        if (listF == null || listF.size() == 0) {
            return "";
        }
        for (int size = listF.size() - 1; size >= 0; size--) {
            r rVar = listF.get(size);
            f.a();
            if (!f.a(rVar, dVarA.Y(), dVarA.E())) {
                listF.remove(size);
            } else {
                arrayList.add(b.a(this.b).d(rVar));
            }
        }
        if (arrayList.size() == 0) {
            return "";
        }
        Collections.sort(arrayList, new Comparator<c>() { // from class: com.tkay.basead.f.a.a.1
            @Override // java.util.Comparator
            public final /* synthetic */ int compare(c cVar, c cVar2) {
                return Integer.valueOf(cVar.d).compareTo(Integer.valueOf(cVar2.d));
            }

            private static int a(c cVar, c cVar2) {
                return Integer.valueOf(cVar.d).compareTo(Integer.valueOf(cVar2.d));
            }
        });
        return ((c) arrayList.get(0)).f5610a;
    }

    public final void a(String str, r rVar, i iVar, b.InterfaceC0384b interfaceC0384b) {
        if (a(rVar)) {
            interfaceC0384b.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.h, com.tkay.basead.c.f.G));
            return;
        }
        if (b.a(this.b).b(rVar)) {
            interfaceC0384b.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.e, com.tkay.basead.c.f.z));
        } else if (b.a(this.b).c(rVar)) {
            interfaceC0384b.a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.f, com.tkay.basead.c.f.A));
        } else {
            f.a();
            f.a(str, rVar, iVar, interfaceC0384b);
        }
    }

    private static boolean a(r rVar) {
        List<String> listJ = m.a().j();
        if (listJ == null) {
            return false;
        }
        Iterator<String> it = listJ.iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(rVar.B(), it.next())) {
                return true;
            }
        }
        return false;
    }

    public final boolean a(r rVar, i iVar, boolean z) {
        if (this.b == null || rVar == null || a(rVar)) {
            return false;
        }
        if (z) {
            f.a();
            return f.a(rVar, iVar);
        }
        if (!b.a(this.b).b(rVar) && !b.a(this.b).c(rVar)) {
            f.a();
            if (f.a(rVar, iVar)) {
                return true;
            }
        }
        return false;
    }
}
