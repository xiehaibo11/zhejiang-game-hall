package com.mbridge.msdk.dycreator.g;

import java.util.Map;

public final class h extends a {
    public final void a(Object obj) {
        g gVar;
        if (this.a == null || this.a.size() <= 0) {
            return;
        }
        for (Map.Entry<Integer, Object> entry : this.a.entrySet()) {
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
