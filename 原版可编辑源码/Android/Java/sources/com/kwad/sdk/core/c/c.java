package com.kwad.sdk.core.c;

import android.os.Bundle;

public interface c<T> {
    void a(T t, Bundle bundle);

    void b(T t);

    void c(T t);

    void d(T t);

    void onBackToBackground();

    void onBackToForeground();
}
