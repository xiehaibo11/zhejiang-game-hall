package com.xiaomi.push;

import com.xiaomi.mipush.sdk.Constants;
import java.net.UnknownHostException;

final class ff {

    class a {
        ez a;
        String a;

        a() {
        }
    }

    static a a(Exception exc) {
        a(exc);
        boolean z = exc instanceof gh;
        Throwable thA = exc;
        if (z) {
            gh ghVar = (gh) exc;
            thA = exc;
            if (ghVar.a() != null) {
                thA = ghVar.a();
            }
        }
        a aVar = new a();
        String message = thA.getMessage();
        if (thA.getCause() != null) {
            message = thA.getCause().getMessage();
        }
        String str = thA.getClass().getSimpleName() + Constants.COLON_SEPARATOR + message;
        int iA = fy.a(thA);
        if (iA != 0) {
            aVar.a = ez.a(ez.l.a() + iA);
        }
        if (aVar.a == null) {
            aVar.a = ez.t;
        }
        if (aVar.a == ez.t) {
            aVar.a = str;
        }
        return aVar;
    }

    private static void a(Exception exc) {
        if (exc == null) {
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0083  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static a b(Exception exc) {
        ez ezVar;
        Throwable cause;
        a(exc);
        boolean z = exc instanceof gh;
        Throwable thA = exc;
        if (z) {
            gh ghVar = (gh) exc;
            thA = exc;
            if (ghVar.a() != null) {
                thA = ghVar.a();
            }
        }
        a aVar = new a();
        String message = thA.getMessage();
        if (thA.getCause() != null) {
            message = thA.getCause().getMessage();
        }
        int iA = fy.a(thA);
        String str = thA.getClass().getSimpleName() + Constants.COLON_SEPARATOR + message;
        if (iA != 0) {
            aVar.a = ez.a(ez.v.a() + iA);
            if (aVar.a == ez.G && (cause = thA.getCause()) != null && (cause instanceof UnknownHostException)) {
                ezVar = ez.F;
            }
            if (aVar.a != ez.D || aVar.a == ez.E || aVar.a == ez.G) {
                aVar.a = str;
            }
            return aVar;
        }
        ezVar = ez.E;
        aVar.a = ezVar;
        if (aVar.a != ez.D) {
            aVar.a = str;
        }
        return aVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x0090  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static a c(Exception exc) {
        ez ezVar;
        a(exc);
        boolean z = exc instanceof gh;
        Throwable thA = exc;
        if (z) {
            gh ghVar = (gh) exc;
            thA = exc;
            if (ghVar.a() != null) {
                thA = ghVar.a();
            }
        }
        a aVar = new a();
        String message = thA.getMessage();
        if (thA.getCause() != null) {
            message = thA.getCause().getMessage();
        }
        int iA = fy.a(thA);
        String str = thA.getClass().getSimpleName() + Constants.COLON_SEPARATOR + message;
        if (iA == 105) {
            ezVar = ez.L;
        } else if (iA == 199) {
            ezVar = ez.O;
        } else {
            if (iA == 499) {
                aVar.a = ez.R;
                if (message.startsWith("Terminal binding condition encountered: item-not-found")) {
                    ezVar = ez.Q;
                }
                if (aVar.a != ez.O || aVar.a == ez.P || aVar.a == ez.R) {
                    aVar.a = str;
                }
                return aVar;
            }
            ezVar = iA != 109 ? iA != 110 ? ez.P : ez.N : ez.M;
        }
        aVar.a = ezVar;
        if (aVar.a != ez.O) {
            aVar.a = str;
        }
        return aVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0082  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static a d(Exception exc) {
        ez ezVar;
        a(exc);
        boolean z = exc instanceof gh;
        Throwable thA = exc;
        if (z) {
            gh ghVar = (gh) exc;
            thA = exc;
            if (ghVar.a() != null) {
                thA = ghVar.a();
            }
        }
        a aVar = new a();
        String message = thA.getMessage();
        int iA = fy.a(thA);
        String str = thA.getClass().getSimpleName() + Constants.COLON_SEPARATOR + message;
        if (iA == 105) {
            ezVar = ez.X;
        } else if (iA == 199) {
            ezVar = ez.aa;
        } else {
            if (iA == 499) {
                aVar.a = ez.ad;
                if (message.startsWith("Terminal binding condition encountered: item-not-found")) {
                    ezVar = ez.ac;
                }
                if (aVar.a != ez.aa || aVar.a == ez.ab || aVar.a == ez.ad) {
                    aVar.a = str;
                }
                return aVar;
            }
            ezVar = iA != 109 ? iA != 110 ? ez.ab : ez.Z : ez.Y;
        }
        aVar.a = ezVar;
        if (aVar.a != ez.aa) {
            aVar.a = str;
        }
        return aVar;
    }
}
