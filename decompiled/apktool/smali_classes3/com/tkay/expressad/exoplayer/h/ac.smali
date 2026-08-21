.class final Lcom/tkay/expressad/exoplayer/h/ac;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/h/r;
.implements Lcom/tkay/expressad/exoplayer/j/t$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/ac$b;,
        Lcom/tkay/expressad/exoplayer/h/ac$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/tkay/expressad/exoplayer/h/r;",
        "Lcom/tkay/expressad/exoplayer/j/t$a<",
        "Lcom/tkay/expressad/exoplayer/h/ac$b;",
        ">;"
    }
.end annotation


# static fields
.field private static final i:I = 0x400


# instance fields
.field final a:Lcom/tkay/expressad/exoplayer/j/t;

.field final b:Lcom/tkay/expressad/exoplayer/m;

.field final c:Z

.field d:Z

.field e:Z

.field f:Z

.field g:[B

.field h:I

.field private final j:Lcom/tkay/expressad/exoplayer/j/k;

.field private final k:Lcom/tkay/expressad/exoplayer/j/h$a;

.field private final l:I

.field private final m:Lcom/tkay/expressad/exoplayer/h/t$a;

.field private final n:Lcom/tkay/expressad/exoplayer/h/af;

.field private final o:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/ac$a;",
            ">;"
        }
    .end annotation
.end field

.field private final p:J

.field private q:I


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/m;JILcom/tkay/expressad/exoplayer/h/t$a;Z)V
    .locals 0

    .line 74
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 75
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->j:Lcom/tkay/expressad/exoplayer/j/k;

    .line 76
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/ac;->k:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 77
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    .line 78
    iput-wide p4, p0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 79
    iput p6, p0, Lcom/tkay/expressad/exoplayer/h/ac;->l:I

    .line 80
    iput-object p7, p0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    .line 81
    iput-boolean p8, p0, Lcom/tkay/expressad/exoplayer/h/ac;->c:Z

    .line 82
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/af;

    const/4 p2, 0x1

    new-array p4, p2, [Lcom/tkay/expressad/exoplayer/h/ae;

    new-instance p5, Lcom/tkay/expressad/exoplayer/h/ae;

    new-array p2, p2, [Lcom/tkay/expressad/exoplayer/m;

    const/4 p6, 0x0

    aput-object p3, p2, p6

    invoke-direct {p5, p2}, Lcom/tkay/expressad/exoplayer/h/ae;-><init>([Lcom/tkay/expressad/exoplayer/m;)V

    aput-object p5, p4, p6

    invoke-direct {p1, p4}, Lcom/tkay/expressad/exoplayer/h/af;-><init>([Lcom/tkay/expressad/exoplayer/h/ae;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->n:Lcom/tkay/expressad/exoplayer/h/af;

    .line 83
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->o:Ljava/util/ArrayList;

    .line 84
    new-instance p1, Lcom/tkay/expressad/exoplayer/j/t;

    const-string p2, "Loader:SingleSampleMediaPeriod"

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/j/t;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    .line 85
    invoke-virtual {p7}, Lcom/tkay/expressad/exoplayer/h/t$a;->a()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/ac$b;JJLjava/io/IOException;)I
    .locals 24

    move-object/from16 v0, p0

    .line 234
    iget v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->q:I

    const/4 v2, 0x1

    add-int/2addr v1, v2

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->q:I

    .line 235
    iget-boolean v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->c:Z

    const/4 v4, 0x0

    if-eqz v3, :cond_0

    iget v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->l:I

    if-lt v1, v3, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v4

    .line 236
    :goto_0
    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    move-object/from16 v3, p1

    iget-object v6, v3, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 v7, 0x1

    const/4 v8, -0x1

    iget-object v9, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    const/4 v10, 0x0

    const/4 v11, 0x0

    const-wide/16 v12, 0x0

    iget-wide v14, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 247
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v3

    int-to-long v2, v3

    move-wide/from16 v20, v2

    move-wide/from16 v16, p2

    move-wide/from16 v18, p4

    move-object/from16 v22, p6

    move/from16 v23, v1

    .line 236
    invoke-virtual/range {v5 .. v23}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V

    if-eqz v1, :cond_1

    const/4 v1, 0x1

    .line 251
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    const/4 v1, 0x2

    return v1

    :cond_1
    return v4
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/ac;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/ac$b;JJ)V
    .locals 20

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 196
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    move-object/from16 v8, p1

    iget-object v2, v8, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 207
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v3

    int-to-long v3, v3

    move-wide/from16 v16, v3

    const/4 v3, 0x1

    const/4 v4, -0x1

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-wide/16 v18, 0x0

    move-wide/from16 v8, v18

    .line 196
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    .line 208
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->h:I

    .line 209
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->b(Lcom/tkay/expressad/exoplayer/h/ac$b;)[B

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->g:[B

    const/4 v1, 0x1

    .line 210
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    .line 211
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->f:Z

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/h/ac$b;JJ)V
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 217
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    move-object/from16 v3, p1

    iget-object v2, v3, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 228
    invoke-static/range {p1 .. p1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v3

    int-to-long v3, v3

    move-wide/from16 v16, v3

    const/4 v3, 0x1

    const/4 v4, -0x1

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-wide/16 v8, 0x0

    .line 217
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJLjava/io/IOException;)I
    .locals 25

    move-object/from16 v0, p0

    .line 39
    move-object/from16 v1, p1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/ac$b;

    .line 1234
    iget v2, v0, Lcom/tkay/expressad/exoplayer/h/ac;->q:I

    const/4 v3, 0x1

    add-int/2addr v2, v3

    iput v2, v0, Lcom/tkay/expressad/exoplayer/h/ac;->q:I

    .line 1235
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/h/ac;->c:Z

    const/4 v5, 0x0

    if-eqz v4, :cond_0

    iget v4, v0, Lcom/tkay/expressad/exoplayer/h/ac;->l:I

    if-lt v2, v4, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v5

    .line 1236
    :goto_0
    iget-object v6, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v7, v1, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 v8, 0x1

    const/4 v9, -0x1

    iget-object v10, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    const/4 v11, 0x0

    const/4 v12, 0x0

    const-wide/16 v13, 0x0

    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    move-wide v15, v3

    .line 1247
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v1

    int-to-long v3, v1

    move-wide/from16 v21, v3

    move-wide/from16 v17, p2

    move-wide/from16 v19, p4

    move-object/from16 v23, p6

    move/from16 v24, v2

    .line 1236
    invoke-virtual/range {v6 .. v24}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJLjava/io/IOException;Z)V

    if-eqz v2, :cond_1

    const/4 v1, 0x1

    .line 1251
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    const/4 v1, 0x2

    return v1

    :cond_1
    return v5
.end method

.method public final a(JLcom/tkay/expressad/exoplayer/ac;)J
    .locals 0

    return-wide p1
.end method

.method public final a([Lcom/tkay/expressad/exoplayer/i/f;[Z[Lcom/tkay/expressad/exoplayer/h/y;[ZJ)J
    .locals 4

    const/4 v0, 0x0

    move v1, v0

    .line 111
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_3

    .line 112
    aget-object v2, p3, v1

    if-eqz v2, :cond_1

    aget-object v2, p1, v1

    if-eqz v2, :cond_0

    aget-boolean v2, p2, v1

    if-nez v2, :cond_1

    .line 113
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/ac;->o:Ljava/util/ArrayList;

    aget-object v3, p3, v1

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    const/4 v2, 0x0

    .line 114
    aput-object v2, p3, v1

    .line 116
    :cond_1
    aget-object v2, p3, v1

    if-nez v2, :cond_2

    aget-object v2, p1, v1

    if-eqz v2, :cond_2

    .line 117
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/ac$a;

    invoke-direct {v2, p0, v0}, Lcom/tkay/expressad/exoplayer/h/ac$a;-><init>(Lcom/tkay/expressad/exoplayer/h/ac;B)V

    .line 118
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/ac;->o:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 119
    aput-object v2, p3, v1

    const/4 v2, 0x1

    .line 120
    aput-boolean v2, p4, v1

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    return-wide p5
.end method

.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(JZ)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r$a;J)V
    .locals 0

    .line 95
    invoke-interface {p1, p0}, Lcom/tkay/expressad/exoplayer/h/r$a;->a(Lcom/tkay/expressad/exoplayer/h/r;)V

    return-void
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJ)V
    .locals 21

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 39
    move-object/from16 v8, p1

    check-cast v8, Lcom/tkay/expressad/exoplayer/h/ac$b;

    .line 3196
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v8, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 3207
    invoke-static {v8}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v3

    int-to-long v3, v3

    move-wide/from16 v16, v3

    const/4 v3, 0x1

    const/4 v4, -0x1

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-wide/16 v18, 0x0

    move-object/from16 v20, v8

    move-wide/from16 v8, v18

    .line 3196
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    .line 3208
    invoke-static/range {v20 .. v20}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v1

    iput v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->h:I

    .line 3209
    invoke-static/range {v20 .. v20}, Lcom/tkay/expressad/exoplayer/h/ac$b;->b(Lcom/tkay/expressad/exoplayer/h/ac$b;)[B

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->g:[B

    const/4 v1, 0x1

    .line 3210
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    .line 3211
    iput-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->f:Z

    return-void
.end method

.method public final synthetic a(Lcom/tkay/expressad/exoplayer/j/t$c;JJZ)V
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v12, p2

    move-wide/from16 v14, p4

    .line 39
    move-object/from16 v3, p1

    check-cast v3, Lcom/tkay/expressad/exoplayer/h/ac$b;

    .line 2217
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v2, v3, Lcom/tkay/expressad/exoplayer/h/ac$b;->a:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v10, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    .line 2228
    invoke-static {v3}, Lcom/tkay/expressad/exoplayer/h/ac$b;->a(Lcom/tkay/expressad/exoplayer/h/ac$b;)I

    move-result v3

    int-to-long v3, v3

    move-wide/from16 v16, v3

    const/4 v3, 0x1

    const/4 v4, -0x1

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    const-wide/16 v8, 0x0

    .line 2217
    invoke-virtual/range {v1 .. v17}, Lcom/tkay/expressad/exoplayer/h/t$a;->b(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJJJ)V

    return-void
.end method

.method public final a_(J)V
    .locals 0

    return-void
.end method

.method public final b(J)J
    .locals 2

    const/4 v0, 0x0

    .line 180
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->o:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 181
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/ac;->o:Ljava/util/ArrayList;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/h/ac$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/h/ac$a;->a()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-wide p1
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/h/af;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->n:Lcom/tkay/expressad/exoplayer/h/af;

    return-object v0
.end method

.method public final c()J
    .locals 2

    .line 161
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->d:Z

    if-nez v0, :cond_0

    .line 162
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/t$a;->c()V

    const/4 v0, 0x1

    .line 163
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->d:Z

    :cond_0
    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    return-wide v0
.end method

.method public final c(J)Z
    .locals 17

    move-object/from16 v0, p0

    .line 138
    iget-boolean v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    if-nez v1, :cond_1

    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 141
    :cond_0
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    new-instance v2, Lcom/tkay/expressad/exoplayer/h/ac$b;

    iget-object v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->j:Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/h/ac;->k:Lcom/tkay/expressad/exoplayer/j/h$a;

    .line 143
    invoke-interface {v4}, Lcom/tkay/expressad/exoplayer/j/h$a;->a()Lcom/tkay/expressad/exoplayer/j/h;

    move-result-object v4

    invoke-direct {v2, v3, v4}, Lcom/tkay/expressad/exoplayer/h/ac$b;-><init>(Lcom/tkay/expressad/exoplayer/j/k;Lcom/tkay/expressad/exoplayer/j/h;)V

    iget v3, v0, Lcom/tkay/expressad/exoplayer/h/ac;->l:I

    .line 142
    invoke-virtual {v1, v2, v0, v3}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$c;Lcom/tkay/expressad/exoplayer/j/t$a;I)J

    move-result-wide v15

    .line 146
    iget-object v4, v0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    iget-object v5, v0, Lcom/tkay/expressad/exoplayer/h/ac;->j:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 v6, 0x1

    const/4 v7, -0x1

    iget-object v8, v0, Lcom/tkay/expressad/exoplayer/h/ac;->b:Lcom/tkay/expressad/exoplayer/m;

    const/4 v9, 0x0

    const/4 v10, 0x0

    const-wide/16 v11, 0x0

    iget-wide v13, v0, Lcom/tkay/expressad/exoplayer/h/ac;->p:J

    invoke-virtual/range {v4 .. v16}, Lcom/tkay/expressad/exoplayer/h/t$a;->a(Lcom/tkay/expressad/exoplayer/j/k;IILcom/tkay/expressad/exoplayer/m;ILjava/lang/Object;JJJ)V

    const/4 v1, 0x1

    return v1

    :cond_1
    :goto_0
    const/4 v1, 0x0

    return v1
.end method

.method public final d()J
    .locals 2

    .line 175
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    if-eqz v0, :cond_0

    const-wide/high16 v0, -0x8000000000000000L

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final e()J
    .locals 2

    .line 170
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->e:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/t;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0

    :cond_1
    :goto_0
    const-wide/high16 v0, -0x8000000000000000L

    return-wide v0
.end method

.method public final f()V
    .locals 2

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->a:Lcom/tkay/expressad/exoplayer/j/t;

    const/4 v1, 0x0

    .line 1201
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/j/t;->a(Lcom/tkay/expressad/exoplayer/j/t$d;)V

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/ac;->m:Lcom/tkay/expressad/exoplayer/h/t$a;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/t$a;->b()V

    return-void
.end method
