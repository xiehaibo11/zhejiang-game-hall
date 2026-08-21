package com.mbridge.msdk.dycreator.g;

import java.util.Map;

/* JADX INFO: compiled from: ReportSubject.java */
/* JADX INFO: loaded from: classes2.dex */
public final class h extends a {
    public final void a(Object obj) {
        g gVar;
        if (this.f3305a == null || this.f3305a.size() <= 0) {
            return;
        }
        for (Map.Entry<Integer, Object> entry : this.f3305a.entrySet()) {
            if (entry != null) {
                try {
                    if (entry.getValue() != null && (gVar = (g) entry.getValue()) != null) {
                        gVar.a(obj);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
