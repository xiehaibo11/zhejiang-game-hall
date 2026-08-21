package com.kwad.sdk.core.imageloader.core.assist.deque;

public interface BlockingDeque<E> extends com.kwad.sdk.core.imageloader.core.assist.deque.Deque<E>, java.util.concurrent.BlockingQueue<E> {
    @Override
    boolean add(E r1);

    @Override
    void addFirst(E r1);

    @Override
    void addLast(E r1);

    @Override
    boolean contains(java.lang.Object r1);

    @Override
    E element();

    @Override
    java.util.Iterator<E> iterator();

    @Override
    boolean offer(E r1);

    @Override
    boolean offer(E r1, long r2, java.util.concurrent.TimeUnit r4);

    @Override
    boolean offerFirst(E r1);

    boolean offerFirst(E r1, long r2, java.util.concurrent.TimeUnit r4);

    @Override
    boolean offerLast(E r1);

    boolean offerLast(E r1, long r2, java.util.concurrent.TimeUnit r4);

    @Override
    E peek();

    @Override
    E poll();

    @Override
    E poll(long r1, java.util.concurrent.TimeUnit r3);

    E pollFirst(long r1, java.util.concurrent.TimeUnit r3);

    E pollLast(long r1, java.util.concurrent.TimeUnit r3);

    @Override
    void push(E r1);

    @Override
    void put(E r1);

    void putFirst(E r1);

    void putLast(E r1);

    @Override
    E remove();

    @Override
    boolean remove(java.lang.Object r1);

    @Override
    boolean removeFirstOccurrence(java.lang.Object r1);

    @Override
    boolean removeLastOccurrence(java.lang.Object r1);

    @Override
    int size();

    @Override
    E take();

    E takeFirst();

    E takeLast();
}
