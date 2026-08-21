package com.kwad.sdk.crash.utils;

import android.os.Build;
import java.io.PrintWriter;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Set;

public final class f {

    static abstract class a {
        private a() {
        }

        a(byte b) {
            this();
        }

        abstract Object Fm();

        abstract void println(Object obj);
    }

    static class b extends a {
        private final PrintWriter aBR;

        b(PrintWriter printWriter) {
            super((byte) 0);
            this.aBR = printWriter;
        }

        @Override
        final Object Fm() {
            return this.aBR;
        }

        @Override
        final void println(Object obj) {
            this.aBR.println(obj);
        }
    }

    private static void a(Throwable th, a aVar) {
        Set setNewSetFromMap = Collections.newSetFromMap(new IdentityHashMap());
        setNewSetFromMap.add(th);
        synchronized (aVar.Fm()) {
            aVar.println(th);
            for (StackTraceElement stackTraceElement : th.getStackTrace()) {
                aVar.println("\tat " + stackTraceElement);
            }
            if (Build.VERSION.SDK_INT >= 19) {
                for (Throwable th2 : th.getSuppressed()) {
                    a(th2, aVar, "Suppressed: ", "\t", setNewSetFromMap);
                }
            }
            Throwable cause = th.getCause();
            if (cause != null) {
                a(cause, aVar, "Caused by: ", "", setNewSetFromMap);
            }
        }
    }

    private static void a(Throwable th, a aVar, String str, String str2, Set<Throwable> set) {
        while (!set.contains(th)) {
            set.add(th);
            StackTraceElement[] stackTrace = th.getStackTrace();
            aVar.println(str2 + str + th);
            int length = stackTrace.length;
            for (int i = 0; i < length; i++) {
                aVar.println(str2 + "\tat " + stackTrace[i]);
            }
            if (Build.VERSION.SDK_INT >= 19) {
                for (Throwable th2 : th.getSuppressed()) {
                    a(th2, aVar, "Suppressed: ", str2 + "\t", set);
                }
            }
            th = th.getCause();
            if (th == null) {
                return;
            } else {
                str = "Caused by: ";
            }
        }
        aVar.println("\t[CIRCULAR REFERENCE:" + th + "]");
    }

    public static void a(Throwable th, PrintWriter printWriter) {
        a(th, new b(printWriter));
    }
}
