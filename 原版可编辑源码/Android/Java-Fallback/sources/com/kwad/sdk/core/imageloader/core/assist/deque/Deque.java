package com.kwad.sdk.core.imageloader.core.assist.deque;

public interface Deque<E> extends java.util.Queue<E> {
    @Override
    boolean add(E r1);

    void addFirst(E r1);

    void addLast(E r1);

    @Override
    boolean contains(java.lang.Object r1);

    java.util.Iterator<E> descendingIterator();

    @Override
    E element();

    E getFirst();

    E getLast();

    @Override
    java.util.Iterator<E> iterator();

    @Override
    boolean offer(E r1);

    boolean offerFirst(E r1);

    boolean offerLast(E r1);

    @Override
    E peek();

    E peekFirst();

    E peekLast();

    @Override
    E poll();

    E pollFirst();

    E pollLast();

    E pop();

    void push(E r1);

    @Override
    E remove();

    @Override
    boolean remove(java.lang.Object r1);

    E removeFirst();

    boolean removeFirstOccurrence(java.lang.Object r1);

    E removeLast();

    boolean removeLastOccurrence(java.lang.Object r1);

    @Override
    int size();
}
