package com.mbridge.msdk.foundation.same.net.d;

import com.mbridge.msdk.foundation.same.net.j;
import com.mbridge.msdk.foundation.same.net.k;
import java.io.File;
import java.util.Iterator;
import java.util.LinkedList;

public final class b {
    private j a;
    private int b;
    private LinkedList<a> c = new LinkedList<>();

    public b(j jVar, int i) {
        this.a = jVar;
        this.b = i;
    }

    public final a a(File file, String str, com.mbridge.msdk.foundation.same.net.e<Void> eVar) {
        a aVar = new a(file, str, eVar);
        synchronized (this) {
            this.c.add(aVar);
        }
        a();
        return aVar;
    }

    private void a() {
        synchronized (this) {
            int i = 0;
            Iterator<a> it = this.c.iterator();
            while (it.hasNext()) {
                if (it.next().a()) {
                    i++;
                }
            }
            if (i >= this.b) {
                return;
            }
            Iterator<a> it2 = this.c.iterator();
            while (it2.hasNext()) {
                if (a.a(it2.next()) && (i = i + 1) == this.b) {
                    return;
                }
            }
        }
    }

    public class a {
        private String b;
        private File c;
        private com.mbridge.msdk.foundation.same.net.e<Void> d;
        private com.mbridge.msdk.foundation.same.net.d.a e;
        private int f;

        private a(File file, String str, com.mbridge.msdk.foundation.same.net.e<Void> eVar) {
            this.c = file;
            this.d = eVar;
            this.b = str;
        }

        public final boolean a() {
            return this.f == 1;
        }

        static boolean a(a aVar) {
            if (aVar.f != 0) {
                return false;
            }
            b bVar = b.this;
            com.mbridge.msdk.foundation.same.net.d.a aVar2 = new com.mbridge.msdk.foundation.same.net.d.a(aVar.c, aVar.b);
            aVar.e = aVar2;
            aVar2.a(new com.mbridge.msdk.foundation.same.net.f<Void>() {
                boolean a;

                @Override
                public final void onPreExecute() {
                    a.this.d.onPreExecute();
                }

                @Override
                public final void onFinish() {
                    if (this.a) {
                        return;
                    }
                    a.this.f = 3;
                    a.this.d.onFinish();
                    b.a(b.this, a.this);
                }

                @Override
                public final void onSuccess(k kVar) {
                    if (this.a) {
                        return;
                    }
                    a.this.d.onSuccess(kVar);
                }

                @Override
                public final void onError(com.mbridge.msdk.foundation.same.net.a.a aVar3) {
                    if (this.a) {
                        return;
                    }
                    a.this.d.onError(aVar3);
                }

                @Override
                public final void onCancel() {
                    a.this.d.onCancel();
                    this.a = true;
                }

                @Override
                public final void onProgressChange(long j, long j2) {
                    a.this.d.onProgressChange(j, j2);
                }
            });
            aVar.f = 1;
            b.this.a.a(aVar.e);
            return true;
        }
    }

    static void a(b bVar, a aVar) {
        synchronized (bVar) {
            bVar.c.remove(aVar);
        }
        bVar.a();
    }
}
