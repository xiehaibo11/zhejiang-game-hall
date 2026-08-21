package com.kwad.sdk.crash;

import android.content.Context;
import android.os.SystemClock;
import com.kwad.sdk.crash.c;
import com.kwad.sdk.crash.model.message.ExceptionMessage;

public final class e {
    private com.kwad.sdk.crash.b.b azV;
    private c azW;
    private long azX;

    static class a {
        private static final e azY = new e(0);
    }

    private e() {
        this.azV = new com.kwad.sdk.crash.b.b();
        this.azW = new c.a().EB();
    }

    e(byte b) {
        this();
    }

    public static e EC() {
        return a.azY;
    }

    public final String[] ED() {
        return this.azV.EQ();
    }

    public final String[] EE() {
        return this.azV.EE();
    }

    public final String EF() {
        return this.azW.azy.aAp;
    }

    public final int EG() {
        return this.azW.azy.aAt;
    }

    public final c EH() {
        return this.azW;
    }

    public final h EI() {
        return this.azW.azA;
    }

    public final long EJ() {
        return SystemClock.elapsedRealtime() - this.azX;
    }

    public final void a(c cVar) {
        this.azW = cVar;
        this.azX = SystemClock.elapsedRealtime();
        this.azV.a(cVar.azB, cVar.azC);
    }

    public final void b(int i, ExceptionMessage exceptionMessage) {
        f fVarEz = this.azW.Ez();
        if (fVarEz != null) {
            fVarEz.a(i, exceptionMessage);
        }
    }

    public final String getAppId() {
        return this.azW.azz.aAm;
    }

    public final Context getContext() {
        return this.azW.context;
    }

    public final String getSdkVersion() {
        return this.azW.azy.mSdkVersion;
    }

    public final boolean isDebug() {
        return this.azW.EA();
    }
}
