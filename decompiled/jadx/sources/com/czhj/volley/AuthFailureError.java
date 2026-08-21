package com.czhj.volley;

import android.content.Intent;

/* JADX INFO: loaded from: classes.dex */
public class AuthFailureError extends VolleyError {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Intent f1821a;

    public AuthFailureError() {
    }

    public AuthFailureError(Intent intent) {
        this.f1821a = intent;
    }

    public AuthFailureError(NetworkResponse networkResponse) {
        super(networkResponse);
    }

    public AuthFailureError(String str) {
        super(str);
    }

    public AuthFailureError(String str, Exception exc) {
        super(str, exc);
    }

    @Override // com.czhj.volley.VolleyError, java.lang.Throwable
    public String getMessage() {
        return this.f1821a != null ? "User needs to (re)enter credentials." : super.getMessage();
    }

    public Intent getResolutionIntent() {
        return this.f1821a;
    }
}
