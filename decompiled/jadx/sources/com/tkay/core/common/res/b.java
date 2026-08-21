package com.tkay.core.common.res;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.core.common.res.image.a;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class b {
    private static final String b = "ImageLoader";
    private static volatile b c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f6297a;
    private Map<String, Integer> d;
    private c<String, SoftReference<Bitmap>> e;
    private final Object f = new Object();
    private final LinkedHashMap<String, List<a>> g = new LinkedHashMap<>();

    public interface a {
        void onFail(String str, String str2);

        void onSuccess(String str, Bitmap bitmap);
    }

    private void b(String str, Bitmap bitmap) {
        synchronized (this.g) {
            LinkedList<a> linkedList = (LinkedList) this.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(new AnonymousClass1(bitmap, aVar, str));
                    }
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.res.b$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Bitmap f6298a;
        final /* synthetic */ a b;
        final /* synthetic */ String c;

        AnonymousClass1(Bitmap bitmap, a aVar, String str) {
            this.f6298a = bitmap;
            this.b = aVar;
            this.c = str;
        }

        @Override // java.lang.Runnable
        public final void run() {
            Bitmap bitmap = this.f6298a;
            if (bitmap != null) {
                this.b.onSuccess(this.c, bitmap);
            } else {
                this.b.onFail(this.c, "Bitmap load fail");
            }
        }
    }

    private void a(String str, String str2) {
        synchronized (this.g) {
            LinkedList<a> linkedList = (LinkedList) this.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(new AnonymousClass2(aVar, str, str2));
                    }
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.res.b$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ a f6299a;
        final /* synthetic */ String b;
        final /* synthetic */ String c;

        AnonymousClass2(a aVar, String str, String str2) {
            this.f6299a = aVar;
            this.b = str;
            this.c = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            this.f6299a.onFail(this.b, this.c);
        }
    }

    public final void a(String str, Bitmap bitmap) {
        if (a(str) != null || bitmap == null) {
            return;
        }
        this.e.b(str, new SoftReference<>(bitmap));
    }

    private Bitmap a(String str) {
        SoftReference<Bitmap> softReferenceA = this.e.a(str);
        if (softReferenceA != null) {
            return softReferenceA.get();
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:33:0x004b A[EXC_TOP_SPLITTER, PHI: r0
      0x004b: PHI (r0v2 android.graphics.Bitmap) = (r0v0 android.graphics.Bitmap), (r0v4 android.graphics.Bitmap) binds: [B:22:0x004f, B:19:0x0049] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final android.graphics.Bitmap a(com.tkay.core.common.res.e r5, int r6, int r7) {
        /*
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L57
            java.lang.String r1 = r5.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lc
            goto L57
        Lc:
            java.lang.String r1 = r5.f
            java.lang.String r1 = com.tkay.core.common.l.f.a(r1)
            if (r6 > 0) goto L20
            android.content.Context r2 = r4.f6297a     // Catch: java.lang.Throwable -> L2e
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L2e
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L2e
            int r6 = r2.widthPixels     // Catch: java.lang.Throwable -> L2e
        L20:
            if (r7 > 0) goto L2e
            android.content.Context r2 = r4.f6297a     // Catch: java.lang.Throwable -> L2e
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L2e
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()     // Catch: java.lang.Throwable -> L2e
            int r7 = r2.heightPixels     // Catch: java.lang.Throwable -> L2e
        L2e:
            java.lang.Object r2 = r4.f
            monitor-enter(r2)
            android.content.Context r3 = r4.f6297a     // Catch: java.lang.Throwable -> L54
            com.tkay.core.common.res.d r3 = com.tkay.core.common.res.d.a(r3)     // Catch: java.lang.Throwable -> L54
            int r5 = r5.e     // Catch: java.lang.Throwable -> L54
            java.io.FileInputStream r5 = r3.a(r5, r1)     // Catch: java.lang.Throwable -> L54
            if (r5 != 0) goto L41
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L54
            return r0
        L41:
            java.io.FileDescriptor r1 = r5.getFD()     // Catch: java.lang.Throwable -> L4f
            android.graphics.Bitmap r0 = com.tkay.core.common.l.b.a(r1, r6, r7)     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L52
        L4b:
            r5.close()     // Catch: java.lang.Exception -> L52 java.lang.Throwable -> L54
            goto L52
        L4f:
            if (r5 == 0) goto L52
            goto L4b
        L52:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L54
            return r0
        L54:
            r5 = move-exception
            monitor-exit(r2)
            throw r5
        L57:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.res.b.a(com.tkay.core.common.res.e, int, int):android.graphics.Bitmap");
    }

    private b(Context context) {
        this.f6297a = context.getApplicationContext();
        int iMaxMemory = ((int) Runtime.getRuntime().maxMemory()) / 5;
        StringBuilder sb = new StringBuilder("ImageLoad init cache size: ");
        sb.append(iMaxMemory);
        sb.append("B");
        this.e = new c<String, SoftReference<Bitmap>>(iMaxMemory) { // from class: com.tkay.core.common.res.b.3
            @Override // com.tkay.core.common.res.c
            protected final /* synthetic */ int a(String str, SoftReference<Bitmap> softReference) {
                String str2 = str;
                SoftReference<Bitmap> softReference2 = softReference;
                Bitmap bitmap = softReference2 != null ? softReference2.get() : null;
                if (b.this.d == null) {
                    b.this.d = new HashMap(8);
                }
                if (bitmap == null) {
                    Integer num = (Integer) b.this.d.get(str2);
                    if (num != null) {
                        return num.intValue();
                    }
                    return 0;
                }
                int rowBytes = bitmap.getRowBytes() * bitmap.getHeight();
                b.this.d.put(str2, Integer.valueOf(rowBytes));
                return rowBytes;
            }

            @Override // com.tkay.core.common.res.c
            protected final /* synthetic */ void a(boolean z, String str, SoftReference<Bitmap> softReference, SoftReference<Bitmap> softReference2) {
                Bitmap bitmap;
                String str2 = str;
                SoftReference<Bitmap> softReference3 = softReference;
                SoftReference<Bitmap> softReference4 = softReference2;
                super.a(z, str2, softReference3, softReference4);
                if (softReference3 != null) {
                    try {
                        bitmap = softReference3.get();
                    } catch (Exception unused) {
                        return;
                    }
                } else {
                    bitmap = null;
                }
                if (b.this.d != null) {
                    b.this.d.remove(str2);
                }
                if (softReference3 == null || softReference3.equals(softReference4) || bitmap == null || bitmap.isRecycled()) {
                    return;
                }
                bitmap.recycle();
            }

            /* JADX INFO: renamed from: a, reason: avoid collision after fix types in other method */
            private int a2(String str, SoftReference<Bitmap> softReference) {
                Bitmap bitmap = softReference != null ? softReference.get() : null;
                if (b.this.d == null) {
                    b.this.d = new HashMap(8);
                }
                if (bitmap == null) {
                    Integer num = (Integer) b.this.d.get(str);
                    if (num != null) {
                        return num.intValue();
                    }
                    return 0;
                }
                int rowBytes = bitmap.getRowBytes() * bitmap.getHeight();
                b.this.d.put(str, Integer.valueOf(rowBytes));
                return rowBytes;
            }

            /* JADX INFO: renamed from: a, reason: avoid collision after fix types in other method */
            private void a2(boolean z, String str, SoftReference<Bitmap> softReference, SoftReference<Bitmap> softReference2) {
                Bitmap bitmap;
                super.a(z, str, softReference, softReference2);
                if (softReference != null) {
                    try {
                        bitmap = softReference.get();
                    } catch (Exception unused) {
                        return;
                    }
                } else {
                    bitmap = null;
                }
                if (b.this.d != null) {
                    b.this.d.remove(str);
                }
                if (softReference == null || softReference.equals(softReference2) || bitmap == null || bitmap.isRecycled()) {
                    return;
                }
                bitmap.recycle();
            }
        };
    }

    public static b a(Context context) {
        if (c == null) {
            synchronized (b.class) {
                if (c == null) {
                    c = new b(context);
                }
            }
        }
        return c;
    }

    public final void a(e eVar, a aVar) {
        a(eVar, -1, -1, aVar);
    }

    public final void a(final e eVar, final int i, final int i2, final a aVar) {
        if (eVar == null || TextUtils.isEmpty(eVar.f)) {
            if (aVar != null) {
                aVar.onFail("", "No url info.");
            }
        } else {
            Bitmap bitmapA = a(eVar.f);
            if (bitmapA != null && !bitmapA.isRecycled()) {
                aVar.onSuccess(eVar.f, bitmapA);
            } else {
                com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.res.b.4
                    @Override // java.lang.Runnable
                    public final void run() {
                        Bitmap bitmapA2 = b.this.a(eVar, i, i2);
                        if (bitmapA2 != null && !bitmapA2.isRecycled()) {
                            StringBuilder sb = new StringBuilder("url image [");
                            sb.append(eVar.f);
                            sb.append("] is downloaded");
                            b.this.a(eVar.f, bitmapA2);
                            LinkedList linkedList = new LinkedList();
                            linkedList.add(aVar);
                            b.this.g.put(eVar.f, linkedList);
                            b.a(b.this, eVar.f, bitmapA2);
                            return;
                        }
                        b.a(b.this, eVar, i, i2, aVar);
                    }
                });
            }
        }
    }

    private void b(e eVar, int i, int i2, a aVar) {
        synchronized (this.g) {
            if (!this.g.containsKey(eVar.f)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(aVar);
                this.g.put(eVar.f, linkedList);
                com.tkay.core.common.res.image.a aVar2 = new com.tkay.core.common.res.image.a(eVar);
                aVar2.a(new AnonymousClass5(i, i2, eVar));
                aVar2.d();
            } else {
                LinkedList linkedList2 = (LinkedList) this.g.get(eVar.f);
                if (linkedList2 != null && !linkedList2.contains(aVar)) {
                    linkedList2.add(aVar);
                }
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.common.res.b$5, reason: invalid class name */
    final class AnonymousClass5 implements a.InterfaceC0426a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ int f6302a;
        final /* synthetic */ int b;
        final /* synthetic */ e c;

        AnonymousClass5(int i, int i2, e eVar) {
            this.f6302a = i;
            this.b = i2;
            this.c = eVar;
        }

        @Override // com.tkay.core.common.res.image.a.InterfaceC0426a
        public final void a(e eVar) {
            new StringBuilder("Load Success:").append(eVar.f);
            Bitmap bitmapA = b.this.a(eVar, this.f6302a, this.b);
            if (bitmapA != null) {
                b.this.a(eVar.f, bitmapA);
            }
            b.a(b.this, this.c.f, bitmapA);
        }

        @Override // com.tkay.core.common.res.image.a.InterfaceC0426a
        public final void a(e eVar, String str) {
            b.a(b.this, eVar.f, str);
        }
    }

    private void a() {
        try {
            if (this.e != null) {
                this.e.a();
            }
            if (this.g != null) {
                this.g.clear();
            }
        } catch (Exception unused) {
        }
    }

    static /* synthetic */ void a(b bVar, String str, Bitmap bitmap) {
        synchronized (bVar.g) {
            LinkedList<a> linkedList = (LinkedList) bVar.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(bVar.new AnonymousClass1(bitmap, aVar, str));
                    }
                }
            }
        }
    }

    static /* synthetic */ void a(b bVar, e eVar, int i, int i2, a aVar) {
        synchronized (bVar.g) {
            if (!bVar.g.containsKey(eVar.f)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(aVar);
                bVar.g.put(eVar.f, linkedList);
                com.tkay.core.common.res.image.a aVar2 = new com.tkay.core.common.res.image.a(eVar);
                aVar2.a(bVar.new AnonymousClass5(i, i2, eVar));
                aVar2.d();
            } else {
                LinkedList linkedList2 = (LinkedList) bVar.g.get(eVar.f);
                if (linkedList2 != null && !linkedList2.contains(aVar)) {
                    linkedList2.add(aVar);
                }
            }
        }
    }

    static /* synthetic */ void a(b bVar, String str, String str2) {
        synchronized (bVar.g) {
            LinkedList<a> linkedList = (LinkedList) bVar.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(bVar.new AnonymousClass2(aVar, str, str2));
                    }
                }
            }
        }
    }
}
