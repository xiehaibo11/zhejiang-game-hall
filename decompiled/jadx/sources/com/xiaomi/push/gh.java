package com.xiaomi.push;

import java.io.PrintStream;
import java.io.PrintWriter;

/* JADX INFO: loaded from: classes4.dex */
public class gh extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private gq f8180a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private gr f442a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Throwable f443a;

    public gh() {
        this.f8180a = null;
        this.f442a = null;
        this.f443a = null;
    }

    public gh(gq gqVar) {
        this.f8180a = null;
        this.f442a = null;
        this.f443a = null;
        this.f8180a = gqVar;
    }

    public gh(String str) {
        super(str);
        this.f8180a = null;
        this.f442a = null;
        this.f443a = null;
    }

    public gh(String str, Throwable th) {
        super(str);
        this.f8180a = null;
        this.f442a = null;
        this.f443a = null;
        this.f443a = th;
    }

    public gh(Throwable th) {
        this.f8180a = null;
        this.f442a = null;
        this.f443a = null;
        this.f443a = th;
    }

    public Throwable a() {
        return this.f443a;
    }

    @Override // java.lang.Throwable
    public String getMessage() {
        gq gqVar;
        gr grVar;
        String message = super.getMessage();
        return (message != null || (grVar = this.f442a) == null) ? (message != null || (gqVar = this.f8180a) == null) ? message : gqVar.toString() : grVar.toString();
    }

    @Override // java.lang.Throwable
    public void printStackTrace() {
        printStackTrace(System.err);
    }

    @Override // java.lang.Throwable
    public void printStackTrace(PrintStream printStream) {
        super.printStackTrace(printStream);
        if (this.f443a != null) {
            printStream.println("Nested Exception: ");
            this.f443a.printStackTrace(printStream);
        }
    }

    @Override // java.lang.Throwable
    public void printStackTrace(PrintWriter printWriter) {
        super.printStackTrace(printWriter);
        if (this.f443a != null) {
            printWriter.println("Nested Exception: ");
            this.f443a.printStackTrace(printWriter);
        }
    }

    @Override // java.lang.Throwable
    public String toString() {
        StringBuilder sb = new StringBuilder();
        String message = super.getMessage();
        if (message != null) {
            sb.append(message);
            sb.append(": ");
        }
        gr grVar = this.f442a;
        if (grVar != null) {
            sb.append(grVar);
        }
        gq gqVar = this.f8180a;
        if (gqVar != null) {
            sb.append(gqVar);
        }
        if (this.f443a != null) {
            sb.append("\n  -- caused by: ");
            sb.append(this.f443a);
        }
        return sb.toString();
    }
}
