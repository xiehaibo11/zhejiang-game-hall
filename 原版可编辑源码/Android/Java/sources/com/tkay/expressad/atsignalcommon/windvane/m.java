package com.tkay.expressad.atsignalcommon.windvane;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.webkit.WebView;
import com.tkay.expressad.atsignalcommon.b.c;
import com.tkay.expressad.atsignalcommon.mraid.MraidUriUtil;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class m implements Handler.Callback, d {
    protected Pattern a;
    protected String b;
    protected Context d;
    protected WindVaneWebView e;
    protected final int c = 1;
    protected Handler f = new Handler(Looper.getMainLooper(), this);

    public m(Context context) {
        this.d = context;
    }

    @Override
    public final WebView a() {
        return this.e;
    }

    @Override
    public final void a(WindVaneWebView windVaneWebView) {
        this.e = windVaneWebView;
    }

    @Override
    public final a b(String str) {
        if (str == null) {
            return null;
        }
        a mraidMethodContext = MraidUriUtil.getMraidMethodContext(this.e, str);
        if (mraidMethodContext != null) {
            mraidMethodContext.a = this.e;
            return mraidMethodContext;
        }
        Matcher matcher = this.a.matcher(str);
        if (matcher.matches()) {
            a aVar = new a();
            int iGroupCount = matcher.groupCount();
            if (iGroupCount >= 5) {
                aVar.f = matcher.group(5);
            }
            if (iGroupCount >= 3) {
                aVar.d = matcher.group(1);
                aVar.g = matcher.group(2);
                aVar.e = matcher.group(3);
                if (com.tkay.expressad.atsignalcommon.base.e.k != null && com.tkay.expressad.atsignalcommon.base.e.k.containsKey(aVar.e)) {
                    aVar.e = com.tkay.expressad.atsignalcommon.base.e.k.get(aVar.e);
                }
                aVar.a = this.e;
                return aVar;
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x006b  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(String str) {
        a mraidMethodContext;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (str == null) {
            mraidMethodContext = null;
        } else {
            mraidMethodContext = MraidUriUtil.getMraidMethodContext(this.e, str);
            if (mraidMethodContext != null) {
                mraidMethodContext.a = this.e;
            } else {
                Matcher matcher = this.a.matcher(str);
                if (matcher.matches()) {
                    mraidMethodContext = new a();
                    int iGroupCount = matcher.groupCount();
                    if (iGroupCount >= 5) {
                        mraidMethodContext.f = matcher.group(5);
                    }
                    if (iGroupCount >= 3) {
                        mraidMethodContext.d = matcher.group(1);
                        mraidMethodContext.g = matcher.group(2);
                        mraidMethodContext.e = matcher.group(3);
                        if (com.tkay.expressad.atsignalcommon.base.e.k != null && com.tkay.expressad.atsignalcommon.base.e.k.containsKey(mraidMethodContext.e)) {
                            mraidMethodContext.e = com.tkay.expressad.atsignalcommon.base.e.k.get(mraidMethodContext.e);
                        }
                        mraidMethodContext.a = this.e;
                    }
                }
            }
        }
        if (mraidMethodContext == null) {
            return;
        }
        Object jsObject = mraidMethodContext.a != null ? mraidMethodContext.a.getJsObject(mraidMethodContext.d) : null;
        if (jsObject == null) {
            return;
        }
        try {
            c.f fVarA = com.tkay.expressad.atsignalcommon.b.c.a(this.d.getClassLoader(), jsObject.getClass().getName()).a(mraidMethodContext.e, Object.class, String.class);
            fVarA.a();
            if (jsObject == null || !(jsObject instanceof l)) {
                return;
            }
            mraidMethodContext.b = jsObject;
            mraidMethodContext.c = fVarA;
            mraidMethodContext.b = jsObject;
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            messageObtain.obj = mraidMethodContext;
            this.f.sendMessage(messageObtain);
        } catch (c.b.a e) {
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void a(a aVar) {
        Object jsObject = aVar.a == null ? null : aVar.a.getJsObject(aVar.d);
        if (jsObject == null) {
            return;
        }
        try {
            c.f fVarA = com.tkay.expressad.atsignalcommon.b.c.a(this.d.getClassLoader(), jsObject.getClass().getName()).a(aVar.e, Object.class, String.class);
            fVarA.a();
            if (jsObject == null || !(jsObject instanceof l)) {
                return;
            }
            aVar.b = jsObject;
            aVar.c = fVarA;
            aVar.b = jsObject;
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            messageObtain.obj = aVar;
            this.f.sendMessage(messageObtain);
        } catch (c.b.a e) {
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void b(a aVar) {
        Message messageObtain = Message.obtain();
        messageObtain.what = 1;
        messageObtain.obj = aVar;
        this.f.sendMessage(messageObtain);
    }

    @Override
    public final boolean handleMessage(Message message) {
        a aVar = (a) message.obj;
        if (aVar == null) {
            return false;
        }
        try {
            if (message.what == 1) {
                Object obj = aVar.b;
                c.f fVar = aVar.c;
                Object[] objArr = new Object[2];
                objArr[0] = aVar;
                objArr[1] = TextUtils.isEmpty(aVar.f) ? "{}" : aVar.f;
                fVar.a(obj, objArr);
                return true;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    @Override
    public final void a(Pattern pattern) {
        this.a = pattern;
    }

    @Override
    public final void d(String str) {
        this.b = str;
    }

    @Override
    public final boolean a(String str) {
        if (!n.a(str)) {
            return false;
        }
        this.a = n.b(str);
        this.b = str;
        return true;
    }

    @Override
    public final String b() {
        return this.b;
    }
}
