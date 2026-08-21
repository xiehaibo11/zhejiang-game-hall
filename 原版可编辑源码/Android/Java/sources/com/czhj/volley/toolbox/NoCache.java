package com.czhj.volley.toolbox;

import com.czhj.volley.Cache;

public class NoCache implements Cache {
    @Override
    public void clear() {
    }

    @Override
    public Cache.Entry get(String str) {
        return null;
    }

    @Override
    public void initialize() {
    }

    @Override
    public void invalidate(String str, boolean z) {
    }

    @Override
    public void put(String str, Cache.Entry entry) {
    }

    @Override
    public void remove(String str) {
    }
}
