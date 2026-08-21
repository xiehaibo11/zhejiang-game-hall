package com.qihoo360.loader2.alc;

import android.app.Activity;
import android.app.Application;
import android.os.Build;
import android.os.RemoteException;
import com.qihoo360.loader2.alc.IActivityWatcher;
import com.qihoo360.replugin.helper.LogDebug;
import java.lang.ref.WeakReference;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.ArrayList;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class ActivityController {
    private static ArrayList<WeakReference<Activity>> sActivities;
    private static Map<?, ?> sActivityThreadActivities;
    private static Map<?, ?> sActivityThreadServices;
    private static InvocationHandler sHandler;
    private static IActivityUpdate sListener;
    private static IActivityWatcher.Stub sStub;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public interface IActivityUpdate {
        void handleActivityUpdate();
    }

    public static final void init() {
        loadVar();
    }

    public static final void install(Application application) {
        if (Build.VERSION.SDK_INT < 14) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "install activity watcher");
            }
            install2x();
        } else {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "install activity lifecycle callbacks");
            }
            install4x(application);
        }
    }

    public static final void setListener(IActivityUpdate iActivityUpdate) {
        sListener = iActivityUpdate;
    }

    public static final int sumActivities() {
        int size;
        ArrayList<WeakReference<Activity>> arrayList = sActivities;
        if (arrayList != null) {
            size = arrayList.size();
        } else {
            Map<?, ?> map = sActivityThreadActivities;
            size = map != null ? map.size() : -1;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.MAIN_TAG, "process sumActivities = " + size);
        }
        return size;
    }

    private static final void install2x() {
        sStub = new IActivityWatcher.Stub() {
            @Override
            public void closingSystemDialogs(String str) throws RemoteException {
            }

            @Override
            public void activityResuming(int i) throws RemoteException {
                int size = ActivityController.sActivityThreadActivities != null ? ActivityController.sActivityThreadActivities.size() : -1;
                int size2 = ActivityController.sActivityThreadServices != null ? ActivityController.sActivityThreadServices.size() : -1;
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "activityResuming: activities=" + size + " services=" + size2);
                }
                if (ActivityController.sListener != null) {
                    ActivityController.sListener.handleActivityUpdate();
                }
            }
        };
        try {
            Class<?> cls = Class.forName("android.app.ActivityManagerNative");
            Class<?> cls2 = Class.forName("android.app.IActivityWatcher");
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "AMN=" + cls + " IAW=" + cls2);
            }
            try {
                Method declaredMethod = cls.getDeclaredMethod("getDefault", new Class[0]);
                Method method = cls.getMethod("registerActivityWatcher", cls2);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "getDefault=" + declaredMethod + " registerActivityWatcher=" + method);
                }
                try {
                    Object objInvoke = declaredMethod.invoke(null, new Object[0]);
                    method.invoke(objInvoke, sStub);
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.MAIN_TAG, "oAMN=" + objInvoke);
                    }
                } catch (IllegalAccessException e) {
                    e.printStackTrace();
                } catch (IllegalArgumentException e2) {
                    e2.printStackTrace();
                } catch (InvocationTargetException e3) {
                    e3.printStackTrace();
                }
            } catch (NoSuchMethodException e4) {
                e4.printStackTrace();
            } catch (SecurityException e5) {
                e5.printStackTrace();
            }
        } catch (ClassNotFoundException e6) {
            e6.printStackTrace();
        }
    }

    private static final void install4x(Application application) {
        sHandler = new InvocationHandler() {
            @Override
            public Object invoke(Object obj, Method method, Object[] objArr) throws Throwable {
                if ("onActivityCreated".equals(method.getName())) {
                    if (objArr.length <= 0 || !(objArr[0] instanceof Activity)) {
                        return null;
                    }
                    Activity activity = (Activity) objArr[0];
                    ActivityController.sActivities.add(new WeakReference(activity));
                    if (!LogDebug.LOG) {
                        return null;
                    }
                    LogDebug.d(LogDebug.MAIN_TAG, "onActivityCreated: a=" + activity + " total=" + ActivityController.sActivities.size());
                    return null;
                }
                if (!"onActivityDestroyed".equals(method.getName()) || objArr.length <= 0 || !(objArr[0] instanceof Activity)) {
                    return null;
                }
                Activity activity2 = (Activity) objArr[0];
                for (int size = ActivityController.sActivities.size() - 1; size >= 0; size--) {
                    Activity activity3 = (Activity) ((WeakReference) ActivityController.sActivities.get(size)).get();
                    if (activity3 == activity2 || activity3 == null) {
                        ActivityController.sActivities.remove(size);
                    }
                }
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "onActivityDestroyed: a=" + activity2 + " total=" + ActivityController.sActivities.size());
                }
                if (ActivityController.sListener == null) {
                    return null;
                }
                ActivityController.sListener.handleActivityUpdate();
                return null;
            }
        };
        sActivities = new ArrayList<>();
        try {
            Class<?> cls = Class.forName("android.app.Application");
            Class<?> cls2 = Class.forName("android.app.Application$ActivityLifecycleCallbacks");
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "install activity lifecycle callbacks: class=" + cls2);
            }
            try {
                Method declaredMethod = cls.getDeclaredMethod("registerActivityLifecycleCallbacks", cls2);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "install activity lifecycle callbacks: m=" + declaredMethod);
                }
                Object objNewProxyInstance = Proxy.newProxyInstance(ActivityController.class.getClassLoader(), new Class[]{cls2}, sHandler);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "install activity lifecycle callbacks: cb=" + objNewProxyInstance);
                }
                try {
                    declaredMethod.invoke(application, objNewProxyInstance);
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.MAIN_TAG, "install activity lifecycle callbacks: ok");
                    }
                } catch (IllegalAccessException e) {
                    e.printStackTrace();
                } catch (IllegalArgumentException e2) {
                    e2.printStackTrace();
                } catch (InvocationTargetException e3) {
                    e3.printStackTrace();
                }
            } catch (NoSuchMethodException e4) {
                e4.printStackTrace();
            } catch (SecurityException e5) {
                e5.printStackTrace();
            }
        } catch (ClassNotFoundException e6) {
            e6.printStackTrace();
        }
    }

    private static final void loadVar() {
        try {
            Class<?> cls = Class.forName("android.app.ActivityThread");
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.MAIN_TAG, "clsAT=" + cls);
            }
            try {
                Method declaredMethod = cls.getDeclaredMethod("currentActivityThread", new Class[0]);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.MAIN_TAG, "currentActivityThread=" + declaredMethod);
                }
                try {
                    Object objInvoke = declaredMethod.invoke(null, new Object[0]);
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.MAIN_TAG, "oAT=" + objInvoke);
                    }
                    try {
                        Field declaredField = cls.getDeclaredField("mActivities");
                        Field declaredField2 = cls.getDeclaredField("mServices");
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.MAIN_TAG, "AT f1=" + declaredField + " f2=" + declaredField2);
                        }
                        try {
                            declaredField.setAccessible(true);
                            Object obj = declaredField.get(objInvoke);
                            declaredField2.setAccessible(true);
                            Object obj2 = declaredField2.get(objInvoke);
                            if (LogDebug.LOG) {
                                LogDebug.d(LogDebug.MAIN_TAG, "AT activities=" + obj + " services=" + obj2);
                            }
                            try {
                                sActivityThreadActivities = (Map) obj;
                                sActivityThreadServices = (Map) obj2;
                                if (LogDebug.LOG) {
                                    LogDebug.d(LogDebug.MAIN_TAG, "converted: activities=" + sActivityThreadActivities + " services=" + sActivityThreadServices);
                                }
                            } catch (Throwable th) {
                                th.printStackTrace();
                            }
                        } catch (IllegalAccessException e) {
                            e.printStackTrace();
                        } catch (IllegalArgumentException e2) {
                            e2.printStackTrace();
                        }
                    } catch (NoSuchFieldException e3) {
                        e3.printStackTrace();
                    } catch (SecurityException e4) {
                        e4.printStackTrace();
                    }
                } catch (IllegalAccessException e5) {
                    e5.printStackTrace();
                } catch (IllegalArgumentException e6) {
                    e6.printStackTrace();
                } catch (InvocationTargetException e7) {
                    e7.printStackTrace();
                }
            } catch (NoSuchMethodException e8) {
                e8.printStackTrace();
            } catch (SecurityException e9) {
                e9.printStackTrace();
            }
        } catch (ClassNotFoundException e10) {
            e10.printStackTrace();
        }
    }
}
