package com.mbridge.msdk.mbjscommon.windvane;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.mbjscommon.b.a;
import java.util.regex.Pattern;

/* JADX INFO: compiled from: WindVaneJsBridge.java */
/* JADX INFO: loaded from: classes2.dex */
public final class i implements Handler.Callback, b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Pattern f3738a;
    protected String b;
    protected Context d;
    protected WindVaneWebView e;
    protected final int c = 1;
    protected Handler f = new Handler(Looper.getMainLooper(), this);

    public i(Context context) {
        this.d = context;
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.b
    public final void a(WindVaneWebView windVaneWebView) {
        this.e = windVaneWebView;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0052  */
    @Override // com.mbridge.msdk.mbjscommon.windvane.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void b(java.lang.String r8) {
        /*
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 2
            r1 = 0
            r2 = 1
            if (r8 != 0) goto Ld
            goto L52
        Ld:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r3 = r7.e
            com.mbridge.msdk.mbjscommon.windvane.a r3 = com.mbridge.msdk.mbjscommon.mraid.c.a(r3, r8)
            if (r3 == 0) goto L1a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r7.e
            r3.f3733a = r8
            goto L53
        L1a:
            java.util.regex.Pattern r3 = r7.f3738a
            java.util.regex.Matcher r8 = r3.matcher(r8)
            boolean r3 = r8.matches()
            if (r3 == 0) goto L52
            com.mbridge.msdk.mbjscommon.windvane.a r3 = new com.mbridge.msdk.mbjscommon.windvane.a
            r3.<init>()
            int r4 = r8.groupCount()
            r5 = 5
            if (r4 < r5) goto L38
            java.lang.String r5 = r8.group(r5)
            r3.f = r5
        L38:
            r5 = 3
            if (r4 < r5) goto L52
            java.lang.String r4 = r8.group(r2)
            r3.d = r4
            java.lang.String r4 = r8.group(r0)
            r3.g = r4
            java.lang.String r8 = r8.group(r5)
            r3.e = r8
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r7.e
            r3.f3733a = r8
            goto L53
        L52:
            r3 = r1
        L53:
            if (r3 != 0) goto L56
            return
        L56:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r3.f3733a
            if (r8 != 0) goto L5b
            goto L63
        L5b:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r8 = r3.f3733a
            java.lang.String r1 = r3.d
            java.lang.Object r1 = r8.getJsObject(r1)
        L63:
            if (r1 != 0) goto L66
            goto Laf
        L66:
            android.content.Context r8 = r7.d     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.Class r4 = r1.getClass()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            com.mbridge.msdk.mbjscommon.b.a$c r8 = com.mbridge.msdk.mbjscommon.b.a.a(r8, r4)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.String r4 = r3.e     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r5 = 0
            java.lang.Class<java.lang.Object> r6 = java.lang.Object.class
            r0[r5] = r6     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r0[r2] = r5     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            com.mbridge.msdk.mbjscommon.b.a$d r8 = r8.a(r4, r0)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r8.a()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            if (r1 == 0) goto Laf
            boolean r0 = r1 instanceof com.mbridge.msdk.mbjscommon.windvane.j     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            if (r0 == 0) goto Laf
            r3.b = r1     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r3.c = r8     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r3.b = r1     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            android.os.Message r8 = android.os.Message.obtain()     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r8.what = r2     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r8.obj = r3     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            android.os.Handler r0 = r7.f     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            r0.sendMessage(r8)     // Catch: java.lang.Exception -> La6 com.mbridge.msdk.mbjscommon.b.a.b.C0270a -> Lab
            goto Laf
        La6:
            r8 = move-exception
            r8.printStackTrace()
            goto Laf
        Lab:
            r8 = move-exception
            r8.printStackTrace()
        Laf:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbjscommon.windvane.i.b(java.lang.String):void");
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        a aVar = (a) message.obj;
        if (aVar == null) {
            return false;
        }
        try {
            if (message.what == 1) {
                Object obj = aVar.b;
                a.d dVar = aVar.c;
                Object[] objArr = new Object[2];
                objArr[0] = aVar;
                objArr[1] = TextUtils.isEmpty(aVar.f) ? "{}" : aVar.f;
                dVar.a(obj, objArr);
                return true;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.b
    public final boolean a(String str) {
        if (!k.a(str)) {
            return false;
        }
        this.f3738a = k.b(str);
        this.b = str;
        return true;
    }
}
