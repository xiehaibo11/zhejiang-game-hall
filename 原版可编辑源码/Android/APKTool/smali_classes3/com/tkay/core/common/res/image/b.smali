.class public abstract Lcom/tkay/core/common/res/image/b;
.super Ljava/lang/Object;


# instance fields
.field private final a:Ljava/lang/String;

.field protected c:Ljava/lang/String;

.field protected d:Z

.field protected e:J

.field protected f:J

.field protected g:J

.field protected h:J

.field protected i:J


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/res/image/b;->a:Ljava/lang/String;

    .line 37
    iput-object p1, p0, Lcom/tkay/core/common/res/image/b;->c:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/res/image/b;)Ljava/lang/String;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/core/common/res/image/b;->a:Ljava/lang/String;

    return-object p0
.end method

.method private e()V
    .locals 1

    const/4 v0, 0x1

    .line 47
    iput-boolean v0, p0, Lcom/tkay/core/common/res/image/b;->d:Z

    return-void
.end method

.method private f()V
    .locals 1

    .line 65
    new-instance v0, Lcom/tkay/core/common/res/image/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/res/image/b$1;-><init>(Lcom/tkay/core/common/res/image/b;)V

    .line 200
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/res/image/b;->a(Lcom/tkay/core/common/l/b/b;)V

    return-void
.end method

.method private static g()I
    .locals 1

    const v0, 0xea60

    return v0
.end method

.method private static h()I
    .locals 1

    const/16 v0, 0x4e20

    return v0
.end method


# virtual methods
.method protected abstract a()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method protected abstract a(Lcom/tkay/core/common/l/b/b;)V
.end method

.method protected abstract a(Ljava/lang/String;Ljava/lang/String;)V
.end method

.method protected abstract a(Ljava/io/InputStream;)Z
.end method

.method protected abstract b()V
.end method

.method protected abstract c()V
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x0

    .line 41
    iput-boolean v0, p0, Lcom/tkay/core/common/res/image/b;->d:Z

    .line 1065
    new-instance v0, Lcom/tkay/core/common/res/image/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/res/image/b$1;-><init>(Lcom/tkay/core/common/res/image/b;)V

    .line 1200
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/res/image/b;->a(Lcom/tkay/core/common/l/b/b;)V

    return-void
.end method
