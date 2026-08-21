package com.sigmob.sdk.base.common;

import android.content.Context;
import android.net.Uri;
import android.text.TextUtils;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.ah;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.rtb.AndroidMarket;
import com.sigmob.windad.WindAds;
import java.util.EnumSet;

public class ag {
    private static final b a = new b() {
        @Override
        public void a(String str, af afVar) {
        }

        @Override
        public void b(String str, af afVar) {
        }
    };
    private static final c b = new c() {
        @Override
        public void a() {
        }

        @Override
        public void b() {
        }

        @Override
        public void c() {
        }
    };
    private final EnumSet<af> c;
    private final b d;
    private final b e;
    private final c f;
    private final BaseAdUnit g;
    private final boolean h;
    private boolean i;
    private boolean j;
    private boolean k;

    public static class a {
        private EnumSet<af> a = EnumSet.of(af.g);
        private b b = ag.a;
        private b c = ag.a;
        private c d = ag.b;
        private boolean e = false;
        private boolean f = false;
        private BaseAdUnit g;

        public a a(af afVar, af... afVarArr) {
            this.a = EnumSet.of(afVar, afVarArr);
            return this;
        }

        public a a(b bVar) {
            this.b = bVar;
            return this;
        }

        public a a(c cVar) {
            this.d = cVar;
            return this;
        }

        public a a(BaseAdUnit baseAdUnit) {
            this.g = baseAdUnit;
            return this;
        }

        public a a(boolean z) {
            this.e = z;
            return this;
        }

        public ag a() {
            return new ag(this.a, this.b, this.c, this.d, this.e, this.g, this.f);
        }

        public a b(b bVar) {
            this.c = bVar;
            return this;
        }

        public a b(boolean z) {
            this.f = z;
            return this;
        }
    }

    public interface b {
        void a(String str, af afVar);

        void b(String str, af afVar);
    }

    public interface c {
        void a();

        void b();

        void c();
    }

    private ag(EnumSet<af> enumSet, b bVar, b bVar2, c cVar, boolean z, BaseAdUnit baseAdUnit, boolean z2) {
        this.c = EnumSet.copyOf((EnumSet) enumSet);
        this.d = bVar;
        this.e = bVar2;
        this.f = cVar;
        this.h = z;
        this.g = baseAdUnit;
        this.i = false;
        this.j = false;
        this.k = z2;
    }

    private void a(String str, af afVar, String str2, Throwable th) {
        Preconditions.NoThrow.checkNotNull(str2);
        if (afVar == null) {
            afVar = af.g;
        }
        SigmobLog.d(str2, th);
        this.d.b(str, afVar);
    }

    private boolean b(final Context context, String str) {
        af afVar = af.g;
        final String strMacroProcess = null;
        for (final af afVar2 : this.c) {
            String strA = afVar2.a(this.g);
            if (!TextUtils.isEmpty(str) && this.g.getInteractionType() != 7) {
                strA = str;
            }
            if (!TextUtils.isEmpty(strA)) {
                strMacroProcess = this.g.getMacroCommon().macroProcess(strA);
                try {
                    final Uri uri = Uri.parse(strMacroProcess);
                    AndroidMarket androidMarket = this.g.getAndroidMarket();
                    if (afVar2 != af.c || !uri.getScheme().equalsIgnoreCase("market") || androidMarket == null || TextUtils.isEmpty(androidMarket.market_url)) {
                        if (afVar2.a(uri)) {
                            if (!this.k && af.f == afVar2) {
                                ah.a(strMacroProcess, new ah.a() {
                                    @Override
                                    public void a(String str2) {
                                        final af afVar3 = afVar2;
                                        if (!str2.toLowerCase().startsWith("http")) {
                                            afVar3 = af.c;
                                        }
                                        try {
                                            afVar3.a(context, Uri.parse(str2), this, ag.this.g);
                                            WindAds.sharedAds().getHandler().post(new Runnable() {
                                                @Override
                                                public void run() {
                                                    try {
                                                        ag.this.d.a(strMacroProcess, afVar3);
                                                    } catch (Throwable unused) {
                                                    }
                                                }
                                            });
                                        } catch (Exception unused) {
                                            WindAds.sharedAds().getHandler().post(new Runnable() {
                                                @Override
                                                public void run() {
                                                    try {
                                                        ag.this.d.b(strMacroProcess, afVar3);
                                                    } catch (Throwable unused2) {
                                                    }
                                                }
                                            });
                                        }
                                    }

                                    @Override
                                    public void a(String str2, Throwable th) {
                                        try {
                                            afVar2.a(context, uri, this, ag.this.g);
                                            WindAds.sharedAds().getHandler().post(new Runnable() {
                                                @Override
                                                public void run() {
                                                    try {
                                                        ag.this.d.a(strMacroProcess, afVar2);
                                                    } catch (Throwable unused) {
                                                    }
                                                }
                                            });
                                        } catch (Exception unused) {
                                            WindAds.sharedAds().getHandler().post(new Runnable() {
                                                @Override
                                                public void run() {
                                                    try {
                                                        ag.this.d.b(strMacroProcess, afVar2);
                                                    } catch (Throwable unused2) {
                                                    }
                                                }
                                            });
                                        }
                                    }
                                });
                                return true;
                            }
                            afVar2.a(context, uri, this, this.g);
                            WindAds.sharedAds().getHandler().post(new Runnable() {
                                @Override
                                public void run() {
                                    ag.this.d.a(strMacroProcess, afVar2);
                                }
                            });
                            return true;
                        }
                    }
                } catch (Throwable unused) {
                    this.d.b(strMacroProcess, afVar2);
                }
            }
        }
        try {
            a(strMacroProcess, afVar, "Link ignored. Unable to handle url: ", null);
            return false;
        } catch (Throwable th) {
            SigmobLog.e("handleResolvedUrl eroor", th);
            return false;
        }
    }

    c a() {
        return this.f;
    }

    public void a(Context context, String str) {
        Preconditions.NoThrow.checkNotNull(context);
        b(context, str);
    }

    boolean b() {
        return this.h;
    }
}
