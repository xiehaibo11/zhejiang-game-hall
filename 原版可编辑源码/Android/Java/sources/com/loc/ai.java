package com.loc;

import android.content.ContentResolver;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.provider.Settings;
import android.text.TextUtils;
import java.lang.ref.WeakReference;
import java.util.List;

public final class ai {
    public static final String a = x.c("SU2hhcmVkUHJlZmVyZW5jZUFkaXU");
    private static ai f;
    private List<String> b;
    private String c;
    private final Context d;
    private final Handler e;

    private static final class a extends Handler {
        private final WeakReference<ai> a;

        a(Looper looper, ai aiVar) {
            super(looper);
            this.a = new WeakReference<>(aiVar);
        }

        a(ai aiVar) {
            this.a = new WeakReference<>(aiVar);
        }

        @Override
        public final void handleMessage(Message message) {
            ai aiVar = this.a.get();
            if (aiVar == null || message == null || message.obj == null) {
                return;
            }
            aiVar.a((String) message.obj, message.what);
        }
    }

    private ai(Context context) {
        this.d = context.getApplicationContext();
        this.e = Looper.myLooper() == null ? new a(Looper.getMainLooper(), this) : new a(this);
    }

    public static ai a(Context context) {
        if (f == null) {
            synchronized (ai.class) {
                if (f == null) {
                    f = new ai(context);
                }
            }
        }
        return f;
    }

    /* JADX WARN: Type inference failed for: r0v14, types: [com.loc.ai$1] */
    private synchronized void a(final String str, final int i) {
        ContentResolver contentResolver;
        String str2;
        if (Looper.myLooper() == Looper.getMainLooper()) {
            new Thread() {
                @Override
                public final void run() {
                    String strB = ao.b(str);
                    if (TextUtils.isEmpty(strB)) {
                        return;
                    }
                    if ((i & 1) > 0) {
                        try {
                            if (Build.VERSION.SDK_INT < 23 || Settings.System.canWrite(ai.this.d)) {
                                ContentResolver contentResolver2 = ai.this.d.getContentResolver();
                                String str3 = ai.this.c;
                                Settings.System.putString(contentResolver2, str3, strB);
                            }
                        } catch (Exception unused) {
                        }
                    }
                    if ((i & 16) > 0) {
                        ak.a(ai.this.d, ai.this.c, strB);
                    }
                    if ((i & 256) > 0) {
                        SharedPreferences.Editor editorEdit = ai.this.d.getSharedPreferences(ai.a, 0).edit();
                        editorEdit.putString(ai.this.c, strB);
                        if (Build.VERSION.SDK_INT >= 9) {
                            editorEdit.apply();
                        } else {
                            editorEdit.commit();
                        }
                    }
                }
            }.start();
            return;
        }
        String strB = ao.b(str);
        if (!TextUtils.isEmpty(strB)) {
            if ((i & 1) > 0) {
                try {
                    if (Build.VERSION.SDK_INT >= 23) {
                        contentResolver = this.d.getContentResolver();
                        str2 = this.c;
                    } else {
                        contentResolver = this.d.getContentResolver();
                        str2 = this.c;
                    }
                    Settings.System.putString(contentResolver, str2, strB);
                } catch (Exception unused) {
                }
            }
            if ((i & 16) > 0) {
                ak.a(this.d, this.c, strB);
            }
            if ((i & 256) > 0) {
                SharedPreferences.Editor editorEdit = this.d.getSharedPreferences(a, 0).edit();
                editorEdit.putString(this.c, strB);
                if (Build.VERSION.SDK_INT >= 9) {
                    editorEdit.apply();
                    return;
                }
                editorEdit.commit();
            }
        }
    }

    public final void a(String str) {
        this.c = str;
    }

    public final void b(String str) {
        List<String> list = this.b;
        if (list != null) {
            list.clear();
            this.b.add(str);
        }
        a(str, 273);
    }
}
