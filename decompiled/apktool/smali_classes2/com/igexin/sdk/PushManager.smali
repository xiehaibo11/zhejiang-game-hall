.class public Lcom/igexin/sdk/PushManager;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/util/concurrent/ExecutorService;


# instance fields
.field private b:J

.field private c:J

.field private d:J

.field private e:[B

.field private f:Ljava/lang/Class;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Lcom/igexin/push/core/g;

.field private j:Ljava/lang/Boolean;

.field private final k:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    sput-object v0, Lcom/igexin/sdk/PushManager;->a:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "[PushManager]"

    iput-object v0, p0, Lcom/igexin/sdk/PushManager;->k:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/igexin/sdk/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/sdk/PushManager;-><init>()V

    return-void
.end method

.method private a(ILjava/lang/String;)I
    .locals 1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    const v0, 0xea61

    if-eq p1, v0, :cond_0

    const v0, 0xea62

    if-eq p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "HW_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    add-int/lit8 p1, p1, 0x12

    return p1

    :cond_1
    const-string v0, "XM_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    add-int/lit8 p1, p1, 0x30

    return p1

    :cond_2
    const-string v0, "OP_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    add-int/lit8 p1, p1, 0x1c

    return p1

    :cond_3
    const-string v0, "VV_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    add-int/lit8 p1, p1, 0x26

    return p1

    :cond_4
    const-string v0, "MZ_"

    invoke-virtual {p2, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_5

    add-int/lit8 p1, p1, 0x3a

    :cond_5
    :goto_0
    return p1
.end method

.method static synthetic a(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)Landroid/app/Application;
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->d(Landroid/content/Context;)Landroid/app/Application;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/igexin/sdk/PushManager;)Lcom/igexin/push/core/g;
    .locals 0

    iget-object p0, p0, Lcom/igexin/sdk/PushManager;->i:Lcom/igexin/push/core/g;

    return-object p0
.end method

.method static synthetic a(Lcom/igexin/sdk/PushManager;Lcom/igexin/push/core/g;)Lcom/igexin/push/core/g;
    .locals 0

    iput-object p1, p0, Lcom/igexin/sdk/PushManager;->i:Lcom/igexin/push/core/g;

    return-object p1
.end method

.method private a(Landroid/content/Context;)Ljava/lang/Class;
    .locals 1

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method private a(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    :try_start_0
    const-string v0, "MD5"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/security/MessageDigest;->update([B)V

    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-byte v3, p1, v2

    if-gez v3, :cond_0

    add-int/lit16 v3, v3, 0x100

    :cond_0
    const/16 v4, 0x10

    if-ge v3, v4, :cond_1

    const-string v4, "0"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V
    .locals 4

    :try_start_0
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/x;->d(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p1, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v2, "action"

    const/16 v3, 0x271a

    invoke-virtual {v0, v2, v3}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v2, "cmd_msg"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    invoke-virtual {v1, v0}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-virtual {p1, v1}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PushManager|"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/igexin/sdk/message/BindAliasCmdMessage;

    const/16 v1, 0x271a

    invoke-direct {v0, p2, p3, v1}, Lcom/igexin/sdk/message/BindAliasCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    invoke-direct {p0, p1, v0}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V

    return-void
.end method

.method private a(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/igexin/push/core/x;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method private b(Landroid/content/Context;)V
    .locals 2

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->i:Lcom/igexin/push/core/g;

    if-nez v0, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/sdk/PushManager;->a:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/sdk/d;

    invoke-direct {v1, p0, p1}, Lcom/igexin/sdk/d;-><init>(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;

    const/16 v1, 0x271b

    invoke-direct {v0, p2, p3, v1}, Lcom/igexin/sdk/message/UnBindAliasCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    invoke-direct {p0, p1, v0}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V

    return-void
.end method

.method private c(Landroid/content/Context;)V
    .locals 2

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->i:Lcom/igexin/push/core/g;

    if-eqz v0, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/igexin/sdk/PushManager;->a:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/igexin/sdk/e;

    invoke-direct {v1, p0, p1}, Lcom/igexin/sdk/e;-><init>(Lcom/igexin/sdk/PushManager;Landroid/content/Context;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/igexin/sdk/message/SetTagCmdMessage;

    const/16 v1, 0x2719

    invoke-direct {v0, p2, p3, v1}, Lcom/igexin/sdk/message/SetTagCmdMessage;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    invoke-direct {p0, p1, v0}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Lcom/igexin/sdk/message/GTCmdMessage;)V

    return-void
.end method

.method private d(Landroid/content/Context;)Landroid/app/Application;
    .locals 1

    if-eqz p1, :cond_2

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->e(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    instance-of v0, p1, Landroid/app/Application;

    if-eqz v0, :cond_1

    check-cast p1, Landroid/app/Application;

    return-object p1

    :cond_1
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    check-cast p1, Landroid/app/Application;

    return-object p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private e(Landroid/content/Context;)Z
    .locals 7

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->j:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    const-string v2, ""

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    const-string v4, "activity"

    invoke-virtual {v3, v4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/app/ActivityManager;

    if-nez v3, :cond_1

    return v0

    :cond_1
    const-string v4, "Z2V0UnVubmluZ0FwcFByb2Nlc3Nlcw=="

    const-class v5, Landroid/app/ActivityManager;

    new-instance v6, Ljava/lang/String;

    invoke-static {v4, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    invoke-direct {v6, v4}, Ljava/lang/String;-><init>([B)V

    new-array v4, v0, [Ljava/lang/Class;

    invoke-virtual {v5, v6, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v4

    new-array v5, v0, [Ljava/lang/Object;

    invoke-virtual {v4, v3, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    if-eqz v3, :cond_5

    invoke-interface {v3}, Ljava/util/List;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_2

    goto :goto_0

    :cond_2
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/app/ActivityManager$RunningAppProcessInfo;

    if-eqz v4, :cond_3

    iget v5, v4, Landroid/app/ActivityManager$RunningAppProcessInfo;->pid:I

    if-ne v5, v1, :cond_3

    iget-object v2, v4, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    :cond_4
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/sdk/PushManager;->j:Ljava/lang/Boolean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_5
    :goto_0
    return v0

    :catchall_0
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/sdk/PushManager;->j:Ljava/lang/Boolean;

    :goto_1
    iget-object p1, p0, Lcom/igexin/sdk/PushManager;->j:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    return p1
.end method

.method private static f(Landroid/content/Context;)V
    .locals 1

    if-eqz p0, :cond_0

    return-void

    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string v0, "NULL context"

    invoke-direct {p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static getInstance()Lcom/igexin/sdk/PushManager;
    .locals 1

    invoke-static {}, Lcom/igexin/sdk/f;->a()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    return-object v0
.end method

.method private registerPushActivity(Landroid/content/Context;Ljava/lang/Class;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/app/Activity;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "TT;>;)V"
        }
    .end annotation

    const/4 v0, 0x0

    const-string v1, "PushManager|registerPushActiviy|"

    if-eqz p2, :cond_1

    :try_start_0
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    invoke-static {p1, p2}, Lcom/igexin/push/util/a;->a(Landroid/content/Context;Ljava/lang/Class;)Z

    move-result v2

    if-nez v2, :cond_0

    return-void

    :cond_0
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    :goto_0
    iput-object p2, p0, Lcom/igexin/sdk/PushManager;->h:Ljava/lang/String;

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[PushManager]can\'t load activity = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_1
    const-string p2, "PushManager"

    const-string v2, "call -> registerPushActiviy, parameter [activity] is null"

    invoke-static {p2, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string p2, ""

    goto :goto_0

    :goto_1
    iget-object p2, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    if-eqz p2, :cond_2

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "ua"

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->h:Ljava/lang/String;

    invoke-virtual {p2, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    :goto_2
    return-void
.end method


# virtual methods
.method public bindAlias(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "bindAlias_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, p2, v0}, Lcom/igexin/sdk/PushManager;->bindAlias(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public bindAlias(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager]call bindAlias"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/sdk/PushManager;->d:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v0, "[PushManager]call - > bindAlias failed, it be called too frequently"

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const-string p2, "30001"

    invoke-direct {p0, p1, p3, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    iput-wide v0, p0, Lcom/igexin/sdk/PushManager;->d:J

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "bindAlias"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "alias"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "sn"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v2

    invoke-direct {p2, p3, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p3, "bundle"

    invoke-virtual {p2, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public checkManifest(Landroid/content/Context;)V
    .locals 0

    invoke-static {p1}, Lcom/igexin/push/util/a;->c(Landroid/content/Context;)V

    return-void
.end method

.method public getClientid(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->e:[B

    const/4 v1, 0x0

    if-nez v0, :cond_4

    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x80

    invoke-virtual {v0, v2, v3}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, ""

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v3, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v3, :cond_0

    iget-object v2, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v3, "PUSH_APPID"

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v4, "PUSH_APPSECRET"

    invoke-virtual {v3, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v4, "PUSH_APPKEY"

    invoke-virtual {v0, v4}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    move-object v3, v0

    :goto_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-static {p1}, Lcom/igexin/push/core/b/a;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-static {p1}, Lcom/igexin/push/core/b/a;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :cond_2
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-static {p1}, Lcom/igexin/push/core/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    :cond_3
    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/igexin/sdk/PushManager;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/sdk/PushManager;->e:[B
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PushManager|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    :goto_1
    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->e:[B

    if-eqz v0, :cond_6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "/"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "init.pid"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/igexin/push/util/c;->a(Ljava/lang/String;)[B

    move-result-object p1

    if-eqz p1, :cond_6

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->e:[B

    array-length v0, v0

    array-length v2, p1

    if-ne v0, v2, :cond_6

    array-length v0, p1

    new-array v2, v0, [B

    :goto_2
    if-ge v1, v0, :cond_5

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->e:[B

    aget-byte v3, v3, v1

    aget-byte v4, p1, v1

    xor-int/2addr v3, v4

    int-to-byte v3, v3

    aput-byte v3, v2, v1

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :cond_5
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v2}, Ljava/lang/String;-><init>([B)V

    return-object p1

    :cond_6
    const/4 p1, 0x0

    return-object p1
.end method

.method public getVersion(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    const-string p1, "4.6.4.0"

    return-object p1
.end method

.method public initialize(Landroid/content/Context;)V
    .locals 3

    :try_start_0
    invoke-static {p1}, Lcom/igexin/sdk/PushManager;->f(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-class v0, Lcom/igexin/sdk/GTIntentService;

    invoke-static {p1, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Class;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[PushManager] initialize intentService = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager] initialize intentService = NULL!"

    goto :goto_0

    :cond_1
    :goto_1
    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    if-nez v0, :cond_3

    const-class v0, Lcom/igexin/sdk/PushService;

    invoke-static {p1, v0}, Lcom/igexin/push/util/b;->a(Landroid/content/Context;Ljava/lang/Class;)Landroid/util/Pair;

    move-result-object v0

    iget-object v0, v0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Class;

    iput-object v0, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    if-nez v0, :cond_2

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager] initialize uService = NULL!"

    :goto_2
    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    goto :goto_3

    :cond_2
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[PushManager] initialize uService = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_3
    :goto_3
    iget-object v0, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    invoke-virtual {p0, p1, v0}, Lcom/igexin/sdk/PushManager;->initialize(Landroid/content/Context;Ljava/lang/Class;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PushManager|initialize|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[PushManager] initialize sdk error = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method public initialize(Landroid/content/Context;Ljava/lang/Class;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/app/Service;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "TT;>;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v1

    const-string v2, "[PushManager]Start initializing sdk"

    invoke-virtual {v1, v2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "PushManager"

    invoke-static {v2, p1, p2}, Lcom/igexin/push/util/a;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/Class;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string p1, "PushManager|init checkServiceSetCorrectly false"

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]initialize failed,please check your push service!!"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/igexin/push/util/a;->a(Landroid/content/Context;)V

    if-eqz p2, :cond_1

    sget-object v2, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    :cond_1
    const-class p2, Lcom/igexin/sdk/PushService;

    :cond_2
    new-instance v2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3, p2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v3, "action"

    sget-object v4, Lcom/igexin/sdk/PushConsts;->ACTION_SERVICE_INITIALIZE:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v3, "op_app"

    invoke-virtual {v2, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "us"

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    iget-object v1, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    if-eqz v1, :cond_3

    const-string v1, "uis"

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :cond_3
    iget-object v1, p0, Lcom/igexin/sdk/PushManager;->h:Ljava/lang/String;

    if-eqz v1, :cond_4

    const-string v1, "ua"

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->h:Ljava/lang/String;

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :cond_4
    invoke-direct {p0, p1, v2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v1

    if-eqz v1, :cond_5

    iput-object p2, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[PushManager]start pushService = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :cond_5
    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->b(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PushManager|initialize|"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PushManager]initialize sdk error = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public isPushTurnedOn(Landroid/content/Context;)Z
    .locals 1

    new-instance v0, Lcom/igexin/sdk/a/d;

    invoke-direct {v0, p1}, Lcom/igexin/sdk/a/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Lcom/igexin/sdk/a/d;->c()Z

    move-result p1

    return p1
.end method

.method public registerPushIntentService(Landroid/content/Context;Ljava/lang/Class;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Lcom/igexin/sdk/GTIntentService;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/Class<",
            "TT;>;)V"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager]call registerPushIntentService"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 v0, 0x0

    const-string v1, "PushManager|registerPushIntentService|"

    if-eqz p2, :cond_1

    :try_start_0
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2, p1, p2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-static {v2, p1}, Lcom/igexin/push/util/a;->a(Landroid/content/Intent;Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[PushManager]call - > registerPushIntentService, parameter [userIntentService] is set, but didn\'t find class \""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\", please check your AndroidManifest"

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    :goto_0
    iput-object p2, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    goto :goto_1

    :catch_0
    move-exception p1

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[PushManager]error, can\'t load IntentService = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_1
    const-string p2, "PushManager"

    const-string v2, "call -> registerPushIntentService, parameter [userIntentService] is null, use default Receiver"

    invoke-static {p2, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string p2, ""

    goto :goto_0

    :goto_1
    iget-object p2, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    if-eqz p2, :cond_2

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->f:Ljava/lang/Class;

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "uis"

    iget-object v3, p0, Lcom/igexin/sdk/PushManager;->g:Ljava/lang/String;

    invoke-virtual {p2, v2, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PushManager]registerPushIntentService failed = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :cond_2
    :goto_2
    return-void
.end method

.method public sendApplinkFeedback(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call - > sendApplinkFeedback failed, parameter is illegal"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "sendApplinkFeedback"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "url"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "bundle"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public sendFeedbackMessage(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)Z
    .locals 3

    const/4 v0, 0x0

    const v1, 0xea61

    if-lt p4, v1, :cond_0

    const v1, 0xee47

    if-le p4, v1, :cond_1

    :cond_0
    const v1, 0x15f91

    if-lt p4, v1, :cond_2

    const v1, 0x16377

    if-gt p4, v1, :cond_2

    :cond_1
    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    move v1, v0

    :goto_0
    if-eqz p2, :cond_4

    if-eqz p3, :cond_4

    if-nez v1, :cond_3

    goto :goto_1

    :cond_3
    invoke-direct {p0, p4, p3}, Lcom/igexin/sdk/PushManager;->a(ILjava/lang/String;)I

    move-result p4

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "sendFeedbackMessage"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "taskid"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "messageid"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    const-string p3, "actionid"

    invoke-virtual {v0, p3, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p4

    invoke-direct {p2, p3, p4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p3, "bundle"

    invoke-virtual {p2, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1

    :cond_4
    :goto_1
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call - > sendFeedbackMessage failed, parameter is illegal"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    return v0
.end method

.method public sendMessage(Landroid/content/Context;Ljava/lang/String;[B)Z
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    if-eqz p2, :cond_1

    if-eqz p3, :cond_1

    array-length v2, p3

    int-to-long v2, v2

    const-wide/16 v4, 0x1000

    cmp-long v2, v2, v4

    if-gtz v2, :cond_1

    iget-wide v2, p0, Lcom/igexin/sdk/PushManager;->c:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    goto :goto_0

    :cond_0
    iput-wide v0, p0, Lcom/igexin/sdk/PushManager;->c:J

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "sendMessage"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "taskid"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "extraData"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putByteArray(Ljava/lang/String;[B)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v2

    invoke-direct {p2, p3, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p3, "bundle"

    invoke-virtual {p2, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1

    :cond_1
    :goto_0
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call - > sendMessage failed, parameter is illegal or it be called too frequently"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public setDebugLogger(Landroid/content/Context;Lcom/igexin/sdk/IUserLoggerInterface;)V
    .locals 1

    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    :try_start_0
    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->e(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Landroid/content/Context;Lcom/igexin/sdk/IUserLoggerInterface;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "context or loggerInterface can not be null"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public setHeartbeatInterval(Landroid/content/Context;I)Z
    .locals 4

    if-gez p2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call -> setHeartbeatInterval failed, parameter [interval] < 0, illegal"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "setHeartbeatInterval"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "interval"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "bundle"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public setHwBadgeNum(Landroid/content/Context;I)Z
    .locals 4

    const-string v0, "action"

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v1

    const-string v2, "[PushManager]call - > setHwBadgeNum"

    invoke-virtual {v1, v2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    :try_start_0
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "setHwBadgeNum"

    invoke-virtual {v1, v0, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "badgeNum"

    invoke-virtual {v1, v2, p2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "bundle"

    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    const/4 p1, 0x0

    return p1
.end method

.method public setSilentTime(Landroid/content/Context;II)Z
    .locals 3

    if-ltz p2, :cond_1

    const/16 v0, 0x18

    if-ge p2, v0, :cond_1

    if-ltz p3, :cond_1

    const/16 v0, 0x17

    if-le p3, v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "setSilentTime"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "beginHour"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string p2, "duration"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v2

    invoke-direct {p2, p3, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p3, "bundle"

    invoke-virtual {p2, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1

    :cond_1
    :goto_0
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call - > setSilentTime failed, parameter [beginHour] or [duration] value exceeding"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public setSocketTimeout(Landroid/content/Context;I)Z
    .locals 4

    if-gez p2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p1

    const-string p2, "[PushManager]call - > setSocketTimeout failed, parameter [timeout] < 0, illegal"

    invoke-virtual {p1, p2}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "setSocketTimeout"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "timeout"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p2, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v2, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "bundle"

    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method

.method public setTag(Landroid/content/Context;[Lcom/igexin/sdk/Tag;Ljava/lang/String;)I
    .locals 11

    const/16 v0, 0x4e26

    const-string v1, "20006"

    const/4 v2, 0x0

    if-nez p2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v3, "[PushManager]call -> setTag failed, parameter [tags] is null"

    invoke-virtual {p2, v3}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-array p2, v2, [Ljava/lang/Object;

    const-string v2, "PushManager|tags is null"

    invoke-static {v2, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0, p1, p3, v1}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return v0

    :cond_0
    if-nez p3, :cond_1

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v0, "[PushManager]call -> setTag failed, parameter [sn] is null"

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-array p2, v2, [Ljava/lang/Object;

    const-string v0, "PushManager|sn is null"

    invoke-static {v0, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string p2, "20007"

    invoke-direct {p0, p1, p3, p2}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x4e27

    return p1

    :cond_1
    array-length v3, p2

    int-to-long v3, v3

    const-wide/16 v5, 0xc8

    cmp-long v3, v3, v5

    if-lez v3, :cond_2

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v0, "[PushManager]call -> setTag failed, parameter [tags] len > 200 is exceeds"

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-array p2, v2, [Ljava/lang/Object;

    const-string v0, "PushManager|tags len > 200 is exceeds"

    invoke-static {v0, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-string p2, "20001"

    invoke-direct {p0, p1, p3, p2}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x4e21

    return p1

    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/igexin/sdk/PushManager;->b:J

    sub-long v5, v3, v5

    const-wide/16 v7, 0x3e8

    cmp-long v5, v5, v7

    if-gez v5, :cond_3

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v0, "[PushManager]call - > setTag failed, it be called too frequently"

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const-string p2, "20002"

    invoke-direct {p0, p1, p3, p2}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x4e22

    return p1

    :cond_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    array-length v6, p2

    move v7, v2

    :goto_0
    if-ge v7, v6, :cond_7

    aget-object v8, p2, v7

    if-eqz v8, :cond_6

    invoke-virtual {v8}, Lcom/igexin/sdk/Tag;->getName()Ljava/lang/String;

    move-result-object v9

    if-eqz v9, :cond_6

    invoke-virtual {v8}, Lcom/igexin/sdk/Tag;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, " "

    invoke-virtual {v9, v10}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_5

    invoke-virtual {v8}, Lcom/igexin/sdk/Tag;->getName()Ljava/lang/String;

    move-result-object v9

    const-string v10, ","

    invoke-virtual {v9, v10}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_4

    goto :goto_1

    :cond_4
    invoke-virtual {v8}, Lcom/igexin/sdk/Tag;->getName()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_5
    :goto_1
    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[PushManager]call -> setTag failed, the tag ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Lcom/igexin/sdk/Tag;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " is not illegal"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const-string p2, "20011"

    invoke-direct {p0, p1, p3, p2}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/16 p1, 0x4e2b

    return p1

    :cond_6
    :goto_2
    add-int/lit8 v7, v7, 0x1

    goto :goto_0

    :cond_7
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    if-lez p2, :cond_8

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    add-int/lit8 p2, p2, -0x1

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->deleteCharAt(I)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string v0, "[PushManager]call setTag"

    invoke-virtual {p2, v0}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-instance p2, Landroid/os/Bundle;

    invoke-direct {p2}, Landroid/os/Bundle;-><init>()V

    const-string v0, "action"

    const-string v1, "setTag"

    invoke-virtual {p2, v0, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "tags"

    invoke-virtual {p2, v5, v1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "sn"

    invoke-virtual {p2, v1, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    iput-wide v3, p0, Lcom/igexin/sdk/PushManager;->b:J

    new-instance p3, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p3, v1, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p3, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "bundle"

    invoke-virtual {p3, v0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p3}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    return v2

    :cond_8
    invoke-direct {p0, p1, p3, v1}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public turnOffPush(Landroid/content/Context;)V
    .locals 5

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager]call turnOffPush"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "turnOffPush"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "bundle"

    invoke-virtual {v2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, v2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->c(Landroid/content/Context;)V

    return-void
.end method

.method public turnOnPush(Landroid/content/Context;)V
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager]call turnOnPush"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    new-instance v0, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v1, "action"

    const-string v2, "com.igexin.action.initialize.slave"

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "op_app"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "isSlave"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    invoke-direct {p0, p1, v0}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->b(Landroid/content/Context;)V

    return-void
.end method

.method public unBindAlias(Landroid/content/Context;Ljava/lang/String;Z)Z
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unBindAlias_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/igexin/sdk/PushManager;->unBindAlias(Landroid/content/Context;Ljava/lang/String;ZLjava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public unBindAlias(Landroid/content/Context;Ljava/lang/String;ZLjava/lang/String;)Z
    .locals 6

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object v0

    const-string v1, "[PushManager]call unBindAlias"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/sdk/PushManager;->d:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    cmp-long v2, v2, v4

    if-gez v2, :cond_0

    invoke-static {}, Lcom/igexin/b/a/c/a/c;->a()Lcom/igexin/b/a/c/a/c;

    move-result-object p2

    const-string p3, "[PushManager]call - > unBindAlias failed, it be called too frequently"

    invoke-virtual {p2, p3}, Lcom/igexin/b/a/c/a/c;->a(Ljava/lang/String;)V

    const-string p2, "30001"

    invoke-direct {p0, p1, p4, p2}, Lcom/igexin/sdk/PushManager;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    iput-wide v0, p0, Lcom/igexin/sdk/PushManager;->d:J

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "action"

    const-string v2, "unbindAlias"

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "alias"

    invoke-virtual {v0, v2, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "isSeft"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const-string p2, "sn"

    invoke-virtual {v0, p2, p4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p2, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-direct {p0, p1}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p4

    invoke-direct {p2, p3, p4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p3, "com.igexin.sdk.action.pushmanager"

    invoke-virtual {p2, v1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p3, "bundle"

    invoke-virtual {p2, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;

    invoke-direct {p0, p1, p2}, Lcom/igexin/sdk/PushManager;->a(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p1

    return p1
.end method
