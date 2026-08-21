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

/* JADX INFO: loaded from: classes3.dex */
public final class m implements Handler.Callback, d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Pattern f6445a;
    protected String b;
    protected Context d;
    protected WindVaneWebView e;
    protected final int c = 1;
    protected Handler f = new Handler(Looper.getMainLooper(), this);

    public m(Context context) {
        this.d = context;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final WebView a() {
        return this.e;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final void a(WindVaneWebView windVaneWebView) {
        this.e = windVaneWebView;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final a b(String str) {
        if (str == null) {
            return null;
        }
        a mraidMethodContext = MraidUriUtil.getMraidMethodContext(this.e, str);
        if (mraidMethodContext != null) {
            mraidMethodContext.f6439a = this.e;
            return mraidMethodContext;
        }
        Matcher matcher = this.f6445a.matcher(str);
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
                aVar.f6439a = this.e;
                return aVar;
            }
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:23:0x006b  */
    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void c(java.lang.String r8) {
        /*
            Method dump skipped, instruction units count: 205
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.atsignalcommon.windvane.m.c(java.lang.String):void");
    }

    private void a(a aVar) {
        Object jsObject = aVar.f6439a == null ? null : aVar.f6439a.getJsObject(aVar.d);
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
            if (com.tkay.expressad.b.f6449a) {
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

    @Override // android.os.Handler.Callback
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

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final void a(Pattern pattern) {
        this.f6445a = pattern;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final void d(String str) {
        this.b = str;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final boolean a(String str) {
        if (!n.a(str)) {
            return false;
        }
        this.f6445a = n.b(str);
        this.b = str;
        return true;
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.d
    public final String b() {
        return this.b;
    }
}
