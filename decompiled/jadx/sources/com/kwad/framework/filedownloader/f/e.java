package com.kwad.framework.filedownloader.f;

/* JADX INFO: loaded from: classes2.dex */
public class e {
    public final int aeJ;
    public final long aeK;
    public final boolean aeL;
    public final boolean aeM;
    public final int aeN;
    public final boolean aeO;
    public final boolean aeP;

    public static class a {
        private static final e aeQ = new e(0);
    }

    /* JADX WARN: Removed duplicated region for block: B:110:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x007d A[Catch: all -> 0x01cd, TryCatch #8 {all -> 0x01cd, blocks: (B:7:0x0033, B:8:0x003a, B:9:0x003e, B:10:0x0042, B:11:0x0046, B:12:0x004a, B:37:0x0079, B:39:0x007d, B:41:0x0081, B:42:0x0089), top: B:96:0x0033 }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0089 A[Catch: all -> 0x01cd, TRY_LEAVE, TryCatch #8 {all -> 0x01cd, blocks: (B:7:0x0033, B:8:0x003a, B:9:0x003e, B:10:0x0042, B:11:0x0046, B:12:0x004a, B:37:0x0079, B:39:0x007d, B:41:0x0081, B:42:0x0089), top: B:96:0x0033 }] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x00cb  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x00d5  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x00e4  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00fc  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0115  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x0143  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0148  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0170  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0176  */
    /* JADX WARN: Type inference failed for: r4v10 */
    /* JADX WARN: Type inference failed for: r4v8 */
    /* JADX WARN: Type inference failed for: r4v9, types: [boolean] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private e() throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 475
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.framework.filedownloader.f.e.<init>():void");
    }

    /* synthetic */ e(byte b) {
        this();
    }

    public static int bG(int i) {
        if (i > 12) {
            d.d(e.class, "require the count of network thread  is %d, what is more than the max valid count(%d), so adjust to %d auto", Integer.valueOf(i), 12, 12);
            return 12;
        }
        if (i > 0) {
            return i;
        }
        d.d(e.class, "require the count of network thread  is %d, what is less than the min valid count(%d), so adjust to %d auto", Integer.valueOf(i), 1, 1);
        return 1;
    }

    public static e vO() {
        return a.aeQ;
    }
}
