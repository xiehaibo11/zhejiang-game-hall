.class public Lcom/cmic/gen/sdk/e/e;
.super Ljava/lang/Object;
.source "OverTimeUtils.java"


# static fields
.field private static a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/cmic/gen/sdk/auth/GenTokenListener;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/cmic/gen/sdk/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 15
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v0, Lcom/cmic/gen/sdk/e/e;->a:Ljava/util/concurrent/ConcurrentHashMap;

    .line 16
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/cmic/gen/sdk/e/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/cmic/gen/sdk/a;)V
    .locals 1

    if-eqz p0, :cond_0

    if-eqz p1, :cond_0

    .line 48
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/cmic/gen/sdk/auth/GenTokenListener;)V
    .locals 1

    .line 23
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 1

    .line 19
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p0

    xor-int/lit8 p0, p0, 0x1

    return p0
.end method

.method public static b(Ljava/lang/String;)V
    .locals 1

    .line 27
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static c(Ljava/lang/String;)Lcom/cmic/gen/sdk/auth/GenTokenListener;
    .locals 1

    .line 31
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/cmic/gen/sdk/auth/GenTokenListener;

    return-object p0
.end method

.method public static d(Ljava/lang/String;)Lcom/cmic/gen/sdk/a;
    .locals 1

    if-eqz p0, :cond_0

    .line 40
    sget-object v0, Lcom/cmic/gen/sdk/e/e;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/cmic/gen/sdk/a;

    return-object p0

    .line 42
    :cond_0
    new-instance p0, Lcom/cmic/gen/sdk/a;

    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/cmic/gen/sdk/a;-><init>(I)V

    return-object p0
.end method
