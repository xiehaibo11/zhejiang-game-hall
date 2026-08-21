package com.tkay.basead.g;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class c extends com.tkay.core.common.h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f5698a;
    boolean b;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 2;
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final byte[] d() {
        return new byte[0];
    }

    @Override // com.tkay.core.common.h.a
    protected final String g() {
        return "";
    }

    @Override // com.tkay.core.common.h.a
    protected final String h() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Context i() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String j() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final String k() {
        return null;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, Object> l() {
        return null;
    }

    public c(String str, String str2, boolean z) {
        this.b = false;
        this.b = z;
        this.f5698a = str.replaceAll("\\{req_id\\}", str2 == null ? "" : str2);
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        return this.f5698a;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        if (!this.b) {
            return null;
        }
        HashMap map = new HashMap();
        String strI = com.tkay.core.common.l.d.i();
        if (!TextUtils.isEmpty(strI)) {
            map.put("User-Agent", strI);
        }
        return map;
    }
}
