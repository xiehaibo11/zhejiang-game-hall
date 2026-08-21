package android.support.v4.app;

import android.R;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AnimationUtils;
import android.widget.AdapterView;
import android.widget.FrameLayout;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.ProgressBar;
import android.widget.TextView;

public class ListFragment extends Fragment {
    static final int INTERNAL_EMPTY_ID = 16711681;
    static final int INTERNAL_LIST_CONTAINER_ID = 16711683;
    static final int INTERNAL_PROGRESS_CONTAINER_ID = 16711682;
    ListAdapter mAdapter;
    CharSequence mEmptyText;
    View mEmptyView;
    private final Handler mHandler;
    ListView mList;
    View mListContainer;
    boolean mListShown;
    private final AdapterView.OnItemClickListener mOnClickListener;
    View mProgressContainer;
    private final Runnable mRequestFocus;
    TextView mStandardEmptyView;

    public void onListItemClick(ListView r1, View r2, int r3, long r4) {
    }

    public ListFragment() {
        this.mHandler = new Handler();
        this.mRequestFocus = new 1(this);
        this.mOnClickListener = new 2(this);
    }

    @Override
    public View onCreateView(LayoutInflater r5, ViewGroup r6, Bundle r7) {
        Context r52 = getContext();
        FrameLayout r62 = new FrameLayout(r52);
        LinearLayout r72 = new LinearLayout(r52);
        r72.setId(INTERNAL_PROGRESS_CONTAINER_ID);
        r72.setOrientation(1);
        r72.setVisibility(8);
        r72.setGravity(17);
        r72.addView(new ProgressBar(r52, null, R.attr.progressBarStyleLarge), new FrameLayout.LayoutParams(-2, -2));
        r62.addView(r72, new FrameLayout.LayoutParams(-1, -1));
        FrameLayout r73 = new FrameLayout(r52);
        r73.setId(INTERNAL_LIST_CONTAINER_ID);
        TextView r1 = new TextView(r52);
        r1.setId(INTERNAL_EMPTY_ID);
        r1.setGravity(17);
        r73.addView(r1, new FrameLayout.LayoutParams(-1, -1));
        ListView r0 = new ListView(r52);
        r0.setId(R.id.list);
        r0.setDrawSelectorOnTop(false);
        r73.addView(r0, new FrameLayout.LayoutParams(-1, -1));
        r62.addView(r73, new FrameLayout.LayoutParams(-1, -1));
        r62.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        return r62;
    }

    @Override
    public void onViewCreated(@NonNull View r1, @Nullable Bundle r2) {
        super.onViewCreated(r1, r2);
        ensureList();
    }

    @Override
    public void onDestroyView() {
        this.mHandler.removeCallbacks(this.mRequestFocus);
        this.mList = null;
        this.mListShown = false;
        this.mListContainer = null;
        this.mProgressContainer = null;
        this.mEmptyView = null;
        this.mStandardEmptyView = null;
        super.onDestroyView();
    }

    public void setListAdapter(ListAdapter r5) {
        boolean r1 = false;
        if (this.mAdapter == null) goto L5;
        boolean r0 = true;
    L6:
        this.mAdapter = r5;
        ListView r3 = this.mList;
        if (r3 == null) goto L16;
        r3.setAdapter(r5);
        if (this.mListShown == true) goto L17;
        if (r0 == false) goto L12;
        return;
    L12:
        if (getView().getWindowToken() == null) goto L14;
        r1 = true;
    L14:
        setListShown(true, r1);
        return;
    L17:
        return;
    L16:
        return;
    L5:
        r0 = false;
        goto L6
    }

    public void setSelection(int r2) {
        ensureList();
        this.mList.setSelection(r2);
    }

    public int getSelectedItemPosition() {
        ensureList();
        return this.mList.getSelectedItemPosition();
    }

    public long getSelectedItemId() {
        ensureList();
        return this.mList.getSelectedItemId();
    }

    public ListView getListView() {
        ensureList();
        return this.mList;
    }

    public void setEmptyText(CharSequence r3) {
        ensureList();
        TextView r0 = this.mStandardEmptyView;
        if (r0 == null) goto L10;
        r0.setText(r3);
        if (this.mEmptyText != null) goto L7;
        this.mList.setEmptyView(this.mStandardEmptyView);
    L7:
        this.mEmptyText = r3;
        return;
    L10:
        throw new IllegalStateException("Can't be used with a custom content view");
    }

    public void setListShown(boolean r2) {
        setListShown(r2, true);
    }

    public void setListShownNoAnimation(boolean r2) {
        setListShown(r2, false);
    }

    private void setListShown(boolean r6, boolean r7) {
        ensureList();
        View r0 = this.mProgressContainer;
        if (r0 == null) goto L19;
        if (this.mListShown != r6) goto L7;
        return;
    L7:
        this.mListShown = r6;
        if (r6 == false) goto L13;
        if (r7 == false) goto L11;
        r0.startAnimation(AnimationUtils.loadAnimation(getContext(), R.anim.fade_out));
        this.mListContainer.startAnimation(AnimationUtils.loadAnimation(getContext(), R.anim.fade_in));
    L12:
        this.mProgressContainer.setVisibility(8);
        this.mListContainer.setVisibility(0);
        return;
    L11:
        r0.clearAnimation();
        this.mListContainer.clearAnimation();
        goto L12
    L13:
        if (r7 == false) goto L15;
        r0.startAnimation(AnimationUtils.loadAnimation(getContext(), R.anim.fade_in));
        this.mListContainer.startAnimation(AnimationUtils.loadAnimation(getContext(), R.anim.fade_out));
    L16:
        this.mProgressContainer.setVisibility(0);
        this.mListContainer.setVisibility(8);
        return;
    L15:
        r0.clearAnimation();
        this.mListContainer.clearAnimation();
        goto L16
    L19:
        throw new IllegalStateException("Can't be used with a custom content view");
    }

    public ListAdapter getListAdapter() {
        return this.mAdapter;
    }

    private void ensureList() {
        if (this.mList == null) goto L5;
        return;
    L5:
        View r0 = getView();
        if (r0 == null) goto L36;
        if ((r0 instanceof ListView) == false) goto L10;
        this.mList = (ListView) r0;
    L27:
        this.mListShown = true;
        this.mList.setOnItemClickListener(this.mOnClickListener);
        ListAdapter r02 = this.mAdapter;
        if (r02 == null) goto L31;
        this.mAdapter = null;
        setListAdapter(r02);
    L33:
        this.mHandler.post(this.mRequestFocus);
        return;
    L31:
        if (this.mProgressContainer == null) goto L33;
        setListShown(false, false);
        goto L33
    L10:
        this.mStandardEmptyView = (TextView) r0.findViewById(INTERNAL_EMPTY_ID);
        TextView r1 = this.mStandardEmptyView;
        if (r1 != null) goto L13;
        this.mEmptyView = r0.findViewById(R.id.empty);
    L14:
        this.mProgressContainer = r0.findViewById(INTERNAL_PROGRESS_CONTAINER_ID);
        this.mListContainer = r0.findViewById(INTERNAL_LIST_CONTAINER_ID);
        View r03 = r0.findViewById(R.id.list);
        if ((r03 instanceof ListView) == true) goto L21;
        if (r03 != null) goto L20;
        throw new RuntimeException("Your content must have a ListView whose id attribute is 'android.R.id.list'");
    L20:
        throw new RuntimeException("Content has view with id attribute 'android.R.id.list' that is not a ListView class");
    L21:
        this.mList = (ListView) r03;
        View r04 = this.mEmptyView;
        if (r04 == null) goto L24;
        this.mList.setEmptyView(r04);
        goto L27
    L24:
        CharSequence r05 = this.mEmptyText;
        if (r05 == null) goto L27;
        this.mStandardEmptyView.setText(r05);
        this.mList.setEmptyView(this.mStandardEmptyView);
        goto L27
    L13:
        r1.setVisibility(8);
        goto L14
    L36:
        throw new IllegalStateException("Content view not yet created");
    }
}
