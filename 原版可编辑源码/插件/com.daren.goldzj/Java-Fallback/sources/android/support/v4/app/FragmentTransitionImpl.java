package android.support.v4.app;

import android.graphics.Rect;
import android.support.annotation.RestrictTo;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewGroupCompat;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class FragmentTransitionImpl {
    public abstract void addTarget(Object r1, View r2);

    public abstract void addTargets(Object r1, ArrayList<View> r2);

    public abstract void beginDelayedTransition(ViewGroup r1, Object r2);

    public abstract boolean canHandle(Object r1);

    public abstract Object cloneTransition(Object r1);

    public abstract Object mergeTransitionsInSequence(Object r1, Object r2, Object r3);

    public abstract Object mergeTransitionsTogether(Object r1, Object r2, Object r3);

    public abstract void removeTarget(Object r1, View r2);

    public abstract void replaceTargets(Object r1, ArrayList<View> r2, ArrayList<View> r3);

    public abstract void scheduleHideFragmentView(Object r1, View r2, ArrayList<View> r3);

    public abstract void scheduleRemoveTargets(Object r1, Object r2, ArrayList<View> r3, Object r4, ArrayList<View> r5, Object r6, ArrayList<View> r7);

    public abstract void setEpicenter(Object r1, Rect r2);

    public abstract void setEpicenter(Object r1, View r2);

    public abstract void setSharedElementTargets(Object r1, View r2, ArrayList<View> r3);

    public abstract void swapSharedElementTargets(Object r1, ArrayList<View> r2, ArrayList<View> r3);

    public abstract Object wrapTransitionInSet(Object r1);

    public FragmentTransitionImpl() {
    }

    protected void getBoundsOnScreen(View r7, Rect r8) {
        int[] r0 = new int[2];
        r7.getLocationOnScreen(r0);
        r8.set(r0[0], r0[1], r0[0] + r7.getWidth(), r0[1] + r7.getHeight());
    }

    ArrayList<String> prepareSetNameOverridesReordered(ArrayList<View> r6) {
        ArrayList<String> r0 = new ArrayList();
        int r1 = r6.size();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L5;
        View r3 = r6.get(r2);
        r0.add(ViewCompat.getTransitionName(r3));
        ViewCompat.setTransitionName(r3, null);
        r2 = r2 + 1;
        goto L3
    L5:
        return r0;
    }

    void setNameOverridesReordered(View r9, final ArrayList<View> r10, final ArrayList<View> r11, final ArrayList<String> r12, Map<String, String> r13) {
        final int r2 = r11.size();
        final ArrayList r6 = new ArrayList();
        int r1 = 0;
    L3:
        if (r1 >= r2) goto L14;
        View r3 = r10.get(r1);
        String r4 = ViewCompat.getTransitionName(r3);
        r6.add(r4);
        if (r4 == null) goto L13;
        ViewCompat.setTransitionName(r3, null);
        String r32 = r13.get(r4);
        int r5 = 0;
    L8:
        if (r5 >= r2) goto L13;
        if (r32.equals(r12.get(r5)) == true) goto L11;
        r5 = r5 + 1;
        goto L8
    L11:
        ViewCompat.setTransitionName(r11.get(r5), r4);
    L13:
        r1 = r1 + 1;
        goto L3
    L14:
        OneShotPreDrawListener.add(r9, new 1(this, r2, r11, r12, r10, r6));
    }

    void captureTransitioningViews(ArrayList<View> r4, View r5) {
        if (r5.getVisibility() == 0) goto L5;
        return;
    L5:
        if ((r5 instanceof ViewGroup) == false) goto L12;
        ViewGroup r52 = (ViewGroup) r5;
        if (ViewGroupCompat.isTransitionGroup(r52) == false) goto L9;
        r4.add(r52);
        return;
    L9:
        int r0 = r52.getChildCount();
        int r1 = 0;
    L10:
        if (r1 >= r0) goto L17;
        captureTransitioningViews(r4, r52.getChildAt(r1));
        r1 = r1 + 1;
        goto L10
    L17:
        return;
    L12:
        r4.add(r5);
    }

    void findNamedViews(Map<String, View> r4, View r5) {
        if (r5.getVisibility() != 0) goto L12;
        String r0 = ViewCompat.getTransitionName(r5);
        if (r0 == null) goto L8;
        r4.put(r0, r5);
    L8:
        if ((r5 instanceof ViewGroup) == false) goto L14;
        ViewGroup r52 = (ViewGroup) r5;
        int r02 = r52.getChildCount();
        int r1 = 0;
    L10:
        if (r1 >= r02) goto L15;
        findNamedViews(r4, r52.getChildAt(r1));
        r1 = r1 + 1;
        goto L10
    L15:
        return;
    L14:
        return;
    }

    void setNameOverridesOrdered(View r2, final ArrayList<View> r3, final Map<String, String> r4) {
        OneShotPreDrawListener.add(r2, new 2(this, r3, r4));
    }

    void scheduleNameReset(ViewGroup r2, final ArrayList<View> r3, final Map<String, String> r4) {
        OneShotPreDrawListener.add(r2, new 3(this, r3, r4));
    }

    protected static void bfsAddViewChildren(List<View> r6, View r7) {
        int r0 = r6.size();
        if (containedBeforeIndex(r6, r7, r0) == false) goto L5;
        return;
    L5:
        r6.add(r7);
        int r72 = r0;
    L7:
        if (r72 >= r6.size()) goto L17;
        View r1 = r6.get(r72);
        if ((r1 instanceof ViewGroup) == false) goto L16;
        ViewGroup r12 = (ViewGroup) r1;
        int r2 = r12.getChildCount();
        int r3 = 0;
    L11:
        if (r3 >= r2) goto L16;
        View r4 = r12.getChildAt(r3);
        if (containedBeforeIndex(r6, r4, r0) == true) goto L15;
        r6.add(r4);
    L15:
        r3 = r3 + 1;
    L16:
        r72 = r72 + 1;
        goto L7
    }

    private static boolean containedBeforeIndex(List<View> r3, View r4, int r5) {
        int r1 = 0;
    L3:
        if (r1 >= r5) goto L9;
        if (r3.get(r1) == r4) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        return true;
    L9:
        return false;
    }

    protected static boolean isNullOrEmpty(List r0) {
        if (r0 != null) goto L4;
    L7:
        return true;
    L4:
        if (r0.isEmpty() == true) goto L7;
        return false;
    }

    static String findKeyForValue(Map<String, String> r2, String r3) {
        Iterator<Map.Entry<String, String>> r22 = r2.entrySet().iterator();
    L4:
        if (r22.hasNext() == false) goto L9;
        Map.Entry<String, String> r0 = r22.next();
        if (r3.equals(r0.getValue()) == false) goto L4;
        return r0.getKey();
    L9:
        return null;
    }
}
