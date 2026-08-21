package com.tkay.core.common.h;

import android.content.Context;
import com.meizu.cloud.pushsdk.platform.message.BasicPushStatus;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.f.ao;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class f extends a {
    public static final int e = 1;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6195a;
    int b;
    String c;
    int d;
    private ao f;

    @Override // com.tkay.core.common.h.a
    protected final int a() {
        return 2;
    }

    @Override // com.tkay.core.common.h.a
    protected final void a(AdError adError) {
    }

    @Override // com.tkay.core.common.h.a
    protected final boolean a(int i) {
        return false;
    }

    @Override // com.tkay.core.common.h.a
    protected final Map<String, String> c() {
        return null;
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

    private f(String str) {
        this.d = 0;
        this.f6195a = str;
    }

    private f(String str, int i, String str2) {
        this(str);
        this.d = 1;
        this.b = i;
        this.c = str2;
    }

    public static f b(String str) {
        return new f(str);
    }

    public static f a(String str, int i, String str2) {
        return new f(str, i, str2);
    }

    @Override // com.tkay.core.common.h.a
    protected final String b() {
        return this.f6195a;
    }

    @Override // com.tkay.core.common.h.a
    protected final void b(AdError adError) {
        ao aoVar;
        if (1 == this.d && ErrorCode.httpStatuException.equals(adError.getCode()) && (aoVar = this.f) != null) {
            aoVar.a(adError.getPlatformCode());
            this.f.b(adError.getPlatformMSG());
            com.tkay.core.common.k.c.a(this.f);
        }
    }

    @Override // com.tkay.core.common.h.a
    protected final Object a(String str) {
        ao aoVar;
        if (1 != this.d || (aoVar = this.f) == null) {
            return null;
        }
        aoVar.a(BasicPushStatus.SUCCESS_CODE);
        com.tkay.core.common.k.c.a(this.f);
        return null;
    }

    public final void a(ao aoVar) {
        this.f = aoVar;
    }
}
