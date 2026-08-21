package com.kwad.sdk.core.imageloader.core.assist.deque;

import java.util.Iterator;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.TimeUnit;

public interface BlockingDeque<E> extends Deque<E>, BlockingQueue<E> {
    @Override
    boolean add(E e);

    @Override
    void addFirst(E e);

    @Override
    void addLast(E e);

    @Override
    boolean contains(Object obj);

    @Override
    E element();

    @Override
    Iterator<E> iterator();

    @Override
    boolean offer(E e);

    @Override
    boolean offer(E e, long j, TimeUnit timeUnit);

    @Override
    boolean offerFirst(E e);

    boolean offerFirst(E e, long j, TimeUnit timeUnit);

    @Override
    boolean offerLast(E e);

    boolean offerLast(E e, long j, TimeUnit timeUnit);

    @Override
    E peek();

    @Override
    E poll();

    @Override
    E poll(long j, TimeUnit timeUnit);

    E pollFirst(long j, TimeUnit timeUnit);

    E pollLast(long j, TimeUnit timeUnit);

    @Override
    void push(E e);

    @Override
    void put(E e);

    void putFirst(E e);

    void putLast(E e);

    @Override
    E remove();

    @Override
    boolean remove(Object obj);

    @Override
    boolean removeFirstOccurrence(Object obj);

    @Override
    boolean removeLastOccurrence(Object obj);

    @Override
    int size();

    @Override
    E take();

    E takeFirst();

    E takeLast();
}
