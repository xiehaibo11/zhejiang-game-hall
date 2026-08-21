package com.tkay.expressad.foundation.g.f.f;

import com.tkay.expressad.foundation.g.f.g;
import com.tkay.expressad.foundation.g.f.i;

/* JADX INFO: loaded from: classes3.dex */
public class a implements g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6912a = a.class.getSimpleName();
    private static final int b = 3000;
    private com.tkay.expressad.foundation.g.f.e.a c;
    private com.tkay.expressad.foundation.g.f.c d;

    public a(com.tkay.expressad.foundation.g.f.e.a aVar, com.tkay.expressad.foundation.g.f.c cVar) {
        this.c = aVar;
        this.d = cVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:105:0x0215  */
    /* JADX WARN: Removed duplicated region for block: B:164:0x0272 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00c6  */
    @Override // com.tkay.expressad.foundation.g.f.g
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.tkay.expressad.foundation.g.f.f.c a(com.tkay.expressad.foundation.g.f.i<?> r22) throws com.tkay.expressad.foundation.g.f.a.a {
        /*
            Method dump skipped, instruction units count: 857
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.foundation.g.f.f.a.a(com.tkay.expressad.foundation.g.f.i):com.tkay.expressad.foundation.g.f.f.c");
    }

    private static void a(long j, i<?> iVar, byte[] bArr, int i) {
        if (com.tkay.expressad.b.f6449a) {
            if (j > 3000) {
                try {
                    Object[] objArr = new Object[6];
                    objArr[0] = iVar.d();
                    objArr[1] = Integer.valueOf(iVar.a());
                    objArr[2] = Long.valueOf(j);
                    objArr[3] = bArr != null ? Integer.valueOf(bArr.length) : "null";
                    objArr[4] = Integer.valueOf(i);
                    objArr[5] = Integer.valueOf(iVar.l().c());
                    String.format("Slow HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]", objArr);
                    return;
                } catch (Exception unused) {
                    return;
                }
            }
            try {
                Object[] objArr2 = new Object[6];
                objArr2[0] = iVar.d();
                objArr2[1] = Integer.valueOf(iVar.a());
                objArr2[2] = Long.valueOf(j);
                objArr2[3] = bArr != null ? Integer.valueOf(bArr.length) : "null";
                objArr2[4] = Integer.valueOf(i);
                objArr2[5] = Integer.valueOf(iVar.l().c());
                String.format("Normal HTTP response for request=<%s> [method=%s] [lifetime=%d], [size=%s], [statusCode=%d], [retryCount=%s]", objArr2);
            } catch (Exception unused2) {
            }
        }
    }

    private static void a(String str, long j, i<?> iVar) {
        if (com.tkay.expressad.b.f6449a) {
            try {
                Object[] objArr = new Object[4];
                objArr[0] = iVar.d();
                objArr[1] = Long.valueOf(j);
                if (str == null) {
                    str = "null";
                }
                objArr[2] = str;
                objArr[3] = Integer.valueOf(iVar.l().c());
                String.format("HTTP exception for request=<%s> [lifetime=%d], [size=%s], [retryCount=%s]", objArr);
            } catch (Exception unused) {
            }
        }
    }

    private void a(i<?> iVar, com.tkay.expressad.foundation.g.f.a.a aVar) throws com.tkay.expressad.foundation.g.f.a.a {
        if (iVar.l().d()) {
            this.d.e(iVar);
            return;
        }
        throw aVar;
    }
}
