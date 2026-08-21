package com.kwad.framework.filedownloader.b;

import android.util.SparseArray;
import com.kwad.framework.filedownloader.b.a;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.framework.filedownloader.b.a {
    final SparseArray<com.kwad.framework.filedownloader.d.c> abK = new SparseArray<>();
    final SparseArray<List<com.kwad.framework.filedownloader.d.a>> abL = new SparseArray<>();

    class a implements a.InterfaceC0182a {
        a() {
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void a(int i, com.kwad.framework.filedownloader.d.c cVar) {
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void c(com.kwad.framework.filedownloader.d.c cVar) {
        }

        @Override // java.lang.Iterable
        public final Iterator<com.kwad.framework.filedownloader.d.c> iterator() {
            return b.this.new C0183b();
        }

        @Override // com.kwad.framework.filedownloader.b.a.InterfaceC0182a
        public final void ui() {
        }
    }

    /* JADX INFO: renamed from: com.kwad.framework.filedownloader.b.b$b, reason: collision with other inner class name */
    class C0183b implements Iterator<com.kwad.framework.filedownloader.d.c> {
        C0183b() {
        }

        @Override // java.util.Iterator
        public final boolean hasNext() {
            return false;
        }

        @Override // java.util.Iterator
        public final /* bridge */ /* synthetic */ com.kwad.framework.filedownloader.d.c next() {
            return null;
        }

        @Override // java.util.Iterator
        public final void remove() {
        }
    }

    private void d(com.kwad.framework.filedownloader.d.c cVar) {
        synchronized (this.abK) {
            this.abK.put(cVar.getId(), cVar);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, int i2, long j) {
        List<com.kwad.framework.filedownloader.d.a> list;
        synchronized (this.abL) {
            list = this.abL.get(i);
        }
        if (list == null) {
            return;
        }
        for (com.kwad.framework.filedownloader.d.a aVar : list) {
            if (aVar.getIndex() == i2) {
                aVar.J(j);
                return;
            }
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, long j, String str, String str2) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, String str, long j, long j2, int i2) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, Throwable th) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(int i, Throwable th, long j) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void a(com.kwad.framework.filedownloader.d.a aVar) {
        List<com.kwad.framework.filedownloader.d.a> arrayList;
        try {
            int id = aVar.getId();
            synchronized (this.abL) {
                arrayList = this.abL.get(id);
                if (arrayList == null) {
                    arrayList = new ArrayList<>();
                    this.abL.put(id, arrayList);
                }
            }
            arrayList.add(aVar);
        } catch (Exception unused) {
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void b(com.kwad.framework.filedownloader.d.c cVar) {
        if (cVar == null) {
            com.kwad.framework.filedownloader.f.d.d(this, "update but model == null!", new Object[0]);
            return;
        }
        if (bf(cVar.getId()) == null) {
            d(cVar);
            return;
        }
        synchronized (this.abK) {
            this.abK.remove(cVar.getId());
            this.abK.put(cVar.getId(), cVar);
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void be(int i) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final com.kwad.framework.filedownloader.d.c bf(int i) {
        com.kwad.framework.filedownloader.d.c cVar;
        synchronized (this.abK) {
            cVar = this.abK.get(i);
        }
        return cVar;
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final List<com.kwad.framework.filedownloader.d.a> bg(int i) {
        List<com.kwad.framework.filedownloader.d.a> list;
        try {
            ArrayList arrayList = new ArrayList();
            synchronized (this.abL) {
                list = this.abL.get(i);
            }
            if (list != null) {
                arrayList.addAll(list);
            }
            return arrayList;
        } catch (Exception unused) {
            return new ArrayList();
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void bh(int i) {
        try {
            synchronized (this.abL) {
                this.abL.remove(i);
            }
        } catch (Exception unused) {
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final boolean bi(int i) {
        synchronized (this.abK) {
            this.abK.remove(i);
        }
        return true;
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void bj(int i) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void c(int i, long j) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void clear() {
        synchronized (this.abK) {
            this.abK.clear();
        }
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void d(int i, long j) {
        bi(i);
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void e(int i, long j) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final void q(int i, int i2) {
    }

    @Override // com.kwad.framework.filedownloader.b.a
    public final a.InterfaceC0182a uh() {
        return new a();
    }
}
