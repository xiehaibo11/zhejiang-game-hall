.class public final Lcom/tkay/expressad/exoplayer/h/b/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/y;
.implements Lcom/tkay/expressad/exoplayer/h/z;
.implements Lcom/tkay/expressad/exoplayer/j/t$a;
.implements Lcom/tkay/expressad/exoplayer/j/t$d;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/b/f$a;,
        Lcom/tkay/expressad/exoplayer/h/b/f$b;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T::",
        "Lcom/tkay/expressad/exoplayer/h/b/g;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/tkay/expressad/exoplayer/h/y;",
        "Lcom/tkay/expressad/exoplayer/h/z;",
        "Lcom/tkay/expressad/exoplayer/j/t$a<",
        "Lcom/tkay/expressad/exoplayer/h/b/c;",
        ">;",
        "Lcom/tkay/expressad/exoplayer/j/t$d;"
    }
.end annotation


# static fields
.field private static final d:Ljava/lang/String; = "ChunkSampleStream"


# instance fields
.field public final a:I

.field b:J

.field c:Z

.field private final e:[I

.field private final f:[Lcom/tkay/expressad/exoplayer/m;

.field private final g:[Z

.field private final h:Lcom/tkay/expressad/exoplayer/h/b/g;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field

.field private final i:Lcom/tkay/expressad/exoplayer/h/z$a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/h/z$a<",
            "Lcom/tkay/expressad/exoplayer/h/b/f<",
            "TT;>;>;"
        }
    .end annotation
.end field

.field private final j:Lcom/tkay/expressad/exoplayer/h/t$a;

.field private final k:I

.field private final l:Lcom/tkay/expressad/exoplayer/j/t;

.field private final m:Lcom/tkay/expressad/exoplayer/h/b/e;

.field private final n:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private final o:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/h/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private final p:Lcom/tkay/expressad/exoplayer/h/x;

.field private final q:[Lcom/tkay/expressad/exoplayer/h/x;

.field private final r:Lcom/tkay/expressad/exoplayer/h/b/b;

.field private s:Lcom/tkay/expressad/exoplayer/m;

.field private t:Lcom/tkay/expressad/exoplayer/h/b/f$b;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/h/b/f$b<",
            "TT;>;"
        }
    .end annotation
.end field

.field private u:J

.field private v:J


# direct methods
.method private constructor <init>(I[I[Lcom/tkay/expressad/exoplayer/m;Lcom/tkay/expressad/exoplayer/h/b/g;Lcom/tkay/expressad/exoplayer/h/z$a;Lcom/tkay/expressad/exoplayer/j/b;JILcom/tkay/expressad/exoplayer/h/t$a;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I[I[",
            "Lcom/tkay/expressad/exoplayer/m;",
            "TT;",
            "Lcom/tkay/expressad/exoplayer/h/z$a<",
            "Lcom/tkay/expressad/exoplayer/h/b/f<",
            "TT;>;>;",
            "Lcom/tkay/expressad/exoplayer/j/b;",
            "JI",
            "Lcom/tkay/expressad/exoplayer/h/t$a;",
            ")V"
        }
    .end annotation

    .line 107
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 108
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    .line 109
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->e:[I

    .line 110
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->f:[Lcom/tkay/expressad/exoplayer/m;

    .line 111
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    .line 112
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    .line 113
    iput-object p10, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    .line 114
    iput p9, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->k:I

    .line 115
    new-instance p3, Lcom/tkay/expressad/exoplayer/j/t;

    const-string p4, "Loader:ChunkSampleStream"

    invoke-direct {p3, p4}, Lcom/tkay/expressad/exoplayer/j/t;-><init>(Ljava/lang/String;)V

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    .line 116
    new-instance p3, Lcom/tkay/expressad/exoplayer/h/b/e;

    invoke-direct {p3}, Lcom/tkay/expressad/exoplayer/h/b/e;-><init>()V

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->m:Lcom/tkay/expressad/exoplayer/h/b/e;

    .line 117
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    .line 118
    invoke-static {p3}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->o:Ljava/util/List;

    const/4 p3, 0x0

    if-nez p2, :cond_0

    move p4, p3

    goto :goto_0

    .line 120
    :cond_0
    array-length p4, p2

    .line 121
    :goto_0
    new-array p5, p4, [Lcom/tkay/expressad/exoplayer/h/x;

    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    .line 122
    new-array p5, p4, [Z

    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->g:[Z

    add-int/lit8 p5, p4, 0x1

    .line 123
    new-array p9, p5, [I

    .line 124
    new-array p5, p5, [Lcom/tkay/expressad/exoplayer/h/x;

    .line 126
    new-instance p10, Lcom/tkay/expressad/exoplayer/h/x;

    invoke-direct {p10, p6}, Lcom/tkay/expressad/exoplayer/h/x;-><init>(Lcom/tkay/expressad/exoplayer/j/b;)V

    iput-object p10, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    .line 127
    aput p1, p9, p3

    .line 128
    aput-object p10, p5, p3

    :goto_1
    if-ge p3, p4, :cond_1

    .line 131
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/x;

    invoke-direct {p1, p6}, Lcom/tkay/expressad/exoplayer/h/x;-><init>(Lcom/tkay/expressad/exoplayer/j/b;)V

    .line 132
    iget-object p10, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    aput-object p1, p10, p3

    add-int/lit8 p10, p3, 0x1

    .line 133
    aput-object p1, p5, p10

    .line 134
    aget p1, p2, p3

    aput p1, p9, p10

    move p3, p10

    goto :goto_1

    .line 137
    :cond_1
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/b/b;

    invoke-direct {p1, p9, p5}, Lcom/tkay/expressad/exoplayer/h/b/b;-><init>([I[Lcom/tkay/expressad/exoplayer/h/x;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->r:Lcom/tkay/expressad/exoplayer/h/b/b;

    .line 138
    iput-wide p7, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    .line 139
    iput-wide p7, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/b/c;JJLjava/io/IOException;)I
    .locals 23

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 417
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v17

    .line 2544
    instance-of v2, v1, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 419
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    const-wide/16 v5, 0x0

    cmp-long v5, v17, v5

    const/16 v21, 0x0

    if-eqz v5, :cond_1

    if-eqz v2, :cond_1

    .line 421
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(I)Z

    move-result v5

    if-nez v5, :cond_0

    goto :goto_0

    :cond_0
    move/from16 v5, v21

    goto :goto_1

    :cond_1
    :goto_0
    move v5, v4

    .line 423
    :goto_1
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/h/b/g;->f()Z

    move-result v6

    if-eqz v6, :cond_5

    if-nez v5, :cond_2

    const-string v2, "ChunkSampleStream"

    const-string v3, "Ignoring attempt to cancel non-cancelable load."

    .line 425
    invoke-static {v2, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    :cond_2
    if-eqz v2, :cond_4

    .line 429
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/h/b/f;->d(I)Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object v2

    if-ne v2, v1, :cond_3

    move v2, v4

    goto :goto_2

    :cond_3
    move/from16 v2, v21

    .line 430
    :goto_2
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 431
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 432
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    iput-wide v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    :cond_4
    move/from16 v22, v4

    goto :goto_4

    :cond_5
    :goto_3
    move/from16 v22, v21

    .line 437
    :goto_4
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v4, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v7, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    move-wide/from16 v13, p2

    move-wide/from16 v15, p4

    move-object/from16 v19, p6

    move/from16 v20, v22

    invoke-virtual/range {v2 .. v20}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V

    if-eqz v22, :cond_6

    .line 442
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    const/4 v1, 0x2

    return v1

    :cond_6
    return v21
.end method

.method private a(JI)Lcom/tkay/expressad/exoplayer/h/b/f$a;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(JI)",
            "Lcom/tkay/expressad/exoplayer/h/b/f<",
            "TT;>.a;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 173
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v1, v1

    if-ge v0, v1, :cond_1

    .line 174
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->e:[I

    aget v1, v1, v0

    if-ne v1, p3, :cond_0

    .line 175
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->g:[Z

    aget-boolean p3, p3, v0

    const/4 v1, 0x1

    xor-int/2addr p3, v1

    invoke-static {p3}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 176
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->g:[Z

    aput-boolean v1, p3, v0

    .line 177
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    aget-object p3, p3, v0

    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/h/x;->i()V

    .line 178
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    aget-object p3, p3, v0

    invoke-virtual {p3, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZ)I

    .line 179
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/b/f$a;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    aget-object p2, p2, v0

    invoke-direct {p1, p0, p0, p2, v0}, Lcom/tkay/expressad/exoplayer/h/b/f$a;-><init>(Lcom/tkay/expressad/exoplayer/h/b/f;Lcom/tkay/expressad/exoplayer/h/b/f;Lcom/tkay/expressad/exoplayer/h/x;I)V

    return-object p1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 183
    :cond_1
    new-instance p1, Ljava/lang/IllegalStateException;

    invoke-direct {p1}, Ljava/lang/IllegalStateException;-><init>()V

    throw p1
.end method

.method private a(II)V
    .locals 2

    sub-int v0, p1, p2

    const/4 v1, 0x0

    .line 574
    invoke-direct {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/h/b/f;->b(II)I

    move-result v0

    const/4 v1, 0x1

    if-ne p2, v1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    sub-int/2addr p1, v1

    .line 577
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->b(II)I

    move-result p1

    :goto_0
    if-gt v0, p1, :cond_1

    .line 580
    invoke-direct {p0, v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->c(I)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private a(JZ)V
    .locals 5

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->d()I

    move-result v0

    .line 151
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    const/4 v2, 0x1

    invoke-virtual {v1, p1, p2, p3, v2}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZZ)V

    .line 152
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->d()I

    move-result p1

    if-le p1, v0, :cond_1

    .line 154
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/x;->h()J

    move-result-wide v0

    const/4 p2, 0x0

    move v2, p2

    .line 155
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v4, v3

    if-ge v2, v4, :cond_0

    .line 156
    aget-object v3, v3, v2

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->g:[Z

    aget-boolean v4, v4, v2

    invoke-virtual {v3, v0, v1, p3, v4}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZZ)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 1567
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/b/f;->b(II)I

    move-result p1

    if-lez p1, :cond_1

    .line 1569
    iget-object p3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-static {p3, p2, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/util/List;II)V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/b/c;JJ)V
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-wide/from16 v13, p2

    move-wide/from16 v15, p4

    .line 391
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v4, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v7, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    .line 394
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v17

    .line 391
    invoke-virtual/range {v2 .. v18}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    .line 395
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/b/c;JJZ)V
    .locals 19

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-wide/from16 v13, p2

    move-wide/from16 v15, p4

    .line 401
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v4, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v7, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    .line 404
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v17

    .line 401
    invoke-virtual/range {v2 .. v18}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    if-nez p6, :cond_1

    .line 406
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    .line 407
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_0

    aget-object v4, v1, v3

    .line 408
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 410
    :cond_0
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/b/f$b;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/exoplayer/h/b/f$b<",
            "TT;>;)V"
        }
    .end annotation

    .line 316
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->t:Lcom/tkay/expressad/exoplayer/h/b/f$b;

    .line 318
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->j()V

    .line 319
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    aget-object v2, p1, v1

    .line 320
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/x;->j()V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 322
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$d;)V

    return-void
.end method

.method private a(I)Z
    .locals 5

    .line 549
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 550
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->e()I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v2

    const/4 v3, 0x1

    if-le v0, v2, :cond_0

    return v3

    :cond_0
    move v0, v1

    .line 553
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v4, v2

    if-ge v0, v4, :cond_2

    .line 554
    aget-object v2, v2, v0

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/x;->e()I

    move-result v2

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v4

    if-le v2, v4, :cond_1

    return v3

    :cond_2
    return v1
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/h/b/c;)Z
    .locals 0

    .line 544
    instance-of p0, p0, Lcom/tkay/expressad/exoplayer/h/b/a;

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/b/f;)[Z
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->g:[Z

    return-object p0
.end method

.method private b(II)I
    .locals 2

    :cond_0
    add-int/lit8 p2, p2, 0x1

    .line 600
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-ge p2, v0, :cond_1

    .line 601
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/b/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v0

    if-le v0, p1, :cond_0

    add-int/lit8 p2, p2, -0x1

    return p2

    .line 605
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    add-int/lit8 p1, p1, -0x1

    return p1
.end method

.method private b(I)V
    .locals 2

    const/4 v0, 0x0

    .line 567
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/h/b/f;->b(II)I

    move-result p1

    if-lez p1, :cond_0

    .line 569
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-static {v1, v0, p1}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/util/List;II)V

    :cond_0
    return-void
.end method

.method private b(J)V
    .locals 9

    .line 235
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    .line 236
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->i()V

    .line 240
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_4

    :cond_0
    const/4 v0, 0x0

    move v2, v1

    .line 245
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v2, v3, :cond_2

    .line 246
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 247
    iget-wide v4, v3, Lcom/tkay/expressad/exoplayer/h/b/a;->g:J

    cmp-long v4, v4, p1

    if-nez v4, :cond_1

    .line 248
    iget-wide v5, v3, Lcom/tkay/expressad/exoplayer/h/b/a;->a:J

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v5, v5, v7

    if-nez v5, :cond_1

    move-object v0, v3

    goto :goto_1

    :cond_1
    if-gtz v4, :cond_2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    if-eqz v0, :cond_3

    .line 260
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    .line 261
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v0

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/h/x;->b(I)Z

    move-result v0

    const-wide/high16 v2, -0x8000000000000000L

    .line 262
    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->b:J

    goto :goto_4

    .line 264
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    .line 268
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->e()J

    move-result-wide v2

    cmp-long v2, p1, v2

    const/4 v3, 0x1

    if-gez v2, :cond_4

    move v2, v3

    goto :goto_2

    :cond_4
    move v2, v1

    .line 265
    :goto_2
    invoke-virtual {v0, p1, p2, v2}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZ)I

    move-result v0

    const/4 v2, -0x1

    if-eq v0, v2, :cond_5

    move v0, v3

    goto :goto_3

    :cond_5
    move v0, v1

    .line 270
    :goto_3
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->b:J

    :goto_4
    if-eqz v0, :cond_7

    .line 276
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v2, v0

    move v3, v1

    :goto_5
    if-ge v3, v2, :cond_6

    aget-object v4, v0, v3

    .line 277
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/h/x;->i()V

    .line 278
    invoke-virtual {v4, p1, p2, v1}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZ)I

    add-int/lit8 v3, v3, 0x1

    goto :goto_5

    :cond_6
    return-void

    .line 282
    :cond_7
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    .line 283
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    .line 284
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->clear()V

    .line 285
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    move-result p1

    if-eqz p1, :cond_8

    .line 286
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/t;->b()V

    return-void

    .line 288
    :cond_8
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    .line 289
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length p2, p1

    :goto_6
    if-ge v1, p2, :cond_9

    aget-object v0, p1, v1

    .line 290
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    add-int/lit8 v1, v1, 0x1

    goto :goto_6

    :cond_9
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/b/f;)[I
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->e:[I

    return-object p0
.end method

.method private c(I)V
    .locals 8

    .line 585
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 586
    iget-object v7, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->d:Lcom/tkay/expressad/exoplayer/m;

    .line 587
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->s:Lcom/tkay/expressad/exoplayer/m;

    invoke-virtual {v7, v0}, Lcom/tkay/expressad/exoplayer/m;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 588
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->e:I

    iget-object v4, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->f:Ljava/lang/Object;

    iget-wide v5, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->g:J

    move-object v2, v7

    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(ILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;J)V

    .line 592
    :cond_0
    iput-object v7, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->s:Lcom/tkay/expressad/exoplayer/m;

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/h/b/f;)[Lcom/tkay/expressad/exoplayer/m;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->f:[Lcom/tkay/expressad/exoplayer/m;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/exoplayer/h/b/f;)J
    .locals 2

    .line 45
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    return-wide v0
.end method

.method private d(I)Lcom/tkay/expressad/exoplayer/h/b/a;
    .locals 3

    .line 620
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 621
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v2

    invoke-static {v1, p1, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/util/List;II)V

    .line 622
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/exoplayer/h/x;->a(I)V

    .line 623
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 624
    aget-object p1, p1, v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(I)I

    move-result v2

    invoke-virtual {p1, v2}, Lcom/tkay/expressad/exoplayer/h/x;->a(I)V

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method static synthetic e(Lcom/tkay/expressad/exoplayer/h/b/f;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 0

    .line 45
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    return-object p0
.end method

.method private f()Lcom/tkay/expressad/exoplayer/h/b/g;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TT;"
        }
    .end annotation

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    return-object v0
.end method

.method private h()J
    .locals 2

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/h/b/g;->a()J

    move-result-wide v0

    return-wide v0
.end method

.method private i()V
    .locals 4

    const/4 v0, 0x0

    .line 2316
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->t:Lcom/tkay/expressad/exoplayer/h/b/f$b;

    .line 2318
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->j()V

    .line 2319
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 2320
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/h/x;->j()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 2322
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v0, p0}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$d;)V

    return-void
.end method

.method private j()Lcom/tkay/expressad/exoplayer/h/b/a;
    .locals 2

    .line 609
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/h/b/a;

    return-object v0
.end method


# virtual methods
.method public final a(J)I
    .locals 4

    .line 368
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 372
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->g()J

    move-result-wide v2

    cmp-long v0, p1, v2

    if-lez v0, :cond_1

    .line 373
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->k()I

    move-result v1

    goto :goto_0

    .line 375
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    const/4 v2, 0x1

    invoke-virtual {v0, p1, p2, v2}, Lcom/tkay/expressad/exoplayer/h/x;->a(JZ)I

    move-result p1

    const/4 p2, -0x1

    if-ne p1, p2, :cond_2

    goto :goto_0

    :cond_2
    move v1, p1

    :goto_0
    if-lez v1, :cond_3

    .line 381
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/x;->e()I

    move-result p1

    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(II)V

    :cond_3
    return v1
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJLjava/io/IOException;)I
    .locals 23

    move-object/from16 v0, p0

    .line 45
    move-object/from16 v1, p1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/b/c;

    .line 4417
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v17

    .line 4544
    instance-of v2, v1, Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 4419
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    const/4 v4, 0x1

    sub-int/2addr v3, v4

    const-wide/16 v5, 0x0

    cmp-long v5, v17, v5

    const/16 v21, 0x0

    if-eqz v5, :cond_1

    if-eqz v2, :cond_1

    .line 4421
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(I)Z

    move-result v5

    if-nez v5, :cond_0

    goto :goto_0

    :cond_0
    move/from16 v5, v21

    goto :goto_1

    :cond_1
    :goto_0
    move v5, v4

    .line 4423
    :goto_1
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    invoke-interface {v6}, Lcom/tkay/expressad/exoplayer/h/b/g;->f()Z

    move-result v6

    if-eqz v6, :cond_5

    if-nez v5, :cond_2

    const-string v2, "ChunkSampleStream"

    const-string v3, "Ignoring attempt to cancel non-cancelable load."

    .line 4425
    invoke-static {v2, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_3

    :cond_2
    if-eqz v2, :cond_4

    .line 4429
    invoke-direct {v0, v3}, Lcom/tkay/expressad/exoplayer/h/b/f;->d(I)Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object v2

    if-ne v2, v1, :cond_3

    move v2, v4

    goto :goto_2

    :cond_3
    move/from16 v2, v21

    .line 4430
    :goto_2
    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 4431
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_4

    .line 4432
    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    iput-wide v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    :cond_4
    move/from16 v22, v4

    goto :goto_4

    :cond_5
    :goto_3
    move/from16 v22, v21

    .line 4437
    :goto_4
    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v3, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v4, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v6, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v7, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v8, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v9, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    iget-wide v11, v1, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    move-wide/from16 v13, p2

    move-wide/from16 v15, p4

    move-object/from16 v19, p6

    move/from16 v20, v22

    invoke-virtual/range {v2 .. v20}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V

    if-eqz v22, :cond_6

    .line 4442
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    const/4 v1, 0x2

    return v1

    :cond_6
    return v21
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;Z)I
    .locals 7

    .line 354
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, -0x3

    return p1

    .line 357
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    iget-boolean v4, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->b:J

    move-object v1, p1

    move-object v2, p2

    move v3, p3

    .line 358
    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/x;->a(Lcom/tkay/expressad/exoplayer/n;Lcom/tkay/expressad/exoplayer/c/e;ZZJ)I

    move-result p1

    const/4 p2, -0x4

    if-ne p1, p2, :cond_1

    .line 361
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/h/x;->e()I

    move-result p2

    const/4 p3, 0x1

    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(II)V

    :cond_1
    return p1
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJ)V
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 45
    move-object/from16 v10, p1

    check-cast v10, Lcom/tkay/expressad/exoplayer/h/b/c;

    .line 6391
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v3, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v4, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v5, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v6, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v7, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v8, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    move-object/from16 p1, v1

    iget-wide v0, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    move-object/from16 v16, v10

    move-wide v10, v0

    .line 6394
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v16

    move-object/from16 v1, p1

    .line 6391
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    move-object/from16 v0, p0

    .line 6395
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    return-void
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJZ)V
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 45
    move-object/from16 v10, p1

    check-cast v10, Lcom/tkay/expressad/exoplayer/h/b/c;

    .line 5401
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v3, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v4, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v5, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v6, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v7, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v8, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    move-object/from16 p1, v1

    iget-wide v0, v10, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    move-object/from16 v16, v10

    move-wide v10, v0

    .line 5404
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/expressad/exoplayer/h/b/c;->d()J

    move-result-wide v16

    move-object/from16 v1, p1

    .line 5401
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    move-object/from16 v0, p0

    if-nez p6, :cond_1

    .line 5406
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    .line 5407
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_0

    aget-object v4, v1, v3

    .line 5408
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 5410
    :cond_0
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->i:Lcom/tkay/expressad/exoplayer/h/z$a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/h/z$a;->a(Lcom/tkay/expressad/exoplayer/h/z;)V

    :cond_1
    return-void
.end method

.method final a()Z
    .locals 4

    .line 562
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final a_(J)V
    .locals 6

    .line 511
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    move-result p1

    if-nez p1, :cond_6

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_2

    .line 515
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    .line 516
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->h:Lcom/tkay/expressad/exoplayer/h/b/g;

    invoke-interface {p2}, Lcom/tkay/expressad/exoplayer/h/b/g;->c()I

    move-result p2

    if-gt p1, p2, :cond_1

    return-void

    :cond_1
    :goto_0
    if-ge p2, p1, :cond_3

    .line 523
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/h/b/f;->a(I)Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_1

    :cond_2
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_3
    move p2, p1

    :goto_1
    if-ne p2, p1, :cond_4

    return-void

    .line 532
    :cond_4
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->j()Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object p1

    iget-wide v4, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->h:J

    .line 533
    invoke-direct {p0, p2}, Lcom/tkay/expressad/exoplayer/h/b/f;->d(I)Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object p1

    .line 534
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {p2}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_5

    .line 535
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    :cond_5
    const/4 p2, 0x0

    .line 537
    iput-boolean p2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    .line 538
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-wide v2, p1, Lcom/tkay/expressad/exoplayer/h/b/a;->g:J

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(IJJ)V

    :cond_6
    :goto_2
    return-void
.end method

.method public final b()Z
    .locals 1

    .line 340
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->c()Z

    move-result v0

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

.method public final c()V
    .locals 1

    .line 345
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/t;->c()V

    .line 346
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    return-void
.end method

.method public final c(J)Z
    .locals 21

    move-object/from16 v0, p0

    .line 453
    iget-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    const/4 v2, 0x0

    if-nez v1, :cond_8

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_1

    .line 457
    :cond_0
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v1

    if-nez v1, :cond_1

    .line 464
    invoke-direct/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->j()Lcom/tkay/expressad/exoplayer/h/b/a;

    .line 468
    :cond_1
    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->m:Lcom/tkay/expressad/exoplayer/h/b/e;

    iget-boolean v3, v3, Lcom/tkay/expressad/exoplayer/h/b/e;->b:Z

    .line 469
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->m:Lcom/tkay/expressad/exoplayer/h/b/e;

    iget-object v4, v4, Lcom/tkay/expressad/exoplayer/h/b/e;->a:Lcom/tkay/expressad/exoplayer/h/b/c;

    .line 470
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->m:Lcom/tkay/expressad/exoplayer/h/b/e;

    const/4 v6, 0x0

    .line 3037
    iput-object v6, v5, Lcom/tkay/expressad/exoplayer/h/b/e;->a:Lcom/tkay/expressad/exoplayer/h/b/c;

    .line 3038
    iput-boolean v2, v5, Lcom/tkay/expressad/exoplayer/h/b/e;->b:Z

    const-wide v5, -0x7fffffffffffffffL    # -4.9E-324

    const/4 v7, 0x1

    if-eqz v3, :cond_2

    .line 473
    iput-wide v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    .line 474
    iput-boolean v7, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    return v7

    :cond_2
    if-nez v4, :cond_3

    return v2

    .line 3544
    :cond_3
    instance-of v3, v4, Lcom/tkay/expressad/exoplayer/h/b/a;

    if-eqz v3, :cond_7

    .line 483
    move-object v3, v4

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/b/a;

    if-eqz v1, :cond_6

    .line 485
    iget-wide v8, v3, Lcom/tkay/expressad/exoplayer/h/b/a;->g:J

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    cmp-long v1, v8, v10

    if-nez v1, :cond_4

    move v2, v7

    :cond_4
    if-eqz v2, :cond_5

    const-wide/high16 v1, -0x8000000000000000L

    goto :goto_0

    .line 487
    :cond_5
    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    :goto_0
    iput-wide v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->b:J

    .line 488
    iput-wide v5, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    .line 490
    :cond_6
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->r:Lcom/tkay/expressad/exoplayer/h/b/b;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/exoplayer/h/b/a;->a(Lcom/tkay/expressad/exoplayer/h/b/b;)V

    .line 491
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 493
    :cond_7
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->l:Lcom/tkay/expressad/exoplayer/j/t;

    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->k:I

    invoke-virtual {v1, v4, v0, v2}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$c;Lcom/tkay/expressad/exoplayer/j/t$a;I)J

    move-result-wide v19

    .line 494
    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->j:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v9, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->b:Lcom/tkay/expressad/exoplayer/j/k;

    iget v10, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->c:I

    iget v11, v0, Lcom/tkay/expressad/exoplayer/h/b/f;->a:I

    iget-object v12, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->d:Lcom/tkay/expressad/exoplayer/m;

    iget v13, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->e:I

    iget-object v14, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->f:Ljava/lang/Object;

    iget-wide v1, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->g:J

    iget-wide v3, v4, Lcom/tkay/expressad/exoplayer/h/b/c;->h:J

    move-wide v15, v1

    move-wide/from16 v17, v3

    invoke-virtual/range {v8 .. v20}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJ)V

    return v7

    :cond_8
    :goto_1
    return v2
.end method

.method public final d()J
    .locals 4

    .line 201
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-eqz v0, :cond_0

    const-wide/high16 v0, -0x8000000000000000L

    return-wide v0

    .line 203
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 204
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    return-wide v0

    .line 206
    :cond_1
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->v:J

    .line 207
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->j()Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object v2

    .line 208
    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/b/a;->f()Z

    move-result v3

    if-eqz v3, :cond_2

    goto :goto_0

    .line 209
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    const/4 v3, 0x1

    if-le v2, v3, :cond_3

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->n:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v3

    add-int/lit8 v3, v3, -0x2

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/h/b/a;

    goto :goto_0

    :cond_3
    const/4 v2, 0x0

    :goto_0
    if-eqz v2, :cond_4

    .line 211
    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/h/b/a;->h:J

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    .line 213
    :cond_4
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v2}, Lcom/tkay/expressad/exoplayer/h/x;->g()J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v0

    return-wide v0
.end method

.method public final e()J
    .locals 2

    .line 502
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 503
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->u:J

    return-wide v0

    .line 505
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->c:Z

    if-eqz v0, :cond_1

    const-wide/high16 v0, -0x8000000000000000L

    return-wide v0

    :cond_1
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/b/f;->j()Lcom/tkay/expressad/exoplayer/h/b/a;

    move-result-object v0

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/h/b/a;->h:J

    return-wide v0
.end method

.method public final g()V
    .locals 4

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->p:Lcom/tkay/expressad/exoplayer/h/x;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    .line 328
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/b/f;->q:[Lcom/tkay/expressad/exoplayer/h/x;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 329
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/h/x;->a()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
