package com.tkay.expressad.video.module.a.a;

public final class h extends k {
    public h(com.tkay.expressad.foundation.d.c cVar, com.tkay.expressad.videocommon.b.a aVar, com.tkay.expressad.videocommon.c.c cVar2, String str, String str2, com.tkay.expressad.video.module.a.a aVar2, int i, boolean z) {
        super(cVar, aVar, cVar2, str, str2, aVar2, i, z);
    }

    @Override
    public final void a(int i, Object obj) {
        if (i == 100) {
            e();
            d();
            c();
            a(2);
        } else if (i == 109) {
            b(2);
        } else if (i == 122) {
            a();
        } else if (i != 129) {
            String str = "";
            if (i == 118) {
                if (obj != null && (obj instanceof String)) {
                    str = (String) obj;
                }
                a(3, str);
            } else if (i == 119) {
                if (obj != null && (obj instanceof String)) {
                    str = (String) obj;
                }
                a(4, str);
            }
        } else if (this.X != null && this.X.J() == 2) {
            e();
            d();
            c();
            a(1);
        }
        super.a(i, obj);
    }
}
