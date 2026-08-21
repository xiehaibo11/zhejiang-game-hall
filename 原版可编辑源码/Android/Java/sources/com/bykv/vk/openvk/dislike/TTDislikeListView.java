package com.bykv.vk.openvk.dislike;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import com.bykv.vk.openvk.FilterWord;
import com.bykv.vk.openvk.TTDislikeController;
import com.bykv.vk.openvk.api.df;
import com.bykv.vk.openvk.api.proto.EventListener;
import com.bykv.vk.openvk.api.q;

public class TTDislikeListView extends ListView {
    private TTDislikeController mDislikeController;
    private EventListener mOnItemClickBridge;
    private AdapterView.OnItemClickListener mOnItemClickListener;
    private AdapterView.OnItemClickListener mOnItemClickListenerInner;

    public TTDislikeListView(Context context) {
        super(context);
        this.mOnItemClickListenerInner = new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
                if (TTDislikeListView.this.getAdapter() != null && TTDislikeListView.this.getAdapter().getItem(i) != null && (TTDislikeListView.this.getAdapter().getItem(i) instanceof FilterWord)) {
                    FilterWord filterWord = (FilterWord) TTDislikeListView.this.getAdapter().getItem(i);
                    if (filterWord.hasSecondOptions()) {
                        return;
                    }
                    if (TTDislikeListView.this.mDislikeController != null) {
                        TTDislikeListView.this.mDislikeController.onDislikeSelected(filterWord);
                    }
                    if (TTDislikeListView.this.mOnItemClickListener != null) {
                        TTDislikeListView.this.mOnItemClickListener.onItemClick(adapterView, view, i, j);
                    }
                    if (TTDislikeListView.this.mOnItemClickBridge != null) {
                        TTDislikeListView.this.mOnItemClickBridge.onEvent(0, df.rg().rg(q.rg().rg(0, filterWord.getId()).rg(1, filterWord.getName()).df()).df());
                        return;
                    }
                    return;
                }
                throw new IllegalArgumentException("adapter数据异常，必须为FilterWord");
            }
        };
        init();
    }

    public TTDislikeListView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mOnItemClickListenerInner = new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
                if (TTDislikeListView.this.getAdapter() != null && TTDislikeListView.this.getAdapter().getItem(i) != null && (TTDislikeListView.this.getAdapter().getItem(i) instanceof FilterWord)) {
                    FilterWord filterWord = (FilterWord) TTDislikeListView.this.getAdapter().getItem(i);
                    if (filterWord.hasSecondOptions()) {
                        return;
                    }
                    if (TTDislikeListView.this.mDislikeController != null) {
                        TTDislikeListView.this.mDislikeController.onDislikeSelected(filterWord);
                    }
                    if (TTDislikeListView.this.mOnItemClickListener != null) {
                        TTDislikeListView.this.mOnItemClickListener.onItemClick(adapterView, view, i, j);
                    }
                    if (TTDislikeListView.this.mOnItemClickBridge != null) {
                        TTDislikeListView.this.mOnItemClickBridge.onEvent(0, df.rg().rg(q.rg().rg(0, filterWord.getId()).rg(1, filterWord.getName()).df()).df());
                        return;
                    }
                    return;
                }
                throw new IllegalArgumentException("adapter数据异常，必须为FilterWord");
            }
        };
        init();
    }

    public TTDislikeListView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mOnItemClickListenerInner = new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int i2, long j) {
                if (TTDislikeListView.this.getAdapter() != null && TTDislikeListView.this.getAdapter().getItem(i2) != null && (TTDislikeListView.this.getAdapter().getItem(i2) instanceof FilterWord)) {
                    FilterWord filterWord = (FilterWord) TTDislikeListView.this.getAdapter().getItem(i2);
                    if (filterWord.hasSecondOptions()) {
                        return;
                    }
                    if (TTDislikeListView.this.mDislikeController != null) {
                        TTDislikeListView.this.mDislikeController.onDislikeSelected(filterWord);
                    }
                    if (TTDislikeListView.this.mOnItemClickListener != null) {
                        TTDislikeListView.this.mOnItemClickListener.onItemClick(adapterView, view, i2, j);
                    }
                    if (TTDislikeListView.this.mOnItemClickBridge != null) {
                        TTDislikeListView.this.mOnItemClickBridge.onEvent(0, df.rg().rg(q.rg().rg(0, filterWord.getId()).rg(1, filterWord.getName()).df()).df());
                        return;
                    }
                    return;
                }
                throw new IllegalArgumentException("adapter数据异常，必须为FilterWord");
            }
        };
        init();
    }

    public void setDislikeInfo(TTDislikeController tTDislikeController) {
        this.mDislikeController = tTDislikeController;
    }

    private void init() {
        super.setOnItemClickListener(this.mOnItemClickListenerInner);
    }

    @Override
    public void setOnItemClickListener(AdapterView.OnItemClickListener onItemClickListener) {
        if (onItemClickListener instanceof EventListener) {
            this.mOnItemClickBridge = (EventListener) onItemClickListener;
        } else {
            this.mOnItemClickListener = onItemClickListener;
        }
    }
}
