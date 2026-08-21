package com.tkay.core.common.f.a;

import android.util.Log;
import com.tkay.core.api.TYAdAppInfo;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.j;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class b extends h implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f6130a = b.class.getSimpleName();

    @Override // com.tkay.core.common.f.h
    public final boolean L() {
        return true;
    }

    @Override // com.tkay.core.common.f.h
    public final int d() {
        return 10;
    }

    @Override // com.tkay.core.common.f.h
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
                Log.i(this.f6130a, "AdAppInfo:" + eVar.getAdAppInfo().toString());
            }
            TYAdAppInfo adAppInfo = eVar.getAdAppInfo();
            y(adAppInfo.getPublisher());
            z(adAppInfo.getAppVersion());
            A(adAppInfo.getAppPrivacyUrl());
            B(adAppInfo.getAppPermissonUrl());
        }
    }

    @Override // com.tkay.core.common.f.h
    public final List<String> b(j jVar) {
        ArrayList arrayList = new ArrayList();
        arrayList.add(u());
        return arrayList;
    }
}
