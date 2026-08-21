package com.qq.e.ads;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.qq.e.comm.a;
import com.qq.e.comm.constants.ErrorCode;
import com.qq.e.comm.managers.b;
import com.qq.e.comm.pi.POFactory;
import com.qq.e.comm.util.GDTLogger;

public abstract class AbstractAD<T> {
    protected T a;
    private volatile boolean e;
    private volatile boolean c = false;
    private volatile boolean d = false;
    private final Handler b = new Handler(Looper.getMainLooper());

    private void b(final Context context, final String str, final String str2) {
        this.e = true;
        if (!b.b().d()) {
            a(2003);
            return;
        }
        final String strA = b.b().a();
        if (a.a(context)) {
            this.d = true;
            b.g.execute(new Runnable() {
                @Override
                public void run() {
                    try {
                        final POFactory pOFactory = b.b().c().getPOFactory();
                        AbstractAD.this.b.post(new Runnable() {
                            @Override
                            public void run() {
                                try {
                                    if (pOFactory != null) {
                                        AbstractAD.this.a = (T) AbstractAD.this.a(context, pOFactory, strA, str, str2);
                                        AbstractAD.this.c = true;
                                        if (AbstractAD.this.a == null) {
                                            AbstractAD.this.a(ErrorCode.POFACTORY_GET_INTERFACE_ERROR);
                                        } else {
                                            AbstractAD.this.a(AbstractAD.this.a);
                                        }
                                    } else {
                                        AbstractAD.this.c = true;
                                        AbstractAD.this.a(ErrorCode.PLUGIN_INIT_ERROR);
                                    }
                                } catch (Throwable th) {
                                    GDTLogger.e("初始化错误：初始化广告实例时发生异常", th);
                                    AbstractAD.this.c = true;
                                    AbstractAD.this.a(2001);
                                }
                            }
                        });
                    } catch (Throwable th) {
                        GDTLogger.e("初始化错误：初始化插件时发生异常", th);
                        AbstractAD.this.c = true;
                        AbstractAD.this.a(ErrorCode.PLUGIN_INIT_ERROR);
                    }
                }
            });
        } else {
            GDTLogger.e("Manifest文件中Activity/Service/Permission的声明有问题或者Permission权限未授予");
            a(4002);
        }
    }

    protected abstract T a(Context context, POFactory pOFactory, String str, String str2, String str3);

    protected final void a(final int i) {
        if (Thread.currentThread() == Looper.getMainLooper().getThread()) {
            b(i);
        } else {
            this.b.post(new Runnable() {
                @Override
                public void run() {
                    AbstractAD.this.b(i);
                }
            });
        }
    }

    protected final void a(Context context, String str) {
        if (context != null && !TextUtils.isEmpty(str)) {
            b(context, str, "");
        } else {
            GDTLogger.e("初始化错误：参数错误context或posId为空");
            a(2001);
        }
    }

    protected final void a(Context context, String str, String str2) {
        if (context != null && !TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
            b(context, str, str2);
        } else {
            GDTLogger.e("初始化错误：参数错误，context、posId、token 不可为空");
            a(2001);
        }
    }

    protected abstract void a(T t);

    protected final void a(String str) {
        GDTLogger.e(getClass().getSimpleName() + ":调用方法 " + str + "异常，广告实例还未初始化");
    }

    protected final boolean a() {
        return this.e && this.d;
    }

    protected abstract void b(int i);

    protected final boolean b() {
        return this.c;
    }
}
