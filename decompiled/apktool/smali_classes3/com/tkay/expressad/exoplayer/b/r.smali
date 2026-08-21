.class public abstract Lcom/tkay/expressad/exoplayer/b/r;
.super Lcom/tkay/expressad/exoplayer/a;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/k/n;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/b/r$a;,
        Lcom/tkay/expressad/exoplayer/b/r$b;
    }
.end annotation


# static fields
.field private static final n:I = 0x0

.field private static final o:I = 0x1

.field private static final p:I = 0x2


# instance fields
.field private A:Lcom/tkay/expressad/exoplayer/c/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/c/g<",
            "Lcom/tkay/expressad/exoplayer/c/e;",
            "+",
            "Lcom/tkay/expressad/exoplayer/c/h;",
            "+",
            "Lcom/tkay/expressad/exoplayer/b/e;",
            ">;"
        }
    .end annotation
.end field

.field private B:Lcom/tkay/expressad/exoplayer/c/e;

.field private C:Lcom/tkay/expressad/exoplayer/c/h;

.field private D:Lcom/tkay/expressad/exoplayer/d/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/f<",
            "Lcom/tkay/expressad/exoplayer/d/i;",
            ">;"
        }
    .end annotation
.end field

.field private E:Lcom/tkay/expressad/exoplayer/d/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/f<",
            "Lcom/tkay/expressad/exoplayer/d/i;",
            ">;"
        }
    .end annotation
.end field

.field private F:I

.field private G:Z

.field private H:Z

.field private I:J

.field private J:Z

.field private K:Z

.field private L:Z

.field private M:Z

.field private N:Z

.field private final q:Lcom/tkay/expressad/exoplayer/d/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/i;",
            ">;"
        }
    .end annotation
.end field

.field private final r:Z

.field private final s:Lcom/tkay/expressad/exoplayer/b/g$a;

.field private final t:Lcom/tkay/expressad/exoplayer/b/h;

.field private final u:Lcom/tkay/expressad/exoplayer/n;

.field private final v:Lcom/tkay/expressad/exoplayer/c/e;

.field private w:Lcom/tkay/expressad/exoplayer/c/d;

.field private x:Lcom/tkay/expressad/exoplayer/m;

.field private y:I

.field private z:I


# direct methods
.method public constructor <init>()V
    .locals 2

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/expressad/exoplayer/b/f;

    const/4 v1, 0x0

    .line 118
    invoke-direct {p0, v1, v1, v0}, Lcom/tkay/expressad/exoplayer/b/r;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;[Lcom/tkay/expressad/exoplayer/b/f;)V

    return-void
.end method

.method private constructor <init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;)V
    .locals 7

    const/4 v0, 0x0

    new-array v6, v0, [Lcom/tkay/expressad/exoplayer/b/f;

    const/4 v5, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    .line 147
    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/exoplayer/b/r;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;Lcom/tkay/expressad/exoplayer/d/g;[Lcom/tkay/expressad/exoplayer/b/f;)V

    return-void
.end method

.method private varargs constructor <init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;Lcom/tkay/expressad/exoplayer/d/g;[Lcom/tkay/expressad/exoplayer/b/f;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "Lcom/tkay/expressad/exoplayer/b/c;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/i;",
            ">;[",
            "Lcom/tkay/expressad/exoplayer/b/f;",
            ")V"
        }
    .end annotation

    .line 173
    new-instance v0, Lcom/tkay/expressad/exoplayer/b/l;

    invoke-direct {v0, p3, p5}, Lcom/tkay/expressad/exoplayer/b/l;-><init>(Lcom/tkay/expressad/exoplayer/b/c;[Lcom/tkay/expressad/exoplayer/b/f;)V

    invoke-direct {p0, p1, p2, p4, v0}, Lcom/tkay/expressad/exoplayer/b/r;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/b/h;)V

    return-void
.end method

.method private constructor <init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/d/g;Lcom/tkay/expressad/exoplayer/b/h;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/os/Handler;",
            "Lcom/tkay/expressad/exoplayer/b/g;",
            "Lcom/tkay/expressad/exoplayer/d/g<",
            "Lcom/tkay/expressad/exoplayer/d/i;",
            ">;",
            "Lcom/tkay/expressad/exoplayer/b/h;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x1

    .line 193
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/a;-><init>(I)V

    .line 194
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    const/4 p3, 0x0

    .line 195
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/b/r;->r:Z

    .line 196
    new-instance v1, Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-direct {v1, p1, p2}, Lcom/tkay/expressad/exoplayer/b/g$a;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;)V

    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    .line 197
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    .line 198
    new-instance p1, Lcom/tkay/expressad/exoplayer/b/r$a;

    invoke-direct {p1, p0, p3}, Lcom/tkay/expressad/exoplayer/b/r$a;-><init>(Lcom/tkay/expressad/exoplayer/b/r;B)V

    invoke-interface {p4, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/b/h$c;)V

    .line 199
    new-instance p1, Lcom/tkay/expressad/exoplayer/n;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/n;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    .line 200
    invoke-static {}, Lcom/tkay/expressad/exoplayer/c/e;->e()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->v:Lcom/tkay/expressad/exoplayer/c/e;

    .line 201
    iput p3, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    .line 202
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    return-void
.end method

.method private varargs constructor <init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;[Lcom/tkay/expressad/exoplayer/b/f;)V
    .locals 6

    const/4 v3, 0x0

    const/4 v4, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v5, p3

    .line 129
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/b/r;-><init>(Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/b/g;Lcom/tkay/expressad/exoplayer/b/c;Lcom/tkay/expressad/exoplayer/d/g;[Lcom/tkay/expressad/exoplayer/b/f;)V

    return-void
.end method

.method private static A()V
    .locals 0

    return-void
.end method

.method private B()Lcom/tkay/expressad/exoplayer/m;
    .locals 11

    .line 337
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v5, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 v1, 0x0

    const-string v2, "audio/raw"

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v7, 0x2

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-static/range {v1 .. v10}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    return-object v0
.end method

.method private C()Z
    .locals 14

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    const/4 v1, 0x0

    if-nez v0, :cond_1

    .line 346
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/g;->g()Lcom/tkay/expressad/exoplayer/c/f;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/c/h;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    if-nez v0, :cond_0

    return v1

    .line 350
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v2, v0, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget v3, v3, Lcom/tkay/expressad/exoplayer/c/h;->b:I

    add-int/2addr v2, v3

    iput v2, v0, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    .line 353
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->c()Z

    move-result v0

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v0, :cond_3

    .line 354
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    const/4 v4, 0x2

    if-ne v0, v4, :cond_2

    .line 356
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 357
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    .line 359
    iput-boolean v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    goto :goto_0

    .line 361
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 362
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    .line 363
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->E()V

    :goto_0
    return v1

    .line 368
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    if-eqz v0, :cond_4

    const/4 v4, 0x0

    const/4 v6, 0x0

    const/4 v7, -0x1

    .line 3337
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v8, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 v10, 0x2

    const/4 v11, 0x0

    const/4 v12, 0x0

    const/4 v13, 0x0

    const-string v5, "audio/raw"

    invoke-static/range {v4 .. v13}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    .line 370
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget v5, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    iget v6, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget v7, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 v8, 0x0

    iget v9, p0, Lcom/tkay/expressad/exoplayer/b/r;->y:I

    iget v10, p0, Lcom/tkay/expressad/exoplayer/b/r;->z:I

    invoke-interface/range {v4 .. v10}, Lcom/tkay/expressad/exoplayer/b/h;->a(III[III)V

    .line 372
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    .line 375
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget-wide v5, v5, Lcom/tkay/expressad/exoplayer/c/h;->a:J

    invoke-interface {v0, v4, v5, v6}, Lcom/tkay/expressad/exoplayer/b/h;->a(Ljava/nio/ByteBuffer;J)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 376
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    add-int/2addr v1, v3

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    .line 377
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 378
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    return v3

    :cond_5
    return v1
.end method

.method private D()Z
    .locals 8

    .line 386
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    const/4 v1, 0x0

    if-eqz v0, :cond_d

    iget v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    const/4 v3, 0x2

    if-eq v2, v3, :cond_d

    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    if-eqz v2, :cond_0

    goto/16 :goto_3

    .line 392
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    if-nez v2, :cond_1

    .line 393
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/g;->f()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    if-nez v0, :cond_1

    return v1

    .line 399
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    const/4 v2, 0x4

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-ne v0, v5, :cond_2

    .line 400
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/c/e;->a(I)V

    .line 401
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 402
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 403
    iput v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    return v1

    .line 408
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    if-eqz v0, :cond_3

    const/4 v0, -0x4

    goto :goto_0

    .line 412
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0, v0, v3, v1}, Lcom/tkay/expressad/exoplayer/b/r;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result v0

    :goto_0
    const/4 v3, -0x3

    if-ne v0, v3, :cond_4

    return v1

    :cond_4
    const/4 v3, -0x5

    if-ne v0, v3, :cond_5

    .line 419
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/b/r;->b(Lcom/tkay/expressad/exoplayer/m;)V

    return v5

    .line 422
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 423
    iput-boolean v5, p0, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    .line 424
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 425
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    return v1

    .line 428
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->g()Z

    move-result v0

    .line 3443
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v3, :cond_9

    if-nez v0, :cond_7

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->r:Z

    if-eqz v0, :cond_7

    goto :goto_1

    .line 3446
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result v0

    if-eq v0, v5, :cond_8

    if-eq v0, v2, :cond_9

    move v0, v5

    goto :goto_2

    .line 3448
    :cond_8
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_9
    :goto_1
    move v0, v1

    .line 429
    :goto_2
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    if-eqz v0, :cond_a

    return v1

    .line 433
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->h()V

    .line 434
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 3675
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    if-eqz v2, :cond_c

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v2

    if-nez v2, :cond_c

    .line 3679
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v6, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    sub-long/2addr v2, v6

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(J)J

    move-result-wide v2

    const-wide/32 v6, 0x7a120

    cmp-long v2, v2, v6

    if-lez v2, :cond_b

    .line 3680
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    .line 3682
    :cond_b
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    .line 435
    :cond_c
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 436
    iput-boolean v5, p0, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    .line 437
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I

    add-int/2addr v1, v5

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I

    .line 438
    iput-object v4, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    return v5

    :cond_d
    :goto_3
    return v1
.end method

.method private E()V
    .locals 2

    const/4 v0, 0x1

    .line 454
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->M:Z

    .line 456
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->c()V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/h$d; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 458
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0
.end method

.method private F()V
    .locals 3

    const/4 v0, 0x0

    .line 463
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    .line 464
    iget v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    if-eqz v1, :cond_0

    .line 465
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 466
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 468
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 469
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    if-eqz v2, :cond_1

    .line 470
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 471
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    .line 473
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/c/g;->d()V

    .line 474
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    return-void
.end method

.method private G()V
    .locals 9

    .line 588
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    if-eqz v0, :cond_0

    return-void

    .line 592
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v0, :cond_1

    .line 595
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->g()Lcom/tkay/expressad/exoplayer/d/i;

    move-result-object v0

    if-nez v0, :cond_1

    .line 597
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 609
    :cond_1
    :try_start_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const-string v2, "createAudioDecoder"

    .line 610
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 611
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->x()Lcom/tkay/expressad/exoplayer/c/g;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    .line 612
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V

    .line 613
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    .line 614
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/c/g;->a()Ljava/lang/String;

    move-result-object v4

    sub-long v7, v5, v0

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Ljava/lang/String;JJ)V

    .line 616
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->a:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->a:I
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/e; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 618
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0
.end method

.method private H()V
    .locals 2

    .line 623
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 627
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 628
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    .line 629
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/g;->e()V

    .line 630
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    .line 631
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->b:I

    add-int/lit8 v1, v1, 0x1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/c/d;->b:I

    const/4 v0, 0x0

    .line 632
    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    .line 633
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    return-void
.end method

.method private I()V
    .locals 4

    .line 687
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->v()Z

    move-result v1

    invoke-interface {v0, v1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Z)J

    move-result-wide v0

    const-wide/high16 v2, -0x8000000000000000L

    cmp-long v2, v0, v2

    if-eqz v2, :cond_1

    .line 690
    iget-boolean v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->K:Z

    if-eqz v2, :cond_0

    goto :goto_0

    .line 692
    :cond_0
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    :goto_0
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    const/4 v0, 0x0

    .line 693
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->K:Z

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/b/r;)Lcom/tkay/expressad/exoplayer/b/g$a;
    .locals 0

    .line 65
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 4

    .line 675
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v0

    if-nez v0, :cond_1

    .line 679
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    sub-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    const-wide/32 v2, 0x7a120

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    .line 680
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    :cond_0
    const/4 p1, 0x0

    .line 682
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    :cond_1
    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/m;)V
    .locals 4

    .line 637
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    .line 638
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    .line 640
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    const/4 v2, 0x0

    if-nez v0, :cond_0

    move-object v0, v2

    goto :goto_0

    .line 641
    :cond_0
    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    .line 640
    :goto_0
    invoke-static {v1, v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    if-eqz v0, :cond_3

    .line 643
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    if-eqz v0, :cond_2

    .line 644
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    if-eqz v0, :cond_1

    .line 648
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget-object v3, v3, Lcom/tkay/expressad/exoplayer/m;->k:Lcom/tkay/expressad/exoplayer/d/e;

    invoke-interface {v0, v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Landroid/os/Looper;Lcom/tkay/expressad/exoplayer/d/e;)Lcom/tkay/expressad/exoplayer/d/f;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 650
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-ne v0, v2, :cond_3

    .line 651
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    invoke-interface {v2, v0}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V

    goto :goto_1

    .line 645
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "Media requires a DrmSessionManager"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    .line 646
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v0

    .line 645
    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1

    .line 654
    :cond_2
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 658
    :cond_3
    :goto_1
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    if-eqz v0, :cond_4

    .line 660
    iput v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    goto :goto_2

    .line 663
    :cond_4
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 664
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    .line 665
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    .line 668
    :goto_2
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->x:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->y:I

    .line 669
    iget v0, p1, Lcom/tkay/expressad/exoplayer/m;->y:I

    iput v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->z:I

    .line 671
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/m;)V

    return-void
.end method

.method private b(I)Z
    .locals 1

    .line 238
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(I)Z

    move-result p1

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/b/r;)Z
    .locals 1

    const/4 v0, 0x1

    .line 65
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->K:Z

    return v0
.end method

.method private b(Z)Z
    .locals 3

    .line 443
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    if-nez p1, :cond_0

    iget-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->r:Z

    if-eqz p1, :cond_0

    goto :goto_0

    .line 446
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v2, 0x4

    if-eq p1, v2, :cond_1

    return v0

    :cond_1
    return v1

    .line 448
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object p1

    throw p1

    :cond_3
    :goto_0
    return v1
.end method

.method private static y()V
    .locals 0

    return-void
.end method

.method private static z()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/m;)I
    .locals 2

    .line 212
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->w()I

    move-result p1

    const/4 v0, 0x2

    if-gt p1, v0, :cond_0

    return p1

    .line 216
    :cond_0
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x15

    if-lt v0, v1, :cond_1

    const/16 v0, 0x20

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    or-int/lit8 v0, v0, 0x8

    or-int/2addr p1, v0

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 499
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/v;)Lcom/tkay/expressad/exoplayer/v;

    move-result-object p1

    return-object p1
.end method

.method public final a(ILjava/lang/Object;)V
    .locals 1

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_0

    .line 582
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/a;->a(ILjava/lang/Object;)V

    return-void

    .line 578
    :cond_0
    check-cast p2, Lcom/tkay/expressad/exoplayer/b/b;

    .line 579
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/b/h;->a(Lcom/tkay/expressad/exoplayer/b/b;)V

    return-void

    .line 575
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p1, p2}, Lcom/tkay/expressad/exoplayer/b/h;->a(F)V

    return-void
.end method

.method public final a(JJ)V
    .locals 18

    move-object/from16 v1, p0

    .line 243
    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->M:Z

    if-eqz v0, :cond_0

    .line 245
    :try_start_0
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->c()V
    :try_end_0
    .catch Lcom/tkay/expressad/exoplayer/b/h$d; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 247
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v2

    invoke-static {v0, v2}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    .line 253
    :cond_0
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    const/4 v2, -0x4

    const/4 v3, -0x5

    const/4 v4, 0x1

    if-nez v0, :cond_3

    .line 255
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->v:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 256
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v5, v1, Lcom/tkay/expressad/exoplayer/b/r;->v:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v1, v0, v5, v4}, Lcom/tkay/expressad/exoplayer/b/r;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result v0

    if-ne v0, v3, :cond_1

    .line 258
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/b/r;->b(Lcom/tkay/expressad/exoplayer/m;)V

    goto :goto_0

    :cond_1
    if-ne v0, v2, :cond_2

    .line 261
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->v:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v0

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 262
    iput-boolean v4, v1, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    .line 263
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->E()V

    :cond_2
    return-void

    .line 272
    :cond_3
    :goto_0
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    .line 274
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    if-eqz v0, :cond_19

    :try_start_1
    const-string v0, "drainAndFeed"

    .line 277
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/ad;->a(Ljava/lang/String;)V

    .line 1345
    :cond_4
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    const/4 v5, 0x2

    const/4 v6, 0x0

    const/4 v7, 0x0

    if-nez v0, :cond_5

    .line 1346
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/g;->g()Lcom/tkay/expressad/exoplayer/c/f;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/c/h;

    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    if-eqz v0, :cond_9

    .line 1350
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget v9, v9, Lcom/tkay/expressad/exoplayer/c/h;->b:I

    add-int/2addr v8, v9

    iput v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->f:I

    .line 1353
    :cond_5
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->c()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 1354
    iget v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    if-ne v0, v5, :cond_6

    .line 1356
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 1357
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    .line 1359
    iput-boolean v4, v1, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    goto :goto_1

    .line 1361
    :cond_6
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 1362
    iput-object v6, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    .line 1363
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->E()V

    goto :goto_1

    .line 1368
    :cond_7
    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    if-eqz v0, :cond_8

    const/4 v8, 0x0

    const-string v9, "audio/raw"

    const/4 v10, 0x0

    const/4 v11, -0x1

    .line 2337
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v12, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    iget v13, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 v14, 0x2

    const/4 v15, 0x0

    const/16 v16, 0x0

    const/16 v17, 0x0

    invoke-static/range {v8 .. v17}, Lcom/tkay/expressad/exoplayer/m;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IIIILjava/util/List;Lcom/tkay/expressad/exoplayer/d/e;Ljava/lang/String;)Lcom/tkay/expressad/exoplayer/m;

    move-result-object v0

    .line 1370
    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget v9, v0, Lcom/tkay/expressad/exoplayer/m;->w:I

    iget v10, v0, Lcom/tkay/expressad/exoplayer/m;->u:I

    iget v11, v0, Lcom/tkay/expressad/exoplayer/m;->v:I

    const/4 v12, 0x0

    iget v13, v1, Lcom/tkay/expressad/exoplayer/b/r;->y:I

    iget v14, v1, Lcom/tkay/expressad/exoplayer/b/r;->z:I

    invoke-interface/range {v8 .. v14}, Lcom/tkay/expressad/exoplayer/b/h;->a(III[III)V

    .line 1372
    iput-boolean v7, v1, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    .line 1375
    :cond_8
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget-object v8, v8, Lcom/tkay/expressad/exoplayer/c/h;->c:Ljava/nio/ByteBuffer;

    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    iget-wide v9, v9, Lcom/tkay/expressad/exoplayer/c/h;->a:J

    invoke-interface {v0, v8, v9, v10}, Lcom/tkay/expressad/exoplayer/b/h;->a(Ljava/nio/ByteBuffer;J)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1376
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    add-int/2addr v8, v4

    iput v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->e:I

    .line 1377
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 1378
    iput-object v6, v1, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    move v0, v4

    goto :goto_2

    :cond_9
    :goto_1
    move v0, v7

    :goto_2
    if-nez v0, :cond_4

    .line 2386
    :cond_a
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    if-eqz v0, :cond_18

    iget v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    if-eq v0, v5, :cond_18

    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    if-eqz v0, :cond_b

    goto/16 :goto_7

    .line 2392
    :cond_b
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    if-nez v0, :cond_c

    .line 2393
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/g;->f()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object v0

    iput-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    if-nez v0, :cond_c

    goto/16 :goto_7

    .line 2399
    :cond_c
    iget v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    const/4 v8, 0x4

    if-ne v0, v4, :cond_d

    .line 2400
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/c/e;->a(I)V

    .line 2401
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 2402
    iput-object v6, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 2403
    iput v5, v1, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    goto/16 :goto_7

    .line 2408
    :cond_d
    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    if-eqz v0, :cond_e

    move v0, v2

    goto :goto_3

    .line 2412
    :cond_e
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v1, v0, v9, v7}, Lcom/tkay/expressad/exoplayer/b/r;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I

    move-result v0

    :goto_3
    const/4 v9, -0x3

    if-ne v0, v9, :cond_f

    goto/16 :goto_7

    :cond_f
    if-ne v0, v3, :cond_10

    .line 2419
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->u:Lcom/tkay/expressad/exoplayer/n;

    iget-object v0, v0, Lcom/tkay/expressad/exoplayer/n;->a:Lcom/tkay/expressad/exoplayer/m;

    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/b/r;->b(Lcom/tkay/expressad/exoplayer/m;)V

    :goto_4
    move v0, v4

    goto/16 :goto_8

    .line 2422
    :cond_10
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v0

    if-eqz v0, :cond_11

    .line 2423
    iput-boolean v4, v1, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    .line 2424
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 2425
    iput-object v6, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    goto/16 :goto_7

    .line 2428
    :cond_11
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->g()Z

    move-result v0

    .line 2443
    iget-object v9, v1, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v9, :cond_14

    if-nez v0, :cond_12

    iget-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->r:Z

    if-eqz v0, :cond_12

    goto :goto_5

    .line 2446
    :cond_12
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->e()I

    move-result v0

    if-eq v0, v4, :cond_13

    if-eq v0, v8, :cond_14

    move v0, v4

    goto :goto_6

    .line 2448
    :cond_13
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/d/f;->f()Lcom/tkay/expressad/exoplayer/d/f$a;

    move-result-object v0

    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v2

    invoke-static {v0, v2}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_14
    :goto_5
    move v0, v7

    .line 2429
    :goto_6
    iput-boolean v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    if-eqz v0, :cond_15

    goto :goto_7

    .line 2433
    :cond_15
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->h()V

    .line 2434
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 2675
    iget-boolean v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    if-eqz v8, :cond_17

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v8

    if-nez v8, :cond_17

    .line 2679
    iget-wide v8, v0, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iget-wide v10, v1, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    sub-long/2addr v8, v10

    invoke-static {v8, v9}, Ljava/lang/Math;->abs(J)J

    move-result-wide v8

    const-wide/32 v10, 0x7a120

    cmp-long v8, v8, v10

    if-lez v8, :cond_16

    .line 2680
    iget-wide v8, v0, Lcom/tkay/expressad/exoplayer/c/e;->f:J

    iput-wide v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    .line 2682
    :cond_16
    iput-boolean v7, v1, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    .line 2435
    :cond_17
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {v0, v8}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 2436
    iput-boolean v4, v1, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    .line 2437
    iget-object v0, v1, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    iget v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I

    add-int/2addr v8, v4

    iput v8, v0, Lcom/tkay/expressad/exoplayer/c/d;->c:I

    .line 2438
    iput-object v6, v1, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    goto/16 :goto_4

    :cond_18
    :goto_7
    move v0, v7

    :goto_8
    if-nez v0, :cond_a

    .line 280
    invoke-static {}, Lcom/tkay/expressad/exoplayer/k/ad;->a()V
    :try_end_1
    .catch Lcom/tkay/expressad/exoplayer/b/e; {:try_start_1 .. :try_end_1} :catch_4
    .catch Lcom/tkay/expressad/exoplayer/b/h$a; {:try_start_1 .. :try_end_1} :catch_3
    .catch Lcom/tkay/expressad/exoplayer/b/h$b; {:try_start_1 .. :try_end_1} :catch_2
    .catch Lcom/tkay/expressad/exoplayer/b/h$d; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    goto :goto_9

    :catch_2
    move-exception v0

    goto :goto_9

    :catch_3
    move-exception v0

    goto :goto_9

    :catch_4
    move-exception v0

    .line 283
    :goto_9
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/b/r;->s()I

    move-result v2

    invoke-static {v0, v2}, Lcom/tkay/expressad/exoplayer/g;->a(Ljava/lang/Exception;I)Lcom/tkay/expressad/exoplayer/g;

    move-result-object v0

    throw v0

    :cond_19
    return-void
.end method

.method protected final a(JZ)V
    .locals 0

    .line 521
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p3}, Lcom/tkay/expressad/exoplayer/b/h;->i()V

    .line 522
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    const/4 p1, 0x1

    .line 523
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->J:Z

    .line 524
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->K:Z

    const/4 p1, 0x0

    .line 525
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->L:Z

    .line 526
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->M:Z

    .line 527
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    if-eqz p2, :cond_2

    .line 4463
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    .line 4464
    iget p2, p0, Lcom/tkay/expressad/exoplayer/b/r;->F:I

    if-eqz p2, :cond_0

    .line 4465
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 4466
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->G()V

    return-void

    :cond_0
    const/4 p2, 0x0

    .line 4468
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/r;->B:Lcom/tkay/expressad/exoplayer/c/e;

    .line 4469
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    if-eqz p3, :cond_1

    .line 4470
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/c/h;->e()V

    .line 4471
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    .line 4473
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/b/r;->A:Lcom/tkay/expressad/exoplayer/c/g;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/c/g;->d()V

    .line 4474
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->G:Z

    :cond_2
    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 509
    new-instance p1, Lcom/tkay/expressad/exoplayer/c/d;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/c/d;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    .line 510
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/b/g$a;->a(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 511
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->r()Lcom/tkay/expressad/exoplayer/aa;

    move-result-object p1

    iget p1, p1, Lcom/tkay/expressad/exoplayer/aa;->b:I

    if-eqz p1, :cond_0

    .line 513
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/exoplayer/b/h;->c(I)V

    return-void

    .line 515
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/b/h;->g()V

    return-void
.end method

.method public final c()Lcom/tkay/expressad/exoplayer/k/n;
    .locals 0

    return-object p0
.end method

.method public final d()J
    .locals 2

    .line 491
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->a_()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 492
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->I()V

    .line 494
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->I:J

    return-wide v0
.end method

.method public final e()Lcom/tkay/expressad/exoplayer/v;
    .locals 1

    .line 504
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->f()Lcom/tkay/expressad/exoplayer/v;

    move-result-object v0

    return-object v0
.end method

.method protected final n()V
    .locals 1

    .line 534
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->a()V

    return-void
.end method

.method protected final o()V
    .locals 1

    .line 539
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->I()V

    .line 540
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->h()V

    return-void
.end method

.method protected final p()V
    .locals 4

    const/4 v0, 0x0

    .line 545
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    const/4 v1, 0x1

    .line 546
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->H:Z

    const/4 v1, 0x0

    .line 547
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    .line 549
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/b/r;->H()V

    .line 550
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v1}, Lcom/tkay/expressad/exoplayer/b/h;->j()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    .line 553
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_0

    .line 554
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 558
    :cond_0
    :try_start_2
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v1, v2, :cond_1

    .line 559
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 562
    :cond_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    return-void

    :catchall_0
    move-exception v1

    .line 562
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 566
    throw v1

    :catchall_1
    move-exception v1

    .line 558
    :try_start_3
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_2

    .line 559
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 562
    :cond_2
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 567
    throw v1

    :catchall_2
    move-exception v1

    .line 562
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 566
    throw v1

    :catchall_3
    move-exception v1

    .line 553
    :try_start_4
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_3

    .line 554
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_5

    .line 558
    :cond_3
    :try_start_5
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_4

    .line 559
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 562
    :cond_4
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 568
    throw v1

    :catchall_4
    move-exception v1

    .line 562
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 566
    throw v1

    :catchall_5
    move-exception v1

    .line 558
    :try_start_6
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    if-eqz v2, :cond_5

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    if-eq v2, v3, :cond_5

    .line 559
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->q:Lcom/tkay/expressad/exoplayer/d/g;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    invoke-interface {v2, v3}, Lcom/tkay/expressad/exoplayer/d/g;->a(Lcom/tkay/expressad/exoplayer/d/f;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    .line 562
    :cond_5
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 567
    throw v1

    :catchall_6
    move-exception v1

    .line 562
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->D:Lcom/tkay/expressad/exoplayer/d/f;

    .line 563
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->E:Lcom/tkay/expressad/exoplayer/d/f;

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->s:Lcom/tkay/expressad/exoplayer/b/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/b/r;->w:Lcom/tkay/expressad/exoplayer/c/d;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/exoplayer/b/g$a;->b(Lcom/tkay/expressad/exoplayer/c/d;)V

    .line 566
    throw v1
.end method

.method public final u()Z
    .locals 1

    .line 485
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->e()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->x:Lcom/tkay/expressad/exoplayer/m;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->N:Z

    if-nez v0, :cond_0

    .line 486
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/b/r;->t()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->C:Lcom/tkay/expressad/exoplayer/c/h;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final v()Z
    .locals 1

    .line 480
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->M:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/b/r;->t:Lcom/tkay/expressad/exoplayer/b/h;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/b/h;->d()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected abstract w()I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()I"
        }
    .end annotation
.end method

.method protected abstract x()Lcom/tkay/expressad/exoplayer/c/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Lcom/tkay/expressad/exoplayer/c/g<",
            "Lcom/tkay/expressad/exoplayer/c/e;",
            "+",
            "Lcom/tkay/expressad/exoplayer/c/h;",
            "+",
            "Lcom/tkay/expressad/exoplayer/b/e;",
            ">;"
        }
    .end annotation
.end method
