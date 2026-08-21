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

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6879a = "ImageLoader";
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
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.expressad.foundation.g.d.b.1
            final /* synthetic */ boolean e = false;

            @Override // java.lang.Runnable
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
                AnonymousClass2 anonymousClass2 = new AnonymousClass2(str);
                d dVar = new d(str, str2, str3);
                dVar.a(z);
                dVar.a(anonymousClass2);
                this.h.a(dVar);
            } else {
                LinkedList linkedList2 = (LinkedList) this.j.get(str2);
                if (linkedList2 != null && !linkedList2.contains(cVar)) {
                    linkedList2.add(cVar);
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.g.d.b$2, reason: invalid class name */
    final class AnonymousClass2 implements d.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f6881a;

        AnonymousClass2(String str) {
            this.f6881a = str;
        }

        @Override // com.tkay.expressad.foundation.g.d.d.a
        public final void a(final String str, final String str2) {
            com.tkay.core.common.l.b.a.a().a((Runnable) new com.tkay.core.common.l.b.b() { // from class: com.tkay.expressad.foundation.g.d.b.2.1
                @Override // com.tkay.core.common.l.b.b
                public final void a() {
                    synchronized (b.this.j) {
                        Bitmap bitmapA = a.a(str2);
                        b.this.a(str, bitmapA);
                        LinkedList linkedList = (LinkedList) b.this.j.remove(str);
                        if (linkedList != null) {
                            Iterator it = linkedList.iterator();
                            while (it.hasNext()) {
                                b.a(b.this, AnonymousClass2.this.f6881a, bitmapA, (c) it.next());
                            }
                        }
                    }
                }
            });
        }

        @Override // com.tkay.expressad.foundation.g.d.d.a
        public final void b(final String str, final String str2) {
            com.tkay.core.common.l.b.a.a().a((Runnable) new com.tkay.core.common.l.b.b() { // from class: com.tkay.expressad.foundation.g.d.b.2.2
                @Override // com.tkay.core.common.l.b.b
                public final void a() {
                    synchronized (b.this.j) {
                        LinkedList<c> linkedList = (LinkedList) b.this.j.remove(str);
                        if (linkedList != null) {
                            for (c cVar : linkedList) {
                                b bVar = b.this;
                                String str3 = AnonymousClass2.this.f6881a;
                                m.a().a(bVar.new AnonymousClass4(cVar, str2, str3));
                            }
                        }
                    }
                }
            });
        }
    }

    private d a(String str, String str2, String str3, boolean z) {
        AnonymousClass2 anonymousClass2 = new AnonymousClass2(str);
        d dVar = new d(str, str2, str3);
        dVar.a(z);
        dVar.a(anonymousClass2);
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

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.g.d.b$3, reason: invalid class name */
    final class AnonymousClass3 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ c f6884a;
        final /* synthetic */ Bitmap b;
        final /* synthetic */ String c;

        AnonymousClass3(c cVar, Bitmap bitmap, String str) {
            this.f6884a = cVar;
            this.b = bitmap;
            this.c = str;
        }

        @Override // java.lang.Runnable
        public final void run() {
            c cVar = this.f6884a;
            if (cVar != null) {
                cVar.a(this.b, this.c);
            }
        }
    }

    private void a(String str, Bitmap bitmap, c cVar) {
        m.a().a(new AnonymousClass3(cVar, bitmap, str));
    }

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.g.d.b$4, reason: invalid class name */
    final class AnonymousClass4 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ c f6885a;
        final /* synthetic */ String b;
        final /* synthetic */ String c;

        AnonymousClass4(c cVar, String str, String str2) {
            this.f6885a = cVar;
            this.b = str;
            this.c = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            c cVar = this.f6885a;
            if (cVar != null) {
                cVar.a(this.b, this.c);
            }
        }
    }

    private void a(String str, String str2, c cVar) {
        m.a().a(new AnonymousClass4(cVar, str2, str));
    }

    private void c() {
        com.tkay.expressad.foundation.g.a.e<String, Bitmap> eVar = this.i;
        if (eVar != null) {
            eVar.b();
        }
    }

    static /* synthetic */ void a(b bVar, String str, Bitmap bitmap, c cVar) {
        m.a().a(bVar.new AnonymousClass3(cVar, bitmap, str));
    }

    static /* synthetic */ void a(b bVar, String str, String str2, String str3, boolean z, c cVar) {
        synchronized (bVar.j) {
            if (!bVar.j.containsKey(str2)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(cVar);
                bVar.j.put(str2, linkedList);
                AnonymousClass2 anonymousClass2 = bVar.new AnonymousClass2(str);
                d dVar = new d(str, str2, str3);
                dVar.a(z);
                dVar.a(anonymousClass2);
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
