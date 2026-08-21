package com.kwad.sdk.core.imageloader.core.assist.deque;

public class LIFOLinkedBlockingDeque<T> extends com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque<T> {
    private static final long serialVersionUID = -4114786347960826192L;

    public LIFOLinkedBlockingDeque() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean offer(T r1) {
            r0 = this;
            boolean r1 = super.offerFirst(r1)
            return r1
    }

    @Override
    public T remove() {
            r1 = this;
            java.lang.Object r0 = super.removeFirst()
            return r0
    }
}
