package com.xiaomi.push;

import java.io.PrintStream;
import java.io.PrintWriter;

public class gh extends Exception {
    private gq a;
    private gr a;
    private Throwable a;

    public gh() {
        this.a = null;
        this.a = null;
        this.a = null;
    }

    public gh(gq gqVar) {
        this.a = null;
        this.a = null;
        this.a = null;
        this.a = gqVar;
    }

    public gh(String str) {
        super(str);
        this.a = null;
        this.a = null;
        this.a = null;
    }

    public gh(String str, Throwable th) {
        super(str);
        this.a = null;
        this.a = null;
        this.a = null;
        this.a = th;
    }

    public gh(Throwable th) {
        this.a = null;
        this.a = null;
        this.a = null;
        this.a = th;
    }

    public Throwable a() {
        return this.a;
    }

    @Override
    public String getMessage() {
        gq gqVar;
        gr grVar;
        String message = super.getMessage();
        return (message != null || (grVar = this.a) == null) ? (message != null || (gqVar = this.a) == null) ? message : gqVar.toString() : grVar.toString();
    }

    @Override
    public void printStackTrace() {
        printStackTrace(System.err);
    }

    @Override
    public void printStackTrace(PrintStream printStream) {
        super.printStackTrace(printStream);
        if (this.a != null) {
            printStream.println("Nested Exception: ");
            this.a.printStackTrace(printStream);
        }
    }

    @Override
    public void printStackTrace(PrintWriter printWriter) {
        super.printStackTrace(printWriter);
        if (this.a != null) {
            printWriter.println("Nested Exception: ");
            this.a.printStackTrace(printWriter);
        }
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        String message = super.getMessage();
        if (message != null) {
            sb.append(message);
            sb.append(": ");
        }
        gr grVar = this.a;
        if (grVar != null) {
            sb.append(grVar);
        }
        gq gqVar = this.a;
        if (gqVar != null) {
            sb.append(gqVar);
        }
        if (this.a != null) {
            sb.append("\n  -- caused by: ");
            sb.append(this.a);
        }
        return sb.toString();
    }
}
