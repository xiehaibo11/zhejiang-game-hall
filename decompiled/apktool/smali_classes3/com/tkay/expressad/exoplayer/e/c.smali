.class public final Lcom/tkay/expressad/exoplayer/e/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/e/h;


# static fields
.field private static final a:Ljava/lang/reflect/Constructor;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/reflect/Constructor<",
            "+",
            "Lcom/tkay/expressad/exoplayer/e/e;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private b:I

.field private c:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    :try_start_0
    const-string v0, "com.tkay.expressad.exoplayer.ext.flac.FlacExtractor"

    .line 53
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-class v1, Lcom/tkay/expressad/exoplayer/e/e;

    .line 54
    invoke-virtual {v0, v1}, Ljava/lang/Class;->asSubclass(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Class;

    .line 55
    invoke-virtual {v0, v1}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 61
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating FLAC extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_1
    const/4 v0, 0x0

    .line 63
    :goto_0
    sput-object v0, Lcom/tkay/expressad/exoplayer/e/c;->a:Ljava/lang/reflect/Constructor;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 73
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private declared-synchronized a(I)Lcom/tkay/expressad/exoplayer/e/c;
    .locals 0

    monitor-enter p0

    .line 98
    :try_start_0
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/c;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 99
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized b(I)Lcom/tkay/expressad/exoplayer/e/c;
    .locals 0

    monitor-enter p0

    .line 111
    :try_start_0
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/c;->c:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 112
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a()[Lcom/tkay/expressad/exoplayer/e/e;
    .locals 6

    monitor-enter p0

    .line 155
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/exoplayer/e/c;->a:Ljava/lang/reflect/Constructor;

    const/4 v1, 0x2

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    :goto_0
    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/e/e;

    .line 157
    new-instance v2, Lcom/tkay/expressad/exoplayer/e/a/e;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/e/c;->c:I

    invoke-direct {v2, v3}, Lcom/tkay/expressad/exoplayer/e/a/e;-><init>(I)V

    const/4 v3, 0x0

    aput-object v2, v0, v3

    const/4 v2, 0x1

    .line 158
    new-instance v4, Lcom/tkay/expressad/exoplayer/e/a/g;

    iget v5, p0, Lcom/tkay/expressad/exoplayer/e/c;->b:I

    invoke-direct {v4, v5}, Lcom/tkay/expressad/exoplayer/e/a/g;-><init>(I)V

    aput-object v4, v0, v2

    .line 168
    sget-object v2, Lcom/tkay/expressad/exoplayer/e/c;->a:Ljava/lang/reflect/Constructor;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_1

    .line 170
    :try_start_1
    sget-object v2, Lcom/tkay/expressad/exoplayer/e/c;->a:Ljava/lang/reflect/Constructor;

    new-array v3, v3, [Ljava/lang/Object;

    invoke-virtual {v2, v3}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/e/e;

    aput-object v2, v0, v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 173
    :try_start_2
    new-instance v1, Ljava/lang/IllegalStateException;

    const-string v2, "Unexpected error creating FLAC extractor"

    invoke-direct {v1, v2, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 176
    :cond_1
    :goto_1
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
