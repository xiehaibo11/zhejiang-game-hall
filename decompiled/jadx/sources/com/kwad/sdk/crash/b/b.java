package com.kwad.sdk.crash.b;

import android.text.TextUtils;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private Set<String> aAb = new HashSet();
    private Set<String> aAc = new HashSet();

    public final synchronized String[] EE() {
        return (String[]) this.aAc.toArray(new String[this.aAc.size()]);
    }

    public final synchronized String[] EQ() {
        return (String[]) this.aAb.toArray(new String[this.aAb.size()]);
    }

    public final synchronized void a(String[] strArr, String[] strArr2) {
        if (strArr != null) {
            try {
                if (strArr.length > 0) {
                    for (String str : strArr) {
                        if (!TextUtils.isEmpty(str)) {
                            this.aAb.add(str);
                        }
                    }
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        if (strArr2 != null && strArr2.length > 0) {
            for (String str2 : strArr2) {
                if (!TextUtils.isEmpty(str2)) {
                    this.aAc.add(str2);
                }
            }
        }
    }
}
