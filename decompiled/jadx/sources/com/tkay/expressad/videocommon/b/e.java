package com.tkay.expressad.videocommon.b;

import android.webkit.URLUtil;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.videocommon.b.f;
import com.tkay.expressad.videocommon.b.g;

/* JADX INFO: loaded from: classes3.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7459a = "<tkayloadend></tkayloadend>";
    private static final String b = "DownLoadUtils";
    private static final int c = 20000;
    private static final int d = 30000;

    public static void a(final String str, final g.c cVar) {
        try {
            if (!w.a(str) && URLUtil.isNetworkUrl(str)) {
                f.a.f7462a.a(new com.tkay.expressad.foundation.g.g.a() { // from class: com.tkay.expressad.videocommon.b.e.1
                    final /* synthetic */ boolean f = true;

                    @Override // com.tkay.expressad.foundation.g.g.a
                    public final void b() {
                    }

                    @Override // com.tkay.expressad.foundation.g.g.a
                    public final void c() {
                    }

                    /* JADX WARN: Can't wrap try/catch for region: R(15:0|2|102|(2:100|3)|(8:5|6|114|7|(8:110|8|(1:10)(1:116)|45|(1:47)|(1:51)|(3:109|55|(2:60|61))|(2:75|(2:77|78)(1:118))(2:71|(2:73|74)(1:117)))|11|(4:13|103|14|(2:16|17))(1:20)|21)(2:30|31)|107|32|(1:34)|(1:36)|37|(0)|(1:65)|75|(0)(0)|(1:(0))) */
                    /* JADX WARN: Code restructure failed: missing block: B:38:0x008a, code lost:
                    
                        r2 = e;
                     */
                    /* JADX WARN: Multi-variable type inference failed */
                    /* JADX WARN: Removed duplicated region for block: B:105:0x0126 A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:109:0x00bf A[EXC_TOP_SPLITTER, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:118:? A[RETURN, SYNTHETIC] */
                    /* JADX WARN: Removed duplicated region for block: B:47:0x00aa A[Catch: Exception -> 0x00ae, TRY_ENTER, TryCatch #1 {Exception -> 0x00ae, blocks: (B:34:0x0080, B:36:0x0085, B:47:0x00aa, B:51:0x00b2), top: B:102:0x0002 }] */
                    /* JADX WARN: Removed duplicated region for block: B:51:0x00b2 A[Catch: Exception -> 0x00ae, TRY_LEAVE, TryCatch #1 {Exception -> 0x00ae, blocks: (B:34:0x0080, B:36:0x0085, B:47:0x00aa, B:51:0x00b2), top: B:102:0x0002 }] */
                    /* JADX WARN: Removed duplicated region for block: B:77:0x00f8 A[Catch: all -> 0x00d0, TRY_LEAVE, TryCatch #8 {all -> 0x00d0, blocks: (B:55:0x00bf, B:58:0x00c5, B:60:0x00c8, B:65:0x00d4, B:67:0x00da, B:69:0x00e0, B:71:0x00e8, B:73:0x00ec, B:75:0x00f4, B:77:0x00f8), top: B:109:0x00bf }] */
                    /* JADX WARN: Removed duplicated region for block: B:96:0x012e A[Catch: Exception -> 0x012a, TRY_LEAVE, TryCatch #4 {Exception -> 0x012a, blocks: (B:92:0x0126, B:96:0x012e), top: B:105:0x0126 }] */
                    /* JADX WARN: Type inference failed for: r0v0 */
                    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Exception] */
                    /* JADX WARN: Type inference failed for: r0v2 */
                    /* JADX WARN: Type inference failed for: r0v20, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r0v21, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r0v22 */
                    /* JADX WARN: Type inference failed for: r0v24 */
                    /* JADX WARN: Type inference failed for: r0v26 */
                    /* JADX WARN: Type inference failed for: r0v27 */
                    /* JADX WARN: Type inference failed for: r0v29 */
                    /* JADX WARN: Type inference failed for: r0v30 */
                    /* JADX WARN: Type inference failed for: r0v5 */
                    /* JADX WARN: Type inference failed for: r3v0 */
                    /* JADX WARN: Type inference failed for: r3v1 */
                    /* JADX WARN: Type inference failed for: r3v14, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r3v19 */
                    /* JADX WARN: Type inference failed for: r3v2, types: [java.io.InputStream] */
                    /* JADX WARN: Type inference failed for: r3v4 */
                    @Override // com.tkay.expressad.foundation.g.g.a
                    /*
                        Code decompiled incorrectly, please refer to instructions dump.
                        To view partially-correct add '--show-bad-code' argument
                    */
                    public final void a() throws java.lang.Throwable {
                        /*
                            Method dump skipped, instruction units count: 313
                            To view this dump add '--comments-level debug' option
                        */
                        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.videocommon.b.e.AnonymousClass1.a():void");
                    }
                });
                return;
            }
            cVar.a("url is error");
        } catch (Throwable th) {
            if (com.tkay.expressad.b.f6449a) {
                th.printStackTrace();
            }
        }
    }
}
