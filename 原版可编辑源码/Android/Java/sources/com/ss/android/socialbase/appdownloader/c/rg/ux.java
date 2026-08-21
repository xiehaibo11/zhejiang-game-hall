package com.ss.android.socialbase.appdownloader.c.rg;

public class ux extends Exception {
    protected int df;
    protected int q;
    protected Throwable rg;

    public ux(String str, fw fwVar, Throwable th) {
        String str2;
        String str3;
        StringBuilder sb = new StringBuilder();
        String str4 = "";
        if (str == null) {
            str2 = "";
        } else {
            str2 = str + " ";
        }
        sb.append(str2);
        if (fwVar == null) {
            str3 = "";
        } else {
            str3 = "(position:" + fwVar.pt() + ") ";
        }
        sb.append(str3);
        if (th != null) {
            str4 = "caused by: " + th;
        }
        sb.append(str4);
        super(sb.toString());
        this.df = -1;
        this.q = -1;
        if (fwVar != null) {
            this.df = fwVar.q();
            this.q = fwVar.c();
        }
        this.rg = th;
    }

    @Override
    public void printStackTrace() {
        if (this.rg == null) {
            super.printStackTrace();
            return;
        }
        synchronized (System.err) {
            System.err.println(super.getMessage() + "; nested exception is:");
            this.rg.printStackTrace();
        }
    }
}
