package com.xiaomi.push;

import java.util.LinkedList;

/* JADX INFO: loaded from: classes4.dex */
public class bl {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private LinkedList<a> f8062a = new LinkedList<>();

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final bl f8063a = new bl();

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public int f156a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public Object f157a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public String f158a;

        a(int i, Object obj) {
            this.f156a = i;
            this.f157a = obj;
        }
    }

    public static bl a() {
        return a.f8063a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private void m154a() {
        if (this.f8062a.size() > 100) {
            this.f8062a.removeFirst();
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized int m155a() {
        return this.f8062a.size();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized LinkedList<a> m156a() {
        LinkedList<a> linkedList;
        linkedList = this.f8062a;
        this.f8062a = new LinkedList<>();
        return linkedList;
    }

    public synchronized void a(Object obj) {
        this.f8062a.add(new a(0, obj));
        m154a();
    }
}
