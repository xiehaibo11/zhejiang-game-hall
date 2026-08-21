.class public final Lcom/tkay/expressad/exoplayer/h/ad;
.super Lcom/tkay/expressad/exoplayer/h/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/ad$b;,
        Lcom/tkay/expressad/exoplayer/h/ad$c;,
        Lcom/tkay/expressad/exoplayer/h/ad$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x3


# instance fields
.field private final b:Lcom/tkay/expressad/exoplayer/j/k;

.field private final c:Lcom/tkay/expressad/exoplayer/j/h$a;

.field private final d:Lcom/tkay/expressad/exoplayer/m;

.field private final e:J

.field private final f:I

.field private final g:Z

.field private final h:Lcom/tkay/expressad/exoplayer/ae;


# direct methods
.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;J)V
    .locals 7
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-wide v4, p4

    .line 185
    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/ad;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JB)V

    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JB)V
    .locals 9
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const/4 v6, 0x3

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-wide v4, p4

    .line 204
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/h/ad;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JIZLjava/lang/Object;)V

    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JILandroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/ad$a;IZ)V
    .locals 11
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    move-object/from16 v0, p7

    move-object/from16 v1, p8

    const/4 v10, 0x0

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-wide v6, p4

    move/from16 v8, p6

    move/from16 v9, p10

    .line 240
    invoke-direct/range {v2 .. v10}, Lcom/tkay/expressad/exoplayer/h/ad;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JIZLjava/lang/Object;)V

    if-eqz v0, :cond_0

    if-eqz v1, :cond_0

    .line 249
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/ad$b;

    move/from16 v3, p9

    invoke-direct {v2, v1, v3}, Lcom/tkay/expressad/exoplayer/h/ad$b;-><init>(Lcom/tkay/expressad/exoplayer/h/ad$a;I)V

    move-object v1, p0

    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/exoplayer/h/ad;->a(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/t;)V

    goto :goto_0

    :cond_0
    move-object v1, p0

    :goto_0
    return-void
.end method

.method private constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JIZLjava/lang/Object;)V
    .locals 6

    .line 260
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/c;-><init>()V

    .line 261
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ad;->c:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 262
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/ad;->d:Lcom/tkay/expressad/exoplayer/m;

    .line 263
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/h/ad;->e:J

    .line 264
    iput p6, p0, Lcom/tkay/expressad/exoplayer/h/ad;->f:I

    .line 265
    iput-boolean p7, p0, Lcom/tkay/expressad/exoplayer/h/ad;->g:Z

    .line 266
    new-instance p2, Lcom/tkay/expressad/exoplayer/j/k;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/j/k;-><init>(Landroid/net/Uri;)V

    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ad;->b:Lcom/tkay/expressad/exoplayer/j/k;

    .line 267
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/ab;

    const/4 v3, 0x1

    const/4 v4, 0x0

    move-object v0, p1

    move-wide v1, p4

    move-object v5, p8

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/ab;-><init>(JZZLjava/lang/Object;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ad;->h:Lcom/tkay/expressad/exoplayer/ae;

    return-void
.end method

.method synthetic constructor <init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JIZLjava/lang/Object;B)V
    .locals 0

    .line 36
    invoke-direct/range {p0 .. p8}, Lcom/tkay/expressad/exoplayer/h/ad;-><init>(Landroid/net/Uri;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JIZLjava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 9

    .line 285
    iget p2, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->a:I

    if-nez p2, :cond_0

    const/4 p2, 0x1

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 286
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/ac;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ad;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/ad;->c:Lcom/tkay/expressad/exoplayer/j/h$a;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/ad;->d:Lcom/tkay/expressad/exoplayer/m;

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/h/ad;->e:J

    iget v6, p0, Lcom/tkay/expressad/exoplayer/h/ad;->f:I

    .line 292
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/ad;->a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object v7

    iget-boolean v8, p0, Lcom/tkay/expressad/exoplayer/h/ad;->g:Z

    move-object v0, p2

    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/h/ac;-><init>(Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JILcom/tkay/expressad/exoplayer/h/t$a;Z)V

    return-object p2
.end method

.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 0

    .line 298
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/ac;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/ac;->f()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 0

    .line 275
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ad;->h:Lcom/tkay/expressad/exoplayer/ae;

    const/4 p2, 0x0

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/ad;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method
