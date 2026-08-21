package com.iab.omid.library.mmadbridge.processor;

import android.view.View;
import com.iab.omid.library.mmadbridge.processor.a;
import com.iab.omid.library.mmadbridge.utils.e;
import com.iab.omid.library.mmadbridge.utils.h;
import java.util.ArrayList;
import java.util.Collection;
import java.util.IdentityHashMap;
import java.util.Iterator;
import org.json.JSONObject;

public class c implements a {
    private final a a;

    public c(a aVar) {
        this.a = aVar;
    }

    ArrayList<View> a() {
        View rootView;
        ArrayList<View> arrayList = new ArrayList<>();
        com.iab.omid.library.mmadbridge.internal.c cVarC = com.iab.omid.library.mmadbridge.internal.c.c();
        if (cVarC != null) {
            Collection<com.iab.omid.library.mmadbridge.adsession.a> collectionA = cVarC.a();
            IdentityHashMap identityHashMap = new IdentityHashMap((collectionA.size() * 2) + 3);
            Iterator<com.iab.omid.library.mmadbridge.adsession.a> it = collectionA.iterator();
            while (it.hasNext()) {
                View viewC = it.next().c();
                if (viewC != null && h.e(viewC) && (rootView = viewC.getRootView()) != null && !identityHashMap.containsKey(rootView)) {
                    identityHashMap.put(rootView, rootView);
                    float fC = h.c(rootView);
                    int size = arrayList.size();
                    while (size > 0 && h.c(arrayList.get(size - 1)) > fC) {
                        size--;
                    }
                    arrayList.add(size, rootView);
                }
            }
        }
        return arrayList;
    }

    @Override
    public JSONObject a(View view) {
        JSONObject jSONObjectA = com.iab.omid.library.mmadbridge.utils.c.a(0, 0, 0, 0);
        com.iab.omid.library.mmadbridge.utils.c.a(jSONObjectA, e.a());
        return jSONObjectA;
    }

    @Override
    public void a(View view, JSONObject jSONObject, a.a aVar, boolean z, boolean z2) {
        Iterator<View> it = a().iterator();
        while (it.hasNext()) {
            aVar.a(it.next(), this.a, jSONObject, z2);
        }
    }
}
