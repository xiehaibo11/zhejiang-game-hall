package com.kwad.framework.filedownloader.f;

import android.content.Context;
import com.kwad.framework.filedownloader.exception.PathConflictException;
import com.kwad.framework.filedownloader.y;
import java.io.File;

public final class c {
    private static Context aeH;

    public interface a {
        int H(long j);
    }

    public interface b {
        com.kwad.framework.filedownloader.a.b aZ(String str);
    }

    public interface c {
        com.kwad.framework.filedownloader.b.a vN();
    }

    public interface d {
        int f(String str, String str2, boolean z);

        int g(String str, String str2, boolean z);
    }

    public interface e {
        com.kwad.framework.filedownloader.e.a c(File file);
    }

    public static boolean a(int i, long j, String str, String str2, y yVar) {
        int iL;
        if (str2 == null || str == null || (iL = yVar.l(str, i)) == 0) {
            return false;
        }
        com.kwad.framework.filedownloader.message.e.vg().s(com.kwad.framework.filedownloader.message.f.a(i, j, new PathConflictException(iL, str, str2)));
        return true;
    }

    public static boolean a(int i, com.kwad.framework.filedownloader.d.c cVar, y yVar, boolean z) {
        if (!yVar.a(cVar)) {
            return false;
        }
        com.kwad.framework.filedownloader.message.e.vg().s(com.kwad.framework.filedownloader.message.f.a(i, cVar.vm(), cVar.getTotal(), z));
        return true;
    }

    public static boolean a(int i, String str, boolean z, boolean z2) {
        if (!z && str != null) {
            File file = new File(str);
            if (file.exists()) {
                com.kwad.framework.filedownloader.message.e.vg().s(com.kwad.framework.filedownloader.message.f.a(i, file, z2));
                return true;
            }
        }
        return false;
    }

    public static void ap(Context context) {
        aeH = context;
    }

    public static Context vM() {
        return aeH;
    }
}
