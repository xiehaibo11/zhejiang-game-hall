package com.tkay.core.common.res;

import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.f;
import com.tkay.core.common.res.image.a;
import java.io.FileInputStream;
import java.lang.ref.SoftReference;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class b {
    private static final String b = "ImageLoader";
    private static volatile b c;
    Context a;
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
                        m.a().a(new 1(bitmap, aVar, str));
                    }
                }
            }
        }
    }

    final class 1 implements Runnable {
        final Bitmap a;
        final a b;
        final String c;

        1(Bitmap bitmap, a aVar, String str) {
            this.a = bitmap;
            this.b = aVar;
            this.c = str;
        }

        @Override
        public final void run() {
            Bitmap bitmap = this.a;
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
                        m.a().a(new 2(aVar, str, str2));
                    }
                }
            }
        }
    }

    final class 2 implements Runnable {
        final a a;
        final String b;
        final String c;

        2(a aVar, String str, String str2) {
            this.a = aVar;
            this.b = str;
            this.c = str2;
        }

        @Override
        public final void run() {
            this.a.onFail(this.b, this.c);
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
    */
    public final Bitmap a(e eVar, int i, int i2) {
        Bitmap bitmapA = null;
        if (eVar == null || TextUtils.isEmpty(eVar.f)) {
            return null;
        }
        String strA = f.a(eVar.f);
        if (i <= 0) {
            try {
                i = this.a.getResources().getDisplayMetrics().widthPixels;
            } catch (Throwable unused) {
            }
        }
        if (i2 <= 0) {
            i2 = this.a.getResources().getDisplayMetrics().heightPixels;
        }
        synchronized (this.f) {
            FileInputStream fileInputStreamA = d.a(this.a).a(eVar.e, strA);
            if (fileInputStreamA == null) {
                return null;
            }
            try {
                bitmapA = com.tkay.core.common.l.b.a(fileInputStreamA.getFD(), i, i2);
            } catch (Throwable unused2) {
                if (fileInputStreamA != null) {
                }
            }
            if (fileInputStreamA != null) {
                try {
                    fileInputStreamA.close();
                } catch (Exception unused3) {
                }
            }
            return bitmapA;
        }
    }

    private b(Context context) {
        this.a = context.getApplicationContext();
        int iMaxMemory = ((int) Runtime.getRuntime().maxMemory()) / 5;
        StringBuilder sb = new StringBuilder("ImageLoad init cache size: ");
        sb.append(iMaxMemory);
        sb.append("B");
        this.e = new c<String, SoftReference<Bitmap>>(iMaxMemory) {
            @Override
            protected final int a(String str, SoftReference<Bitmap> softReference) {
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

            @Override
            protected final void a(boolean z, String str, SoftReference<Bitmap> softReference, SoftReference<Bitmap> softReference2) {
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

            private int a(String str, SoftReference<Bitmap> softReference) {
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

            private void a(boolean z, String str, SoftReference<Bitmap> softReference, SoftReference<Bitmap> softReference2) {
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
                com.tkay.core.common.l.b.a.a().a(new Runnable() {
                    @Override
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
                aVar2.a(new 5(i, i2, eVar));
                aVar2.d();
            } else {
                LinkedList linkedList2 = (LinkedList) this.g.get(eVar.f);
                if (linkedList2 != null && !linkedList2.contains(aVar)) {
                    linkedList2.add(aVar);
                }
            }
        }
    }

    final class 5 implements a.a {
        final int a;
        final int b;
        final e c;

        5(int i, int i2, e eVar) {
            this.a = i;
            this.b = i2;
            this.c = eVar;
        }

        @Override
        public final void a(e eVar) {
            new StringBuilder("Load Success:").append(eVar.f);
            Bitmap bitmapA = b.this.a(eVar, this.a, this.b);
            if (bitmapA != null) {
                b.this.a(eVar.f, bitmapA);
            }
            b.a(b.this, this.c.f, bitmapA);
        }

        @Override
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

    static void a(b bVar, String str, Bitmap bitmap) {
        synchronized (bVar.g) {
            LinkedList<a> linkedList = (LinkedList) bVar.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(bVar.new 1(bitmap, aVar, str));
                    }
                }
            }
        }
    }

    static void a(b bVar, e eVar, int i, int i2, a aVar) {
        synchronized (bVar.g) {
            if (!bVar.g.containsKey(eVar.f)) {
                LinkedList linkedList = new LinkedList();
                linkedList.add(aVar);
                bVar.g.put(eVar.f, linkedList);
                com.tkay.core.common.res.image.a aVar2 = new com.tkay.core.common.res.image.a(eVar);
                aVar2.a(bVar.new 5(i, i2, eVar));
                aVar2.d();
            } else {
                LinkedList linkedList2 = (LinkedList) bVar.g.get(eVar.f);
                if (linkedList2 != null && !linkedList2.contains(aVar)) {
                    linkedList2.add(aVar);
                }
            }
        }
    }

    static void a(b bVar, String str, String str2) {
        synchronized (bVar.g) {
            LinkedList<a> linkedList = (LinkedList) bVar.g.remove(str);
            if (linkedList != null) {
                for (a aVar : linkedList) {
                    if (aVar != null) {
                        m.a().a(bVar.new 2(aVar, str, str2));
                    }
                }
            }
        }
    }
}
