package com.igexin.sdk;

import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;

class a extends Handler {
    final GTIntentService a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(GTIntentService gTIntentService) {
        super(Looper.getMainLooper());
        this.a = gTIntentService;
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public void handleMessage(Message message) {
        if (message == null) {
            return;
        }
        if (message.what == 1 && (message.obj instanceof Intent)) {
            GTIntentService gTIntentService = this.a;
            gTIntentService.processOnHandleIntent(gTIntentService, (Intent) message.obj);
        }
        super.handleMessage(message);
    }
}
