package com.mbridge.msdk.dycreator.g;

import java.util.Map;

/* JADX INFO: compiled from: ClickSubject.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c extends a {
    public final void a(Object obj) {
        b bVar;
        if (this.f3305a == null || this.f3305a.size() <= 0) {
            return;
        }
        for (Map.Entry<Integer, Object> entry : this.f3305a.entrySet()) {
            if (entry != null) {
                try {
                    if (entry.getValue() != null && (bVar = (b) entry.getValue()) != null) {
                        bVar.a(obj);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
