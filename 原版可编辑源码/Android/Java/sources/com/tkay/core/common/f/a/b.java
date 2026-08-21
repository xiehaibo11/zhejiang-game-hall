package com.tkay.core.common.f.a;

import android.util.Log;
import com.tkay.core.api.TYAdAppInfo;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.j;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class b extends h implements Serializable {
    final String a = b.class.getSimpleName();

    @Override
    public final boolean L() {
        return true;
    }

    @Override
    public final int d() {
        return 10;
    }

    @Override
    public final String m() {
        return "";
    }

    public b(e eVar) {
        n(eVar.getIconImageUrl());
        f(eVar.getStarRating().intValue());
        p(eVar.getMainImageUrl());
        l(eVar.getTitle());
        r(eVar.getCallToActionText());
        m(eVar.getDescriptionText());
        q(eVar.getAdChoiceIconUrl());
        a(eVar.getAdLogo());
        if (eVar.getAdAppInfo() != null) {
            if (m.a().z()) {
                Log.i(this.a, "AdAppInfo:" + eVar.getAdAppInfo().toString());
            }
            TYAdAppInfo adAppInfo = eVar.getAdAppInfo();
            y(adAppInfo.getPublisher());
            z(adAppInfo.getAppVersion());
            A(adAppInfo.getAppPrivacyUrl());
            B(adAppInfo.getAppPermissonUrl());
        }
    }

    @Override
    public final List<String> b(j jVar) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(u());
        return arrayList;
    }
}
