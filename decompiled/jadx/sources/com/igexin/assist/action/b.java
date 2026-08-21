package com.igexin.assist.action;

import android.text.TextUtils;
import com.igexin.assist.MessageBean;
import com.igexin.assist.sdk.AssistPushConsts;

/* JADX INFO: loaded from: classes2.dex */
class b extends Thread {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    MessageBean f2413a;
    final /* synthetic */ MessageManger b;

    b(MessageManger messageManger, MessageBean messageBean) {
        this.b = messageManger;
        this.f2413a = messageBean;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            if (this.f2413a != null) {
                if (this.f2413a.getMessageType().equals("token")) {
                    this.b.a(this.f2413a.getContext(), this.f2413a.getStringMessage(), this.f2413a.extra.getBoolean("isForce"));
                } else if (this.f2413a.getMessageType().equals("payload")) {
                    if (!TextUtils.isEmpty(this.f2413a.getStringMessage())) {
                        d dVar = new d();
                        dVar.a(this.f2413a);
                        if (dVar.a(false) && dVar.e().equals(AssistPushConsts.MSG_VALUE_PAYLOAD)) {
                            this.b.a(dVar, this.f2413a.getContext());
                        }
                    }
                } else if (this.f2413a.getMessageType().equals(AssistPushConsts.MSG_TYPE_ACTIONS) && !TextUtils.isEmpty(this.f2413a.getStringMessage())) {
                    d dVar2 = new d();
                    dVar2.a(this.f2413a);
                    if (dVar2.a(true) && dVar2.e().equals(AssistPushConsts.MSG_VALUE_PAYLOAD)) {
                        this.b.a(this.f2413a.getContext(), dVar2);
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
