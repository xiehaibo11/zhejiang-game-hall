package com.tencent.open.web.security;

import android.view.KeyEvent;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputConnectionWrapper;
import com.tencent.open.log.SLog;

/* JADX INFO: compiled from: ProGuard */
/* JADX INFO: loaded from: classes3.dex */
public class a extends InputConnectionWrapper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f5548a;
    public static boolean b;
    public static boolean c;

    public a(InputConnection inputConnection, boolean z) {
        super(inputConnection, z);
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public boolean setComposingText(CharSequence charSequence, int i) {
        c = true;
        f5548a = charSequence.toString();
        SLog.v("openSDK_LOG.CaptureInputConnection", "-->setComposingText: " + charSequence.toString());
        return super.setComposingText(charSequence, i);
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public boolean commitText(CharSequence charSequence, int i) {
        c = true;
        f5548a = charSequence.toString();
        SLog.v("openSDK_LOG.CaptureInputConnection", "-->commitText: " + charSequence.toString());
        return super.commitText(charSequence, i);
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public boolean sendKeyEvent(KeyEvent keyEvent) {
        if (keyEvent.getAction() == 0) {
            SLog.i("openSDK_LOG.CaptureInputConnection", "sendKeyEvent");
            f5548a = String.valueOf((char) keyEvent.getUnicodeChar());
            c = true;
            SLog.d("openSDK_LOG.CaptureInputConnection", "s: " + f5548a);
        }
        SLog.d("openSDK_LOG.CaptureInputConnection", "-->sendKeyEvent: " + f5548a);
        return super.sendKeyEvent(keyEvent);
    }
}
