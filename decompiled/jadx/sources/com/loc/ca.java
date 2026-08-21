package com.loc;

import android.content.Context;
import android.text.TextUtils;
import com.ss.android.download.api.constant.BaseConstants;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.Random;

/* JADX INFO: compiled from: StatisticsManager.java */
/* JADX INFO: loaded from: classes2.dex */
public class ca {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static boolean f2898a = false;
    static int b = 20;
    private static int c = 20;
    private static WeakReference<bv> d;
    private static int e;

    /* JADX INFO: compiled from: StatisticsManager.java */
    static class a extends cs {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static int f2899a = 1;
        static int b = 2;
        static int c = 3;
        private Context d;
        private bz f;
        private int g;
        private List<bz> h;

        a(Context context, int i) {
            this.d = context;
            this.g = i;
        }

        a(Context context, int i, bz bzVar) {
            this(context, i);
            this.f = bzVar;
        }

        a(Context context, int i, List<bz> list) {
            this(context, i);
            this.h = list;
        }

        @Override // com.loc.cs
        public final void a() {
            String str;
            String str2;
            Throwable th;
            int i = this.g;
            if (i == 1) {
                try {
                    if (this.d != null && this.f != null) {
                        synchronized (ca.class) {
                            if (this.d != null && this.f != null) {
                                ca.a(this.d, this.f.a());
                                return;
                            }
                            return;
                        }
                    }
                    return;
                } catch (Throwable th2) {
                    th = th2;
                    str = "stm";
                    str2 = "as";
                }
            } else {
                if (i != 2) {
                    if (i == 3) {
                        try {
                            if (this.d == null) {
                                return;
                            }
                            bv bvVarA = cb.a(ca.d);
                            cb.a(this.d, bvVarA, at.h, 1000, 307200, "2");
                            if (bvVarA.g == null) {
                                bvVarA.g = new cc(new cg(this.d, new cd(new ch(new cj()))));
                            }
                            bvVarA.h = BaseConstants.Time.HOUR;
                            if (TextUtils.isEmpty(bvVarA.i)) {
                                bvVarA.i = "cKey";
                            }
                            if (bvVarA.f == null) {
                                bvVarA.f = new cn(this.d, bvVarA.h, bvVarA.i, new ck(bvVarA.f2892a, new cl(this.d, ca.f2898a, ca.c * 1024, ca.b * 1024, "staticUpdate", ca.e * 1024)));
                            }
                            bw.a(bvVarA);
                            return;
                        } catch (Throwable th3) {
                            av.b(th3, "stm", "usd");
                            return;
                        }
                    }
                    return;
                }
                try {
                    synchronized (ca.class) {
                        if (this.h != null && this.d != null) {
                            ByteArrayOutputStream byteArrayOutputStream = null;
                            byte[] byteArray = new byte[0];
                            try {
                                ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                                try {
                                    for (bz bzVar : this.h) {
                                        if (bzVar != null) {
                                            byteArrayOutputStream2.write(bzVar.a());
                                        }
                                    }
                                    byteArray = byteArrayOutputStream2.toByteArray();
                                    try {
                                        byteArrayOutputStream2.close();
                                    } catch (Throwable th4) {
                                        th = th4;
                                        th.printStackTrace();
                                    }
                                } catch (Throwable th5) {
                                    th = th5;
                                    byteArrayOutputStream = byteArrayOutputStream2;
                                    try {
                                        av.b(th, "stm", "aStB");
                                        if (byteArrayOutputStream != null) {
                                            try {
                                                byteArrayOutputStream.close();
                                            } catch (Throwable th6) {
                                                th = th6;
                                                th.printStackTrace();
                                            }
                                        }
                                    } finally {
                                    }
                                }
                            } catch (Throwable th7) {
                                th = th7;
                            }
                            ca.a(this.d, byteArray);
                            return;
                        }
                        return;
                    }
                } catch (Throwable th8) {
                    th = th8;
                    str = "stm";
                    str2 = "apb";
                }
            }
            av.b(th, str, str2);
        }
    }

    public static void a(Context context) {
        cr.a().b(new a(context, a.c));
    }

    static /* synthetic */ void a(Context context, byte[] bArr) throws IOException {
        bv bvVarA = cb.a(d);
        cb.a(context, bvVarA, at.h, 1000, 307200, "2");
        if (bvVarA.e == null) {
            bvVarA.e = new be();
        }
        try {
            bw.a(Integer.toString(new Random().nextInt(100)) + Long.toString(System.nanoTime()), bArr, bvVarA);
        } catch (Throwable th) {
            av.b(th, "stm", "wts");
        }
    }

    public static synchronized void a(bz bzVar, Context context) {
        cr.a().b(new a(context, a.f2899a, bzVar));
    }

    public static synchronized void a(List<bz> list, Context context) {
        if (list != null) {
            try {
                if (list.size() != 0) {
                    cr.a().b(new a(context, a.b, list));
                }
            } catch (Throwable unused) {
            }
        }
    }

    public static synchronized void a(boolean z, int i) {
        f2898a = z;
        e = Math.max(0, i);
    }

    public static synchronized void b(List<bz> list, Context context) {
        try {
            List<bz> listB = bq.b();
            if (listB != null && listB.size() > 0) {
                list.addAll(listB);
            }
        } catch (Throwable unused) {
        }
        a(list, context);
    }
}
