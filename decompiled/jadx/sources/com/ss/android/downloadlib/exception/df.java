package com.ss.android.downloadlib.exception;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes3.dex */
public class df {

    public interface rg<T> {
        T df();
    }

    public static <T> T rg(boolean z, String str, rg<T> rgVar) {
        try {
            return rgVar.df();
        } catch (Throwable th) {
            if (th instanceof com.ss.android.downloadlib.exception.rg) {
                throw th;
            }
            q.rg().rg(z, th, str);
            if (TextUtils.isEmpty(str)) {
                throw th;
            }
            return null;
        }
    }

    public static <T> T rg(rg<T> rgVar) {
        return (T) rg(true, null, rgVar);
    }

    public static void rg(final Runnable runnable) {
        rg(new rg<Void>() { // from class: com.ss.android.downloadlib.exception.df.1
            @Override // com.ss.android.downloadlib.exception.df.rg
            /* JADX INFO: renamed from: rg, reason: merged with bridge method [inline-methods] */
            public Void df() {
                runnable.run();
                return null;
            }
        });
    }
}
