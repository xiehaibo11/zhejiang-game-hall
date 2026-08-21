package com.kwad.sdk.core.imageloader.core.assist.deque;

public class LinkedBlockingDeque<E> extends java.util.AbstractQueue<E> implements com.kwad.sdk.core.imageloader.core.assist.deque.BlockingDeque<E>, java.io.Serializable {
    private static final long serialVersionUID = -387911632671998426L;
    private final int capacity;
    private transient int count;
    transient com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> first;
    transient com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> last;
    final java.util.concurrent.locks.ReentrantLock lock;
    private final java.util.concurrent.locks.Condition notEmpty;
    private final java.util.concurrent.locks.Condition notFull;

    static class 1 {
    }

    abstract class AbstractItr implements java.util.Iterator<E> {
        private com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> lastRet;
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> next;
        E nextItem;
        final com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque this$0;

        AbstractItr(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r2) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                java.util.concurrent.locks.ReentrantLock r2 = r2.lock
                r2.lock()
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = r1.firstNode()     // Catch: java.lang.Throwable -> L1c
                r1.next = r0     // Catch: java.lang.Throwable -> L1c
                if (r0 != 0) goto L14
                r0 = 0
                goto L16
            L14:
                E r0 = r0.item     // Catch: java.lang.Throwable -> L1c
            L16:
                r1.nextItem = r0     // Catch: java.lang.Throwable -> L1c
                r2.unlock()
                return
            L1c:
                r0 = move-exception
                r2.unlock()
                throw r0
        }

        private com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> succ(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r3) {
                r2 = this;
            L0:
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = r2.nextNode(r3)
                if (r0 != 0) goto L8
                r3 = 0
                return r3
            L8:
                E r1 = r0.item
                if (r1 == 0) goto Ld
                return r0
            Ld:
                if (r0 != r3) goto L14
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r3 = r2.firstNode()
                return r3
            L14:
                r3 = r0
                goto L0
        }

        void advance() {
                r2 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r0 = r2.this$0
                java.util.concurrent.locks.ReentrantLock r0 = r0.lock
                r0.lock()
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.next     // Catch: java.lang.Throwable -> L1b
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r1 = r2.succ(r1)     // Catch: java.lang.Throwable -> L1b
                r2.next = r1     // Catch: java.lang.Throwable -> L1b
                if (r1 != 0) goto L13
                r1 = 0
                goto L15
            L13:
                E r1 = r1.item     // Catch: java.lang.Throwable -> L1b
            L15:
                r2.nextItem = r1     // Catch: java.lang.Throwable -> L1b
                r0.unlock()
                return
            L1b:
                r1 = move-exception
                r0.unlock()
                throw r1
        }

        abstract com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> firstNode();

        @Override
        public boolean hasNext() {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r1.next
                if (r0 == 0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }

        @Override
        public E next() {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r1.next
                if (r0 == 0) goto Lc
                r1.lastRet = r0
                E r0 = r1.nextItem
                r1.advance()
                return r0
            Lc:
                java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
                r0.<init>()
                throw r0
        }

        abstract com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> nextNode(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r1);

        @Override
        public void remove() {
                r3 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r3.lastRet
                if (r0 == 0) goto L20
                r1 = 0
                r3.lastRet = r1
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r1 = r3.this$0
                java.util.concurrent.locks.ReentrantLock r1 = r1.lock
                r1.lock()
                E r2 = r0.item     // Catch: java.lang.Throwable -> L1b
                if (r2 == 0) goto L17
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r2 = r3.this$0     // Catch: java.lang.Throwable -> L1b
                r2.unlink(r0)     // Catch: java.lang.Throwable -> L1b
            L17:
                r1.unlock()
                return
            L1b:
                r0 = move-exception
                r1.unlock()
                throw r0
            L20:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                r0.<init>()
                throw r0
        }
    }

    class DescendingItr extends com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque<E>.AbstractItr {
        final com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque this$0;

        private DescendingItr(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1)
                return
        }

        DescendingItr(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r1, com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> firstNode() {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r0 = r1.this$0
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r0.last
                return r0
        }

        @Override
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> nextNode(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r1.prev
                return r1
        }
    }

    class Itr extends com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque<E>.AbstractItr {
        final com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque this$0;

        private Itr(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r1)
                return
        }

        Itr(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r1, com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> firstNode() {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque r0 = r1.this$0
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r0.first
                return r0
        }

        @Override
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> nextNode(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r1.next
                return r1
        }
    }

    static final class Node<E> {
        E item;
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> next;
        com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> prev;

        Node(E r1) {
                r0 = this;
                r0.<init>()
                r0.item = r1
                return
        }
    }

    public LinkedBlockingDeque() {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            r1.<init>(r0)
            return
    }

    public LinkedBlockingDeque(int r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
            r0.<init>()
            r1.lock = r0
            java.util.concurrent.locks.Condition r0 = r0.newCondition()
            r1.notEmpty = r0
            java.util.concurrent.locks.ReentrantLock r0 = r1.lock
            java.util.concurrent.locks.Condition r0 = r0.newCondition()
            r1.notFull = r0
            if (r2 <= 0) goto L1d
            r1.capacity = r2
            return
        L1d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public LinkedBlockingDeque(java.util.Collection<? extends E> r4) {
            r3 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            r3.<init>(r0)
            java.util.concurrent.locks.ReentrantLock r0 = r3.lock
            r0.lock()
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L39
        Lf:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L35
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L2f
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r2 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node     // Catch: java.lang.Throwable -> L39
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L39
            boolean r1 = r3.linkLast(r2)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L27
            goto Lf
        L27:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = "Deque full"
            r4.<init>(r1)     // Catch: java.lang.Throwable -> L39
            throw r4     // Catch: java.lang.Throwable -> L39
        L2f:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L39
            r4.<init>()     // Catch: java.lang.Throwable -> L39
            throw r4     // Catch: java.lang.Throwable -> L39
        L35:
            r0.unlock()
            return
        L39:
            r4 = move-exception
            r0.unlock()
            throw r4
    }

    private boolean linkFirst(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r3) {
            r2 = this;
            int r0 = r2.count
            int r1 = r2.capacity
            if (r0 < r1) goto L8
            r3 = 0
            return r3
        L8:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r2.first
            r3.next = r0
            r2.first = r3
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.last
            if (r1 != 0) goto L15
            r2.last = r3
            goto L17
        L15:
            r0.prev = r3
        L17:
            int r3 = r2.count
            r0 = 1
            int r3 = r3 + r0
            r2.count = r3
            java.util.concurrent.locks.Condition r3 = r2.notEmpty
            r3.signal()
            return r0
    }

    private boolean linkLast(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r3) {
            r2 = this;
            int r0 = r2.count
            int r1 = r2.capacity
            if (r0 < r1) goto L8
            r3 = 0
            return r3
        L8:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r2.last
            r3.prev = r0
            r2.last = r3
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.first
            if (r1 != 0) goto L15
            r2.first = r3
            goto L17
        L15:
            r0.next = r3
        L17:
            int r3 = r2.count
            r0 = 1
            int r3 = r3 + r0
            r2.count = r3
            java.util.concurrent.locks.Condition r3 = r2.notEmpty
            r3.signal()
            return r0
    }

    private void readObject(java.io.ObjectInputStream r2) {
            r1 = this;
            r2.defaultReadObject()
            r0 = 0
            r1.count = r0
            r0 = 0
            r1.first = r0
            r1.last = r0
        Lb:
            java.lang.Object r0 = r2.readObject()
            if (r0 == 0) goto L15
            r1.add(r0)
            goto Lb
        L15:
            return
    }

    private E unlinkFirst() {
            r4 = this;
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r4.first
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r0.next
            E r3 = r0.item
            r0.item = r1
            r0.next = r0
            r4.first = r2
            if (r2 != 0) goto L15
            r4.last = r1
            goto L17
        L15:
            r2.prev = r1
        L17:
            int r0 = r4.count
            int r0 = r0 + (-1)
            r4.count = r0
            java.util.concurrent.locks.Condition r0 = r4.notFull
            r0.signal()
            return r3
    }

    private E unlinkLast() {
            r4 = this;
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r4.last
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r0.prev
            E r3 = r0.item
            r0.item = r1
            r0.prev = r0
            r4.last = r2
            if (r2 != 0) goto L15
            r4.first = r1
            goto L17
        L15:
            r2.next = r1
        L17:
            int r0 = r4.count
            int r0 = r0 + (-1)
            r4.count = r0
            java.util.concurrent.locks.Condition r0 = r4.notFull
            r0.signal()
            return r3
    }

    private void writeObject(java.io.ObjectOutputStream r4) {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r3.lock
            r0.lock()
            r4.defaultWriteObject()     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r3.first     // Catch: java.lang.Throwable -> L1c
        La:
            if (r1 == 0) goto L14
            E r2 = r1.item     // Catch: java.lang.Throwable -> L1c
            r4.writeObject(r2)     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r1.next     // Catch: java.lang.Throwable -> L1c
            goto La
        L14:
            r1 = 0
            r4.writeObject(r1)     // Catch: java.lang.Throwable -> L1c
            r0.unlock()
            return
        L1c:
            r4 = move-exception
            r0.unlock()
            throw r4
    }

    @Override
    public boolean add(E r1) {
            r0 = this;
            r0.addLast(r1)
            r1 = 1
            return r1
    }

    @Override
    public void addFirst(E r2) {
            r1 = this;
            boolean r2 = r1.offerFirst(r2)
            if (r2 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Deque full"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void addLast(E r2) {
            r1 = this;
            boolean r2 = r1.offerLast(r2)
            if (r2 == 0) goto L7
            return
        L7:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "Deque full"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void clear() {
            r4 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r4.lock
            r0.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r4.first     // Catch: java.lang.Throwable -> L24
        L7:
            r2 = 0
            if (r1 == 0) goto L14
            r1.item = r2     // Catch: java.lang.Throwable -> L24
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r3 = r1.next     // Catch: java.lang.Throwable -> L24
            r1.prev = r2     // Catch: java.lang.Throwable -> L24
            r1.next = r2     // Catch: java.lang.Throwable -> L24
            r1 = r3
            goto L7
        L14:
            r4.last = r2     // Catch: java.lang.Throwable -> L24
            r4.first = r2     // Catch: java.lang.Throwable -> L24
            r1 = 0
            r4.count = r1     // Catch: java.lang.Throwable -> L24
            java.util.concurrent.locks.Condition r1 = r4.notFull     // Catch: java.lang.Throwable -> L24
            r1.signalAll()     // Catch: java.lang.Throwable -> L24
            r0.unlock()
            return
        L24:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public boolean contains(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.concurrent.locks.ReentrantLock r1 = r4.lock
            r1.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r4.first     // Catch: java.lang.Throwable -> L21
        Lb:
            if (r2 == 0) goto L1d
            E r3 = r2.item     // Catch: java.lang.Throwable -> L21
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L1a
            r1.unlock()
            r5 = 1
            return r5
        L1a:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r2.next     // Catch: java.lang.Throwable -> L21
            goto Lb
        L1d:
            r1.unlock()
            return r0
        L21:
            r5 = move-exception
            r1.unlock()
            throw r5
    }

    @Override
    public java.util.Iterator<E> descendingIterator() {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$DescendingItr r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$DescendingItr
            r1 = 0
            r0.<init>(r2, r1)
            return r0
    }

    @Override
    public int drainTo(java.util.Collection<? super E> r2) {
            r1 = this;
            r0 = 2147483647(0x7fffffff, float:NaN)
            int r2 = r1.drainTo(r2, r0)
            return r2
    }

    @Override
    public int drainTo(java.util.Collection<? super E> r4, int r5) {
            r3 = this;
            if (r4 == 0) goto L2e
            if (r4 == r3) goto L28
            java.util.concurrent.locks.ReentrantLock r0 = r3.lock
            r0.lock()
            int r1 = r3.count     // Catch: java.lang.Throwable -> L23
            int r5 = java.lang.Math.min(r5, r1)     // Catch: java.lang.Throwable -> L23
            r1 = 0
        L10:
            if (r1 >= r5) goto L1f
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r3.first     // Catch: java.lang.Throwable -> L23
            E r2 = r2.item     // Catch: java.lang.Throwable -> L23
            r4.add(r2)     // Catch: java.lang.Throwable -> L23
            r3.unlinkFirst()     // Catch: java.lang.Throwable -> L23
            int r1 = r1 + 1
            goto L10
        L1f:
            r0.unlock()
            return r5
        L23:
            r4 = move-exception
            r0.unlock()
            throw r4
        L28:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>()
            throw r4
        L2e:
            r4 = 0
            throw r4
    }

    @Override
    public E element() {
            r1 = this;
            java.lang.Object r0 = r1.getFirst()
            return r0
    }

    @Override
    public E getFirst() {
            r1 = this;
            java.lang.Object r0 = r1.peekFirst()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
    }

    @Override
    public E getLast() {
            r1 = this;
            java.lang.Object r0 = r1.peekLast()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
    }

    @Override
    public java.util.Iterator<E> iterator() {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Itr r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Itr
            r1 = 0
            r0.<init>(r2, r1)
            return r0
    }

    public boolean offer(E r1) {
            r0 = this;
            boolean r1 = r0.offerLast(r1)
            return r1
    }

    @Override
    public boolean offer(E r1, long r2, java.util.concurrent.TimeUnit r4) {
            r0 = this;
            boolean r1 = r0.offerLast(r1, r2, r4)
            return r1
    }

    @Override
    public boolean offerFirst(E r2) {
            r1 = this;
            if (r2 == 0) goto L19
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r2)
            java.util.concurrent.locks.ReentrantLock r2 = r1.lock
            r2.lock()
            boolean r0 = r1.linkFirst(r0)     // Catch: java.lang.Throwable -> L14
            r2.unlock()
            return r0
        L14:
            r0 = move-exception
            r2.unlock()
            throw r0
        L19:
            r2 = 0
            throw r2
    }

    @Override
    public boolean offerFirst(E r4, long r5, java.util.concurrent.TimeUnit r7) {
            r3 = this;
            if (r4 == 0) goto L32
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r4)
            long r4 = r7.toNanos(r5)
            java.util.concurrent.locks.ReentrantLock r6 = r3.lock
            r6.lockInterruptibly()
        L10:
            boolean r7 = r3.linkFirst(r0)     // Catch: java.lang.Throwable -> L2d
            if (r7 != 0) goto L28
            r1 = 0
            int r7 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r7 > 0) goto L21
            r6.unlock()
            r4 = 0
            return r4
        L21:
            java.util.concurrent.locks.Condition r7 = r3.notFull     // Catch: java.lang.Throwable -> L2d
            long r4 = r7.awaitNanos(r4)     // Catch: java.lang.Throwable -> L2d
            goto L10
        L28:
            r6.unlock()
            r4 = 1
            return r4
        L2d:
            r4 = move-exception
            r6.unlock()
            throw r4
        L32:
            r4 = 0
            throw r4
    }

    @Override
    public boolean offerLast(E r2) {
            r1 = this;
            if (r2 == 0) goto L19
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r2)
            java.util.concurrent.locks.ReentrantLock r2 = r1.lock
            r2.lock()
            boolean r0 = r1.linkLast(r0)     // Catch: java.lang.Throwable -> L14
            r2.unlock()
            return r0
        L14:
            r0 = move-exception
            r2.unlock()
            throw r0
        L19:
            r2 = 0
            throw r2
    }

    @Override
    public boolean offerLast(E r4, long r5, java.util.concurrent.TimeUnit r7) {
            r3 = this;
            if (r4 == 0) goto L32
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r4)
            long r4 = r7.toNanos(r5)
            java.util.concurrent.locks.ReentrantLock r6 = r3.lock
            r6.lockInterruptibly()
        L10:
            boolean r7 = r3.linkLast(r0)     // Catch: java.lang.Throwable -> L2d
            if (r7 != 0) goto L28
            r1 = 0
            int r7 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r7 > 0) goto L21
            r6.unlock()
            r4 = 0
            return r4
        L21:
            java.util.concurrent.locks.Condition r7 = r3.notFull     // Catch: java.lang.Throwable -> L2d
            long r4 = r7.awaitNanos(r4)     // Catch: java.lang.Throwable -> L2d
            goto L10
        L28:
            r6.unlock()
            r4 = 1
            return r4
        L2d:
            r4 = move-exception
            r6.unlock()
            throw r4
        L32:
            r4 = 0
            throw r4
    }

    @Override
    public E peek() {
            r1 = this;
            java.lang.Object r0 = r1.peekFirst()
            return r0
    }

    @Override
    public E peekFirst() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.first     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto Lb
            r1 = 0
            goto Lf
        Lb:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.first     // Catch: java.lang.Throwable -> L13
            E r1 = r1.item     // Catch: java.lang.Throwable -> L13
        Lf:
            r0.unlock()
            return r1
        L13:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E peekLast() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.last     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto Lb
            r1 = 0
            goto Lf
        Lb:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r2.last     // Catch: java.lang.Throwable -> L13
            E r1 = r1.item     // Catch: java.lang.Throwable -> L13
        Lf:
            r0.unlock()
            return r1
        L13:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E poll() {
            r1 = this;
            java.lang.Object r0 = r1.pollFirst()
            return r0
    }

    @Override
    public E poll(long r1, java.util.concurrent.TimeUnit r3) {
            r0 = this;
            java.lang.Object r1 = r0.pollFirst(r1, r3)
            return r1
    }

    @Override
    public E pollFirst() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
            java.lang.Object r1 = r2.unlinkFirst()     // Catch: java.lang.Throwable -> Ld
            r0.unlock()
            return r1
        Ld:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E pollFirst(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            long r3 = r5.toNanos(r3)
            java.util.concurrent.locks.ReentrantLock r5 = r2.lock
            r5.lockInterruptibly()
        L9:
            java.lang.Object r0 = r2.unlinkFirst()     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L21
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L1a
            r5.unlock()
            r3 = 0
            return r3
        L1a:
            java.util.concurrent.locks.Condition r0 = r2.notEmpty     // Catch: java.lang.Throwable -> L25
            long r3 = r0.awaitNanos(r3)     // Catch: java.lang.Throwable -> L25
            goto L9
        L21:
            r5.unlock()
            return r0
        L25:
            r3 = move-exception
            r5.unlock()
            throw r3
    }

    @Override
    public E pollLast() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
            java.lang.Object r1 = r2.unlinkLast()     // Catch: java.lang.Throwable -> Ld
            r0.unlock()
            return r1
        Ld:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E pollLast(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            long r3 = r5.toNanos(r3)
            java.util.concurrent.locks.ReentrantLock r5 = r2.lock
            r5.lockInterruptibly()
        L9:
            java.lang.Object r0 = r2.unlinkLast()     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L21
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 > 0) goto L1a
            r5.unlock()
            r3 = 0
            return r3
        L1a:
            java.util.concurrent.locks.Condition r0 = r2.notEmpty     // Catch: java.lang.Throwable -> L25
            long r3 = r0.awaitNanos(r3)     // Catch: java.lang.Throwable -> L25
            goto L9
        L21:
            r5.unlock()
            return r0
        L25:
            r3 = move-exception
            r5.unlock()
            throw r3
    }

    @Override
    public E pop() {
            r1 = this;
            java.lang.Object r0 = r1.removeFirst()
            return r0
    }

    @Override
    public void push(E r1) {
            r0 = this;
            r0.addFirst(r1)
            return
    }

    @Override
    public void put(E r1) {
            r0 = this;
            r0.putLast(r1)
            return
    }

    @Override
    public void putFirst(E r3) {
            r2 = this;
            if (r3 == 0) goto L21
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r3)
            java.util.concurrent.locks.ReentrantLock r3 = r2.lock
            r3.lock()
        Lc:
            boolean r1 = r2.linkFirst(r0)     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            java.util.concurrent.locks.Condition r1 = r2.notFull     // Catch: java.lang.Throwable -> L1c
            r1.await()     // Catch: java.lang.Throwable -> L1c
            goto Lc
        L18:
            r3.unlock()
            return
        L1c:
            r0 = move-exception
            r3.unlock()
            throw r0
        L21:
            r3 = 0
            throw r3
    }

    @Override
    public void putLast(E r3) {
            r2 = this;
            if (r3 == 0) goto L21
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node r0 = new com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node
            r0.<init>(r3)
            java.util.concurrent.locks.ReentrantLock r3 = r2.lock
            r3.lock()
        Lc:
            boolean r1 = r2.linkLast(r0)     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            java.util.concurrent.locks.Condition r1 = r2.notFull     // Catch: java.lang.Throwable -> L1c
            r1.await()     // Catch: java.lang.Throwable -> L1c
            goto Lc
        L18:
            r3.unlock()
            return
        L1c:
            r0 = move-exception
            r3.unlock()
            throw r0
        L21:
            r3 = 0
            throw r3
    }

    @Override
    public int remainingCapacity() {
            r3 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r3.lock
            r0.lock()
            int r1 = r3.capacity     // Catch: java.lang.Throwable -> Le
            int r2 = r3.count     // Catch: java.lang.Throwable -> Le
            int r1 = r1 - r2
            r0.unlock()
            return r1
        Le:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E remove() {
            r1 = this;
            java.lang.Object r0 = r1.removeFirst()
            return r0
    }

    @Override
    public boolean remove(java.lang.Object r1) {
            r0 = this;
            boolean r1 = r0.removeFirstOccurrence(r1)
            return r1
    }

    @Override
    public E removeFirst() {
            r1 = this;
            java.lang.Object r0 = r1.pollFirst()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean removeFirstOccurrence(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.concurrent.locks.ReentrantLock r1 = r4.lock
            r1.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r4.first     // Catch: java.lang.Throwable -> L24
        Lb:
            if (r2 == 0) goto L20
            E r3 = r2.item     // Catch: java.lang.Throwable -> L24
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L1d
            r4.unlink(r2)     // Catch: java.lang.Throwable -> L24
            r1.unlock()
            r5 = 1
            return r5
        L1d:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r2.next     // Catch: java.lang.Throwable -> L24
            goto Lb
        L20:
            r1.unlock()
            return r0
        L24:
            r5 = move-exception
            r1.unlock()
            throw r5
    }

    @Override
    public E removeLast() {
            r1 = this;
            java.lang.Object r0 = r1.pollLast()
            if (r0 == 0) goto L7
            return r0
        L7:
            java.util.NoSuchElementException r0 = new java.util.NoSuchElementException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean removeLastOccurrence(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.concurrent.locks.ReentrantLock r1 = r4.lock
            r1.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r4.last     // Catch: java.lang.Throwable -> L24
        Lb:
            if (r2 == 0) goto L20
            E r3 = r2.item     // Catch: java.lang.Throwable -> L24
            boolean r3 = r5.equals(r3)     // Catch: java.lang.Throwable -> L24
            if (r3 == 0) goto L1d
            r4.unlink(r2)     // Catch: java.lang.Throwable -> L24
            r1.unlock()
            r5 = 1
            return r5
        L1d:
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r2.prev     // Catch: java.lang.Throwable -> L24
            goto Lb
        L20:
            r1.unlock()
            return r0
        L24:
            r5 = move-exception
            r1.unlock()
            throw r5
    }

    @Override
    public int size() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
            int r1 = r2.count     // Catch: java.lang.Throwable -> Lb
            r0.unlock()
            return r1
        Lb:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E take() {
            r1 = this;
            java.lang.Object r0 = r1.takeFirst()
            return r0
    }

    @Override
    public E takeFirst() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
        L5:
            java.lang.Object r1 = r2.unlinkFirst()     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L11
            java.util.concurrent.locks.Condition r1 = r2.notEmpty     // Catch: java.lang.Throwable -> L15
            r1.await()     // Catch: java.lang.Throwable -> L15
            goto L5
        L11:
            r0.unlock()
            return r1
        L15:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public E takeLast() {
            r2 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r2.lock
            r0.lock()
        L5:
            java.lang.Object r1 = r2.unlinkLast()     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L11
            java.util.concurrent.locks.Condition r1 = r2.notEmpty     // Catch: java.lang.Throwable -> L15
            r1.await()     // Catch: java.lang.Throwable -> L15
            goto L5
        L11:
            r0.unlock()
            return r1
        L15:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public java.lang.Object[] toArray() {
            r6 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r6.lock
            r0.lock()
            int r1 = r6.count     // Catch: java.lang.Throwable -> L1c
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L1c
            r2 = 0
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r3 = r6.first     // Catch: java.lang.Throwable -> L1c
        Lc:
            if (r3 == 0) goto L18
            int r4 = r2 + 1
            E r5 = r3.item     // Catch: java.lang.Throwable -> L1c
            r1[r2] = r5     // Catch: java.lang.Throwable -> L1c
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r3 = r3.next     // Catch: java.lang.Throwable -> L1c
            r2 = r4
            goto Lc
        L18:
            r0.unlock()
            return r1
        L1c:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    @Override
    public <T> T[] toArray(T[] r6) {
            r5 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r5.lock
            r0.lock()
            int r1 = r6.length     // Catch: java.lang.Throwable -> L35
            int r2 = r5.count     // Catch: java.lang.Throwable -> L35
            if (r1 >= r2) goto L1c
            java.lang.Class r6 = r6.getClass()     // Catch: java.lang.Throwable -> L35
            java.lang.Class r6 = r6.getComponentType()     // Catch: java.lang.Throwable -> L35
            int r1 = r5.count     // Catch: java.lang.Throwable -> L35
            java.lang.Object r6 = java.lang.reflect.Array.newInstance(r6, r1)     // Catch: java.lang.Throwable -> L35
            java.lang.Object[] r6 = (java.lang.Object[]) r6     // Catch: java.lang.Throwable -> L35
            java.lang.Object[] r6 = (java.lang.Object[]) r6     // Catch: java.lang.Throwable -> L35
        L1c:
            r1 = 0
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r5.first     // Catch: java.lang.Throwable -> L35
        L1f:
            if (r2 == 0) goto L2b
            int r3 = r1 + 1
            E r4 = r2.item     // Catch: java.lang.Throwable -> L35
            r6[r1] = r4     // Catch: java.lang.Throwable -> L35
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r2 = r2.next     // Catch: java.lang.Throwable -> L35
            r1 = r3
            goto L1f
        L2b:
            int r2 = r6.length     // Catch: java.lang.Throwable -> L35
            if (r2 <= r1) goto L31
            r2 = 0
            r6[r1] = r2     // Catch: java.lang.Throwable -> L35
        L31:
            r0.unlock()
            return r6
        L35:
            r6 = move-exception
            r0.unlock()
            throw r6
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.util.concurrent.locks.ReentrantLock r0 = r4.lock
            r0.lock()
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r4.first     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto Lf
            java.lang.String r1 = "[]"
            r0.unlock()
            return r1
        Lf:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            r3 = 91
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e
        L19:
            E r3 = r1.item     // Catch: java.lang.Throwable -> L3e
            if (r3 != r4) goto L1f
            java.lang.String r3 = "(this Collection)"
        L1f:
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r1.next     // Catch: java.lang.Throwable -> L3e
            if (r1 != 0) goto L33
            r1 = 93
            r2.append(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L3e
            r0.unlock()
            return r1
        L33:
            r3 = 44
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e
            r3 = 32
            r2.append(r3)     // Catch: java.lang.Throwable -> L3e
            goto L19
        L3e:
            r1 = move-exception
            r0.unlock()
            throw r1
    }

    void unlink(com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque.Node<E> r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r0 = r3.prev
            com.kwad.sdk.core.imageloader.core.assist.deque.LinkedBlockingDeque$Node<E> r1 = r3.next
            if (r0 != 0) goto La
            r2.unlinkFirst()
            return
        La:
            if (r1 != 0) goto L10
            r2.unlinkLast()
            return
        L10:
            r0.next = r1
            r1.prev = r0
            r0 = 0
            r3.item = r0
            int r3 = r2.count
            int r3 = r3 + (-1)
            r2.count = r3
            java.util.concurrent.locks.Condition r3 = r2.notFull
            r3.signal()
            return
    }
}
