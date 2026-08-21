package com.mbridge.msdk.widget;

import android.content.Context;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.db.e;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.out.IDownloadListener;
import com.tkay.expressad.foundation.h.i;
import java.lang.reflect.InvocationTargetException;

public class MBDownloadProgressBar extends RelativeLayout {
    public static final int PROGRESS_STATUS_DEFAULT = 0;
    public static final int PROGRESS_STATUS_DOING = 1;
    public static final int PROGRESS_STATUS_INT = 3;
    public static final int PROGRESS_STATUS_OPEN = 4;
    public static final int PROGRESS_STATUS_PAUSE = 2;
    private int a;
    private int b;
    private int c;
    private ProgressBar d;
    private ImageView e;
    private TextView f;
    private String g;
    private String h;
    private int i;
    private int j;
    private IDownloadListener k;

    public MBDownloadProgressBar(Context context) {
        this(context, null);
    }

    public MBDownloadProgressBar(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBDownloadProgressBar(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        ViewGroup viewGroup = (ViewGroup) LayoutInflater.from(context).inflate(s.a(context, "mbridge_same_download_progress_bar_layout", "layout"), (ViewGroup) null);
        addView(viewGroup);
        this.d = (ProgressBar) viewGroup.findViewById(s.a(context, "mbridge_same_download_mbprogress_progress", "id"));
        this.e = (ImageView) viewGroup.findViewById(s.a(context, "mbridge_same_download_mbprogress_status_icon", "id"));
        this.f = (TextView) viewGroup.findViewById(s.a(context, "mbridge_same_download_mbprogress_status_desc", "id"));
        b();
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.a == 0 || this.j != 1) {
            return;
        }
        e();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        if (TextUtils.isEmpty(this.h)) {
            return;
        }
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            cls.getMethod("deleteDownloadListener", String.class, IDownloadListener.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.h, this.k);
            this.k = null;
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

    public void setProgress(int i) {
        this.c = i;
        if (this.b == 2) {
            a(1);
        }
    }

    private void a(final int i) {
        this.a = i;
        if (this.j == 1 || i == 0) {
            post(new Runnable() {
                @Override
                public final void run() {
                    int i2 = i;
                    if (i2 == 1) {
                        MBDownloadProgressBar.b(MBDownloadProgressBar.this);
                        return;
                    }
                    if (i2 == 2) {
                        MBDownloadProgressBar.c(MBDownloadProgressBar.this);
                        return;
                    }
                    if (i2 == 3) {
                        MBDownloadProgressBar.d(MBDownloadProgressBar.this);
                    } else if (i2 != 4) {
                        MBDownloadProgressBar.this.a();
                    } else {
                        MBDownloadProgressBar.e(MBDownloadProgressBar.this);
                    }
                }
            });
        }
    }

    private void a() {
        ImageView imageView = this.e;
        if (imageView != null && imageView.getVisibility() != 8) {
            this.e.setVisibility(8);
        }
        ProgressBar progressBar = this.d;
        if (progressBar != null) {
            progressBar.setProgress(0);
        }
        if (this.f != null) {
            if (TextUtils.isEmpty(this.g)) {
                this.f.setText(s.a(getContext(), "mbridge_cm_progress_status_descri_default", i.g));
            } else {
                this.f.setText(this.g);
            }
        }
    }

    public int getmStatus() {
        return this.a;
    }

    public void setText(String str) {
        this.g = str;
        a();
    }

    public void setTextSize(float f) {
        this.f.setTextSize(f);
    }

    public void setLinkType(int i) {
        this.i = i;
    }

    public void setUniqueKey(String str) {
        this.h = str;
        b();
    }

    public void setCtaldtypeUrl(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if ("1".equals(ak.a(str, "ctaldtype"))) {
            this.j = 1;
            e();
        } else {
            this.j = 0;
        }
    }

    public boolean NotProgressBarInterceptedClick() {
        if (this.i == 3) {
            b();
            int i = this.a;
            if (i == 2) {
                c();
                return true;
            }
            if (i == 1) {
            }
        }
        return true;
    }

    @Override
    public boolean performClick() {
        if (this.i == 3) {
            e();
            b();
            if (this.a == 2) {
                c();
            }
        }
        return super.performClick();
    }

    private void b() {
        b(d());
    }

    private void b(int i) {
        if (i == -1) {
            this.a = 0;
        } else if (i == 9) {
            this.a = 4;
        } else if (i == 1) {
            this.a = 3;
        } else if (i == 2) {
            this.a = 1;
        } else if (i == 3) {
            this.a = 0;
        } else if (i == 5 || i == 6) {
            this.a = 2;
        }
        a(this.a);
    }

    private void c() {
        if (TextUtils.isEmpty(this.h)) {
            return;
        }
        try {
            String strB = e.a(com.mbridge.msdk.foundation.db.i.a(getContext())).b(this.h);
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            cls.getMethod("start", String.class, String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.h, strB);
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

    private int d() {
        if (!TextUtils.isEmpty(this.h)) {
            try {
                Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
                return ((Integer) cls.getMethod("getTaskStatusByUniqueKey", String.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.h)).intValue();
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

    private void e() {
        if (this.k == null) {
            this.k = new IDownloadListener() {
                @Override
                public final void onEnd(int i, int i2, String str) {
                }

                @Override
                public final void onStart() {
                }

                @Override
                public final void onProgressUpdate(int i) {
                    MBDownloadProgressBar.this.setProgress(i);
                }

                @Override
                public final void onStatus(int i) {
                    if (MBDownloadProgressBar.this.b != i) {
                        MBDownloadProgressBar.this.b = i;
                        MBDownloadProgressBar.this.b(i);
                    }
                }
            };
            f();
        }
    }

    private void f() {
        if (TextUtils.isEmpty(this.h)) {
            return;
        }
        try {
            Class<?> cls = Class.forName("com.mbridge.msdk.mbdownload.manager.ADownloadManager");
            cls.getMethod("addDownloadListener", String.class, IDownloadListener.class).invoke(cls.getMethod("getInstance", new Class[0]).invoke(null, new Object[0]), this.h, this.k);
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

    static void b(MBDownloadProgressBar mBDownloadProgressBar) {
        ImageView imageView = mBDownloadProgressBar.e;
        if (imageView != null && imageView.getVisibility() != 0) {
            mBDownloadProgressBar.e.setVisibility(0);
        }
        ProgressBar progressBar = mBDownloadProgressBar.d;
        if (progressBar != null) {
            progressBar.setProgress(mBDownloadProgressBar.c);
        }
        TextView textView = mBDownloadProgressBar.f;
        if (textView != null) {
            textView.setText(mBDownloadProgressBar.c + "%");
        }
    }

    static void c(MBDownloadProgressBar mBDownloadProgressBar) {
        ImageView imageView = mBDownloadProgressBar.e;
        if (imageView != null && imageView.getVisibility() != 0) {
            mBDownloadProgressBar.e.setVisibility(0);
        }
        TextView textView = mBDownloadProgressBar.f;
        if (textView != null) {
            textView.setText(s.a(mBDownloadProgressBar.getContext(), "mbridge_cm_progress_status_descri_pause", i.g));
        }
    }

    static void d(MBDownloadProgressBar mBDownloadProgressBar) {
        ImageView imageView = mBDownloadProgressBar.e;
        if (imageView != null && imageView.getVisibility() != 8) {
            mBDownloadProgressBar.e.setVisibility(8);
        }
        ProgressBar progressBar = mBDownloadProgressBar.d;
        if (progressBar != null) {
            progressBar.setProgress(100);
        }
        TextView textView = mBDownloadProgressBar.f;
        if (textView != null) {
            textView.setText(s.a(mBDownloadProgressBar.getContext(), "mbridge_cm_progress_status_descri_ins", i.g));
        }
    }

    static void e(MBDownloadProgressBar mBDownloadProgressBar) {
        ImageView imageView = mBDownloadProgressBar.e;
        if (imageView != null && imageView.getVisibility() != 8) {
            mBDownloadProgressBar.e.setVisibility(8);
        }
        ProgressBar progressBar = mBDownloadProgressBar.d;
        if (progressBar != null) {
            progressBar.setProgress(100);
        }
        TextView textView = mBDownloadProgressBar.f;
        if (textView != null) {
            textView.setText(s.a(mBDownloadProgressBar.getContext(), "mbridge_cm_progress_status_descri_open", i.g));
        }
    }
}
