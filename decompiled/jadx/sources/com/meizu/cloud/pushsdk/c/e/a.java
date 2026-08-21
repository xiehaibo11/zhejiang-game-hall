package com.meizu.cloud.pushsdk.c.e;

import com.meizu.cloud.pushsdk.c.c.e;
import com.meizu.cloud.pushsdk.c.c.i;
import com.meizu.cloud.pushsdk.c.c.k;
import java.io.File;
import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f4544a;

    public static k a(com.meizu.cloud.pushsdk.c.a.b bVar) throws com.meizu.cloud.pushsdk.c.b.a {
        try {
            i.a aVarA = new i.a().a(bVar.e());
            a(aVarA, bVar);
            int iD = bVar.d();
            if (iD == 0) {
                aVarA = aVarA.a();
            } else if (iD == 1) {
                aVarA = aVarA.a(bVar.m());
            } else if (iD == 2) {
                aVarA = aVarA.c(bVar.m());
            } else if (iD == 3) {
                aVarA = aVarA.b(bVar.m());
            } else if (iD == 4) {
                aVarA = aVarA.b();
            } else if (iD == 5) {
                aVarA = aVarA.d(bVar.m());
            }
            i iVarC = aVarA.c();
            bVar.a(new e());
            return bVar.l().a(iVarC);
        } catch (IOException e) {
            throw new com.meizu.cloud.pushsdk.c.b.a(e);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0020  */
    /* JADX WARN: Removed duplicated region for block: B:17:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(com.meizu.cloud.pushsdk.c.c.i.a r3, com.meizu.cloud.pushsdk.c.a.b r4) {
        /*
            java.lang.String r0 = r4.h()
            java.lang.String r1 = "User-Agent"
            if (r0 == 0) goto L10
            java.lang.String r0 = r4.h()
        Lc:
            r3.a(r1, r0)
            goto L1a
        L10:
            java.lang.String r0 = com.meizu.cloud.pushsdk.c.e.a.f4544a
            if (r0 == 0) goto L1a
            r4.a(r0)
            java.lang.String r0 = com.meizu.cloud.pushsdk.c.e.a.f4544a
            goto Lc
        L1a:
            com.meizu.cloud.pushsdk.c.c.c r0 = r4.o()
            if (r0 == 0) goto L3a
            r3.a(r0)
            java.lang.String r2 = r4.h()
            if (r2 == 0) goto L3a
            java.util.Set r0 = r0.b()
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L3a
            java.lang.String r4 = r4.h()
            r3.a(r1, r4)
        L3a:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.meizu.cloud.pushsdk.c.e.a.a(com.meizu.cloud.pushsdk.c.c.i$a, com.meizu.cloud.pushsdk.c.a.b):void");
    }

    public static k b(com.meizu.cloud.pushsdk.c.a.b bVar) {
        try {
            i.a aVarA = new i.a().a(bVar.e());
            a(aVarA, bVar);
            i iVarC = aVarA.a().c();
            bVar.a(new e());
            k kVarA = bVar.l().a(iVarC);
            com.meizu.cloud.pushsdk.c.h.b.a(kVarA, bVar.j(), bVar.k());
            return kVarA;
        } catch (IOException e) {
            try {
                File file = new File(bVar.j() + File.separator + bVar.k());
                if (file.exists()) {
                    file.delete();
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
            throw new com.meizu.cloud.pushsdk.c.b.a(e);
        }
    }

    public static k c(com.meizu.cloud.pushsdk.c.a.b bVar) throws com.meizu.cloud.pushsdk.c.b.a {
        try {
            i.a aVarA = new i.a().a(bVar.e());
            a(aVarA, bVar);
            i iVarC = aVarA.a(new b(bVar.n(), bVar.i())).c();
            bVar.a(new e());
            return bVar.l().a(iVarC);
        } catch (IOException e) {
            throw new com.meizu.cloud.pushsdk.c.b.a(e);
        }
    }
}
