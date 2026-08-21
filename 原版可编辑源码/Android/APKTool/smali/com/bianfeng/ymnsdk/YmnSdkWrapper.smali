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

.field private static mIsCallInit:Z

.field private static permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

.field private static pluginAutoFunctions:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    .line 45
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$1;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$1;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/util/Set;
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    return-object v0
.end method

.method static synthetic access$100()Ljava/util/Map;
    .locals 1

    .line 33
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->pluginAutoFunctions:Ljava/util/Map;

    return-object v0
.end method

.method public static callFunction(Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 145
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$2;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 157
    return-void
.end method

.method public static callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
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

    .line 175
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$4;-><init>(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 181
    return-void
.end method

.method public static varargs callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 160
    new-instance v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;

    invoke-direct {v0, p1, p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$3;-><init>([Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 171
    return-void
.end method

.method public static callFunctionWithResult(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
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

    .line 192
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static varargs callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 184
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->isJsonParamers([Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 185
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnStrategy;->arrayParamersAsMap([Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;Ljava/util/LinkedHashMap;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 187
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->b(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static clearCallbacks()V
    .locals 1

    .line 65
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->clear()V

    .line 66
    return-void
.end method

.method public static dispatchMessage(ILjava/lang/String;)V
    .locals 1
    .param p0, "code"    # I
    .param p1, "msg"    # Ljava/lang/String;

    .line 69
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-interface {v0, p0, p1}, Lcom/bianfeng/platform/PlatformSdkListener;->onCallBack(ILjava/lang/String;)V

    .line 70
    return-void
.end method

.method public static getCallbacks()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/YmnCallback;",
            ">;"
        }
    .end annotation

    .line 330
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    return-object v0
.end method

.method public static initialize(Landroid/app/Activity;)V
    .locals 2
    .param p0, "activity"    # Landroid/app/Activity;

    .line 73
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    .line 75
    const-string v0, "ymnsdk"

    const-string v1, "YmnSdkWrapper initialize: "

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 76
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->setAgreePrivacy()V

    .line 77
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initDeviceInfo(Landroid/content/Context;)V

    .line 78
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->initContext(Landroid/content/Context;)V

    .line 79
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->innerInit(Landroid/content/Context;)V

    .line 80
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->init(Landroid/content/Context;)V

    .line 81
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->mIsCallInit:Z

    .line 82
    return-void
.end method

.method public static innerInit(Landroid/content/Context;)V
    .locals 2
    .param p0, "base"    # Landroid/content/Context;

    .line 92
    sget-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->inited:Z

    if-nez v0, :cond_1

    .line 93
    const/4 v0, 0x1

    sput-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->inited:Z

    .line 94
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

    .line 95
    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, p0

    .line 96
    .local v0, "context":Landroid/content/Context;
    :goto_0
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnUtilsdk;->init(Landroid/content/Context;)V

    .line 97
    invoke-static {v0}, Lcom/bianfeng/platform/executor/AppConfig;->init(Landroid/content/Context;)V

    .line 98
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/d;->c(Landroid/content/Context;)V

    .line 99
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->init(Landroid/content/Context;)V

    .line 100
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/feature/e;->d(Landroid/content/Context;)V

    .line 101
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->dispatcher:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/feature/c;->a(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 103
    .end local v0    # "context":Landroid/content/Context;
    :cond_1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->b(Landroid/content/Context;)V

    .line 109
    return-void
.end method

.method public static isSupportFunction(Ljava/lang/String;)Z
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 141
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static jsonToMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 5
    .param p0, "jsonString"    # Ljava/lang/String;
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

    .line 311
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 313
    .local v0, "jsonObject":Lorg/json/JSONObject;
    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 316
    .local v1, "keyIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    .line 317
    .local v2, "valueMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 318
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 319
    .local v3, "key":Ljava/lang/String;
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    .line 320
    .local v4, "value":Ljava/lang/Object;
    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 322
    .end local v3    # "key":Ljava/lang/String;
    .end local v4    # "value":Ljava/lang/Object;
    :cond_0
    return-object v2

    .line 323
    .end local v0    # "jsonObject":Lorg/json/JSONObject;
    .end local v1    # "keyIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
    .end local v2    # "valueMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    :catch_0
    move-exception v0

    .line 324
    .local v0, "e":Lorg/json/JSONException;
    invoke-virtual {v0}, Ljava/lang/RuntimeException;->printStackTrace()V

    .line 326
    .end local v0    # "e":Lorg/json/JSONException;
    const/4 v0, 0x0

    return-object v0
.end method

.method public static onActivityResult(IILandroid/content/Intent;)V
    .locals 0
    .param p0, "requestCode"    # I
    .param p1, "resultCode"    # I
    .param p2, "data"    # Landroid/content/Intent;

    .line 238
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/c;->a(IILandroid/content/Intent;)V

    .line 239
    return-void
.end method

.method public static onCreate(Landroid/app/Activity;)V
    .locals 0
    .param p0, "activity"    # Landroid/app/Activity;

    .line 85
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    .line 86
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/app/Activity;)V

    .line 87
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/hostaction/YmnURLManagerV2;->init(Landroid/content/Context;)V

    .line 88
    return-void
.end method

.method public static onDestroy()V
    .locals 1

    .line 227
    sget-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->mIsCallInit:Z

    if-eqz v0, :cond_0

    .line 228
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onDestroy()V

    .line 230
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->a()V

    .line 231
    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 0
    .param p0, "intent"    # Landroid/content/Intent;

    .line 234
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Landroid/content/Intent;)V

    .line 235
    return-void
.end method

.method public static onPause()V
    .locals 1

    .line 208
    sget-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->mIsCallInit:Z

    if-eqz v0, :cond_0

    .line 209
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onPause()V

    .line 211
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->b()V

    .line 212
    return-void
.end method

.method public static onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1
    .param p0, "requestCode"    # I
    .param p1, "permissions"    # [Ljava/lang/String;
    .param p2, "grantResults"    # [I

    .line 283
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/c;->a(I[Ljava/lang/String;[I)V

    .line 284
    const/4 v0, 0x1

    if-eq p0, v0, :cond_0

    goto :goto_0

    .line 289
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

    if-eqz v0, :cond_1

    .line 290
    invoke-interface {v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;->onFinish()V

    .line 296
    :cond_1
    :goto_0
    return-void
.end method

.method public static onRestart()V
    .locals 0

    .line 204
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->c()V

    .line 205
    return-void
.end method

.method public static onResume()V
    .locals 1

    .line 215
    const-string v0, "YmnSdkWrapper onResume"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 216
    sget-boolean v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->mIsCallInit:Z

    if-eqz v0, :cond_0

    .line 217
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->onResume()V

    .line 219
    :cond_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->d()V

    .line 220
    return-void
.end method

.method public static onStart()V
    .locals 0

    .line 200
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->e()V

    .line 201
    return-void
.end method

.method public static onStop()V
    .locals 0

    .line 223
    invoke-static {}, Lcom/bianfeng/ymnsdk/feature/c;->f()V

    .line 224
    return-void
.end method

.method public static onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 0
    .param p0, "hasFocus"    # Z
    .param p1, "activity"    # Landroid/app/Activity;

    .line 278
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/feature/c;->a(ZLandroid/app/Activity;)V

    .line 279
    return-void
.end method

.method public static registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 2
    .param p0, "callback"    # Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 56
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

    .line 57
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 58
    return-void
.end method

.method public static registPluginFeatureWrapper(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V
    .locals 4
    .param p0, "plugin"    # Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;

    .line 133
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->pluginAutoFunctions:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 134
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->pluginAutoFunctions:Ljava/util/Map;

    .line 136
    :cond_0
    invoke-interface {p0}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v0

    .line 137
    .local v0, "pluginName":Ljava/lang/String;
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->pluginAutoFunctions:Ljava/util/Map;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_plugin_init"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 138
    return-void
.end method

.method public static removeCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V
    .locals 1
    .param p0, "callback"    # Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    .line 61
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    invoke-interface {v0, p0}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    .line 62
    return-void
.end method

.method public static requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;)V
    .locals 1
    .param p0, "callback"    # Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;
    .param p1, "permissionStr"    # [Ljava/lang/String;

    .line 250
    const/4 v0, 0x1

    invoke-static {p0, p1, v0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;I)V

    .line 251
    return-void
.end method

.method public static requestPermisssion(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;[Ljava/lang/String;I)V
    .locals 4
    .param p0, "callback"    # Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;
    .param p1, "permissionStr"    # [Ljava/lang/String;
    .param p2, "code"    # I

    .line 255
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 256
    .local v0, "packageManager":Landroid/content/pm/PackageManager;
    sget-object v1, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 257
    .local v1, "packageName":Ljava/lang/String;
    const/4 v2, 0x0

    .line 259
    .local v2, "permisions":[Ljava/lang/String;
    if-eqz p1, :cond_0

    .line 260
    move-object v2, p1

    goto :goto_0

    .line 262
    :cond_0
    const/16 v3, 0x1000

    :try_start_0
    invoke-virtual {v0, v1, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v3

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->requestedPermissions:[Ljava/lang/String;

    move-object v2, v3

    .line 264
    :goto_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->setPermissionCallback(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;)V

    .line 265
    if-eqz v2, :cond_1

    .line 266
    sget-object v3, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v3, v2, p2}, Landroid/app/Activity;->requestPermissions([Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 270
    :cond_1
    goto :goto_1

    .line 268
    :catch_0
    move-exception v3

    .line 269
    .local v3, "e":Ljava/lang/Exception;
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 271
    .end local v3    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method

.method public static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1
    .param p0, "runnable"    # Ljava/lang/Runnable;

    .line 242
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 245
    :cond_0
    sget-object v0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->activity:Landroid/app/Activity;

    invoke-virtual {v0, p0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_1

    .line 243
    :cond_1
    :goto_0
    const-string v0, "activity is null or finishing, ignore target to ui thread"

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 247
    :goto_1
    return-void
.end method

.method public static setCallbacks(Ljava/util/Set;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Lcom/bianfeng/ymnsdk/feature/YmnCallback;",
            ">;)V"
        }
    .end annotation

    .line 334
    .local p0, "callbacks":Ljava/util/Set;, "Ljava/util/Set<Lcom/bianfeng/ymnsdk/feature/YmnCallback;>;"
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->callbacks:Ljava/util/Set;

    .line 335
    return-void
.end method

.method public static setDebugMode(Z)V
    .locals 0
    .param p0, "mode"    # Z

    .line 196
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/feature/c;->a(Z)V

    .line 197
    return-void
.end method

.method public static setPermissionCallback(Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;)V
    .locals 0
    .param p0, "permissionCallback"    # Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

    .line 274
    sput-object p0, Lcom/bianfeng/ymnsdk/YmnSdkWrapper;->permissionCallback:Lcom/bianfeng/ymnsdk/YmnSdkWrapper$PermissionCallback;

    .line 275
    return-void
.end method
