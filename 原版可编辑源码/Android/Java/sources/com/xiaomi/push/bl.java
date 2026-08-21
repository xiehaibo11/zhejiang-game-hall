package com.xiaomi.push;

import java.util.LinkedList;

public class bl {
    private LinkedList<a> a = new LinkedList<>();

    public class a {
        private static final bl a = new bl();
        public int a;
        public Object a;
        public String a;

        a(int i, Object obj) {
            this.a = i;
            this.a = obj;
        }
    }

    public static bl a() {
        return a.a;
    }

    private void a() {
        if (this.a.size() > 100) {
            this.a.removeFirst();
        }
    }

    public synchronized int a() {
        return this.a.size();
    }

    public synchronized LinkedList<a> a() {
        LinkedList<a> linkedList;
        linkedList = this.a;
        this.a = new LinkedList<>();
        return linkedList;
    }

    public synchronized void a(Object obj) {
        this.a.add(new a(0, obj));
        a();
    }
}
