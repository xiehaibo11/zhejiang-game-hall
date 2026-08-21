package com.kwad.framework.filedownloader.b;

import android.util.SparseArray;
import com.kwad.framework.filedownloader.b.a;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public final class b implements com.kwad.framework.filedownloader.b.a {
    final SparseArray<com.kwad.framework.filedownloader.d.c> abK = new SparseArray<>();
    final SparseArray<List<com.kwad.framework.filedownloader.d.a>> abL = new SparseArray<>();

    class a implements a.a {
        a() {
        }

        @Override
        public final void a(int i, com.kwad.framework.filedownloader.d.c cVar) {
        }

        @Override
        public final void c(com.kwad.framework.filedownloader.d.c cVar) {
        }

        @Override
        public final Iterator<com.kwad.framework.filedownloader.d.c> iterator() {
            return b.this.new b();
        }

        @Override
        public final void ui() {
        }
    }

    class b implements Iterator<com.kwad.framework.filedownloader.d.c> {
        b() {
        }

        @Override
        public final boolean hasNext() {
            return false;
        }

        @Override
        public final com.kwad.framework.filedownloader.d.c next() {
            return null;
        }

        @Override
        public final void remove() {
        }
    }

    private void d(com.kwad.framework.filedownloader.d.c cVar) {
        synchronized (this.abK) {
            this.abK.put(cVar.getId(), cVar);
        }
    }

    @Override
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

    @Override
    public final void a(int i, long j, String str, String str2) {
    }

    @Override
    public final void a(int i, String str, long j, long j2, int i2) {
    }

    @Override
    public final void a(int i, Throwable th) {
    }

    @Override
    public final void a(int i, Throwable th, long j) {
    }

    @Override
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

    @Override
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

    @Override
    public final void be(int i) {
    }

    @Override
    public final com.kwad.framework.filedownloader.d.c bf(int i) {
        com.kwad.framework.filedownloader.d.c cVar;
        synchronized (this.abK) {
            cVar = this.abK.get(i);
        }
        return cVar;
    }

    @Override
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

    @Override
    public final void bh(int i) {
        try {
            synchronized (this.abL) {
                this.abL.remove(i);
            }
        } catch (Exception unused) {
        }
    }

    @Override
    public final boolean bi(int i) {
        synchronized (this.abK) {
            this.abK.remove(i);
        }
        return true;
    }

    @Override
    public final void bj(int i) {
    }

    @Override
    public final void c(int i, long j) {
    }

    @Override
    public final void clear() {
        synchronized (this.abK) {
            this.abK.clear();
        }
    }

    @Override
    public final void d(int i, long j) {
        bi(i);
    }

    @Override
    public final void e(int i, long j) {
    }

    @Override
    public final void q(int i, int i2) {
    }

    @Override
    public final a.a uh() {
        return new a();
    }
}
