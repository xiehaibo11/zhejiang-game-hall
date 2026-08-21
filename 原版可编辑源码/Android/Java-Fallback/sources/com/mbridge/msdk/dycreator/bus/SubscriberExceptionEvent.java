package com.mbridge.msdk.dycreator.bus;

public final class SubscriberExceptionEvent {
    public final java.lang.Object causingEvent;
    public final java.lang.Object causingSubscriber;
    public final com.mbridge.msdk.dycreator.bus.EventBus eventBus;
    public final java.lang.Throwable throwable;

    public SubscriberExceptionEvent(com.mbridge.msdk.dycreator.bus.EventBus r1, java.lang.Throwable r2, java.lang.Object r3, java.lang.Object r4) {
            r0 = this;
            r0.<init>()
            r0.eventBus = r1
            r0.throwable = r2
            r0.causingEvent = r3
            r0.causingSubscriber = r4
            return
    }
}
