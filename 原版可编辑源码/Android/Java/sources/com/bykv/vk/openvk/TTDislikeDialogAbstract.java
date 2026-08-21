package com.bykv.vk.openvk;

import android.app.Dialog;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.bykv.vk.openvk.dislike.TTDislikeListView;

public abstract class TTDislikeDialogAbstract extends Dialog {
    private TTDislikeController df;
    private View rg;

    public abstract int getLayoutId();

    public abstract ViewGroup.LayoutParams getLayoutParams();

    public abstract int[] getTTDislikeListViewIds();

    @Deprecated
    public void startPersonalizePromptActivity() {
    }

    public TTDislikeDialogAbstract(Context context) {
        super(context);
    }

    public TTDislikeDialogAbstract(Context context, int i) {
        super(context, i);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            View viewInflate = LayoutInflater.from(getContext()).inflate(getLayoutId(), (ViewGroup) null);
            this.rg = viewInflate;
            if (viewInflate == null) {
                return;
            }
            ViewGroup.LayoutParams layoutParams = getLayoutParams();
            View view = this.rg;
            if (layoutParams == null) {
                layoutParams = new ViewGroup.LayoutParams(-1, -1);
            }
            setContentView(view, layoutParams);
            rg();
        } catch (Exception unused) {
            Log.e("TTDislikeDialogAbstract", "getLayoutId布局文件id可能异常，请检查");
        }
    }

    protected void rg() {
        if (this.df == null || this.rg == null) {
            return;
        }
        int[] tTDislikeListViewIds = getTTDislikeListViewIds();
        if (tTDislikeListViewIds == null || tTDislikeListViewIds.length <= 0) {
            throw new IllegalArgumentException("dislike选项列表为空，请设置TTDislikeListView");
        }
        for (int i : tTDislikeListViewIds) {
            View viewFindViewById = this.rg.findViewById(i);
            if (viewFindViewById == null) {
                throw new IllegalArgumentException("getTTDislikeListViewIds提供的id找不到view，请检查");
            }
            if (!(viewFindViewById instanceof TTDislikeListView)) {
                throw new IllegalArgumentException("getTTDislikeListViewIds找到的view类型异常，请检查");
            }
            ((TTDislikeListView) viewFindViewById).setDislikeInfo(this.df);
        }
    }

    public void setDislikeModel(TTDislikeController tTDislikeController) {
        this.df = tTDislikeController;
        rg();
    }

    @Override
    public void show() {
        super.show();
    }
}
