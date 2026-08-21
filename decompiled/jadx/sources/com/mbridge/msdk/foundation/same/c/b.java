package com.mbridge.msdk.foundation.same.c;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.same.c.d;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import java.io.File;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;

/* JADX INFO: compiled from: CommonImageLoader.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static b f3406a;
    private com.mbridge.msdk.foundation.same.e.b b;
    private com.mbridge.msdk.foundation.same.a.c<String, Bitmap> c;
    private LinkedHashMap<String, List<c>> d = new LinkedHashMap<>();
    private Handler e = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.foundation.same.c.b.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            try {
                if (message.what == 1) {
                    String string = message.getData().getString("message_key");
                    Bitmap bitmapA = a.a(message.getData().getString("message_bitmap"));
                    b.this.a(string, bitmapA);
                    LinkedList<c> linkedList = (LinkedList) b.this.d.get(string);
                    if (linkedList != null) {
                        for (c cVar : linkedList) {
                            if (cVar != null) {
                                cVar.onSuccessLoad(bitmapA, string);
                            }
                        }
                    }
                    b.this.d.remove(string);
                    return;
                }
                if (message.what == 2) {
                    String string2 = message.getData().getString("message_key");
                    String string3 = message.getData().getString("message_message");
                    LinkedList<c> linkedList2 = (LinkedList) b.this.d.get(string2);
                    if (linkedList2 != null) {
                        for (c cVar2 : linkedList2) {
                            if (cVar2 != null) {
                                cVar2.onFailedLoad(string3, string2);
                            }
                        }
                    }
                    b.this.d.remove(string2);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    };

    public final void a(String str, Bitmap bitmap) {
        if (d(str) != null || bitmap == null) {
            return;
        }
        this.c.a(str, bitmap);
    }

    private Bitmap d(String str) {
        return this.c.b(str);
    }

    private b(Context context) {
        this.b = new com.mbridge.msdk.foundation.same.e.b(context);
        com.mbridge.msdk.c.a aVarG = com.mbridge.msdk.c.b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        int iW = aVarG != null ? aVarG.w() : 10;
        this.c = new com.mbridge.msdk.foundation.same.a.a(((int) Runtime.getRuntime().maxMemory()) / (iW > 0 ? iW : 10));
    }

    public static b a(Context context) {
        if (f3406a == null) {
            f3406a = new b(context);
        }
        return f3406a;
    }

    public final void a() {
        this.c.b();
        LinkedHashMap<String, List<c>> linkedHashMap = this.d;
        if (linkedHashMap != null) {
            linkedHashMap.clear();
        }
    }

    public static void b() {
        f3406a.c();
    }

    public final void a(final String str, final c cVar) {
        final String strA = ad.a(str);
        if (f.a()) {
            final boolean z = false;
            final g gVar = null;
            if (ae.a(str) || ae.a(str) || ae.a(strA)) {
                return;
            }
            f.b().execute(new Runnable() { // from class: com.mbridge.msdk.foundation.same.c.b.2
                @Override // java.lang.Runnable
                public final void run() {
                    if (new File(strA).exists()) {
                        Bitmap bitmapA = a.a(strA);
                        if (bitmapA != null && !bitmapA.isRecycled()) {
                            g gVar2 = gVar;
                            if (gVar2 != null) {
                                try {
                                    Bitmap bitmapA2 = gVar2.a(bitmapA);
                                    if (bitmapA2 != null) {
                                        b.a(b.this, str, bitmapA2, cVar);
                                    } else {
                                        b.a(b.this, str, "image transform failed", cVar);
                                    }
                                    return;
                                } catch (Exception unused) {
                                    b.a(b.this, str, "image transform failed", cVar);
                                    return;
                                }
                            }
                            b.a(b.this, str, bitmapA, cVar);
                            return;
                        }
                        b.a(b.this, str, str, strA, true, z, cVar, gVar);
                        return;
                    }
                    b.a(b.this, str, str, strA, false, z, cVar, gVar);
                }
            });
            return;
        }
        if (ae.a(str) || ae.a(str) || ae.a(strA)) {
            return;
        }
        File file = new File(strA);
        Bitmap bitmapD = d(str);
        if (bitmapD != null && !bitmapD.isRecycled()) {
            cVar.onSuccessLoad(bitmapD, str);
            return;
        }
        if (file.exists()) {
            Bitmap bitmapA = a.a(strA);
            if (bitmapA != null && !bitmapA.isRecycled()) {
                a(str, bitmapA);
                cVar.onSuccessLoad(bitmapA, str);
                return;
            } else {
                a(str, str, strA, true, false, cVar);
                return;
            }
        }
        a(str, str, strA, false, false, cVar);
    }

    public final Bitmap a(String str) {
        Bitmap bitmapA;
        if (ae.a(str)) {
            return null;
        }
        String strA = ad.a(str);
        File file = new File(strA);
        if (d(str) != null) {
            return d(str);
        }
        if (!file.exists() || (bitmapA = a.a(strA)) == null) {
            return null;
        }
        a(str, bitmapA);
        return bitmapA;
    }

    public final boolean b(String str) {
        if (ae.a(str)) {
            return false;
        }
        return d(str) != null || new File(ad.a(str)).exists();
    }

    private void a(String str, String str2, String str3, boolean z, boolean z2, c cVar) {
        if (!this.d.containsKey(str2)) {
            LinkedList linkedList = new LinkedList();
            linkedList.add(cVar);
            this.d.put(str2, linkedList);
            this.b.b(a(str, str2, str3, z, z2));
            return;
        }
        LinkedList linkedList2 = (LinkedList) this.d.get(str2);
        if (linkedList2 == null || linkedList2.contains(cVar)) {
            return;
        }
        linkedList2.add(cVar);
    }

    private d a(String str, String str2, String str3, boolean z, boolean z2) {
        d.a aVar = new d.a() { // from class: com.mbridge.msdk.foundation.same.c.b.5
            @Override // com.mbridge.msdk.foundation.same.c.d.a
            public final void a(String str4, String str5) {
                Message messageObtainMessage = b.this.e.obtainMessage();
                messageObtainMessage.what = 1;
                Bundle bundle = new Bundle();
                bundle.putString("message_key", str4);
                bundle.putString("message_bitmap", str5);
                messageObtainMessage.setData(bundle);
                b.this.e.sendMessage(messageObtainMessage);
            }

            @Override // com.mbridge.msdk.foundation.same.c.d.a
            public final void b(String str4, String str5) {
                Message messageObtainMessage = b.this.e.obtainMessage();
                messageObtainMessage.what = 2;
                Bundle bundle = new Bundle();
                bundle.putString("message_key", str4);
                bundle.putString("message_message", str5);
                messageObtainMessage.setData(bundle);
                b.this.e.sendMessage(messageObtainMessage);
            }
        };
        d dVar = new d(str, str2, str3);
        dVar.a(z);
        dVar.a(aVar);
        return dVar;
    }

    public final void c() {
        com.mbridge.msdk.foundation.same.a.c<String, Bitmap> cVar = this.c;
        if (cVar != null) {
            cVar.b();
        }
    }

    public final void c(String str) {
        try {
            if (this.c == null || !this.c.a().contains(str)) {
                return;
            }
            this.c.a(str);
        } catch (Throwable th) {
            z.d("ImageLoader", th.getMessage());
        }
    }

    static /* synthetic */ void a(b bVar, final String str, final Bitmap bitmap, final c cVar) {
        if (MBridgeConstans.DEBUG) {
            z.a("ImageLoader", "handler image load success event");
        }
        if (cVar == null) {
            return;
        }
        bVar.e.post(new Runnable() { // from class: com.mbridge.msdk.foundation.same.c.b.3
            @Override // java.lang.Runnable
            public final void run() {
                c cVar2 = cVar;
                if (cVar2 != null) {
                    cVar2.onSuccessLoad(bitmap, str);
                }
            }
        });
    }

    static /* synthetic */ void a(b bVar, final String str, final String str2, final c cVar) {
        if (MBridgeConstans.DEBUG) {
            z.a("ImageLoader", "handler image load failed event");
        }
        if (cVar == null) {
            return;
        }
        bVar.e.post(new Runnable() { // from class: com.mbridge.msdk.foundation.same.c.b.4
            @Override // java.lang.Runnable
            public final void run() {
                c cVar2 = cVar;
                if (cVar2 != null) {
                    cVar2.onFailedLoad(str2, str);
                }
            }
        });
    }

    static /* synthetic */ void a(b bVar, final String str, String str2, String str3, boolean z, boolean z2, final c cVar, final g gVar) {
        if (!bVar.d.containsKey(str2)) {
            LinkedList linkedList = new LinkedList();
            linkedList.add(cVar);
            bVar.d.put(str2, linkedList);
            d.a aVar = new d.a() { // from class: com.mbridge.msdk.foundation.same.c.b.6
                @Override // com.mbridge.msdk.foundation.same.c.d.a
                public final void a(String str4, String str5) {
                    Bitmap bitmapA = a.a(str5);
                    if (bitmapA != null && !bitmapA.isRecycled()) {
                        g gVar2 = gVar;
                        if (gVar2 != null) {
                            try {
                                Bitmap bitmapA2 = gVar2.a(bitmapA);
                                if (bitmapA2 != null) {
                                    b.a(b.this, str, bitmapA2, cVar);
                                } else {
                                    b.a(b.this, str, "bitmap transform failed", cVar);
                                }
                                return;
                            } catch (Exception unused) {
                                b.a(b.this, str, "bitmap transform failed", cVar);
                                return;
                            }
                        }
                        b.a(b.this, str, bitmapA, cVar);
                        return;
                    }
                    b.a(b.this, str, "bitmap file not found", cVar);
                }

                @Override // com.mbridge.msdk.foundation.same.c.d.a
                public final void b(String str4, String str5) {
                    b.a(b.this, str, str5, cVar);
                }
            };
            d dVar = new d(str, str2, str3, gVar);
            dVar.a(z);
            dVar.a(aVar);
            com.mbridge.msdk.foundation.same.f.b.e().execute(dVar);
            return;
        }
        LinkedList linkedList2 = (LinkedList) bVar.d.get(str2);
        if (linkedList2 == null || linkedList2.contains(cVar)) {
            return;
        }
        linkedList2.add(cVar);
    }
}
