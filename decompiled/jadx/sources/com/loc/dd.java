package com.loc;

import android.util.Base64;
import java.nio.charset.StandardCharsets;

/* JADX INFO: compiled from: CollectionUploader.java */
/* JADX INFO: loaded from: classes2.dex */
public final class dd {
    public static boolean a(byte[] bArr) {
        String str;
        if (bArr == null) {
            return false;
        }
        byte[] bArr2 = null;
        try {
            ek ekVar = new ek();
            ekVar.b.put("Content-Type", "application/octet-stream");
            ekVar.b.put("aps_c_src", Base64.encodeToString(ek.a().getBytes(), 2));
            ekVar.b.put("aps_c_key", Base64.encodeToString(ek.b().getBytes(), 2));
            ekVar.d = bArr;
            if (cu.f2915a) {
                str = "http://cgicol.amap.com/collection/collectData?src=baseCol&ver=v74&";
            } else {
                str = (cu.b ? "https://" : "http://") + "cgicol.amap.com/collection/collectData?src=baseCol&ver=v74&";
            }
            ekVar.f2943a = str;
            el elVarA = dy.b().a(ekVar);
            if (elVarA != null && elVarA.f2944a == 200) {
                bArr2 = elVarA.c;
            }
            if (bArr2 != null) {
                return "true".equals(new String(bArr2, StandardCharsets.UTF_8));
            }
            return false;
        } catch (Exception e) {
            ej.a(e);
            return false;
        }
    }
}
