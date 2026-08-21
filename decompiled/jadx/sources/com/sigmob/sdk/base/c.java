package com.sigmob.sdk.base;

import android.content.SharedPreferences;
import com.czhj.sdk.common.Constants;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy;
import com.sigmob.sdk.base.mta.PointType;
import com.sigmob.windad.consent.WindAdConsentInformation;

/* JADX INFO: loaded from: classes3.dex */
public class c {
    private static c e;
    private int b;
    private int d;
    private boolean f;
    private int g;
    private Boolean h;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f4791a = true;
    private boolean c = true;

    private c() {
        try {
            this.b = com.sigmob.sdk.base.utils.c.a().getInt(Constants.AGE_RESTRICTED_STATUS, 0);
        } catch (Throwable unused) {
        }
        try {
            this.d = com.sigmob.sdk.base.utils.c.a().getInt(Constants.USER_AGE, 0);
        } catch (Throwable unused2) {
        }
        try {
            this.g = com.sigmob.sdk.base.utils.c.a().getInt(Constants.GDPR_CONSENT_STATUS, 0);
        } catch (Throwable unused3) {
        }
        try {
            this.f = com.sigmob.sdk.base.utils.c.a().getBoolean(Constants.EXT_GDPR_REGION, false);
        } catch (Throwable unused4) {
        }
    }

    public static synchronized c a() {
        if (e == null) {
            synchronized (c.class) {
                e = new c();
            }
        }
        return e;
    }

    private void a(int i) {
        PointEntitySigmobPrivacy pointEntitySigmobPrivacy = new PointEntitySigmobPrivacy();
        pointEntitySigmobPrivacy.setAge(String.valueOf(i));
        pointEntitySigmobPrivacy.setAc_type(PointType.GDPR_CONSENT);
        pointEntitySigmobPrivacy.setSub_category("coppa");
        pointEntitySigmobPrivacy.setCategory(PointCategory.PRIVACY);
        pointEntitySigmobPrivacy.commit();
    }

    private void a(boolean z) {
        PointEntitySigmobPrivacy pointEntitySigmobPrivacy = new PointEntitySigmobPrivacy();
        pointEntitySigmobPrivacy.setAc_type(PointType.GDPR_CONSENT);
        pointEntitySigmobPrivacy.setSub_category(PointCategory.ADULT);
        pointEntitySigmobPrivacy.setCategory(PointCategory.PRIVACY);
        pointEntitySigmobPrivacy.setIs_minor(z ? "0" : "1");
        pointEntitySigmobPrivacy.commit();
    }

    private void b(int i) {
        PointEntitySigmobPrivacy pointEntitySigmobPrivacy = new PointEntitySigmobPrivacy();
        pointEntitySigmobPrivacy.setAge_restricted(String.valueOf(i));
        pointEntitySigmobPrivacy.setAc_type(PointType.GDPR_CONSENT);
        pointEntitySigmobPrivacy.setSub_category("coppa");
        pointEntitySigmobPrivacy.setCategory(PointCategory.PRIVACY);
        pointEntitySigmobPrivacy.commit();
    }

    private void b(boolean z) {
        PointEntitySigmobPrivacy pointEntitySigmobPrivacy = new PointEntitySigmobPrivacy();
        pointEntitySigmobPrivacy.setAc_type(PointType.GDPR_CONSENT);
        pointEntitySigmobPrivacy.setSub_category(PointCategory.PERSONALIZED);
        pointEntitySigmobPrivacy.setCategory(PointCategory.PRIVACY);
        pointEntitySigmobPrivacy.setIs_unpersonalized(z ? "0" : "1");
        pointEntitySigmobPrivacy.commit();
    }

    private void j() {
        PointEntitySigmobPrivacy pointEntitySigmobPrivacy = new PointEntitySigmobPrivacy();
        pointEntitySigmobPrivacy.setUser_consent(String.valueOf(g()));
        String str = "1";
        pointEntitySigmobPrivacy.setGdpr_region(h() ? "1" : "0");
        try {
            if (!WindAdConsentInformation.getInstance(com.sigmob.sdk.b.b()).isRequestLocationInEeaOrUnknown()) {
                str = "0";
            }
            pointEntitySigmobPrivacy.setGdpr_dialog_region(str);
        } catch (Throwable unused) {
        }
        pointEntitySigmobPrivacy.setSub_category(PointCategory.CONSENT);
        pointEntitySigmobPrivacy.setCategory("gdpr");
        pointEntitySigmobPrivacy.setAc_type(PointType.GDPR_CONSENT);
        pointEntitySigmobPrivacy.commit();
    }

    public void a(int i, boolean z) {
        this.d = i;
        SharedPreferences.Editor editorEdit = com.sigmob.sdk.base.utils.c.a().edit();
        editorEdit.putInt(Constants.USER_AGE, this.d);
        editorEdit.apply();
        if (z) {
            a(i);
        }
    }

    public void a(Boolean bool) {
        if (bool != null) {
            SharedPreferences.Editor editorEdit = com.sigmob.sdk.base.utils.c.a().edit();
            editorEdit.putBoolean(Constants.EXT_GDPR_REGION, bool.booleanValue());
            editorEdit.apply();
            this.f = bool.booleanValue();
        }
        if (i()) {
            j();
            b(this.c);
            a(this.f4791a);
            b(this.b);
            a(this.d);
        }
    }

    public void a(boolean z, boolean z2) {
        SigmobLog.i("PrivacyManager -> setAdult " + z);
        this.f4791a = z;
        if (z2) {
            a(z);
        }
    }

    public int b() {
        return this.d;
    }

    public void b(int i, boolean z) {
        this.b = i;
        SharedPreferences.Editor editorEdit = com.sigmob.sdk.base.utils.c.a().edit();
        editorEdit.putInt(Constants.AGE_RESTRICTED_STATUS, this.b);
        editorEdit.apply();
        if (z) {
            b(i);
        }
    }

    public void b(boolean z, boolean z2) {
        if (this.h == null) {
            this.h = Boolean.valueOf(z);
        }
        SigmobLog.i("PrivacyManager -> setPersonalized " + z);
        this.c = z;
        if (z2) {
            b(z);
        }
    }

    public int c() {
        return this.b;
    }

    public void c(int i, boolean z) {
        this.g = i;
        SharedPreferences.Editor editorEdit = com.sigmob.sdk.base.utils.c.a().edit();
        editorEdit.putInt(Constants.GDPR_CONSENT_STATUS, i);
        editorEdit.apply();
        if (z) {
            j();
        }
    }

    public boolean d() {
        return this.f4791a;
    }

    public boolean e() {
        return this.c;
    }

    public boolean f() {
        Boolean bool = this.h;
        return bool == null || bool.booleanValue() != this.c;
    }

    public int g() {
        return this.g;
    }

    public boolean h() {
        return this.f;
    }

    public boolean i() {
        return (g() == 1) || !h();
    }
}
