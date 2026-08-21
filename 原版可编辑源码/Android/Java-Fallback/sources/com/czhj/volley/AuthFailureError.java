package com.czhj.volley;

public class AuthFailureError extends com.czhj.volley.VolleyError {
    private android.content.Intent a;

    public AuthFailureError() {
            r0 = this;
            r0.<init>()
            return
    }

    public AuthFailureError(android.content.Intent r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public AuthFailureError(com.czhj.volley.NetworkResponse r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public AuthFailureError(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public AuthFailureError(java.lang.String r1, java.lang.Exception r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public java.lang.String getMessage() {
            r1 = this;
            android.content.Intent r0 = r1.a
            if (r0 == 0) goto L7
            java.lang.String r0 = "User needs to (re)enter credentials."
            return r0
        L7:
            java.lang.String r0 = super.getMessage()
            return r0
    }

    public android.content.Intent getResolutionIntent() {
            r1 = this;
            android.content.Intent r0 = r1.a
            return r0
    }
}
