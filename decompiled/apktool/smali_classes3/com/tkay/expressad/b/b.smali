.class public final Lcom/tkay/expressad/b/b;
.super Lcom/tkay/core/common/res/image/b;


# instance fields
.field a:Ljava/lang/String;


# direct methods
.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Lcom/tkay/core/common/res/image/b;-><init>(Ljava/lang/String;)V

    .line 16
    iput-object p2, p0, Lcom/tkay/expressad/b/b;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final a(Lcom/tkay/core/common/l/b/b;)V
    .locals 2

    .line 49
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method protected final a(Ljava/io/InputStream;)Z
    .locals 5

    const/4 v0, 0x0

    .line 32
    :try_start_0
    new-instance v1, Ljava/io/FileOutputStream;

    iget-object v2, p0, Lcom/tkay/expressad/b/b;->a:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    const/16 v2, 0x800

    new-array v2, v2, [B

    .line 35
    :goto_0
    invoke-virtual {p1, v2}, Ljava/io/InputStream;->read([B)I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    .line 36
    invoke-virtual {v1, v2, v0, v3}, Ljava/io/FileOutputStream;->write([BII)V

    goto :goto_0

    .line 38
    :cond_0
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    return v0
.end method

.method protected final b()V
    .locals 0

    return-void
.end method

.method protected final c()V
    .locals 0

    return-void
.end method
