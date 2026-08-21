package com.meizu.cloud.pushsdk.c.e;

import com.meizu.cloud.pushsdk.c.c.e;
import com.meizu.cloud.pushsdk.c.c.i;
import com.meizu.cloud.pushsdk.c.c.k;
import java.io.File;
import java.io.IOException;

public final class a {
    private static String a;

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
    */
    public static void a(i.a aVar, com.meizu.cloud.pushsdk.c.a.b bVar) {
        String strH;
        com.meizu.cloud.pushsdk.c.c.c cVarO;
        if (bVar.h() == null) {
            String str = a;
            if (str != null) {
                bVar.a(str);
                strH = a;
            }
            cVarO = bVar.o();
            if (cVarO == null) {
                aVar.a(cVarO);
                if (bVar.h() == null || cVarO.b().contains("User-Agent")) {
                    return;
                }
                aVar.a("User-Agent", bVar.h());
                return;
            }
            return;
        }
        strH = bVar.h();
        aVar.a("User-Agent", strH);
        cVarO = bVar.o();
        if (cVarO == null) {
        }
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
