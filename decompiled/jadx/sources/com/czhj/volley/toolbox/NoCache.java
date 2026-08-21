package com.czhj.volley.toolbox;

import com.czhj.volley.Cache;

/* JADX INFO: loaded from: classes.dex */
public class NoCache implements Cache {
    @Override // com.czhj.volley.Cache
    public void clear() {
    }

    @Override // com.czhj.volley.Cache
    public Cache.Entry get(String str) {
        return null;
    }

    @Override // com.czhj.volley.Cache
    public void initialize() {
    }

    @Override // com.czhj.volley.Cache
    public void invalidate(String str, boolean z) {
    }

    @Override // com.czhj.volley.Cache
    public void put(String str, Cache.Entry entry) {
    }

    @Override // com.czhj.volley.Cache
    public void remove(String str) {
    }
}
