package com.mbridge.msdk.foundation.same.net.b;

import com.mbridge.msdk.foundation.same.net.f;
import com.mbridge.msdk.foundation.same.net.k;
import com.mbridge.msdk.foundation.tools.z;

public abstract class a extends f<String> {
    private static final String a = a.class.getSimpleName();

    public abstract void a(String str);

    public abstract void b(String str);

    @Override
    public void onSuccess(k<String> kVar) {
        if (kVar != null) {
            a(kVar.a);
        }
    }

    @Override
    public void onError(com.mbridge.msdk.foundation.same.net.a.a aVar) {
        z.d(a, "errorCode = " + aVar.a);
        b(com.mbridge.msdk.foundation.same.net.f.a.a(aVar));
    }
}
