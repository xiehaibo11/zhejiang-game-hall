package com.mbridge.msdk.dycreator.g;

import java.util.Map;

public final class c extends a {
    public final void a(Object obj) {
        b bVar;
        if (this.a == null || this.a.size() <= 0) {
            return;
        }
        for (Map.Entry<Integer, Object> entry : this.a.entrySet()) {
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
