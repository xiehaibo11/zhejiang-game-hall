package com.igexin.b.a.d;

import android.os.Process;

final class j extends Thread {
    volatile boolean a = true;
    g b;
    final f c;

    public j(f fVar) {
        this.c = fVar;
        setName("TS-processor");
    }

    /* JADX WARN: Can't wrap try/catch for region: R(11:(4:(2:(3:89|11|(2:96|93)(3:83|57|86))|85)|74|48|(2:50|(4:91|56|94|93)(4:92|55|95|93))(4:84|57|86|85))(3:76|14|(1:81)(2:20|(4:82|24|87|85)))|72|26|27|(1:29)|30|(2:32|(1:34))|35|74|48|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0027, code lost:
    
        if (r11.b != null) goto L80;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0029, code lost:
    
        r11.b = new com.igexin.b.a.d.g(r11.c);
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x008c, code lost:
    
        r4 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:39:0x008d, code lost:
    
        com.igexin.b.a.c.b.a("TaskService|SERVICE_PROCESSING|error|" + r4.toString(), new java.lang.Object[0]);
        r5.t = true;
        r5.B = r4;
        r5.t();
        r5.p();
        r11.c.j.a(r5);
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x00b8, code lost:
    
        r11.c.g();
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00bf, code lost:
    
        if (r5.t == false) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x00c1, code lost:
    
        r5.c();
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x00c6, code lost:
    
        if (r5.k == false) goto L45;
     */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x00e2 A[SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        Process.setThreadPriority(-2);
        d<e> dVar = this.c.k;
        while (true) {
            e eVarC = null;
            while (true) {
                byte b = 1;
                while (this.a) {
                    try {
                        if (b != -1) {
                            if (b != 0) {
                                if (b != 1) {
                                    if (b == 2) {
                                        this.c.g();
                                    }
                                }
                            }
                            eVarC = dVar.c();
                            if (eVarC == null) {
                                this.c.g();
                            } else if (eVarC.k || eVarC.m) {
                                eVarC = null;
                            } else {
                                b = -1;
                            }
                        } else {
                            try {
                                eVarC.d();
                            } catch (Exception e) {
                                com.igexin.b.a.c.b.a("TaskService|TASK_INIT|error|" + e.toString(), new Object[0]);
                            }
                            if (eVarC.q()) {
                                break;
                            }
                            if (eVarC.o && eVarC.u == 0) {
                                com.igexin.b.a.c.b.a("TaskService|" + eVarC + "|isBlock = false|cycyle = true|doTime = 0, invalid ###########", new Object[0]);
                            }
                        }
                        eVarC.b();
                        eVarC.g();
                        eVarC.e_();
                        eVarC = null;
                        b = 1;
                        eVarC = dVar.c();
                        if (eVarC == null) {
                        }
                    } finally {
                        this.c.g();
                        if (!eVarC.t) {
                            eVarC.c();
                        }
                        if (!eVarC.k && !eVarC.p) {
                            eVarC.A = 0;
                            dVar.a(eVarC);
                        }
                    }
                }
                dVar.d();
                return;
            }
            this.b.a(eVarC);
        }
    }
}
