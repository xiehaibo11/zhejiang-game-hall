package com.mbridge.msdk.mbjscommon.windvane;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.mbridge.msdk.mbjscommon.b.a;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class i implements Handler.Callback, b {
    protected Pattern a;
    protected String b;
    protected Context d;
    protected WindVaneWebView e;
    protected final int c = 1;
    protected Handler f = new Handler(Looper.getMainLooper(), this);

    public i(Context context) {
        this.d = context;
    }

    @Override
    public final void a(WindVaneWebView windVaneWebView) {
        this.e = windVaneWebView;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0052  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(String str) {
        a aVarA;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (str != null) {
            aVarA = com.mbridge.msdk.mbjscommon.mraid.c.a(this.e, str);
            if (aVarA != null) {
                aVarA.a = this.e;
            } else {
                Matcher matcher = this.a.matcher(str);
                if (matcher.matches()) {
                    aVarA = new a();
                    int iGroupCount = matcher.groupCount();
                    if (iGroupCount >= 5) {
                        aVarA.f = matcher.group(5);
                    }
                    if (iGroupCount >= 3) {
                        aVarA.d = matcher.group(1);
                        aVarA.g = matcher.group(2);
                        aVarA.e = matcher.group(3);
                        aVarA.a = this.e;
                    } else {
                        aVarA = null;
                    }
                }
            }
        }
        if (aVarA == null) {
            return;
        }
        Object jsObject = aVarA.a != null ? aVarA.a.getJsObject(aVarA.d) : null;
        if (jsObject == null) {
            return;
        }
        try {
            a.d dVarA = com.mbridge.msdk.mbjscommon.b.a.a(this.d.getClassLoader(), jsObject.getClass().getName()).a(aVarA.e, Object.class, String.class);
            dVarA.a();
            if (jsObject == null || !(jsObject instanceof j)) {
                return;
            }
            aVarA.b = jsObject;
            aVarA.c = dVarA;
            aVarA.b = jsObject;
            Message messageObtain = Message.obtain();
            messageObtain.what = 1;
            messageObtain.obj = aVarA;
            this.f.sendMessage(messageObtain);
        } catch (a.b.a e) {
            e.printStackTrace();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
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
                a.d dVar = aVar.c;
                Object[] objArr = new Object[2];
                objArr[0] = aVar;
                objArr[1] = TextUtils.isEmpty(aVar.f) ? "{}" : aVar.f;
                dVar.a(obj, objArr);
                return true;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return false;
    }

    @Override
    public final boolean a(String str) {
        if (!k.a(str)) {
            return false;
        }
        this.a = k.b(str);
        this.b = str;
        return true;
    }
}
