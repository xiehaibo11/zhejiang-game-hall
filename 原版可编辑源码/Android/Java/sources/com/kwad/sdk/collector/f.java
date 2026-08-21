package com.kwad.sdk.collector;

import android.content.Context;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.aj;
import com.kwad.sdk.utils.al;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;

public final class f {
    private static g aI(Context context) {
        boolean zCq = al.cq(context);
        com.kwad.sdk.core.e.c.d("InfoCollector", "queryAccessibilityServicePermission result: " + zCq);
        return new g(com.kuaishou.weapon.p0.g.k, zCq ? g.PERMISSION_GRANTED : g.PERMISSION_DENIED);
    }

    private static List<g> aJ(Context context) {
        String[] strArrCp;
        ArrayList arrayList = new ArrayList();
        if (context != null && (strArrCp = aj.cp(context)) != null) {
            for (String str : strArrCp) {
                int iAo = al.ao(context, str);
                arrayList.add(new g(str, iAo == 0 ? g.PERMISSION_GRANTED : iAo == -1 ? g.PERMISSION_DENIED : g.ajL));
            }
        }
        return arrayList;
    }

    public static JSONArray yH() {
        Context context = ServiceProvider.getContext();
        List<g> listAJ = aJ(context);
        listAJ.add(aI(context));
        return g.p(listAJ);
    }
}
