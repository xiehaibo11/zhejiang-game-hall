package com.mbridge.msdk.dycreator.g;

import java.util.Map;

/* JADX INFO: compiled from: ConcreteSubject.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d extends a {
    public final void a(Object obj) {
        i iVar;
        try {
            synchronized (this) {
                if (this.f3305a != null && this.f3305a.size() > 0) {
                    for (Map.Entry<Integer, Object> entry : this.f3305a.entrySet()) {
                        if (entry != null && (entry.getValue() instanceof i) && (iVar = (i) entry.getValue()) != null) {
                            iVar.a(obj);
                        }
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
