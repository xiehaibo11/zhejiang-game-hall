package android.support.v4.app;

import android.graphics.Rect;
import android.support.annotation.RequiresApi;
import android.transition.Transition;
import android.transition.TransitionManager;
import android.transition.TransitionSet;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.List;

@RequiresApi(21)
class FragmentTransitionCompat21 extends FragmentTransitionImpl {
    FragmentTransitionCompat21() {
    }

    @Override
    public boolean canHandle(Object r1) {
        return r1 instanceof Transition;
    }

    @Override
    public Object cloneTransition(Object r1) {
        if (r1 != null) goto L6;
        return null;
    L6:
        return ((Transition) r1).clone();
    }

    @Override
    public Object wrapTransitionInSet(Object r2) {
        if (r2 != null) goto L5;
        return null;
    L5:
        TransitionSet r0 = new TransitionSet();
        r0.addTransition((Transition) r2);
        return r0;
    }

    @Override
    public void setSharedElementTargets(Object r5, View r6, ArrayList<View> r7) {
        TransitionSet r52 = (TransitionSet) r5;
        List<View> r0 = r52.getTargets();
        r0.clear();
        int r1 = r7.size();
        int r2 = 0;
    L3:
        if (r2 >= r1) goto L5;
        bfsAddViewChildren(r0, r7.get(r2));
        r2 = r2 + 1;
        goto L3
    L5:
        r0.add(r6);
        r7.add(r6);
        addTargets(r52, r7);
    }

    @Override
    public void setEpicenter(Object r2, View r3) {
        if (r3 == null) goto L5;
        final Rect r0 = new Rect();
        getBoundsOnScreen(r3, r0);
        ((Transition) r2).setEpicenterCallback(new 1(this, r0));
        return;
    }

    @Override
    public void addTargets(Object r4, ArrayList<View> r5) {
        Transition r42 = (Transition) r4;
        if (r42 != null) goto L5;
        return;
    L5:
        int r1 = 0;
        if ((r42 instanceof TransitionSet) == false) goto L11;
        TransitionSet r43 = (TransitionSet) r42;
        int r0 = r43.getTransitionCount();
    L8:
        if (r1 >= r0) goto L21;
        addTargets(r43.getTransitionAt(r1), r5);
        r1 = r1 + 1;
        goto L8
    L21:
        return;
    L11:
        if (hasSimpleTarget(r42) == false) goto L13;
        return;
    L13:
        if (isNullOrEmpty(r42.getTargets()) == false) goto L20;
        int r02 = r5.size();
    L15:
        if (r1 >= r02) goto L22;
        r42.addTarget(r5.get(r1));
        r1 = r1 + 1;
        goto L15
    L22:
        return;
    }

    private static boolean hasSimpleTarget(Transition r1) {
        if (isNullOrEmpty(r1.getTargetIds()) == true) goto L5;
    L10:
        return true;
    L5:
        if (isNullOrEmpty(r1.getTargetNames()) == false) goto L10;
        if (isNullOrEmpty(r1.getTargetTypes()) == false) goto L10;
        return false;
    }

    @Override
    public Object mergeTransitionsTogether(Object r2, Object r3, Object r4) {
        TransitionSet r0 = new TransitionSet();
        if (r2 == null) goto L5;
        r0.addTransition((Transition) r2);
    L5:
        if (r3 == null) goto L7;
        r0.addTransition((Transition) r3);
    L7:
        if (r4 == null) goto L9;
        r0.addTransition((Transition) r4);
    L9:
        return r0;
    }

    @Override
    public void scheduleHideFragmentView(Object r2, final View r3, final ArrayList<View> r4) {
        ((Transition) r2).addListener(new 2(this, r3, r4));
    }

    @Override
    public Object mergeTransitionsInSequence(Object r2, Object r3, Object r4) {
        Transition r22 = (Transition) r2;
        Transition r32 = (Transition) r3;
        Transition r42 = (Transition) r4;
        if (r22 == null) goto L6;
        if (r32 == null) goto L6;
        r22 = new TransitionSet().addTransition(r22).addTransition(r32).setOrdering(1);
    L11:
        if (r42 == null) goto L17;
        TransitionSet r33 = new TransitionSet();
        if (r22 == null) goto L15;
        r33.addTransition(r22);
    L15:
        r33.addTransition(r42);
        return r33;
    L17:
        return r22;
    L6:
        if (r22 != null) goto L11;
        if (r32 == null) goto L10;
        r22 = r32;
        goto L11
    L10:
        r22 = null;
        goto L11
    }

    @Override
    public void beginDelayedTransition(ViewGroup r1, Object r2) {
        TransitionManager.beginDelayedTransition(r1, (Transition) r2);
    }

    @Override
    public void scheduleRemoveTargets(Object r11, final Object r12, final ArrayList<View> r13, final Object r14, final ArrayList<View> r15, final Object r16, final ArrayList<View> r17) {
        ((Transition) r11).addListener(new 3(this, r12, r13, r14, r15, r16, r17));
    }

    @Override
    public void swapSharedElementTargets(Object r2, ArrayList<View> r3, ArrayList<View> r4) {
        TransitionSet r22 = (TransitionSet) r2;
        if (r22 == null) goto L6;
        r22.getTargets().clear();
        r22.getTargets().addAll(r4);
        replaceTargets(r22, r3, r4);
        return;
    }

    @Override
    public void replaceTargets(Object r5, ArrayList<View> r6, ArrayList<View> r7) {
        Transition r52 = (Transition) r5;
        int r1 = 0;
        if ((r52 instanceof TransitionSet) == false) goto L8;
        TransitionSet r53 = (TransitionSet) r52;
        int r0 = r53.getTransitionCount();
    L5:
        if (r1 >= r0) goto L31;
        replaceTargets(r53.getTransitionAt(r1), r6, r7);
        r1 = r1 + 1;
        goto L5
    L31:
        return;
    L8:
        if (hasSimpleTarget(r52) == true) goto L23;
        List<View> r02 = r52.getTargets();
        if (r02 != null) goto L12;
        return;
    L12:
        if (r02.size() == r6.size()) goto L14;
        return;
    L14:
        if (r02.containsAll(r6) == false) goto L30;
        if (r7 != null) goto L17;
        int r03 = 0;
    L18:
        if (r1 >= r03) goto L20;
        r52.addTarget(r7.get(r1));
        r1 = r1 + 1;
        goto L18
    L20:
        int r72 = r6.size() - 1;
    L21:
        if (r72 < 0) goto L32;
        r52.removeTarget(r6.get(r72));
        r72 = r72 - 1;
        goto L21
    L32:
        return;
    L17:
        r03 = r7.size();
        goto L18
    L30:
        return;
    }

    @Override
    public void addTarget(Object r1, View r2) {
        if (r1 == null) goto L5;
        ((Transition) r1).addTarget(r2);
        return;
    }

    @Override
    public void removeTarget(Object r1, View r2) {
        if (r1 == null) goto L5;
        ((Transition) r1).removeTarget(r2);
        return;
    }

    @Override
    public void setEpicenter(Object r2, final Rect r3) {
        if (r2 == null) goto L5;
        ((Transition) r2).setEpicenterCallback(new 4(this, r3));
        return;
    }
}
