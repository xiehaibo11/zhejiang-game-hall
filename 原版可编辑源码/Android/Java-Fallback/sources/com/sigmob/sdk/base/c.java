package com.sigmob.sdk.base;

public class c {
    private static com.sigmob.sdk.base.c e;
    private boolean a;
    private int b;
    private boolean c;
    private int d;
    private boolean f;
    private int g;
    private java.lang.Boolean h;

    private c() {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.a = r0
            r3.c = r0
            r0 = 0
            android.content.SharedPreferences r1 = com.sigmob.sdk.base.utils.c.a()     // Catch: java.lang.Throwable -> L15
            java.lang.String r2 = "age_restricted_status"
            int r1 = r1.getInt(r2, r0)     // Catch: java.lang.Throwable -> L15
            r3.b = r1     // Catch: java.lang.Throwable -> L15
        L15:
            android.content.SharedPreferences r1 = com.sigmob.sdk.base.utils.c.a()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "user_age"
            int r1 = r1.getInt(r2, r0)     // Catch: java.lang.Throwable -> L21
            r3.d = r1     // Catch: java.lang.Throwable -> L21
        L21:
            android.content.SharedPreferences r1 = com.sigmob.sdk.base.utils.c.a()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "consent_status"
            int r1 = r1.getInt(r2, r0)     // Catch: java.lang.Throwable -> L2d
            r3.g = r1     // Catch: java.lang.Throwable -> L2d
        L2d:
            android.content.SharedPreferences r1 = com.sigmob.sdk.base.utils.c.a()     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = "gdpr_region"
            boolean r0 = r1.getBoolean(r2, r0)     // Catch: java.lang.Throwable -> L39
            r3.f = r0     // Catch: java.lang.Throwable -> L39
        L39:
            return
    }

    public static synchronized com.sigmob.sdk.base.c a() {
            java.lang.Class<com.sigmob.sdk.base.c> r0 = com.sigmob.sdk.base.c.class
            monitor-enter(r0)
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.e     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L14
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L18
            com.sigmob.sdk.base.c r1 = new com.sigmob.sdk.base.c     // Catch: java.lang.Throwable -> L11
            r1.<init>()     // Catch: java.lang.Throwable -> L11
            com.sigmob.sdk.base.c.e = r1     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            goto L14
        L11:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L11
            throw r1     // Catch: java.lang.Throwable -> L18
        L14:
            com.sigmob.sdk.base.c r1 = com.sigmob.sdk.base.c.e     // Catch: java.lang.Throwable -> L18
            monitor-exit(r0)
            return r1
        L18:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private void a(int r2) {
            r1 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setAge(r2)
            java.lang.String r2 = "401"
            r0.setAc_type(r2)
            java.lang.String r2 = "coppa"
            r0.setSub_category(r2)
            java.lang.String r2 = "privacy"
            r0.setCategory(r2)
            r0.commit()
            return
    }

    private void a(boolean r3) {
            r2 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy
            r0.<init>()
            java.lang.String r1 = "401"
            r0.setAc_type(r1)
            java.lang.String r1 = "adult"
            r0.setSub_category(r1)
            java.lang.String r1 = "privacy"
            r0.setCategory(r1)
            if (r3 == 0) goto L19
            java.lang.String r3 = "0"
            goto L1b
        L19:
            java.lang.String r3 = "1"
        L1b:
            r0.setIs_minor(r3)
            r0.commit()
            return
    }

    private void b(int r2) {
            r1 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r0.setAge_restricted(r2)
            java.lang.String r2 = "401"
            r0.setAc_type(r2)
            java.lang.String r2 = "coppa"
            r0.setSub_category(r2)
            java.lang.String r2 = "privacy"
            r0.setCategory(r2)
            r0.commit()
            return
    }

    private void b(boolean r3) {
            r2 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy
            r0.<init>()
            java.lang.String r1 = "401"
            r0.setAc_type(r1)
            java.lang.String r1 = "personalized"
            r0.setSub_category(r1)
            java.lang.String r1 = "privacy"
            r0.setCategory(r1)
            if (r3 == 0) goto L19
            java.lang.String r3 = "0"
            goto L1b
        L19:
            java.lang.String r3 = "1"
        L1b:
            r0.setIs_unpersonalized(r3)
            r0.commit()
            return
    }

    private void j() {
            r4 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobPrivacy
            r0.<init>()
            int r1 = r4.g()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.setUser_consent(r1)
            boolean r1 = r4.h()
            java.lang.String r2 = "1"
            java.lang.String r3 = "0"
            if (r1 == 0) goto L1c
            r1 = r2
            goto L1d
        L1c:
            r1 = r3
        L1d:
            r0.setGdpr_region(r1)
            android.content.Context r1 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L33
            com.sigmob.windad.consent.WindAdConsentInformation r1 = com.sigmob.windad.consent.WindAdConsentInformation.getInstance(r1)     // Catch: java.lang.Throwable -> L33
            boolean r1 = r1.isRequestLocationInEeaOrUnknown()     // Catch: java.lang.Throwable -> L33
            if (r1 == 0) goto L2f
            goto L30
        L2f:
            r2 = r3
        L30:
            r0.setGdpr_dialog_region(r2)     // Catch: java.lang.Throwable -> L33
        L33:
            java.lang.String r1 = "consent"
            r0.setSub_category(r1)
            java.lang.String r1 = "gdpr"
            r0.setCategory(r1)
            java.lang.String r1 = "401"
            r0.setAc_type(r1)
            r0.commit()
            return
    }

    public void a(int r4, boolean r5) {
            r3 = this;
            r3.d = r4
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a()
            android.content.SharedPreferences$Editor r0 = r0.edit()
            int r1 = r3.d
            java.lang.String r2 = "user_age"
            r0.putInt(r2, r1)
            r0.apply()
            if (r5 == 0) goto L19
            r3.a(r4)
        L19:
            return
    }

    public void a(java.lang.Boolean r4) {
            r3 = this;
            if (r4 == 0) goto L1c
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a()
            android.content.SharedPreferences$Editor r0 = r0.edit()
            boolean r1 = r4.booleanValue()
            java.lang.String r2 = "gdpr_region"
            r0.putBoolean(r2, r1)
            r0.apply()
            boolean r4 = r4.booleanValue()
            r3.f = r4
        L1c:
            boolean r4 = r3.i()
            if (r4 == 0) goto L39
            r3.j()
            boolean r4 = r3.c
            r3.b(r4)
            boolean r4 = r3.a
            r3.a(r4)
            int r4 = r3.b
            r3.b(r4)
            int r4 = r3.d
            r3.a(r4)
        L39:
            return
    }

    public void a(boolean r3, boolean r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PrivacyManager -> setAdult "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r2.a = r3
            if (r4 == 0) goto L1b
            r2.a(r3)
        L1b:
            return
    }

    public int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public void b(int r4, boolean r5) {
            r3 = this;
            r3.b = r4
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a()
            android.content.SharedPreferences$Editor r0 = r0.edit()
            int r1 = r3.b
            java.lang.String r2 = "age_restricted_status"
            r0.putInt(r2, r1)
            r0.apply()
            if (r5 == 0) goto L19
            r3.b(r4)
        L19:
            return
    }

    public void b(boolean r3, boolean r4) {
            r2 = this;
            java.lang.Boolean r0 = r2.h
            if (r0 != 0) goto La
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r3)
            r2.h = r0
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PrivacyManager -> setPersonalized "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            r2.c = r3
            if (r4 == 0) goto L25
            r2.b(r3)
        L25:
            return
    }

    public int c() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public void c(int r3, boolean r4) {
            r2 = this;
            r2.g = r3
            android.content.SharedPreferences r0 = com.sigmob.sdk.base.utils.c.a()
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = "consent_status"
            r0.putInt(r1, r3)
            r0.apply()
            if (r4 == 0) goto L17
            r2.j()
        L17:
            return
    }

    public boolean d() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public boolean e() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public boolean f() {
            r2 = this;
            java.lang.Boolean r0 = r2.h
            if (r0 == 0) goto Lf
            boolean r0 = r0.booleanValue()
            boolean r1 = r2.c
            if (r0 == r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public int g() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public boolean h() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public boolean i() {
            r3 = this;
            int r0 = r3.g()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r0 != 0) goto L15
            boolean r0 = r3.h()
            if (r0 != 0) goto L14
            goto L15
        L14:
            return r1
        L15:
            return r2
    }
}
