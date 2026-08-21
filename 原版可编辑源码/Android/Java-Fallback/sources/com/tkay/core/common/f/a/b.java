package com.tkay.core.common.f.a;

public class b extends com.tkay.core.common.f.h implements java.io.Serializable {
    final java.lang.String a;

    public b(com.tkay.core.common.f.a.e r4) {
            r3 = this;
            r3.<init>()
            java.lang.Class<com.tkay.core.common.f.a.b> r0 = com.tkay.core.common.f.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            r3.a = r0
            java.lang.String r0 = r4.getIconImageUrl()
            r3.n(r0)
            java.lang.Double r0 = r4.getStarRating()
            int r0 = r0.intValue()
            r3.f(r0)
            java.lang.String r0 = r4.getMainImageUrl()
            r3.p(r0)
            java.lang.String r0 = r4.getTitle()
            r3.l(r0)
            java.lang.String r0 = r4.getCallToActionText()
            r3.r(r0)
            java.lang.String r0 = r4.getDescriptionText()
            r3.m(r0)
            java.lang.String r0 = r4.getAdChoiceIconUrl()
            r3.q(r0)
            android.graphics.Bitmap r0 = r4.getAdLogo()
            r3.a(r0)
            com.tkay.core.api.TYAdAppInfo r0 = r4.getAdAppInfo()
            if (r0 == 0) goto L92
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            boolean r0 = r0.z()
            if (r0 == 0) goto L72
            java.lang.String r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "AdAppInfo:"
            r1.<init>(r2)
            com.tkay.core.api.TYAdAppInfo r2 = r4.getAdAppInfo()
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.i(r0, r1)
        L72:
            com.tkay.core.api.TYAdAppInfo r4 = r4.getAdAppInfo()
            java.lang.String r0 = r4.getPublisher()
            r3.y(r0)
            java.lang.String r0 = r4.getAppVersion()
            r3.z(r0)
            java.lang.String r0 = r4.getAppPrivacyUrl()
            r3.A(r0)
            java.lang.String r4 = r4.getAppPermissonUrl()
            r3.B(r4)
        L92:
            return
    }

    @Override
    public final boolean L() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public final java.util.List<java.lang.String> b(com.tkay.core.common.f.j r2) {
            r1 = this;
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r0 = r1.u()
            r2.add(r0)
            return r2
    }

    @Override
    public final int d() {
            r1 = this;
            r0 = 10
            return r0
    }

    @Override
    public final java.lang.String m() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
