package com.kwad.sdk.utils.a;

import com.kwad.sdk.utils.a.c;
import java.util.LinkedHashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
final class g implements c.b<Set<String>> {
    static final g aLz = new g();

    private g() {
    }

    private static byte[] e(Set<String> set) {
        if (set.isEmpty()) {
            return new byte[0];
        }
        int size = set.size();
        int[] iArr = new int[size];
        String[] strArr = new String[size];
        int iDh = 0;
        int i = 0;
        for (String str : set) {
            if (str == null) {
                iDh += 5;
                iArr[i] = -1;
            } else {
                int iFS = b.fS(str);
                strArr[i] = str;
                iArr[i] = iFS;
                iDh += b.dh(iFS) + iFS;
            }
            i++;
        }
        b bVar = new b(iDh);
        for (int i2 = 0; i2 < size; i2++) {
            int i3 = iArr[i2];
            bVar.dg(i3);
            if (i3 >= 0) {
                bVar.fR(strArr[i2]);
            }
        }
        return bVar.aKG;
    }

    private static Set<String> h(byte[] bArr, int i, int i2) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        if (i2 > 0) {
            b bVar = new b(bArr, i);
            int i3 = i + i2;
            while (bVar.position < i3) {
                linkedHashSet.add(bVar.getString(bVar.Kg()));
            }
            if (bVar.position != i3) {
                throw new IllegalArgumentException("Invalid String set");
            }
        }
        return linkedHashSet;
    }

    @Override // com.kwad.sdk.utils.a.c.b
    public final String KA() {
        return "StringSet";
    }

    @Override // com.kwad.sdk.utils.a.c.b
    public final /* synthetic */ Set<String> g(byte[] bArr, int i, int i2) {
        return h(bArr, i, i2);
    }

    @Override // com.kwad.sdk.utils.a.c.b
    public final /* synthetic */ byte[] o(Set<String> set) {
        return e(set);
    }
}
