.class public Lcom/tkay/basead/a/f;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/basead/a/f;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    const-class v0, Lcom/tkay/basead/a/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/a/f;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/basead/a/f;
    .locals 2

    .line 36
    sget-object v0, Lcom/tkay/basead/a/f;->b:Lcom/tkay/basead/a/f;

    if-nez v0, :cond_1

    .line 37
    const-class v0, Lcom/tkay/basead/a/f;

    monitor-enter v0

    .line 38
    :try_start_0
    sget-object v1, Lcom/tkay/basead/a/f;->b:Lcom/tkay/basead/a/f;

    if-nez v1, :cond_0

    .line 39
    new-instance v1, Lcom/tkay/basead/a/f;

    invoke-direct {v1}, Lcom/tkay/basead/a/f;-><init>()V

    sput-object v1, Lcom/tkay/basead/a/f;->b:Lcom/tkay/basead/a/f;

    .line 40
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 42
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/basead/a/f;->b:Lcom/tkay/basead/a/f;

    return-object v0
.end method

.method public static a(ILjava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 3116
    invoke-static {p1}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 114
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    .line 115
    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/res/d;->b(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V
    .locals 1

    const/4 v0, 0x0

    .line 82
    invoke-static {p0, v0, p1, p2, p3}, Lcom/tkay/basead/a/f;->a(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/util/List;Lcom/tkay/core/common/f/t;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/r;",
            ">;",
            "Lcom/tkay/core/common/f/t;",
            ")V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 69
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    .line 71
    new-instance v2, Lcom/tkay/core/common/f/i;

    invoke-direct {v2}, Lcom/tkay/core/common/f/i;-><init>()V

    .line 72
    iput-object p2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 73
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/h;

    const/4 v4, 0x0

    const/4 v5, 0x1

    invoke-static {p0, v5, v3, v2, v4}, Lcom/tkay/basead/a/f;->a(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V
    .locals 1

    .line 89
    new-instance v0, Lcom/tkay/basead/a/b/b;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/tkay/basead/a/b/b;-><init>(Ljava/lang/String;ZLcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V

    .line 90
    invoke-virtual {v0, p4}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/a/b/b$b;)V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/r;ILcom/tkay/core/common/f/j;)Z
    .locals 0

    .line 109
    invoke-static {p0, p1, p2}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/h;ILcom/tkay/core/common/f/j;)Z

    move-result p0

    return p0
.end method

.method public static a(Lcom/tkay/core/common/f/r;Lcom/tkay/core/common/f/i;)Z
    .locals 0

    .line 97
    invoke-static {p0, p1}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)Z

    move-result p0

    return p0
.end method

.method public static a(Ljava/lang/String;Ljava/io/InputStream;)Z
    .locals 2

    if-eqz p0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 1116
    :cond_0
    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 52
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p0, p1}, Lcom/tkay/core/common/res/d;->a(ILjava/lang/String;Ljava/io/InputStream;)Z

    move-result p0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(ILjava/lang/String;)Ljava/io/FileInputStream;
    .locals 1

    .line 2116
    invoke-static {p1}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 57
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    .line 58
    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/res/d;->a(ILjava/lang/String;)Ljava/io/FileInputStream;

    move-result-object p0

    return-object p0
.end method
