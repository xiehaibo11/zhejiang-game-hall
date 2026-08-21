.class public Lcom/bytedance/pangle/transform/ZeusTransformUtils;
.super Ljava/lang/Object;


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginContextUtils"

.field static contextCache:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;>;"
        }
    .end annotation
.end field

.field public static fragmentClazz:Ljava/lang/Class;

.field static hasEnsure:Z

.field static sConstructorMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/reflect/Constructor<",
            "Landroid/view/View;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 254
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->contextCache:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 1046
    sput-boolean v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->hasEnsure:Z

    const/4 v0, 0x0

    .line 1048
    sput-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->sConstructorMap:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static _getActivity(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Activity;
    .locals 2

    :try_start_0
    const-string v0, "getActivity"

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    .line 543
    invoke-static {p0, v0, v1}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/Activity;

    .line 544
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    .line 545
    instance-of v1, v0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    if-eqz v1, :cond_0

    .line 546
    check-cast v0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    iget-object p0, v0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;->mTargetActivity:Lcom/bytedance/pangle/activity/GeneratePluginActivity;

    return-object p0

    .line 548
    :cond_0
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 549
    instance-of v1, v0, Lcom/bytedance/pangle/activity/GenerateProxyAppCompatActivity;

    if-eqz v1, :cond_1

    .line 550
    check-cast v0, Lcom/bytedance/pangle/activity/GenerateProxyAppCompatActivity;

    iget-object p0, v0, Lcom/bytedance/pangle/activity/GenerateProxyAppCompatActivity;->mTargetActivity:Lcom/bytedance/pangle/activity/GeneratePluginAppCompatActivity;

    return-object p0

    .line 553
    :cond_1
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    check-cast p0, Landroid/app/Activity;
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 559
    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception p0

    .line 557
    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception p0

    .line 555
    invoke-virtual {p0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bindService(Ljava/lang/Object;Landroid/content/Intent;Landroid/content/ServiceConnection;ILjava/lang/String;)Z
    .locals 7

    .line 782
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 783
    invoke-static {}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->getInstance()Lcom/bytedance/pangle/service/client/ServiceManagerNative;

    move-result-object v1

    move-object v2, p0

    check-cast v2, Landroid/content/Context;

    move-object v3, p1

    move-object v4, p2

    move v5, p3

    move-object v6, p4

    invoke-virtual/range {v1 .. v6}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->bindServiceNative(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;ILjava/lang/String;)Z

    move-result p0

    return p0

    :cond_0
    :try_start_0
    const-string p4, "bindService"

    const/4 v0, 0x3

    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x1

    aput-object p2, v1, p1

    .line 786
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const/4 p3, 0x2

    aput-object p2, v1, p3

    new-array p2, v0, [Ljava/lang/Class;

    const-class v0, Landroid/content/Intent;

    aput-object v0, p2, v2

    const-class v0, Landroid/content/ServiceConnection;

    aput-object v0, p2, p1

    sget-object p1, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object p1, p2, p3

    invoke-static {p0, p4, v1, p2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 788
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static clearConstructorCache()V
    .locals 3

    .line 1058
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-gt v0, v1, :cond_2

    .line 1060
    :try_start_0
    sget-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->sConstructorMap:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 1061
    const-class v0, Landroid/view/LayoutInflater;

    const-string v1, "sConstructorMap"

    invoke-static {v0, v1}, Lcom/bytedance/pangle/util/FieldUtils;->readStaticField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    sput-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->sConstructorMap:Ljava/util/HashMap;

    .line 1063
    :cond_0
    new-instance v0, Ljava/util/HashSet;

    sget-object v1, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->sConstructorMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    .line 1064
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "android.view."

    .line 1065
    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "android.widget."

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "android.webkit."

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "."

    invoke-virtual {v1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 1069
    sget-object v2, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->sConstructorMap:Ljava/util/HashMap;

    invoke-virtual {v2, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_2
    return-void
.end method

.method private static convertProxy2PluginActivity(Landroid/content/Context;)Landroid/content/Context;
    .locals 3

    .line 854
    :try_start_0
    instance-of v0, p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    if-nez v0, :cond_0

    instance-of v0, p0, Lcom/bytedance/pangle/activity/GenerateProxyAppCompatActivity;

    if-eqz v0, :cond_1

    :cond_0
    const-string v0, "mTargetActivity"

    .line 855
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    const-string v1, "Zeus/load_pangle"

    const-string v2, "convertProxy2PluginActivity failed."

    .line 858
    invoke-static {v1, v2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    return-object p0
.end method

.method private static ensureFragmentActivity()V
    .locals 2

    .line 1010
    sget-boolean v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->hasEnsure:Z

    if-eqz v0, :cond_0

    return-void

    .line 1014
    :cond_0
    :try_start_0
    const-class v0, Lcom/bytedance/pangle/Zeus;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    const-string v1, "android.support.v4.app.FragmentActivity"

    invoke-virtual {v0, v1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    sput-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->fragmentClazz:Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 1018
    :catchall_0
    :try_start_1
    const-class v0, Lcom/bytedance/pangle/Zeus;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    const-string v1, "androidx.fragment.app.FragmentActivity"

    invoke-virtual {v0, v1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    sput-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->fragmentClazz:Ljava/lang/Class;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :goto_0
    const/4 v0, 0x1

    .line 1022
    sput-boolean v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->hasEnsure:Z

    return-void
.end method

.method private static equalsFragmentActivity(Ljava/lang/Class;)Z
    .locals 2

    .line 1035
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->ensureFragmentActivity()V

    .line 1036
    sget-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->fragmentClazz:Ljava/lang/Class;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-ne p0, v0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v1
.end method

.method public static forName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;
    .locals 0

    .line 711
    invoke-static {p1}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p1

    iget-object p1, p1, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    invoke-virtual {p1, p0}, Lcom/bytedance/pangle/PluginClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    return-object p0
.end method

.method public static getActivity(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Activity;
    .locals 0

    .line 565
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->_getActivity(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Activity;

    move-result-object p0

    return-object p0
.end method

.method public static getAssetPaths(Landroid/content/res/AssetManager;)Ljava/lang/String;
    .locals 7

    .line 1080
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    .line 1089
    :cond_0
    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1c

    const/4 v3, 0x0

    if-ge v1, v2, :cond_3

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1b

    if-ne v1, v2, :cond_1

    sget v1, Landroid/os/Build$VERSION;->PREVIEW_SDK_INT:I

    if-lez v1, :cond_1

    goto :goto_1

    :cond_1
    const-string v1, "getStringBlockCount"

    new-array v2, v3, [Ljava/lang/Object;

    .line 1097
    invoke-static {p0, v1, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v2, v3

    :goto_0
    if-ge v2, v1, :cond_4

    :try_start_1
    const-string v4, "getCookieName"

    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/Object;

    add-int/lit8 v6, v2, 0x1

    .line 1101
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v5, v3

    invoke-static {p0, v4, v5}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 1102
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 1103
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    :try_start_2
    const-string v1, "getApkAssets"

    new-array v2, v3, [Ljava/lang/Object;

    .line 1090
    invoke-static {p0, v1, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/Object;

    check-cast p0, [Ljava/lang/Object;

    if-eqz p0, :cond_4

    .line 1091
    array-length v1, p0

    if-lez v1, :cond_4

    .line 1092
    array-length v1, p0

    move v2, v3

    :goto_2
    if-ge v2, v1, :cond_4

    aget-object v4, p0, v2

    const-string v5, "getAssetPath"

    new-array v6, v3, [Ljava/lang/Object;

    .line 1093
    invoke-static {v4, v5, v6}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    :catchall_0
    move-exception p0

    const-string v1, "Zeus/resources_pangle"

    const-string v2, "TransformUtils GetAssetsPaths error. "

    .line 1110
    invoke-static {v1, v2, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 1112
    :cond_4
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;
    .locals 2

    :try_start_0
    const-string v0, "getContext"

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    .line 571
    invoke-static {p0, v0, v1}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 576
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 577
    invoke-static {p0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->instanceOfFragmentActivity(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 578
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    return-object p0

    .line 582
    :cond_0
    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 583
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    return-object p0

    .line 585
    :cond_1
    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_2

    .line 586
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    return-object p0

    .line 590
    :cond_2
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz v0, :cond_3

    return-object p0

    .line 593
    :cond_3
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    return-object p0

    :catch_0
    move-exception p0

    .line 573
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method private static getContextIfNeedWrap(Landroid/content/Context;Landroid/content/Context;Ljava/lang/String;)Landroid/content/Context;
    .locals 3

    :goto_0
    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 368
    :cond_0
    instance-of v1, p1, Lcom/bytedance/pangle/activity/IPluginActivity;

    if-eqz v1, :cond_2

    .line 370
    check-cast p1, Lcom/bytedance/pangle/activity/IPluginActivity;

    invoke-interface {p1}, Lcom/bytedance/pangle/activity/IPluginActivity;->getPluginPkgName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    return-object p0

    :cond_1
    return-object v0

    .line 377
    :cond_2
    instance-of v1, p1, Lcom/bytedance/pangle/PluginContext;

    if-eqz v1, :cond_4

    .line 378
    check-cast p1, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p1, Lcom/bytedance/pangle/PluginContext;->mPlugin:Lcom/bytedance/pangle/plugin/Plugin;

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {p0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_3

    return-object v0

    .line 383
    :cond_3
    iget-object p0, p1, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    return-object p0

    .line 386
    :cond_4
    instance-of v1, p1, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-eqz v1, :cond_6

    .line 387
    check-cast p1, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    iget-object p0, p1, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->pluginContext:Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mPlugin:Lcom/bytedance/pangle/plugin/Plugin;

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {p0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_5

    return-object v0

    .line 392
    :cond_5
    iget-object p0, p1, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    return-object p0

    .line 396
    :cond_6
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    .line 397
    instance-of v1, p1, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-eqz v1, :cond_8

    .line 398
    move-object p0, p1

    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    iget-object p0, p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;->pluginContext:Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mPlugin:Lcom/bytedance/pangle/plugin/Plugin;

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {p0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_7

    return-object v0

    .line 405
    :cond_7
    :try_start_0
    move-object p0, p1

    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    invoke-virtual {p0}, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;->getOriginActivity()Landroid/app/Activity;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    :try_start_1
    const-string p0, "mOriginActivity"

    .line 408
    invoke-static {p1, p0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 413
    :goto_1
    check-cast p0, Landroid/content/Context;

    return-object p0

    :catchall_1
    move-exception p0

    .line 410
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1

    .line 418
    :cond_8
    instance-of v1, p1, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-eqz v1, :cond_a

    .line 419
    check-cast p1, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    iget-object p0, p1, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;->mPluginContext:Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mPlugin:Lcom/bytedance/pangle/plugin/Plugin;

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-static {p0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_9

    return-object v0

    .line 424
    :cond_9
    iget-object p0, p1, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;->mOriginApplication:Landroid/app/Application;

    return-object p0

    .line 428
    :cond_a
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    instance-of v1, v1, Lcom/bytedance/pangle/res/PluginResources;

    if-eqz v1, :cond_d

    .line 429
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    check-cast p1, Lcom/bytedance/pangle/res/PluginResources;

    :try_start_2
    const-string v1, "pluginPkg"

    .line 431
    invoke-static {p1, v1}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 432
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_b

    .line 434
    invoke-virtual {p1}, Lcom/bytedance/pangle/res/PluginResources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p1

    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->getAssetPaths(Landroid/content/res/AssetManager;)Ljava/lang/String;

    move-result-object p1

    .line 435
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "/"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/version"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_c

    return-object p0

    .line 441
    :cond_b
    invoke-static {v1, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    if-nez p1, :cond_c

    return-object p0

    :catchall_2
    move-exception p0

    .line 447
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_c
    return-object v0

    .line 451
    :cond_d
    instance-of v0, p1, Landroid/content/ContextWrapper;

    if-eqz v0, :cond_e

    :try_start_3
    const-string v0, "mBase"

    .line 454
    invoke-static {p1, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    move-object p1, v0

    goto/16 :goto_0

    .line 456
    :catchall_3
    check-cast p1, Landroid/content/ContextWrapper;

    invoke-virtual {p1}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object p1

    goto/16 :goto_0

    :cond_e
    return-object p0
.end method

.method public static getIdentifier(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
    .locals 2

    .line 828
    instance-of v0, p0, Landroid/content/res/Resources;

    if-eqz v0, :cond_1

    .line 829
    check-cast p0, Landroid/content/res/Resources;

    const-string v0, "android"

    invoke-static {v0, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    move-object p3, p4

    :goto_0
    invoke-virtual {p0, p1, p2, p3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0

    :cond_1
    :try_start_0
    const-string p4, "getIdentifier"

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    .line 832
    invoke-static {p0, p4, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 834
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static getResources(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/res/Resources;
    .locals 3

    :try_start_0
    const-string v0, "getResources"

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    .line 325
    invoke-static {p0, v0, v1}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/Resources;

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 329
    :cond_0
    instance-of v0, p0, Lcom/bytedance/pangle/res/PluginResources;

    if-eqz v0, :cond_2

    const-string v0, "pluginPkg"

    .line 331
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 332
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 334
    invoke-virtual {p0}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->getAssetPaths(Landroid/content/res/AssetManager;)Ljava/lang/String;

    move-result-object v0

    .line 335
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "/"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "/version"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-object p0

    .line 341
    :cond_1
    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-object p0

    .line 347
    :cond_2
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 349
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;Ljava/lang/String;)Landroid/net/Uri;
    .locals 0

    .line 845
    :try_start_0
    invoke-static {p2}, Lcom/bytedance/pangle/FileProvider;->getUriForFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/NoClassDefFoundError; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const-string p0, ""

    .line 848
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    return-object p0
.end method

.method public static getWindow(Landroid/app/Activity;Ljava/lang/String;)Landroid/view/Window;
    .locals 1

    .line 176
    invoke-virtual {p0}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    if-nez p1, :cond_0

    :try_start_0
    const-string p1, "getWindow"

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    .line 179
    invoke-static {p0, p1, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/Window;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 181
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1

    :cond_0
    return-object p1
.end method

.method private static getWrapperFromCache(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;
    .locals 2

    .line 316
    sget-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->contextCache:Ljava/util/HashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/ref/WeakReference;

    if-eqz p0, :cond_0

    .line 318
    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V
    .locals 5

    .line 978
    invoke-static {p1, p2}, Ljava/util/Arrays;->equals([I[I)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 981
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const/4 v1, 0x0

    move v2, v1

    .line 982
    :goto_0
    array-length v3, p1

    if-ge v2, v3, :cond_1

    .line 983
    aget v3, p1, v2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v0, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 985
    :cond_1
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    move v2, v1

    .line 987
    :goto_1
    array-length v3, p2

    if-ge v2, v3, :cond_2

    .line 988
    aget v3, p2, v2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 989
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {p1, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    :try_start_0
    const-string p2, "mData"

    .line 992
    invoke-static {p0, p2}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [I

    check-cast p0, [I

    .line 993
    array-length p2, p0

    invoke-static {p0, p2}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object p2

    .line 995
    invoke-virtual {p1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 996
    invoke-virtual {p1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 997
    invoke-virtual {v2, v3}, Ljava/lang/Integer;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 999
    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    const/4 v4, 0x7

    mul-int/2addr v2, v4

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    mul-int/2addr v3, v4

    invoke-static {p0, v2, p2, v3, v4}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    goto :goto_2

    .line 1003
    :cond_4
    array-length p1, p0

    invoke-static {p2, v1, p0, v1, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    const-string p0, "Zeus/resources_pangle"

    const-string p1, "read mData failed."

    .line 1005
    invoke-static {p0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static handleAttrBefore([I)[I
    .locals 1

    .line 968
    array-length v0, p0

    invoke-static {p0, v0}, Ljava/util/Arrays;->copyOf([II)[I

    move-result-object p0

    .line 969
    invoke-static {p0}, Ljava/util/Arrays;->sort([I)V

    return-object p0
.end method

.method public static inflate(Landroid/content/Context;ILandroid/view/ViewGroup;Ljava/lang/String;)Landroid/view/View;
    .locals 1

    .line 527
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-nez v0, :cond_1

    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-nez v0, :cond_1

    .line 529
    invoke-static {p3}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-nez v0, :cond_1

    :cond_0
    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-nez v0, :cond_1

    .line 532
    invoke-static {p0, p3}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    :cond_1
    const-string p3, "layout_inflater"

    .line 534
    invoke-virtual {p0, p3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/LayoutInflater;

    .line 535
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    .line 536
    invoke-virtual {p0, p1, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p0

    .line 537
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    return-object p0
.end method

.method public static inflate(Landroid/view/LayoutInflater;ILandroid/view/ViewGroup;Ljava/lang/String;)Landroid/view/View;
    .locals 1

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 502
    :goto_0
    invoke-static {p0, p1, p2, v0, p3}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->inflate(Landroid/view/LayoutInflater;ILandroid/view/ViewGroup;ZLjava/lang/String;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static inflate(Landroid/view/LayoutInflater;ILandroid/view/ViewGroup;ZLjava/lang/String;)Landroid/view/View;
    .locals 3

    .line 468
    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object v0

    .line 469
    instance-of v1, v0, Lcom/bytedance/pangle/PluginContext;

    if-nez v1, :cond_3

    instance-of v1, v0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-nez v1, :cond_3

    .line 471
    invoke-static {p4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    instance-of v1, v0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-nez v1, :cond_3

    :cond_0
    instance-of v1, v0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-nez v1, :cond_3

    .line 474
    invoke-static {v0, p4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    .line 475
    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getFactory()Landroid/view/LayoutInflater$Factory;

    move-result-object v1

    .line 476
    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getFactory2()Landroid/view/LayoutInflater$Factory2;

    move-result-object p0

    const-string v2, "layout_inflater"

    .line 477
    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/LayoutInflater;

    .line 478
    invoke-static {p4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result p4

    if-eqz p4, :cond_2

    const-string p4, "Zeus/resources_pangle"

    if-eqz v1, :cond_1

    :try_start_0
    const-string v2, "mFactory"

    .line 481
    invoke-static {v0, v2, v1}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string v1, "set Factory failed."

    .line 483
    invoke-static {p4, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    if-eqz p0, :cond_2

    :try_start_1
    const-string v1, "mFactory2"

    .line 488
    invoke-static {v0, v1, p0}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    const-string p0, "set Factory2 failed."

    .line 490
    invoke-static {p4, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    move-object p0, v0

    .line 495
    :cond_3
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    .line 496
    invoke-virtual {p0, p1, p2, p3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p0

    .line 497
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    return-object p0
.end method

.method public static inflate(Landroid/view/LayoutInflater;Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Ljava/lang/String;)Landroid/view/View;
    .locals 1

    if-eqz p2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 506
    :goto_0
    invoke-static {p0, p1, p2, v0, p3}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->inflate(Landroid/view/LayoutInflater;Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;ZLjava/lang/String;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static inflate(Landroid/view/LayoutInflater;Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;ZLjava/lang/String;)Landroid/view/View;
    .locals 1

    .line 510
    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p0

    .line 511
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-nez v0, :cond_1

    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-nez v0, :cond_1

    .line 513
    invoke-static {p4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-nez v0, :cond_1

    :cond_0
    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-nez v0, :cond_1

    .line 516
    invoke-static {p0, p4}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    :cond_1
    const-string p4, "layout_inflater"

    .line 518
    invoke-virtual {p0, p4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/view/LayoutInflater;

    .line 519
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    .line 520
    invoke-virtual {p0, p1, p2, p3}, Landroid/view/LayoutInflater;->inflate(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p0

    .line 521
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->clearConstructorCache()V

    return-object p0
.end method

.method public static instanceOf(Ljava/lang/Class;Ljava/lang/Object;)Z
    .locals 0

    .line 118
    invoke-static {p1, p0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->instanceOf(Ljava/lang/Object;Ljava/lang/Class;)Z

    move-result p0

    return p0
.end method

.method public static instanceOf(Ljava/lang/Object;Ljava/lang/Class;)Z
    .locals 1

    .line 122
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz v0, :cond_0

    .line 123
    check-cast p0, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0

    .line 124
    :cond_0
    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-eqz v0, :cond_1

    .line 125
    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    iget-object p0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0

    .line 126
    :cond_1
    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-eqz v0, :cond_2

    .line 129
    :try_start_0
    move-object v0, p0

    check-cast v0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    invoke-virtual {v0}, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;->getOriginActivity()Landroid/app/Activity;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_1
    const-string v0, "mOriginActivity"

    .line 132
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 137
    :goto_0
    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0

    :catchall_1
    move-exception p0

    .line 134
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1

    .line 138
    :cond_2
    instance-of v0, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-eqz v0, :cond_3

    .line 139
    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    iget-object p0, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;->mOriginApplication:Landroid/app/Application;

    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0

    .line 140
    :cond_3
    instance-of v0, p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    if-eqz v0, :cond_4

    .line 141
    check-cast p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    iget-object p0, p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;->mTargetActivity:Lcom/bytedance/pangle/activity/GeneratePluginActivity;

    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0

    .line 143
    :cond_4
    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method private static instanceOfFragmentActivity(Ljava/lang/Object;)Z
    .locals 1

    .line 1027
    invoke-static {}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->ensureFragmentActivity()V

    .line 1028
    sget-object v0, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->fragmentClazz:Ljava/lang/Class;

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 1031
    :cond_0
    invoke-virtual {v0, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method private static isSupportLibIso(Ljava/lang/String;)Z
    .locals 1

    .line 111
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    iget-boolean p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mIsSupportLibIso:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    const/4 p0, 0x0

    return p0
.end method

.method public static mapRes(ILjava/lang/String;Ljava/lang/String;)I
    .locals 3

    const/high16 v0, 0x7f000000

    if-ge p0, v0, :cond_0

    return p0

    .line 79
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Application;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p2, p1, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_1

    .line 81
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Application;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const-string v1, "_"

    const-string v2, "."

    invoke-virtual {p2, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, p1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    :cond_1
    if-nez v0, :cond_2

    .line 84
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "Cant find res, resName = "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ", pluginResId = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "Zeus/resources_pangle"

    invoke-static {p1, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return v0
.end method

.method public static obtainAttributes(Ljava/lang/Object;Landroid/util/AttributeSet;[ILjava/lang/String;)Landroid/content/res/TypedArray;
    .locals 2

    .line 872
    instance-of p3, p0, Landroid/content/res/Resources;

    if-eqz p3, :cond_0

    .line 873
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p3

    .line 874
    check-cast p0, Landroid/content/res/Resources;

    invoke-virtual {p0, p1, p3}, Landroid/content/res/Resources;->obtainAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 875
    invoke-static {p0, p3, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    :cond_0
    :try_start_0
    const-string p3, "obtainAttributes"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    .line 879
    invoke-static {p0, p3, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/TypedArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 881
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static obtainStyledAttributes(Ljava/lang/Object;I[ILjava/lang/String;)Landroid/content/res/TypedArray;
    .locals 2

    .line 926
    instance-of p3, p0, Landroid/content/Context;

    if-eqz p3, :cond_0

    .line 927
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p3

    .line 928
    check-cast p0, Landroid/content/Context;

    invoke-virtual {p0, p1, p3}, Landroid/content/Context;->obtainStyledAttributes(I[I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 929
    invoke-static {p0, p3, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    .line 931
    :cond_0
    instance-of p3, p0, Landroid/content/res/Resources$Theme;

    if-eqz p3, :cond_1

    .line 932
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p3

    .line 933
    check-cast p0, Landroid/content/res/Resources$Theme;

    invoke-virtual {p0, p1, p3}, Landroid/content/res/Resources$Theme;->obtainStyledAttributes(I[I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 934
    invoke-static {p0, p3, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    :cond_1
    :try_start_0
    const-string p3, "obtainStyledAttributes"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    .line 938
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    invoke-static {p0, p3, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/TypedArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 940
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static obtainStyledAttributes(Ljava/lang/Object;Landroid/util/AttributeSet;[IIILjava/lang/String;)Landroid/content/res/TypedArray;
    .locals 2

    .line 905
    instance-of p5, p0, Landroid/content/Context;

    if-eqz p5, :cond_0

    .line 906
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p3

    .line 907
    check-cast p0, Landroid/content/Context;

    invoke-virtual {p0, p1, p3}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 908
    invoke-static {p0, p3, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    .line 910
    :cond_0
    instance-of p5, p0, Landroid/content/res/Resources$Theme;

    if-eqz p5, :cond_1

    .line 911
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p5

    .line 912
    check-cast p0, Landroid/content/res/Resources$Theme;

    invoke-virtual {p0, p1, p5, p3, p4}, Landroid/content/res/Resources$Theme;->obtainStyledAttributes(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 913
    invoke-static {p0, p5, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    :cond_1
    :try_start_0
    const-string p5, "obtainStyledAttributes"

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    .line 917
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    const/4 p1, 0x3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    invoke-static {p0, p5, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/TypedArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 919
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static obtainStyledAttributes(Ljava/lang/Object;Landroid/util/AttributeSet;[ILjava/lang/String;)Landroid/content/res/TypedArray;
    .locals 2

    .line 888
    instance-of p3, p0, Landroid/content/Context;

    if-eqz p3, :cond_0

    .line 889
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p3

    .line 891
    check-cast p0, Landroid/content/Context;

    invoke-virtual {p0, p1, p3}, Landroid/content/Context;->obtainStyledAttributes(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 892
    invoke-static {p0, p3, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    :cond_0
    :try_start_0
    const-string p3, "obtainStyledAttributes"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    .line 896
    invoke-static {p0, p3, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/TypedArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 898
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static obtainStyledAttributes(Ljava/lang/Object;[ILjava/lang/String;)Landroid/content/res/TypedArray;
    .locals 4

    .line 947
    instance-of p2, p0, Landroid/content/Context;

    if-eqz p2, :cond_0

    .line 948
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p2

    .line 949
    check-cast p0, Landroid/content/Context;

    invoke-virtual {p0, p2}, Landroid/content/Context;->obtainStyledAttributes([I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 950
    invoke-static {p0, p2, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    .line 952
    :cond_0
    instance-of p2, p0, Landroid/content/res/Resources$Theme;

    if-eqz p2, :cond_1

    .line 953
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrBefore([I)[I

    move-result-object p2

    .line 954
    check-cast p0, Landroid/content/res/Resources$Theme;

    invoke-virtual {p0, p2}, Landroid/content/res/Resources$Theme;->obtainStyledAttributes([I)Landroid/content/res/TypedArray;

    move-result-object p0

    .line 955
    invoke-static {p0, p2, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->handleAttrAfter(Landroid/content/res/TypedArray;[I[I)V

    return-object p0

    :cond_1
    :try_start_0
    const-string p2, "obtainStyledAttributes"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    new-array v2, p1, [Ljava/lang/Class;

    .line 959
    const-class v3, [I

    aput-object v3, v2, v1

    aput-object v2, v0, p1

    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/res/TypedArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 961
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static preCheckCast(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 192
    :cond_0
    instance-of v0, p0, Landroid/content/Context;

    if-nez v0, :cond_1

    return-object p0

    .line 197
    :cond_1
    invoke-virtual {p1, p0}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    .line 200
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->equalsFragmentActivity(Ljava/lang/Class;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 201
    invoke-static {p0, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext2FragmentActivity(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    .line 202
    :cond_2
    const-class v1, Landroid/app/Activity;

    if-ne p1, v1, :cond_3

    .line 203
    invoke-static {p0, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext2Activity(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Activity;

    move-result-object p0

    return-object p0

    .line 204
    :cond_3
    const-class v1, Landroid/app/Application;

    if-ne p1, v1, :cond_4

    .line 205
    invoke-static {p0, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext2Application(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Application;

    move-result-object p0

    return-object p0

    .line 206
    :cond_4
    instance-of p1, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz p1, :cond_5

    if-eqz v0, :cond_5

    .line 207
    check-cast p0, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    return-object p0

    .line 208
    :cond_5
    instance-of p1, p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    if-eqz p1, :cond_6

    if-eqz v0, :cond_6

    .line 210
    :try_start_0
    move-object p1, p0

    check-cast p1, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    invoke-virtual {p1}, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;->getOriginActivity()Landroid/app/Activity;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :try_start_1
    const-string p1, "mOriginActivity"

    .line 213
    invoke-static {p0, p1}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object p0

    :catchall_1
    move-exception p0

    .line 215
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1

    .line 218
    :cond_6
    instance-of p1, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    if-eqz p1, :cond_7

    if-eqz v0, :cond_7

    .line 219
    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    iget-object p0, p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;->mOriginActivity:Landroid/app/Activity;

    return-object p0

    .line 220
    :cond_7
    instance-of p1, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    if-eqz p1, :cond_8

    if-eqz v0, :cond_8

    .line 221
    check-cast p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    iget-object p0, p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;->mOriginApplication:Landroid/app/Application;

    return-object p0

    .line 222
    :cond_8
    instance-of p1, p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    if-eqz p1, :cond_9

    if-eqz v0, :cond_9

    .line 223
    check-cast p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;

    iget-object p0, p0, Lcom/bytedance/pangle/activity/GenerateProxyActivity;->mTargetActivity:Lcom/bytedance/pangle/activity/GeneratePluginActivity;

    :cond_9
    return-object p0
.end method

.method public static registerReceiver(Ljava/lang/Object;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;ILjava/lang/String;)Landroid/content/Intent;
    .locals 2

    .line 625
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    const-string v0, "Zeus/receiver_pangle"

    const-string v1, "ZeusTransformUtils-registerReceiver-execute[3 params]"

    .line 626
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 627
    check-cast p0, Landroid/content/Context;

    invoke-static {p0, p1, p2, p3, p4}, Lcom/bytedance/pangle/ComponentManager;->registerReceiver(Landroid/content/Context;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;ILjava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    return-object p0

    :cond_0
    :try_start_0
    const-string p4, "registerReceiver"

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    .line 630
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    invoke-static {p0, p4, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 632
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static registerReceiver(Ljava/lang/Object;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;)Landroid/content/Intent;
    .locals 2

    .line 599
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    const-string v0, "Zeus/receiver_pangle"

    const-string v1, "ZeusTransformUtils-registerReceiver-execute"

    .line 600
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 601
    check-cast p0, Landroid/content/Context;

    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/ComponentManager;->registerReceiver(Landroid/content/Context;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    return-object p0

    :cond_0
    :try_start_0
    const-string p3, "registerReceiver"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    .line 604
    invoke-static {p0, p3, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 606
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static registerReceiver(Ljava/lang/Object;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;ILjava/lang/String;)Landroid/content/Intent;
    .locals 9

    .line 638
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    const-string v0, "Zeus/receiver_pangle"

    const-string v1, "ZeusTransformUtils-registerReceiver-execute[5 params]"

    .line 639
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 640
    move-object v2, p0

    check-cast v2, Landroid/content/Context;

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move v7, p5

    move-object v8, p6

    invoke-static/range {v2 .. v8}, Lcom/bytedance/pangle/ComponentManager;->registerReceiver(Landroid/content/Context;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;ILjava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    return-object p0

    :cond_0
    :try_start_0
    const-string p6, "registerReceiver"

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    const/4 p1, 0x3

    aput-object p4, v0, p1

    const/4 p1, 0x4

    .line 643
    invoke-static {p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    invoke-static {p0, p6, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 645
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static registerReceiver(Ljava/lang/Object;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;Ljava/lang/String;)Landroid/content/Intent;
    .locals 8

    .line 612
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    const-string v0, "Zeus/receiver_pangle"

    const-string v1, "ZeusTransformUtils-registerReceiver-execute[4 params]"

    .line 613
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 614
    move-object v2, p0

    check-cast v2, Landroid/content/Context;

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    invoke-static/range {v2 .. v7}, Lcom/bytedance/pangle/ComponentManager;->registerReceiver(Landroid/content/Context;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p0

    return-object p0

    :cond_0
    :try_start_0
    const-string p5, "registerReceiver"

    const/4 v0, 0x4

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    const/4 p1, 0x3

    aput-object p4, v0, p1

    .line 617
    invoke-static {p0, p5, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 619
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static registerZeusActivityStub(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 840
    invoke-static {p2, p0, p1}, Lcom/bytedance/pangle/ComponentManager;->registerActivity(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V

    return-void
.end method

.method public static requestPermissions(Ljava/lang/Object;[Ljava/lang/String;ILjava/lang/String;)V
    .locals 2

    .line 806
    instance-of p3, p0, Lcom/bytedance/pangle/activity/IPluginActivity;

    if-eqz p3, :cond_0

    .line 807
    check-cast p0, Lcom/bytedance/pangle/activity/IPluginActivity;

    invoke-interface {p0, p1, p2}, Lcom/bytedance/pangle/activity/IPluginActivity;->_requestPermissions([Ljava/lang/String;I)V

    return-void

    .line 809
    :cond_0
    instance-of p3, p0, Landroid/app/Activity;

    if-eqz p3, :cond_1

    const/4 p3, 0x0

    :try_start_0
    const-string v0, "mOriginActivity"

    .line 812
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p3
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    if-eqz p3, :cond_1

    move-object p0, p3

    :cond_1
    :try_start_1
    const-string p3, "requestPermissions"

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    .line 820
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    aput-object p2, v0, p1

    invoke-static {p0, p3, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p0

    .line 822
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static setComponentEnabledSetting(Landroid/content/pm/PackageManager;Landroid/content/ComponentName;II)V
    .locals 0

    .line 865
    :try_start_0
    invoke-virtual {p0, p1, p2, p3}, Landroid/content/pm/PackageManager;->setComponentEnabledSetting(Landroid/content/ComponentName;II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static setResult(Ljava/lang/Object;ILandroid/content/Intent;Ljava/lang/String;)V
    .locals 6

    .line 715
    instance-of p3, p0, Landroid/app/Activity;

    const/4 v0, 0x1

    const/4 v1, 0x0

    const/4 v2, 0x2

    const-string v3, "setResult"

    if-eqz p3, :cond_1

    :try_start_0
    const-string p3, "mProxyActivity"

    .line 717
    invoke-static {p0, p3}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p3

    if-nez p3, :cond_0

    const-string p3, "mOriginActivity"

    .line 719
    invoke-static {p0, p3}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p3

    :cond_0
    if-eqz p3, :cond_1

    new-array v4, v2, [Ljava/lang/Object;

    .line 722
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    aput-object v5, v4, v1

    aput-object p2, v4, v0

    invoke-static {p3, v3, v4}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    :cond_1
    :try_start_1
    new-array p3, v2, [Ljava/lang/Object;

    .line 729
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p3, v1

    aput-object p2, p3, v0

    invoke-static {p0, v3, p3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p0

    .line 731
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static setResult(Ljava/lang/Object;ILjava/lang/String;)V
    .locals 5

    .line 736
    instance-of p2, p0, Landroid/app/Activity;

    const/4 v0, 0x0

    const/4 v1, 0x1

    const-string v2, "setResult"

    if-eqz p2, :cond_0

    :try_start_0
    const-string p2, "mProxyActivity"

    .line 738
    invoke-static {p0, p2}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_0

    new-array v3, v1, [Ljava/lang/Object;

    .line 740
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v3, v0

    invoke-static {p2, v2, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 744
    :catch_0
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    const-string v3, "Cant find mProxyActivity, obj = "

    invoke-virtual {v3, p2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v3, "Zeus/activity_pangle"

    invoke-static {v3, p2}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :try_start_1
    new-array p2, v1, [Ljava/lang/Object;

    .line 748
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, p2, v0

    invoke-static {p0, v2, p2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p0

    .line 750
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static startActivity(Ljava/lang/Object;Landroid/content/Intent;Landroid/os/Bundle;Ljava/lang/String;)V
    .locals 4

    .line 669
    :try_start_0
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/ComponentManager;->startActivity(Ljava/lang/Object;Landroid/content/Intent;Landroid/os/Bundle;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 671
    instance-of v1, p0, Landroid/content/Context;

    if-eqz v1, :cond_0

    .line 673
    check-cast p0, Landroid/content/Context;

    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/pangle/ComponentManager;->startActivity(Landroid/content/Context;Landroid/content/Intent;Landroid/os/Bundle;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_1
    const-string p3, "startActivity"

    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object p2, v2, p1

    new-array p2, v1, [Ljava/lang/Class;

    .line 677
    const-class v1, Landroid/content/Intent;

    aput-object v1, p2, v3

    const-class v1, Landroid/os/Bundle;

    aput-object v1, p2, p1

    invoke-static {p0, p3, v2, p2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception p0

    .line 679
    invoke-virtual {p0, v0}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    .line 680
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static startActivity(Ljava/lang/Object;Landroid/content/Intent;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 663
    invoke-static {p0, p1, v0, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->startActivity(Ljava/lang/Object;Landroid/content/Intent;Landroid/os/Bundle;Ljava/lang/String;)V

    return-void
.end method

.method public static startActivityForResult(Ljava/lang/Object;Landroid/content/Intent;ILandroid/os/Bundle;Ljava/lang/String;)V
    .locals 4

    .line 693
    :try_start_0
    invoke-static {p0, p1, p2, p3, p4}, Lcom/bytedance/pangle/ComponentManager;->startActivityForResult(Ljava/lang/Object;Landroid/content/Intent;ILandroid/os/Bundle;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 695
    instance-of v1, p0, Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 697
    check-cast p0, Landroid/app/Activity;

    invoke-static {p0, p1, p2, p3, p4}, Lcom/bytedance/pangle/ComponentManager;->startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;Ljava/lang/String;)V

    return-void

    :cond_0
    :try_start_1
    const-string p4, "startActivityForResult"

    const/4 v1, 0x3

    new-array v2, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    .line 701
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 p2, 0x1

    aput-object p1, v2, p2

    const/4 p1, 0x2

    aput-object p3, v2, p1

    new-array p3, v1, [Ljava/lang/Class;

    const-class v1, Landroid/content/Intent;

    aput-object v1, p3, v3

    sget-object v1, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v1, p3, p2

    const-class p2, Landroid/os/Bundle;

    aput-object p2, p3, p1

    invoke-static {p0, p4, v2, p3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception p0

    .line 703
    invoke-virtual {p0, v0}, Ljava/lang/Throwable;->addSuppressed(Ljava/lang/Throwable;)V

    .line 704
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static startActivityForResult(Ljava/lang/Object;Landroid/content/Intent;ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 687
    invoke-static {p0, p1, p2, v0, p3}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->startActivityForResult(Ljava/lang/Object;Landroid/content/Intent;ILandroid/os/Bundle;Ljava/lang/String;)V

    return-void
.end method

.method public static startService(Ljava/lang/Object;Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;
    .locals 2

    .line 755
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 759
    invoke-static {}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->getInstance()Lcom/bytedance/pangle/service/client/ServiceManagerNative;

    move-result-object v0

    check-cast p0, Landroid/content/Context;

    invoke-virtual {v0, p0, p1, p2}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->startServiceNative(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0

    :cond_0
    :try_start_0
    const-string p2, "startService"

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    .line 762
    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/ComponentName;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 764
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static stopService(Ljava/lang/Object;Landroid/content/Intent;Ljava/lang/String;)Z
    .locals 2

    .line 770
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_0

    .line 771
    invoke-static {}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->getInstance()Lcom/bytedance/pangle/service/client/ServiceManagerNative;

    move-result-object v0

    check-cast p0, Landroid/content/Context;

    invoke-virtual {v0, p0, p1, p2}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->stopServiceNative(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;)Z

    move-result p0

    return p0

    :cond_0
    :try_start_0
    const-string p2, "stopService"

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    .line 774
    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 776
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static unbindService(Ljava/lang/Object;Landroid/content/ServiceConnection;Ljava/lang/String;)V
    .locals 2

    .line 794
    instance-of p2, p0, Landroid/content/Context;

    if-eqz p2, :cond_0

    .line 795
    invoke-static {}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->getInstance()Lcom/bytedance/pangle/service/client/ServiceManagerNative;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/service/client/ServiceManagerNative;->unbindServiceNative(Landroid/content/ServiceConnection;)V

    return-void

    :cond_0
    :try_start_0
    const-string p2, "unbindService"

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    .line 798
    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 800
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static unregisterReceiver(Ljava/lang/Object;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;Ljava/lang/String;)V
    .locals 2

    .line 651
    instance-of p2, p0, Landroid/content/Context;

    if-eqz p2, :cond_0

    .line 652
    check-cast p0, Landroid/content/Context;

    invoke-static {p0, p1}, Lcom/bytedance/pangle/ComponentManager;->unregisterReceiver(Landroid/content/Context;Lcom/bytedance/pangle/receiver/PluginBroadcastReceiver;)V

    return-void

    :cond_0
    :try_start_0
    const-string p2, "unregisterReceiver"

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    .line 655
    invoke-static {p0, p2, v0}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 657
    new-instance p1, Ljava/lang/RuntimeException;

    invoke-direct {p1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw p1
.end method

.method public static wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;
    .locals 8

    .line 257
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    if-nez v0, :cond_0

    .line 258
    move-object v0, p0

    check-cast v0, Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    if-eqz v0, :cond_0

    .line 260
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->setAppContext(Landroid/app/Application;)V

    :cond_0
    if-nez p0, :cond_1

    const/4 p0, 0x0

    return-object p0

    .line 266
    :cond_1
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->getWrapperFromCache(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_2

    return-object v0

    .line 270
    :cond_2
    check-cast p0, Landroid/content/Context;

    invoke-static {p0, p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->getContextIfNeedWrap(Landroid/content/Context;Landroid/content/Context;Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_3

    return-object p0

    .line 277
    :cond_3
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result p0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p0, :cond_5

    invoke-static {v0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->instanceOfFragmentActivity(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    .line 279
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p0

    if-nez p0, :cond_4

    .line 280
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 284
    :cond_4
    :try_start_0
    new-instance p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    move-object v3, v0

    check-cast v3, Landroid/app/Activity;

    new-instance v4, Lcom/bytedance/pangle/PluginContext;

    move-object v5, v0

    check-cast v5, Landroid/content/Context;

    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v6

    invoke-virtual {v6, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v6

    invoke-direct {v4, v5, v6, v2}, Lcom/bytedance/pangle/PluginContext;-><init>(Landroid/content/Context;Lcom/bytedance/pangle/plugin/Plugin;Z)V

    invoke-direct {p0, v3, v4}, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;-><init>(Landroid/app/Activity;Lcom/bytedance/pangle/PluginContext;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto/16 :goto_0

    .line 289
    :catchall_0
    :try_start_1
    const-class p0, Lcom/bytedance/pangle/wrapper/PluginFragmentActivityWrapper;

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Object;

    aput-object v0, v4, v2

    new-instance v5, Lcom/bytedance/pangle/PluginContext;

    move-object v6, v0

    check-cast v6, Landroid/content/Context;

    .line 290
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v7

    invoke-virtual {v7, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v7

    invoke-direct {v5, v6, v7, v2}, Lcom/bytedance/pangle/PluginContext;-><init>(Landroid/content/Context;Lcom/bytedance/pangle/plugin/Plugin;Z)V

    aput-object v5, v4, v1

    new-array v3, v3, [Ljava/lang/Class;

    sget-object v5, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->fragmentClazz:Ljava/lang/Class;

    aput-object v5, v3, v2

    const-class v2, Lcom/bytedance/pangle/PluginContext;

    aput-object v2, v3, v1

    .line 289
    invoke-static {p0, v4, v3}, Lcom/bytedance/pangle/util/MethodUtils;->invokeConstructor(Ljava/lang/Class;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    .line 294
    :catchall_1
    check-cast v0, Landroid/content/Context;

    return-object v0

    .line 297
    :cond_5
    instance-of p0, v0, Landroid/app/Activity;

    if-eqz p0, :cond_7

    .line 299
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p0

    if-nez p0, :cond_6

    .line 300
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 302
    :cond_6
    new-instance p0, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;

    move-object v1, v0

    check-cast v1, Landroid/app/Activity;

    new-instance v3, Lcom/bytedance/pangle/PluginContext;

    move-object v4, v0

    check-cast v4, Landroid/content/Context;

    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v5

    invoke-direct {v3, v4, v5, v2}, Lcom/bytedance/pangle/PluginContext;-><init>(Landroid/content/Context;Lcom/bytedance/pangle/plugin/Plugin;Z)V

    invoke-direct {p0, v1, v3}, Lcom/bytedance/pangle/wrapper/PluginActivityWrapper;-><init>(Landroid/app/Activity;Lcom/bytedance/pangle/PluginContext;)V

    goto :goto_0

    .line 303
    :cond_7
    instance-of p0, v0, Landroid/app/Application;

    if-eqz p0, :cond_8

    .line 304
    new-instance p0, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;

    move-object v2, v0

    check-cast v2, Landroid/app/Application;

    new-instance v3, Lcom/bytedance/pangle/PluginContext;

    move-object v4, v0

    check-cast v4, Landroid/content/Context;

    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v5

    invoke-direct {v3, v4, v5, v1}, Lcom/bytedance/pangle/PluginContext;-><init>(Landroid/content/Context;Lcom/bytedance/pangle/plugin/Plugin;Z)V

    invoke-direct {p0, v2, v3}, Lcom/bytedance/pangle/wrapper/PluginApplicationWrapper;-><init>(Landroid/app/Application;Lcom/bytedance/pangle/PluginContext;)V

    goto :goto_0

    .line 306
    :cond_8
    new-instance p0, Lcom/bytedance/pangle/PluginContext;

    move-object v1, v0

    check-cast v1, Landroid/content/Context;

    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v3

    invoke-direct {p0, v1, v3, v2}, Lcom/bytedance/pangle/PluginContext;-><init>(Landroid/content/Context;Lcom/bytedance/pangle/plugin/Plugin;Z)V

    :goto_0
    if-eqz p0, :cond_9

    .line 310
    sget-object v1, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->contextCache:Ljava/util/HashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_9
    return-object p0
.end method

.method public static wrapperContext2Activity(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Activity;
    .locals 1

    :goto_0
    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 165
    :cond_0
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    .line 166
    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 167
    check-cast p0, Landroid/app/Activity;

    return-object p0

    .line 168
    :cond_1
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz v0, :cond_2

    .line 169
    check-cast p0, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    goto :goto_0

    .line 171
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "\u5f3a\u8f6c\u5931\u8d25"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static wrapperContext2Application(Ljava/lang/Object;Ljava/lang/String;)Landroid/app/Application;
    .locals 1

    :goto_0
    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 151
    :cond_0
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    .line 152
    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_1

    .line 153
    check-cast p0, Landroid/app/Application;

    return-object p0

    .line 154
    :cond_1
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz v0, :cond_2

    .line 155
    check-cast p0, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    goto :goto_0

    .line 157
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "\u5f3a\u8f6c\u5931\u8d25"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private static wrapperContext2FragmentActivity(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    :goto_0
    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 236
    :cond_0
    invoke-static {p0, p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    .line 237
    invoke-static {p1}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->isSupportLibIso(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->instanceOfFragmentActivity(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-object p0

    .line 239
    :cond_1
    instance-of v0, p0, Lcom/bytedance/pangle/PluginContext;

    if-eqz v0, :cond_2

    .line 240
    check-cast p0, Lcom/bytedance/pangle/PluginContext;

    iget-object p0, p0, Lcom/bytedance/pangle/PluginContext;->mOriginContext:Landroid/content/Context;

    goto :goto_0

    .line 242
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "\u5f3a\u8f6c\u5931\u8d25"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static wrapperContextForParams(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 90
    instance-of v0, p0, Lcom/bytedance/pangle/service/PluginService;

    if-nez v0, :cond_1

    instance-of v0, p0, Lcom/bytedance/pangle/service/PluginIntentService;

    if-eqz v0, :cond_0

    goto :goto_0

    .line 95
    :cond_0
    instance-of v0, p0, Landroid/content/Context;

    if-eqz v0, :cond_1

    .line 96
    invoke-static {p0, p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->wrapperContext(Ljava/lang/Object;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p2

    .line 98
    invoke-static {p2}, Lcom/bytedance/pangle/transform/ZeusTransformUtils;->convertProxy2PluginActivity(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p2

    .line 99
    invoke-virtual {p1, p2}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    return-object p2

    :cond_1
    :goto_0
    return-object p0
.end method
