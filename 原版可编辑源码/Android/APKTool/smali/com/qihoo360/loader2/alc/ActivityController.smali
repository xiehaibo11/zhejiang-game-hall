.class public final Lcom/qihoo360/loader2/alc/ActivityController;
.super Ljava/lang/Object;
.source "ActivityController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;
    }
.end annotation


# static fields
.field private static sActivities:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;>;"
        }
    .end annotation
.end field

.field private static sActivityThreadActivities:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "**>;"
        }
    .end annotation
.end field

.field private static sActivityThreadServices:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "**>;"
        }
    .end annotation
.end field

.field private static sHandler:Ljava/lang/reflect/InvocationHandler;

.field private static sListener:Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

.field private static sStub:Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/util/Map;
    .locals 1

    .line 41
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadActivities:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$100()Ljava/util/Map;
    .locals 1

    .line 41
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadServices:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic access$200()Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;
    .locals 1

    .line 41
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sListener:Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    return-object v0
.end method

.method static synthetic access$300()Ljava/util/ArrayList;
    .locals 1

    .line 41
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivities:Ljava/util/ArrayList;

    return-object v0
.end method

.method public static final init()V
    .locals 0

    .line 62
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->loadVar()V

    return-void
.end method

.method public static final install(Landroid/app/Application;)V
    .locals 3

    .line 66
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const-string v1, "ws000"

    const/16 v2, 0xe

    if-ge v0, v2, :cond_1

    .line 67
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "install activity watcher"

    .line 68
    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 70
    :cond_0
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->install2x()V

    return-void

    .line 74
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    const-string v0, "install activity lifecycle callbacks"

    .line 75
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 77
    :cond_2
    invoke-static {p0}, Lcom/qihoo360/loader2/alc/ActivityController;->install4x(Landroid/app/Application;)V

    return-void
.end method

.method private static final install2x()V
    .locals 8

    .line 102
    new-instance v0, Lcom/qihoo360/loader2/alc/ActivityController$1;

    invoke-direct {v0}, Lcom/qihoo360/loader2/alc/ActivityController$1;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sStub:Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;

    :try_start_0
    const-string v0, "android.app.ActivityManagerNative"

    .line 130
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "android.app.IActivityWatcher"

    .line 131
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_5

    .line 136
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v3, "ws000"

    if-eqz v2, :cond_0

    .line 137
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "AMN="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, " IAW="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :try_start_1
    const-string v2, "getDefault"

    const/4 v4, 0x0

    new-array v5, v4, [Ljava/lang/Class;

    .line 143
    invoke-virtual {v0, v2, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    const-string v5, "registerActivityWatcher"

    const/4 v6, 0x1

    new-array v7, v6, [Ljava/lang/Class;

    aput-object v1, v7, v4

    .line 144
    invoke-virtual {v0, v5, v7}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_1} :catch_3

    .line 152
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 153
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getDefault="

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " registerActivityWatcher="

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v1, 0x0

    :try_start_2
    new-array v5, v4, [Ljava/lang/Object;

    .line 158
    invoke-virtual {v2, v1, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    new-array v2, v6, [Ljava/lang/Object;

    .line 159
    sget-object v5, Lcom/qihoo360/loader2/alc/ActivityController;->sStub:Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;

    aput-object v5, v2, v4

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_2 .. :try_end_2} :catch_0

    .line 170
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 171
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "oAMN="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 167
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    return-void

    :catch_1
    move-exception v0

    .line 164
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    return-void

    :catch_2
    move-exception v0

    .line 161
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    return-void

    :catch_3
    move-exception v0

    .line 149
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    return-void

    :catch_4
    move-exception v0

    .line 146
    invoke-virtual {v0}, Ljava/lang/SecurityException;->printStackTrace()V

    return-void

    :catch_5
    move-exception v0

    .line 133
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    return-void
.end method

.method private static final install4x(Landroid/app/Application;)V
    .locals 7

    .line 177
    new-instance v0, Lcom/qihoo360/loader2/alc/ActivityController$2;

    invoke-direct {v0}, Lcom/qihoo360/loader2/alc/ActivityController$2;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sHandler:Ljava/lang/reflect/InvocationHandler;

    .line 212
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivities:Ljava/util/ArrayList;

    :try_start_0
    const-string v0, "android.app.Application"

    .line 217
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "android.app.Application$ActivityLifecycleCallbacks"

    .line 218
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_5

    .line 223
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v3, "ws000"

    if-eqz v2, :cond_0

    .line 224
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "install activity lifecycle callbacks: class="

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :try_start_1
    const-string v2, "registerActivityLifecycleCallbacks"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    const/4 v6, 0x0

    aput-object v1, v5, v6

    .line 229
    invoke-virtual {v0, v2, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_1} :catch_3

    .line 237
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    .line 238
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "install activity lifecycle callbacks: m="

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 241
    :cond_1
    const-class v2, Lcom/qihoo360/loader2/alc/ActivityController;

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    new-array v5, v4, [Ljava/lang/Class;

    aput-object v1, v5, v6

    sget-object v1, Lcom/qihoo360/loader2/alc/ActivityController;->sHandler:Ljava/lang/reflect/InvocationHandler;

    invoke-static {v2, v5, v1}, Ljava/lang/reflect/Proxy;->newProxyInstance(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;

    move-result-object v1

    .line 242
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_2

    .line 243
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "install activity lifecycle callbacks: cb="

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :try_start_2
    new-array v2, v4, [Ljava/lang/Object;

    aput-object v1, v2, v6

    .line 247
    invoke-virtual {v0, p0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_2 .. :try_end_2} :catch_0

    .line 258
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_3

    const-string p0, "install activity lifecycle callbacks: ok"

    .line 259
    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-void

    :catch_0
    move-exception p0

    .line 255
    invoke-virtual {p0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    return-void

    :catch_1
    move-exception p0

    .line 252
    invoke-virtual {p0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    return-void

    :catch_2
    move-exception p0

    .line 249
    invoke-virtual {p0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    return-void

    :catch_3
    move-exception p0

    .line 234
    invoke-virtual {p0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    return-void

    :catch_4
    move-exception p0

    .line 231
    invoke-virtual {p0}, Ljava/lang/SecurityException;->printStackTrace()V

    return-void

    :catch_5
    move-exception p0

    .line 220
    invoke-virtual {p0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    return-void
.end method

.method private static final loadVar()V
    .locals 6

    :try_start_0
    const-string v0, "android.app.ActivityThread"

    .line 266
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_9

    .line 271
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v2, "ws000"

    if-eqz v1, :cond_0

    .line 272
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "clsAT="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :try_start_1
    const-string v1, "currentActivityThread"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 277
    invoke-virtual {v0, v1, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/SecurityException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_1} :catch_7

    .line 285
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_1

    .line 286
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "currentActivityThread="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 v4, 0x0

    :try_start_2
    new-array v3, v3, [Ljava/lang/Object;

    .line 291
    invoke-virtual {v1, v4, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1
    :try_end_2
    .catch Ljava/lang/IllegalArgumentException; {:try_start_2 .. :try_end_2} :catch_6
    .catch Ljava/lang/IllegalAccessException; {:try_start_2 .. :try_end_2} :catch_5
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_2 .. :try_end_2} :catch_4

    .line 302
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_2

    .line 303
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "oAT="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :try_start_3
    const-string v3, "mActivities"

    .line 309
    invoke-virtual {v0, v3}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    const-string v4, "mServices"

    .line 310
    invoke-virtual {v0, v4}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0
    :try_end_3
    .catch Ljava/lang/SecurityException; {:try_start_3 .. :try_end_3} :catch_3
    .catch Ljava/lang/NoSuchFieldException; {:try_start_3 .. :try_end_3} :catch_2

    .line 318
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 319
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT f1="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, " f2="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 v4, 0x1

    .line 325
    :try_start_4
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 326
    invoke-virtual {v3, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    .line 327
    invoke-virtual {v0, v4}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 328
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0
    :try_end_4
    .catch Ljava/lang/IllegalArgumentException; {:try_start_4 .. :try_end_4} :catch_1
    .catch Ljava/lang/IllegalAccessException; {:try_start_4 .. :try_end_4} :catch_0

    .line 336
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v4, " services="

    if-eqz v1, :cond_4

    .line 337
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "AT activities="

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 341
    :cond_4
    :try_start_5
    check-cast v3, Ljava/util/Map;

    sput-object v3, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadActivities:Ljava/util/Map;

    .line 342
    check-cast v0, Ljava/util/Map;

    sput-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadServices:Ljava/util/Map;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 348
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_5

    .line 349
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "converted: activities="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadActivities:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadServices:Ljava/util/Map;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-void

    :catchall_0
    move-exception v0

    .line 344
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void

    :catch_0
    move-exception v0

    .line 333
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    return-void

    :catch_1
    move-exception v0

    .line 330
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    return-void

    :catch_2
    move-exception v0

    .line 315
    invoke-virtual {v0}, Ljava/lang/NoSuchFieldException;->printStackTrace()V

    return-void

    :catch_3
    move-exception v0

    .line 312
    invoke-virtual {v0}, Ljava/lang/SecurityException;->printStackTrace()V

    return-void

    :catch_4
    move-exception v0

    .line 299
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    return-void

    :catch_5
    move-exception v0

    .line 296
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    return-void

    :catch_6
    move-exception v0

    .line 293
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    return-void

    :catch_7
    move-exception v0

    .line 282
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    return-void

    :catch_8
    move-exception v0

    .line 279
    invoke-virtual {v0}, Ljava/lang/SecurityException;->printStackTrace()V

    return-void

    :catch_9
    move-exception v0

    .line 268
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    return-void
.end method

.method public static final setListener(Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;)V
    .locals 0

    .line 84
    sput-object p0, Lcom/qihoo360/loader2/alc/ActivityController;->sListener:Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    return-void
.end method

.method public static final sumActivities()I
    .locals 3

    .line 89
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivities:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    .line 90
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    goto :goto_0

    .line 91
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/alc/ActivityController;->sActivityThreadActivities:Ljava/util/Map;

    if-eqz v0, :cond_1

    .line 92
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    goto :goto_0

    :cond_1
    const/4 v0, -0x1

    .line 94
    :goto_0
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_2

    .line 95
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "process sumActivities = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws000"

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v0
.end method
