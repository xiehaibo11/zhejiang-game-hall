.class public final Lcom/tkay/expressad/exoplayer/h/ab;
.super Lcom/tkay/expressad/exoplayer/ae;


# static fields
.field private static final b:Ljava/lang/Object;


# instance fields
.field private final c:J

.field private final d:J

.field private final e:J

.field private final f:J

.field private final g:J

.field private final h:J

.field private final i:Z

.field private final j:Z

.field private final k:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/h/ab;->b:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>(JJZZLjava/lang/Object;)V
    .locals 2

    .line 132
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/ae;-><init>()V

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 133
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/ab;->c:J

    .line 134
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/h/ab;->d:J

    .line 135
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/ab;->e:J

    .line 136
    iput-wide p3, p0, Lcom/tkay/expressad/exoplayer/h/ab;->f:J

    const-wide/16 p1, 0x0

    .line 137
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/ab;->g:J

    .line 138
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/h/ab;->h:J

    .line 139
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/h/ab;->i:Z

    .line 140
    iput-boolean p6, p0, Lcom/tkay/expressad/exoplayer/h/ab;->j:Z

    .line 141
    iput-object p7, p0, Lcom/tkay/expressad/exoplayer/h/ab;->k:Ljava/lang/Object;

    return-void
.end method

.method private constructor <init>(JJZZLjava/lang/Object;B)V
    .locals 0

    .line 94
    invoke-direct/range {p0 .. p7}, Lcom/tkay/expressad/exoplayer/h/ab;-><init>(JJZZLjava/lang/Object;)V

    return-void
.end method

.method private constructor <init>(JZZ)V
    .locals 6

    const/4 v5, 0x0

    move-object v0, p0

    move-wide v1, p1

    move v3, p3

    move v4, p4

    .line 49
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/h/ab;-><init>(JZZLjava/lang/Object;)V

    return-void
.end method

.method public constructor <init>(JZZLjava/lang/Object;)V
    .locals 9

    const/4 v8, 0x0

    move-object v0, p0

    move-wide v1, p1

    move-wide v3, p1

    move v5, p3

    move v6, p4

    move-object v7, p5

    .line 62
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/exoplayer/h/ab;-><init>(JJZZLjava/lang/Object;B)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)I
    .locals 1

    .line 194
    sget-object v0, Lcom/tkay/expressad/exoplayer/h/ab;->b:Ljava/lang/Object;

    invoke-virtual {v0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 p1, -0x1

    return p1
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;
    .locals 7

    const/4 v0, 0x1

    .line 187
    invoke-static {p1, v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(II)I

    if-eqz p3, :cond_0

    .line 188
    sget-object p1, Lcom/tkay/expressad/exoplayer/h/ab;->b:Ljava/lang/Object;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    move-object v2, p1

    const/4 v1, 0x0

    .line 189
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/h/ab;->e:J

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/h/ab;->g:J

    neg-long v5, v5

    move-object v0, p2

    invoke-virtual/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/ae$a;->a(Ljava/lang/Object;Ljava/lang/Object;JJ)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p1

    return-object p1
.end method

.method public final a(ILcom/tkay/expressad/exoplayer/ae$b;ZJ)Lcom/tkay/expressad/exoplayer/ae$b;
    .locals 16

    move-object/from16 v0, p0

    const/4 v1, 0x1

    move/from16 v2, p1

    .line 152
    invoke-static {v2, v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(II)I

    if-eqz p3, :cond_0

    .line 153
    iget-object v1, v0, Lcom/tkay/expressad/exoplayer/h/ab;->k:Ljava/lang/Object;

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    move-object v3, v1

    .line 154
    iget-wide v1, v0, Lcom/tkay/expressad/exoplayer/h/ab;->h:J

    .line 155
    iget-boolean v4, v0, Lcom/tkay/expressad/exoplayer/h/ab;->j:Z

    const-wide v5, -0x7fffffffffffffffL    # -4.9E-324

    if-eqz v4, :cond_2

    const-wide/16 v7, 0x0

    cmp-long v4, p4, v7

    if-eqz v4, :cond_2

    .line 156
    iget-wide v7, v0, Lcom/tkay/expressad/exoplayer/h/ab;->f:J

    cmp-long v4, v7, v5

    if-nez v4, :cond_1

    :goto_1
    move-wide v10, v5

    goto :goto_2

    :cond_1
    add-long v1, v1, p4

    cmp-long v4, v1, v7

    if-lez v4, :cond_2

    goto :goto_1

    :cond_2
    move-wide v10, v1

    .line 167
    :goto_2
    iget-wide v4, v0, Lcom/tkay/expressad/exoplayer/h/ab;->c:J

    iget-wide v6, v0, Lcom/tkay/expressad/exoplayer/h/ab;->d:J

    iget-boolean v8, v0, Lcom/tkay/expressad/exoplayer/h/ab;->i:Z

    iget-boolean v9, v0, Lcom/tkay/expressad/exoplayer/h/ab;->j:Z

    iget-wide v12, v0, Lcom/tkay/expressad/exoplayer/h/ab;->f:J

    iget-wide v14, v0, Lcom/tkay/expressad/exoplayer/h/ab;->g:J

    move-object/from16 v2, p2

    invoke-virtual/range {v2 .. v15}, Lcom/tkay/expressad/exoplayer/ae$b;->a(Ljava/lang/Object;JJZZJJJ)Lcom/tkay/expressad/exoplayer/ae$b;

    move-result-object v1

    return-object v1
.end method

.method public final b()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final c()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method
