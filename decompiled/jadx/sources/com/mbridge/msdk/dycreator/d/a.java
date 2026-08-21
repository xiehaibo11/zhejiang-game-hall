package com.mbridge.msdk.dycreator.d;

import com.mbridge.msdk.dycreator.g.c;
import com.mbridge.msdk.dycreator.g.d;
import com.mbridge.msdk.dycreator.g.f;
import com.mbridge.msdk.dycreator.g.h;

/* JADX INFO: compiled from: SubjectFactory.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile a f3296a;

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.d.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: SubjectFactory.java */
    public enum EnumC0250a {
        VIEW_OBSERVER,
        CLICK_OBSERVER,
        EFFECT_OBSERVER,
        REPORT_OBSERVER
    }

    private a() {
    }

    public static a a() {
        if (f3296a == null) {
            synchronized (a.class) {
                if (f3296a == null) {
                    f3296a = new a();
                }
            }
        }
        return f3296a;
    }

    /* JADX INFO: renamed from: com.mbridge.msdk.dycreator.d.a$1, reason: invalid class name */
    /* JADX INFO: compiled from: SubjectFactory.java */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f3297a;

        static {
            int[] iArr = new int[EnumC0250a.values().length];
            f3297a = iArr;
            try {
                iArr[EnumC0250a.VIEW_OBSERVER.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f3297a[EnumC0250a.CLICK_OBSERVER.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f3297a[EnumC0250a.EFFECT_OBSERVER.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f3297a[EnumC0250a.REPORT_OBSERVER.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
        }
    }

    public final <T extends com.mbridge.msdk.dycreator.g.a> T a(EnumC0250a enumC0250a) {
        int i = AnonymousClass1.f3297a[enumC0250a.ordinal()];
        if (i == 1) {
            return new d();
        }
        if (i == 2) {
            return new c();
        }
        if (i == 3) {
            return new f();
        }
        if (i != 4) {
            return null;
        }
        return new h();
    }
}
