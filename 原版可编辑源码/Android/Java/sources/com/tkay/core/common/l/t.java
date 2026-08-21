package com.tkay.core.common.l;

import com.tkay.core.common.f.aj;
import java.util.List;

public final class t {
    public static boolean a(List<aj> list) {
        if (list != null) {
            int size = list.size();
            for (int i = 0; i < size; i++) {
                aj ajVar = list.get(i);
                if (ajVar != null && ajVar.Z()) {
                    return true;
                }
            }
        }
        return false;
    }

    public static boolean a(aj ajVar) {
        return ajVar.c() == 15 && !ajVar.j();
    }

    public static boolean a(String str, aj ajVar) {
        if (ajVar == null) {
            return false;
        }
        if (com.tkay.core.common.a.a().a(str, ajVar) != null) {
            return true;
        }
        com.tkay.core.common.f.l lVarA = com.tkay.core.b.c.a().a(ajVar);
        return (lVarA == null || lVarA.a()) ? false : true;
    }
}
