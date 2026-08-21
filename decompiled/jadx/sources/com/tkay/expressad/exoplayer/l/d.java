package com.tkay.expressad.exoplayer.l;

import com.tkay.expressad.exoplayer.k.p;
import com.tkay.expressad.exoplayer.k.s;
import com.tkay.expressad.exoplayer.t;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List<byte[]> f6787a;
    public final int b;

    public static d a(s sVar) throws t {
        try {
            sVar.d(21);
            int iD = sVar.d() & 3;
            int iD2 = sVar.d();
            int iC = sVar.c();
            int i = 0;
            for (int i2 = 0; i2 < iD2; i2++) {
                sVar.d(1);
                int iE = sVar.e();
                for (int i3 = 0; i3 < iE; i3++) {
                    int iE2 = sVar.e();
                    i += iE2 + 4;
                    sVar.d(iE2);
                }
            }
            sVar.c(iC);
            byte[] bArr = new byte[i];
            int i4 = 0;
            for (int i5 = 0; i5 < iD2; i5++) {
                sVar.d(1);
                int iE3 = sVar.e();
                for (int i6 = 0; i6 < iE3; i6++) {
                    int iE4 = sVar.e();
                    System.arraycopy(p.f6769a, 0, bArr, i4, p.f6769a.length);
                    int length = i4 + p.f6769a.length;
                    System.arraycopy(sVar.f6774a, sVar.c(), bArr, length, iE4);
                    i4 = length + iE4;
                    sVar.d(iE4);
                }
            }
            return new d(i == 0 ? null : Collections.singletonList(bArr), iD + 1);
        } catch (ArrayIndexOutOfBoundsException e) {
            throw new t("Error parsing HEVC config", e);
        }
    }

    private d(List<byte[]> list, int i) {
        this.f6787a = list;
        this.b = i;
    }
}
