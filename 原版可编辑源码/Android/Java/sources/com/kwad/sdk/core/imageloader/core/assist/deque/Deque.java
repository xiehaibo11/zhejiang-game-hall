package com.kwad.sdk.core.imageloader.core.assist.deque;

import java.util.Iterator;
import java.util.Queue;

public interface Deque<E> extends Queue<E> {
    @Override
    boolean add(E e);

    void addFirst(E e);

    void addLast(E e);

    @Override
    boolean contains(Object obj);

    Iterator<E> descendingIterator();

    @Override
    E element();

    E getFirst();

    E getLast();

    @Override
    Iterator<E> iterator();

    @Override
    boolean offer(E e);

    boolean offerFirst(E e);

    boolean offerLast(E e);

    @Override
    E peek();

    E peekFirst();

    E peekLast();

    @Override
    E poll();

    E pollFirst();

    E pollLast();

    E pop();

    void push(E e);

    @Override
    E remove();

    @Override
    boolean remove(Object obj);

    E removeFirst();

    boolean removeFirstOccurrence(Object obj);

    E removeLast();

    boolean removeLastOccurrence(Object obj);

    @Override
    int size();
}
