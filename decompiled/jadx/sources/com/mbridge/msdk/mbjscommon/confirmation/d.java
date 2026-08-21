package com.mbridge.msdk.mbjscommon.confirmation;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.out.IDownloadListener;
import com.mbridge.msdk.widget.custom.baseview.MBButton;
import com.tkay.expressad.foundation.h.i;
import java.lang.reflect.InvocationTargetException;

/* JADX INFO: compiled from: NativeProgressController.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MBButton f3706a;
    private int b;
    private int c;
    private int d;
    private String e;
    private String f;
    private int g;
    private int h;
    private IDownloadListener i;

    public d(MBButton mBButton) {
        this.f3706a = mBButton;
        c();
    }

    public final void a(int i) {
        this.d = i;
        if (this.c == 2) {
            c(1);
        }
    }

    private void c(final int i) {
        this.b = i;
        if (this.h == 1 || i == 0) {
            this.f3706a.post(new Runnable() { // from class: com.mbridge.msdk.mbjscommon.confirmation.d.1
                @Override // java.lang.Runnable
                public final void run() {
                    int i2 = i;
                    if (i2 == 1) {
                        d.b(d.this);
                        return;
                    }
                    if (i2 == 2) {
                        d dVar = d.this;
                        if (dVar.f3706a != null) {
                            dVar.f3706a.setText(s.a(dVar.f3706a.getContext(), "mbridge_cm_progress_status_descri_pause", i.g));
                            return;
                        }
                        return;
                    }
                    if (i2 == 3) {
                        d dVar2 = d.this;
                        if (dVar2.f3706a != null) {
                            dVar2.f3706a.setProgress(100);
                            try {
                                Context context = dVar2.f3706a.getContext();
                                dVar2.f3706a.setText(context.getResources().getString(s.a(context, "mbridge_cm_progress_status_descri_ins", i.g)));
                                return;
                            } catch (Exception e) {
                                e.printStackTrace();
                                return;
                            }
                        }
                        return;
                    }
                    if (i2 != 4) {
                        d.a(d.this);
                        return;
                    }
                    d dVar3 = d.this;
                    if (dVar3.f3706a != null) {
                        dVar3.f3706a.setProgress(100);
                        try {
                            Context context2 = dVar3.f3706a.getContext();
                            dVar3.f3706a.setText(context2.getResources().getString(s.a(context2, "mbridge_cm_progress_status_descri_open", i.g)));
                        } catch (Exception e2) {
                            e2.printStackTrace();
                        }
                    }
                }
            });
        }
    }

    public final void b(int i) {
        this.g = i;
    }

    public final void a(String str) {
        this.f = str;
        c();
    }

    public final void b(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if ("1".equals(ak.a(str, "ctaldtype"))) {
            this.h = 1;
            if (!TextUtils.isEmpty(this.f)) {
                this.f3706a.setProgress(50);
            }
            if (this.i == null) {
                this.i = new IDownloadListener() { // from class: com.mbridge.msdk.mbjscommon.confirmation.d.3
                    @Override // com.mbridge.msdk.out.IDownloadListener
                    public final void onEnd(int i, int i2, String str2) {
                    }

                    @Override // com.mbridge.msdk.out.IDownloadListener
                    public final void onStart() {
                    }

                    @Override // com.mbridge.msdk.out.IDownloadListener
                    public final void onProgressUpdate(int i) {
                        d.this.a(i);
                    }

                    @Override // com.mbridge.msdk.out.IDownloadListener
                    public final void onStatus(int i) {
                        if (d.this.c != i) {
                            d.this.c = i;
                            d.this.d(i);
                        }
                    }
                };
            }
            if (TextUtils.isEmpty(this.f)) {
                return;
            }
            try {
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                cls.getMethod("addDownloadListener", String.class, IDownloadListener.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.f, this.i);
                return;
            } catch (ClassNotFoundException e) {
                e.printStackTrace();
                return;
            } catch (IllegalAccessException e2) {
                e2.printStackTrace();
                return;
            } catch (NoSuchMethodException e3) {
                e3.printStackTrace();
                return;
            } catch (InvocationTargetException e4) {
                e4.printStackTrace();
                return;
            }
        }
        this.h = 0;
    }

    public final void a() {
        if (this.g == 3) {
            c();
            if (this.b != 2 || TextUtils.isEmpty(this.f)) {
                return;
            }
            try {
                String strB = com.mbridge.msdk.foundation.db.e.a(com.mbridge.msdk.foundation.db.i.a(this.f3706a.getContext())).b(this.f);
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                cls.getMethod("start", String.class, String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.f, strB);
            } catch (ClassNotFoundException e) {
                e.printStackTrace();
            } catch (IllegalAccessException e2) {
                e2.printStackTrace();
            } catch (NoSuchMethodException e3) {
                e3.printStackTrace();
            } catch (InvocationTargetException e4) {
                e4.printStackTrace();
            }
        }
    }

    private void c() {
        d(d());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(int i) {
        if (i == -1) {
            this.b = 0;
        } else if (i == 9) {
            this.b = 4;
        } else if (i == 1) {
            this.b = 3;
        } else if (i == 2) {
            this.b = 1;
        } else if (i == 3) {
            this.b = 0;
        } else if (i == 5 || i == 6) {
            this.b = 2;
        }
        c(this.b);
    }

    private int d() {
        if (!TextUtils.isEmpty(this.f)) {
            try {
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                return ((Integer) cls.getMethod("getTaskStatusByUniqueKey", String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.f)).intValue();
            } catch (ClassNotFoundException e) {
                e.printStackTrace();
            } catch (IllegalAccessException e2) {
                e2.printStackTrace();
            } catch (NoSuchMethodException e3) {
                e3.printStackTrace();
            } catch (InvocationTargetException e4) {
                e4.printStackTrace();
            }
        }
        return -1;
    }

    public final void b() {
        if (TextUtils.isEmpty(this.f)) {
            return;
        }
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            cls.getMethod("deleteDownloadListener", String.class, IDownloadListener.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.f, this.i);
            this.i = null;
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (IllegalAccessException e2) {
            e2.printStackTrace();
        } catch (NoSuchMethodException e3) {
            e3.printStackTrace();
        } catch (InvocationTargetException e4) {
            e4.printStackTrace();
        }
    }

    static /* synthetic */ void a(d dVar) {
        if (dVar.f3706a != null) {
            if (TextUtils.isEmpty(dVar.e)) {
                MBButton mBButton = dVar.f3706a;
                mBButton.setText(s.a(mBButton.getContext(), "mbridge_cm_progress_status_descri_default", i.g));
            } else {
                dVar.f3706a.setText(dVar.e);
            }
        }
    }

    static /* synthetic */ void b(d dVar) {
        MBButton mBButton = dVar.f3706a;
        if (mBButton != null) {
            mBButton.setIndeterminateProgressMode(false);
            dVar.f3706a.post(new Runnable() { // from class: com.mbridge.msdk.mbjscommon.confirmation.d.2
                @Override // java.lang.Runnable
                public final void run() {
                    d.this.f3706a.setProgress(d.this.d);
                }
            });
            if (dVar.d == 100) {
                try {
                    Context context = dVar.f3706a.getContext();
                    dVar.f3706a.setText(context.getResources().getString(s.a(context, "mbridge_cm_progress_status_descri_ins", i.g)));
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
