.class public Lcom/bianfeng/ymnsdk/YmnSdkWrapper;
.super Ljava/lang/Object;
.source "YmnSdkWrapper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/YmnSdkWrapper$ShowPermissionCallback;,
        Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;
    }
.end annotation


# static fields
.field private static final REQUEST_PERMISSIONS_CODE:I = 0x1

.field public static activity:Landroid/app/Activity;

.field private static callbacks:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/YmnCallback;",
            ">;"
        }
    .end annotation
.end field

.field private static dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

.field private static volatile inited:Z

.field private static permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    .line 2
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$1;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$1;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/util/Set;
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    return-object v0
.end method

.method public static callFunction(Ljava/lang/String;)V
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$2;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 3
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;-><init>(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 1

    .line 2
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;

    invoke-direct {v0, p1, p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;-><init>([Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 5
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->isJsonParamers([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 4
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static clearCallbacks()V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    return-void
.end method

.method public static dispatchMessage(ILjava/lang/String;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-interface {v0, p0, p1}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    return-void
.end method

.method public static initialize(Landroid/app/Activity;)V
    .locals 2

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    const-string v0, "ymnsdk"

    const-string v1, "YmnSdkWrapper initialize: "

    .line 3
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->setAgreePrivacy()V

    .line 5
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->initContext(Landroid/content/Context;)V

    .line 6
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->innerInit(Landroid/content/Context;)V

    .line 7
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static innerInit(Landroid/content/Context;)V
    .locals 2

    .line 1
    sget-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->inited:Z

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 2
    sput-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->inited:Z

    .line 3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnSdkWrapper innerInit: inited=="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->inited:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 4
    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p0

    .line 5
    :goto_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->init(Landroid/content/Context;)V

    .line 6
    invoke-static {v0}, Lcom/bianfeng/platform/executor/AppConfig;->init(Landroid/content/Context;)V

    .line 7
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->c(Landroid/content/Context;)V

    .line 8
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->init(Landroid/content/Context;)V

    .line 9
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->d(Landroid/content/Context;)V

    .line 10
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 12
    :cond_1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->b(Landroid/content/Context;)V

    return-void
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static jsonToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 1
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 3
    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p0

    .line 6
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 7
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 8
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 9
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    .line 10
    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_0
    return-object v1

    :catch_0
    move-exception p0

    .line 14
    invoke-virtual {p0}, Ljava/lang/RuntimeException;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static onActivityResult(IILandroid/content/Intent;)V
    .locals 0

    .line 1
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/c;->a(IILandroid/content/Intent;)V

    return-void
.end method

.method public static onCreate(Landroid/app/Activity;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    .line 2
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/app/Activity;)V

    .line 3
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static onDestroy()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onDestroy()V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->a()V

    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/content/Intent;)V

    return-void
.end method

.method public static onPause()V
    .locals 1

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onPause()V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->b()V

    return-void
.end method

.method public static onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    .line 1
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/c;->a(I[Ljava/lang/String;[I)V

    const/4 p1, 0x1

    if-eq p0, p1, :cond_0

    goto :goto_0

    .line 7
    :cond_0
    sget-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

    if-eqz p0, :cond_1

    .line 8
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;->onFinish()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static onRestart()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->c()V

    return-void
.end method

.method public static onResume()V
    .locals 1

    const-string v0, "YmnSdkWrapper onResume"

    .line 1
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onResume()V

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->d()V

    return-void
.end method

.method public static onStart()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->e()V

    return-void
.end method

.method public static onStop()V
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->f()V

    return-void
.end method

.method public static onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->a(ZLandroid/app/Activity;)V

    return-void
.end method

.method public static registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 2

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "registCallback\u7684\u7c7b\u540d\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static removeCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public static requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    .line 1
    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;I)V

    return-void
.end method

.method public static requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;I)V
    .locals 2

    .line 2
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 3
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    const/16 p1, 0x1000

    .line 9
    :try_start_0
    invoke-virtual {v0, v1, p1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p1

    iget-object p1, p1, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    .line 11
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->setPermissionCallback(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;)V

    if-eqz p1, :cond_1

    .line 13
    sget-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {p0, p1, p2}, Landroid/app/Activity;->requestPermissions([Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 16
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, p0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_1
    :goto_0
    const-string p0, "activity is null or finishing, ignore target to ui thread"

    .line 5
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    :goto_1
    return-void
.end method

.method public static setDebugMode(Z)V
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Z)V

    return-void
.end method

.method public static setPermissionCallback(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;)V
    .locals 0

    .line 1
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

    return-void
.end method
