package com.mbridge.msdk.video.dynview;

import android.content.Context;
import android.view.View;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import java.util.List;

public final class c {
    private Context a;
    private String b;
    private int c;
    private float d;
    private float e;
    private int f;
    private int g;
    private View h;
    private List<CampaignEx> i;
    private int j;
    private boolean k;
    private List<String> l;
    private int m;
    private String n;

    public interface b {
        b a(float f);

        b a(int i);

        b a(Context context);

        b a(View view);

        b a(String str);

        b a(List<CampaignEx> list);

        b a(boolean z);

        c a();

        b b(float f);

        b b(int i);

        b b(String str);

        b b(List<String> list);

        b c(int i);

        b d(int i);

        b e(int i);
    }

    public final Context a() {
        return this.a;
    }

    public final String b() {
        return this.b;
    }

    public final float c() {
        return this.d;
    }

    public final float d() {
        return this.e;
    }

    public final int e() {
        return this.f;
    }

    public final View f() {
        return this.h;
    }

    public final List<CampaignEx> g() {
        return this.i;
    }

    public final int h() {
        return this.c;
    }

    public final int i() {
        return this.j;
    }

    public final int j() {
        return this.g;
    }

    public final boolean k() {
        return this.k;
    }

    public final List<String> l() {
        return this.l;
    }

    private c(a aVar) {
        this.e = aVar.e;
        this.d = aVar.d;
        this.f = aVar.f;
        this.g = aVar.g;
        this.a = aVar.a;
        this.b = aVar.b;
        this.c = aVar.c;
        this.h = aVar.h;
        this.i = aVar.i;
        this.j = aVar.j;
        this.k = aVar.k;
        this.l = aVar.l;
        this.m = aVar.m;
        this.n = aVar.n;
    }

    public static class a implements b {
        private Context a;
        private String b;
        private int c;
        private float d;
        private float e;
        private int f;
        private int g;
        private View h;
        private List<CampaignEx> i;
        private int j;
        private boolean k;
        private List<String> l;
        private int m;
        private String n;

        @Override
        public final b a(Context context) {
            this.a = context.getApplicationContext();
            return this;
        }

        @Override
        public final b a(String str) {
            this.b = str;
            return this;
        }

        @Override
        public final b a(int i) {
            this.c = i;
            return this;
        }

        @Override
        public final b a(float f) {
            this.d = f;
            return this;
        }

        @Override
        public final b b(float f) {
            this.e = f;
            return this;
        }

        @Override
        public final b b(int i) {
            this.f = i;
            return this;
        }

        @Override
        public final b c(int i) {
            this.g = i;
            return this;
        }

        @Override
        public final b a(View view) {
            this.h = view;
            return this;
        }

        @Override
        public final b a(List<CampaignEx> list) {
            this.i = list;
            return this;
        }

        @Override
        public final b d(int i) {
            this.j = i;
            return this;
        }

        @Override
        public final b a(boolean z) {
            this.k = z;
            return this;
        }

        @Override
        public final b b(List<String> list) {
            this.l = list;
            return this;
        }

        @Override
        public final b e(int i) {
            this.m = i;
            return this;
        }

        @Override
        public final b b(String str) {
            this.n = str;
            return this;
        }

        @Override
        public final c a() {
            return new c(this);
        }
    }
}
