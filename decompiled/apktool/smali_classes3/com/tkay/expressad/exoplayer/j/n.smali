.class public final Lcom/tkay/expressad/exoplayer/j/n;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h;


# static fields
.field private static final a:Ljava/lang/String; = "DefaultDataSource"

.field private static final b:Ljava/lang/String; = "asset"

.field private static final c:Ljava/lang/String; = "content"

.field private static final d:Ljava/lang/String; = "rtmp"

.field private static final e:Ljava/lang/String; = "rawresource"


# instance fields
.field private final f:Landroid/content/Context;

.field private final g:Lcom/tkay/expressad/exoplayer/j/aa;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;"
        }
    .end annotation
.end field

.field private final h:Lcom/tkay/expressad/exoplayer/j/h;

.field private i:Lcom/tkay/expressad/exoplayer/j/h;

.field private j:Lcom/tkay/expressad/exoplayer/j/h;

.field private k:Lcom/tkay/expressad/exoplayer/j/h;

.field private l:Lcom/tkay/expressad/exoplayer/j/h;

.field private m:Lcom/tkay/expressad/exoplayer/j/h;

.field private n:Lcom/tkay/expressad/exoplayer/j/h;

.field private o:Lcom/tkay/expressad/exoplayer/j/h;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ")V"
        }
    .end annotation

    .line 118
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 119
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    .line 120
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    .line 121
    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/h;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/n;->h:Lcom/tkay/expressad/exoplayer/j/h;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Ljava/lang/String;Z)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;",
            "Ljava/lang/String;",
            "Z)V"
        }
    .end annotation

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move v4, p4

    .line 83
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/j/n;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Ljava/lang/String;ZB)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Ljava/lang/String;ZB)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/h;",
            ">;",
            "Ljava/lang/String;",
            "ZB)V"
        }
    .end annotation

    .line 103
    new-instance p5, Lcom/tkay/expressad/exoplayer/j/p;

    const/4 v2, 0x0

    const/16 v4, 0x1f40

    const/16 v5, 0x1f40

    const/4 v7, 0x0

    move-object v0, p5

    move-object v1, p3

    move-object v3, p2

    move v6, p4

    invoke-direct/range {v0 .. v7}, Lcom/tkay/expressad/exoplayer/j/p;-><init>(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/k/u;Lcom/tkay/expressad/exoplayer/j/aa;IIZLcom/tkay/expressad/exoplayer/j/s$f;)V

    invoke-direct {p0, p1, p2, p5}, Lcom/tkay/expressad/exoplayer/j/n;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;Lcom/tkay/expressad/exoplayer/j/h;)V

    return-void
.end method

.method private c()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 2

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 175
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/r;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/j/r;-><init>(Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    .line 177
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method

.method private d()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 3

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->j:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 182
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/c;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/c;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->j:Lcom/tkay/expressad/exoplayer/j/h;

    .line 184
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->j:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method

.method private e()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 3

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 189
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/e;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    .line 191
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method

.method private f()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 3

    .line 195
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->l:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    :try_start_0
    const-string v0, "com.tkay.expressad.exoplayer.ext.rtmp.RtmpDataSource"

    .line 198
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Class;

    .line 199
    invoke-virtual {v0, v2}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/j/h;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->l:Lcom/tkay/expressad/exoplayer/j/h;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 206
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Error instantiating RTMP extension"

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1

    :catch_1
    const-string v0, "DefaultDataSource"

    const-string v1, "Attempting to play RTMP stream without depending on the RTMP extension"

    .line 203
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 208
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->l:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->h:Lcom/tkay/expressad/exoplayer/j/h;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->l:Lcom/tkay/expressad/exoplayer/j/h;

    .line 212
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->l:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method

.method private g()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 1

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 217
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/f;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/j/f;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    .line 219
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method

.method private h()Lcom/tkay/expressad/exoplayer/j/h;
    .locals 3

    .line 223
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    .line 224
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/y;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/y;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    .line 226
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    return-object v0
.end method


# virtual methods
.method public final a([BII)I
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/j/h;->a([BII)I

    move-result p1

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;)J
    .locals 3

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 128
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    .line 129
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Landroid/net/Uri;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 130
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    const-string v1, "/android_asset/"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 131
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/n;->d()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto/16 :goto_1

    .line 1174
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_2

    .line 1175
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/r;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/j/r;-><init>(Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    .line 1177
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->i:Lcom/tkay/expressad/exoplayer/j/h;

    .line 133
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto/16 :goto_1

    :cond_3
    const-string v1, "asset"

    .line 135
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 136
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/n;->d()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto :goto_1

    :cond_4
    const-string v1, "content"

    .line 137
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 1188
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_5

    .line 1189
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/e;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    .line 1191
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->k:Lcom/tkay/expressad/exoplayer/j/h;

    .line 138
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto :goto_1

    :cond_6
    const-string v1, "rtmp"

    .line 139
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 140
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/n;->f()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto :goto_1

    :cond_7
    const-string v1, "data"

    .line 141
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 1216
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_8

    .line 1217
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/f;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/j/f;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    .line 1219
    :cond_8
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->m:Lcom/tkay/expressad/exoplayer/j/h;

    .line 142
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto :goto_1

    :cond_9
    const-string v1, "rawresource"

    .line 143
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 1223
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_a

    .line 1224
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/y;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->f:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/n;->g:Lcom/tkay/expressad/exoplayer/j/aa;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/j/y;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    .line 1226
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->n:Lcom/tkay/expressad/exoplayer/j/h;

    .line 144
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    goto :goto_1

    .line 146
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->h:Lcom/tkay/expressad/exoplayer/j/h;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    .line 149
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/j/h;->a(Lcom/tkay/expressad/exoplayer/j/k;)J

    move-result-wide v0

    return-wide v0
.end method

.method public final a()Landroid/net/Uri;
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/h;->a()Landroid/net/Uri;

    move-result-object v0

    return-object v0
.end method

.method public final b()V
    .locals 2

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 166
    :try_start_0
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/h;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 168
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    return-void

    :catchall_0
    move-exception v0

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/n;->o:Lcom/tkay/expressad/exoplayer/j/h;

    .line 169
    throw v0

    :cond_0
    return-void
.end method
