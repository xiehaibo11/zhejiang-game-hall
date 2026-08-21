.class public Lcom/tkay/core/common/s;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x23

.field public static final b:Ljava/lang/String; = "isDefaultOffer"

.field private static volatile g:Lcom/tkay/core/common/s;


# instance fields
.field c:Ljava/lang/reflect/Method;

.field d:Ljava/lang/reflect/Method;

.field e:Ljava/lang/reflect/Method;

.field f:Ljava/lang/reflect/Method;


# direct methods
.method private constructor <init>()V
    .locals 7

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    const-string v0, "com.tkay.network.myoffer.MyOfferAPI"

    .line 33
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "preloadTYOffer"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    .line 34
    const-class v4, Landroid/content/Context;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Lcom/tkay/core/common/f/s;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/s;->c:Ljava/lang/reflect/Method;

    const-string v1, "getOutOfCapOfferIds"

    new-array v3, v6, [Ljava/lang/Class;

    .line 35
    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/s;->d:Ljava/lang/reflect/Method;

    const-string v1, "getDefaultOfferId"

    new-array v3, v2, [Ljava/lang/Class;

    .line 37
    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/s;->e:Ljava/lang/reflect/Method;

    const-string v1, "checkOffersOutOfCap"

    new-array v2, v2, [Ljava/lang/Class;

    .line 38
    const-class v3, Landroid/content/Context;

    aput-object v3, v2, v5

    const-class v3, Ljava/lang/String;

    aput-object v3, v2, v6

    invoke-virtual {v0, v1, v2}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/s;->f:Ljava/lang/reflect/Method;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 40
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public static a()Lcom/tkay/core/common/s;
    .locals 2

    .line 46
    sget-object v0, Lcom/tkay/core/common/s;->g:Lcom/tkay/core/common/s;

    if-nez v0, :cond_1

    .line 47
    const-class v0, Lcom/tkay/core/common/s;

    monitor-enter v0

    .line 48
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/s;->g:Lcom/tkay/core/common/s;

    if-nez v1, :cond_0

    .line 49
    new-instance v1, Lcom/tkay/core/common/s;

    invoke-direct {v1}, Lcom/tkay/core/common/s;-><init>()V

    sput-object v1, Lcom/tkay/core/common/s;->g:Lcom/tkay/core/common/s;

    .line 50
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 52
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/s;->g:Lcom/tkay/core/common/s;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/content/Context;)Lorg/json/JSONArray;
    .locals 4

    .line 80
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/s;->d:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/core/common/s;->d:Ljava/lang/reflect/Method;

    const/4 v1, 0x0

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 82
    new-instance v0, Lorg/json/JSONArray;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p1

    .line 86
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 88
    :cond_0
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1}, Lorg/json/JSONArray;-><init>()V

    return-object p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4

    .line 62
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/s;->c:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_0

    .line 63
    new-instance v0, Lcom/tkay/core/common/f/s;

    invoke-direct {v0}, Lcom/tkay/core/common/f/s;-><init>()V

    .line 64
    iput-object p2, v0, Lcom/tkay/core/common/f/s;->a:Ljava/lang/String;

    .line 65
    iget-object p2, p0, Lcom/tkay/core/common/s;->c:Ljava/lang/reflect/Method;

    const/4 v1, 0x0

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object v0, v2, p1

    invoke-virtual {p2, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 68
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 114
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/s;->e:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_0

    .line 115
    iget-object v0, p0, Lcom/tkay/core/common/s;->e:Ljava/lang/reflect/Method;

    const/4 v1, 0x0

    const/4 v2, 0x2

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 p1, 0x1

    aput-object p2, v2, p1

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 116
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 119
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method public final c(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    .line 134
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/s;->f:Ljava/lang/reflect/Method;

    if-eqz v1, :cond_0

    .line 135
    iget-object v1, p0, Lcom/tkay/core/common/s;->f:Ljava/lang/reflect/Method;

    const/4 v2, 0x0

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v0

    const/4 p1, 0x1

    aput-object p2, v3, p1

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    .line 136
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 139
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return v0
.end method
