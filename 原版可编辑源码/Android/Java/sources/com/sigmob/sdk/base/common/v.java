package com.sigmob.sdk.base.common;

import android.os.Bundle;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import java.util.Map;

public abstract class v extends m {
    protected String a;
    protected m.b b;
    protected BaseAdUnit c;
    private EventForwardingBroadcastReceiver d;

    protected v(m.b bVar) {
        this.b = null;
        this.b = bVar;
    }

    protected abstract void a(m.b bVar);

    public void a(BaseAdUnit baseAdUnit, Bundle bundle) {
        EventForwardingBroadcastReceiver eventForwardingBroadcastReceiver = new EventForwardingBroadcastReceiver(baseAdUnit, this.b, this.a);
        this.d = eventForwardingBroadcastReceiver;
        eventForwardingBroadcastReceiver.a(eventForwardingBroadcastReceiver);
    }

    public void a(Map<String, Object> map, BaseAdUnit baseAdUnit) {
        this.c = baseAdUnit;
        this.a = baseAdUnit.getUuid();
        a(this.b);
    }

    protected abstract boolean a(BaseAdUnit baseAdUnit);

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
    public void b(BaseAdUnit baseAdUnit) {
        EventForwardingBroadcastReceiver eventForwardingBroadcastReceiver = this.d;
        if (eventForwardingBroadcastReceiver != null) {
            eventForwardingBroadcastReceiver.b(eventForwardingBroadcastReceiver);
        }
    }
}
