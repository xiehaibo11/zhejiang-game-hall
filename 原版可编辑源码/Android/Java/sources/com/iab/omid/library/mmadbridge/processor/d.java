package com.iab.omid.library.mmadbridge.processor;

import android.os.Build;
import android.view.View;
import android.view.ViewGroup;
import com.iab.omid.library.mmadbridge.processor.a;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import org.json.JSONObject;

public class d implements a {
    private final int[] a = new int[2];

    private void a(ViewGroup viewGroup, JSONObject jSONObject, a.a aVar, boolean z) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            aVar.a(viewGroup.getChildAt(i), this, jSONObject, z);
        }
    }

    private void b(ViewGroup viewGroup, JSONObject jSONObject, a.a aVar, boolean z) {
        HashMap map = new HashMap();
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            ArrayList arrayList = (ArrayList) map.get(Float.valueOf(childAt.getZ()));
            if (arrayList == null) {
                arrayList = new ArrayList();
                map.put(Float.valueOf(childAt.getZ()), arrayList);
            }
            arrayList.add(childAt);
        }
        ArrayList arrayList2 = new ArrayList(map.keySet());
        Collections.sort(arrayList2);
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            Iterator it2 = ((ArrayList) map.get((Float) it.next())).iterator();
            while (it2.hasNext()) {
                aVar.a((View) it2.next(), this, jSONObject, z);
            }
        }
    }

    @Override
    public JSONObject a(View view) {
        if (view == null) {
            return com.iab.omid.library.mmadbridge.utils.c.a(0, 0, 0, 0);
        }
        int width = view.getWidth();
        int height = view.getHeight();
        view.getLocationOnScreen(this.a);
        int[] iArr = this.a;
        return com.iab.omid.library.mmadbridge.utils.c.a(iArr[0], iArr[1], width, height);
    }

    @Override
    public void a(View view, JSONObject jSONObject, a.a aVar, boolean z, boolean z2) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            if (!z || Build.VERSION.SDK_INT < 21) {
                a(viewGroup, jSONObject, aVar, z2);
            } else {
                b(viewGroup, jSONObject, aVar, z2);
            }
        }
    }
}
