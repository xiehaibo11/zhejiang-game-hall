package com.mbridge.msdk.dycreator.wrapper;

import com.mbridge.msdk.dycreator.listener.DyCountDownListenerWrapper;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import java.io.File;
import java.util.List;

public class DyOption {
    private List<String> a;
    private File b;
    private CampaignEx c;
    private DyAdType d;
    private String e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private int q;
    private DyCountDownListenerWrapper r;

    public interface IViewOptionBuilder {
        IViewOptionBuilder adChoiceLink(String str);

        DyOption build();

        IViewOptionBuilder campaignEx(CampaignEx campaignEx);

        IViewOptionBuilder canSkip(boolean z);

        IViewOptionBuilder countDownTime(int i);

        IViewOptionBuilder dyAdType(DyAdType dyAdType);

        IViewOptionBuilder file(File file);

        IViewOptionBuilder fileDirs(List<String> list);

        IViewOptionBuilder isApkInfoVisible(boolean z);

        IViewOptionBuilder isClickButtonVisible(boolean z);

        IViewOptionBuilder isLogoVisible(boolean z);

        IViewOptionBuilder isScreenClick(boolean z);

        IViewOptionBuilder isShakeVisible(boolean z);

        IViewOptionBuilder orientation(int i);

        IViewOptionBuilder shakeStrenght(int i);

        IViewOptionBuilder shakeTime(int i);

        IViewOptionBuilder templateType(int i);
    }

    public List<String> getFileDirs() {
        return this.a;
    }

    public File getFile() {
        return this.b;
    }

    public CampaignEx getCampaignEx() {
        return this.c;
    }

    public DyAdType getDyAdType() {
        return this.d;
    }

    public boolean isCanSkip() {
        return this.g;
    }

    public String getAdChoiceLink() {
        return this.e;
    }

    public boolean isClickScreen() {
        return this.f;
    }

    public boolean isClickButtonVisible() {
        return this.h;
    }

    public boolean isApkInfoVisible() {
        return this.j;
    }

    public boolean isShakeVisible() {
        return this.i;
    }

    public boolean isLogoVisible() {
        return this.k;
    }

    public int getShakeStrenght() {
        return this.l;
    }

    public int getShakeTime() {
        return this.m;
    }

    public int getOrientation() {
        return this.n;
    }

    public int getCountDownTime() {
        return this.o;
    }

    public int getCurrentCountDown() {
        return this.p;
    }

    public int getTemplateType() {
        return this.q;
    }

    public void setDyCountDownListener(int i) {
        DyCountDownListenerWrapper dyCountDownListenerWrapper = this.r;
        if (dyCountDownListenerWrapper != null) {
            dyCountDownListenerWrapper.getCountDownValue(i);
        }
        this.p = i;
    }

    public void setDyCountDownListenerWrapper(DyCountDownListenerWrapper dyCountDownListenerWrapper) {
        this.r = dyCountDownListenerWrapper;
    }

    public DyOption(Builder builder) {
        this.a = builder.a;
        this.b = builder.b;
        this.c = builder.c;
        this.d = builder.d;
        this.g = builder.e;
        this.e = builder.f;
        this.f = builder.g;
        this.h = builder.h;
        this.j = builder.j;
        this.i = builder.i;
        this.k = builder.k;
        this.l = builder.l;
        this.m = builder.m;
        this.n = builder.n;
        this.o = builder.o;
        this.q = builder.p;
    }

    public static class Builder implements IViewOptionBuilder {
        private List<String> a;
        private File b;
        private CampaignEx c;
        private DyAdType d;
        private boolean e;
        private String f;
        private boolean g;
        private boolean h;
        private boolean i;
        private boolean j;
        private boolean k;
        private int l;
        private int m;
        private int n;
        private int o;
        private int p;

        @Override
        public IViewOptionBuilder fileDirs(List<String> list) {
            this.a = list;
            return this;
        }

        @Override
        public IViewOptionBuilder file(File file) {
            this.b = file;
            return this;
        }

        @Override
        public IViewOptionBuilder campaignEx(CampaignEx campaignEx) {
            this.c = campaignEx;
            return this;
        }

        @Override
        public IViewOptionBuilder dyAdType(DyAdType dyAdType) {
            this.d = dyAdType;
            return this;
        }

        @Override
        public IViewOptionBuilder canSkip(boolean z) {
            this.e = z;
            return this;
        }

        @Override
        public IViewOptionBuilder isScreenClick(boolean z) {
            this.g = z;
            return this;
        }

        @Override
        public IViewOptionBuilder adChoiceLink(String str) {
            this.f = str;
            return this;
        }

        @Override
        public IViewOptionBuilder isClickButtonVisible(boolean z) {
            this.h = z;
            return this;
        }

        @Override
        public IViewOptionBuilder isApkInfoVisible(boolean z) {
            this.j = z;
            return this;
        }

        @Override
        public IViewOptionBuilder isShakeVisible(boolean z) {
            this.i = z;
            return this;
        }

        @Override
        public IViewOptionBuilder isLogoVisible(boolean z) {
            this.k = z;
            return this;
        }

        @Override
        public IViewOptionBuilder shakeStrenght(int i) {
            this.l = i;
            return this;
        }

        @Override
        public IViewOptionBuilder shakeTime(int i) {
            this.m = i;
            return this;
        }

        @Override
        public IViewOptionBuilder orientation(int i) {
            this.n = i;
            return this;
        }

        @Override
        public IViewOptionBuilder countDownTime(int i) {
            this.o = i;
            return this;
        }

        @Override
        public IViewOptionBuilder templateType(int i) {
            this.p = i;
            return this;
        }

        @Override
        public DyOption build() {
            return new DyOption(this);
        }
    }
}
