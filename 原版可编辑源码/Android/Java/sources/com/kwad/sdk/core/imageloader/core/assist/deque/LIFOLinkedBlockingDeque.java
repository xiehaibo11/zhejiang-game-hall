package com.kwad.sdk.core.imageloader.core.assist.deque;

public class LIFOLinkedBlockingDeque<T> extends LinkedBlockingDeque<T> {
    private static final long serialVersionUID = -4114786347960826192L;

    @Override
    public boolean offer(T t) {
        return super.offerFirst(t);
    }

    @Override
    public T remove() {
        return (T) super.removeFirst();
    }
}
