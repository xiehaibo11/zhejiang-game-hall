package com.kwad.components.offline.api;

public interface IOfflineCompo {

    public interface Priority {
        public static final int HIGH = -100;
        public static final int HIGHEST = -200;
        public static final int LOW = 100;
        public static final int LOWEST = 200;
        public static final int NORMAL = 0;
    }

    java.lang.Class getComponentsType();

    void init(android.content.Context r1);

    int priority();
}
