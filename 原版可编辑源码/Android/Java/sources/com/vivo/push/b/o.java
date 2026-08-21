package com.vivo.push.b;

import android.text.TextUtils;
import com.vivo.push.model.UnvarnishedMessage;

public final class o extends v {
    protected UnvarnishedMessage a;

    public o() {
        super(3);
    }

    @Override
    protected final void c(com.vivo.push.a aVar) {
        super.c(aVar);
        aVar.a("msg_v1", this.a.unpackToJson());
    }

    public final String d() {
        UnvarnishedMessage unvarnishedMessage = this.a;
        if (unvarnishedMessage == null) {
            return null;
        }
        return unvarnishedMessage.unpackToJson();
    }

    @Override
    protected final void d(com.vivo.push.a aVar) {
        super.d(aVar);
        String strA = aVar.a("msg_v1");
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        UnvarnishedMessage unvarnishedMessage = new UnvarnishedMessage(strA);
        this.a = unvarnishedMessage;
        unvarnishedMessage.setMsgId(f());
    }

    public final UnvarnishedMessage e() {
        return this.a;
    }

    @Override
    public final String toString() {
        return "OnMessageCommand";
    }
}
