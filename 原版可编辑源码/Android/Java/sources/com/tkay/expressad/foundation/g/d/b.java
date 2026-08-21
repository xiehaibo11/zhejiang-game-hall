package com.tkay.expressad.foundation.g.d;

import android.content.Context;
import android.graphics.Bitmap;
import com.tkay.core.common.b.m;
import com.tkay.expressad.foundation.g.d.d;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.foundation.h.t;
import java.io.File;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;

public final class b {
    private static final String a = "ImageLoader";
    private static final int b = 1;
    private static final int c = 2;
    private static final String d = "message_key";
    private static final String e = "message_bitmap";
    private static final String f = "message_message";
    private static b g;
    private com.tkay.expressad.foundation.g.g.c h;
    private final LinkedHashMap<String, List<c>> j = new LinkedHashMap<>();
    private com.tkay.expressad.foundation.g.a.e<String, Bitmap> i = new com.tkay.expressad.foundation.g.a.c(((int) Runtime.getRuntime().maxMemory()) / 5);

    public final void a(String str, Bitmap bitmap) {
        if (a(str) != null || bitmap == null) {
            return;
        }
        this.i.a(str, bitmap);
    }

    public final Bitmap a(String str) {
        return this.i.b(str);
    }

    private b(Context context) {
        this.h = new com.tkay.expressad.foundation.g.g.c(context);
    }

    public static b a(Context context) {
        if (g == null) {
            g = new b(context);
        }
        return g;
    }

    private void b() {
        this.i.b();
        LinkedHashMap<String, List<c>> linkedHashMap = this.j;
        if (linkedHashMap != null) {
            linkedHashMap.clear();
        }
    }

    public static void a() {
        com.tkay.expressad.foundation.g.a.e<String, Bitmap> eVar = g.i;
        if (eVar != null) {
            eVar.b();
        }
    }

    public final void a(String str, c cVar) {
        b(str, str, s.a(str), cVar);
    }

    private Bitmap d(String str) {
        Bitmap bitmapA;
        if (t.a(str)) {
            return null;
        }
        String strA = s.a(str);
        File file = new File(strA);
        if (a(str) != null) {
            return a(str);
        }
        if (!file.exists() || (bitmapA = a.a(strA)) == null) {
            return null;
        }
        a(str, bitmapA);
        return bitmapA;
    }

    public final boolean b(String str) {
        if (t.a(str)) {
            return false;
        }
        return a(str) != null || new File(s.a(str)).exists();
    }

    private void a(String str, String str2, String str3, c cVar) {
        b(str, str2, str3, cVar);
    }

    private void b(final String str, final String str2, final String str3, final c cVar) {
        if (t.a(str) || t.a(str2) || t.a(str3)) {
            return;
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            final boolean e = false;

            @Override
            public final void run() {
                File file = new File(str3);
                Bitmap bitmapA = b.this.a(str2);
                if (bitmapA != null && !bitmapA.isRecycled()) {
                    b.a(b.this, str, bitmapA, cVar);
                    return;
                }
                if (file.length() > 0) {
                    Bitmap bitmapA2 = a.a(str3);
                    if (bitmapA2 != null && !bitmapA2.isRecycled()) {
                        b.this.a(str2, bitmapA2);
                        b.a(b.this, str, bitmapA2, cVar);
                        return;
                    } else {
                        b.a(b.this, str, str2, str3, true, cVar);
                        return;
                    }
                }
                b.a(b.this, str, str2, str3, false, cVar);
            }
        });
    }

    private void a(String str, String str2, String str3, boolean z, c cVar) {
        synchronized (this.j) {
            if (!this.j.containsKey(str2)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(cVar);
                this.j.put(str2, linkedList);
                2 r7 = new 2(str);
                d dVar = new d(str, str2, str3);
                dVar.a(z);
                dVar.a(r7);
                this.h.a(dVar);
            } else {
                LinkedList linkedList2 = (LinkedList) this.j.get(str2);
                if (linkedList2 != null && !linkedList2.contains(cVar)) {
                    linkedList2.add(cVar);
                }
            }
        }
    }

    final class 2 implements d.a {
        final String a;

        2(String str) {
            this.a = str;
        }

        @Override
        public final void a(final String str, final String str2) {
            com.tkay.core.common.l.b.a.a().a((Runnable) new com.tkay.core.common.l.b.b() {
                @Override
                public final void a() {
                    synchronized (b.this.j) {
                        Bitmap bitmapA = a.a(str2);
                        b.this.a(str, bitmapA);
                        LinkedList linkedList = (LinkedList) b.this.j.remove(str);
                        if (linkedList != null) {
                            Iterator it = linkedList.iterator();
                            while (it.hasNext()) {
                                b.a(b.this, 2.this.a, bitmapA, (c) it.next());
                            }
                        }
                    }
                }
            });
        }

        @Override
        public final void b(final String str, final String str2) {
            com.tkay.core.common.l.b.a.a().a((Runnable) new com.tkay.core.common.l.b.b() {
                @Override
                public final void a() {
                    synchronized (b.this.j) {
                        LinkedList<c> linkedList = (LinkedList) b.this.j.remove(str);
                        if (linkedList != null) {
                            for (c cVar : linkedList) {
                                b bVar = b.this;
                                String str3 = 2.this.a;
                                m.a().a(bVar.new 4(cVar, str2, str3));
                            }
                        }
                    }
                }
            });
        }
    }

    private d a(String str, String str2, String str3, boolean z) {
        2 r0 = new 2(str);
        d dVar = new d(str, str2, str3);
        dVar.a(z);
        dVar.a(r0);
        return dVar;
    }

    public final void c(String str) {
        try {
            if (this.i == null || !this.i.a().contains(str)) {
                return;
            }
            this.i.a(str);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    final class 3 implements Runnable {
        final c a;
        final Bitmap b;
        final String c;

        3(c cVar, Bitmap bitmap, String str) {
            this.a = cVar;
            this.b = bitmap;
            this.c = str;
        }

        @Override
        public final void run() {
            c cVar = this.a;
            if (cVar != null) {
                cVar.a(this.b, this.c);
            }
        }
    }

    private void a(String str, Bitmap bitmap, c cVar) {
        m.a().a(new 3(cVar, bitmap, str));
    }

    final class 4 implements Runnable {
        final c a;
        final String b;
        final String c;

        4(c cVar, String str, String str2) {
            this.a = cVar;
            this.b = str;
            this.c = str2;
        }

        @Override
        public final void run() {
            c cVar = this.a;
            if (cVar != null) {
                cVar.a(this.b, this.c);
            }
        }
    }

    private void a(String str, String str2, c cVar) {
        m.a().a(new 4(cVar, str2, str));
    }

    private void c() {
        com.tkay.expressad.foundation.g.a.e<String, Bitmap> eVar = this.i;
        if (eVar != null) {
            eVar.b();
        }
    }

    static void a(b bVar, String str, Bitmap bitmap, c cVar) {
        m.a().a(bVar.new 3(cVar, bitmap, str));
    }

    static void a(b bVar, String str, String str2, String str3, boolean z, c cVar) {
        synchronized (bVar.j) {
            if (!bVar.j.containsKey(str2)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(cVar);
                bVar.j.put(str2, linkedList);
                2 r7 = bVar.new 2(str);
                d dVar = new d(str, str2, str3);
                dVar.a(z);
                dVar.a(r7);
                bVar.h.a(dVar);
            } else {
                LinkedList linkedList2 = (LinkedList) bVar.j.get(str2);
                if (linkedList2 != null && !linkedList2.contains(cVar)) {
                    linkedList2.add(cVar);
                }
            }
        }
    }
}
