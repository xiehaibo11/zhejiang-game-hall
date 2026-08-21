.class public final Lcom/tkay/expressad/exoplayer/g/c/f$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/g/c/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "b"
.end annotation


# instance fields
.field public final a:J

.field public final b:Z

.field public final c:Z

.field public final d:Z

.field public final e:J

.field public final f:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/g/c/f$a;",
            ">;"
        }
    .end annotation
.end field

.field public final g:Z

.field public final h:J

.field public final i:I

.field public final j:I

.field public final k:I


# direct methods
.method private constructor <init>(JZZZLjava/util/List;JZJIII)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(JZZZ",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/g/c/f$a;",
            ">;JZJIII)V"
        }
    .end annotation

    .line 93
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 94
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->a:J

    .line 95
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->b:Z

    .line 96
    iput-boolean p4, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->c:Z

    .line 97
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->d:Z

    .line 98
    invoke-static {p6}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    .line 99
    iput-wide p7, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->e:J

    .line 100
    iput-boolean p9, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->g:Z

    .line 101
    iput-wide p10, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->h:J

    .line 102
    iput p12, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->i:I

    .line 103
    iput p13, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->j:I

    .line 104
    iput p14, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->k:I

    return-void
.end method

.method private constructor <init>(Landroid/os/Parcel;)V
    .locals 6

    .line 107
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 108
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->a:J

    .line 109
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->b:Z

    .line 110
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-ne v0, v2, :cond_1

    move v0, v2

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->c:Z

    .line 111
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-ne v0, v2, :cond_2

    move v0, v2

    goto :goto_2

    :cond_2
    move v0, v1

    :goto_2
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->d:Z

    .line 112
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    .line 113
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, v0}, Ljava/util/ArrayList;-><init>(I)V

    move v4, v1

    :goto_3
    if-ge v4, v0, :cond_3

    .line 115
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/g/c/f$a;->a(Landroid/os/Parcel;)Lcom/tkay/expressad/exoplayer/g/c/f$a;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, 0x1

    goto :goto_3

    .line 117
    :cond_3
    invoke-static {v3}, Ljava/util/Collections;->unmodifiableList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    .line 118
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->e:J

    .line 119
    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    if-ne v0, v2, :cond_4

    move v1, v2

    :cond_4
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->g:Z

    .line 120
    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->h:J

    .line 121
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->i:I

    .line 122
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->j:I

    .line 123
    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->k:I

    return-void
.end method

.method static synthetic a(Landroid/os/Parcel;)Lcom/tkay/expressad/exoplayer/g/c/f$b;
    .locals 1

    .line 1190
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/c/f$b;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/exoplayer/g/c/f$b;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/c/f$b;
    .locals 21

    .line 2127
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v1

    .line 2129
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    and-int/lit16 v0, v0, 0x80

    const/4 v4, 0x0

    if-eqz v0, :cond_0

    const/4 v5, 0x1

    goto :goto_0

    :cond_0
    move v5, v4

    .line 2133
    :goto_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-nez v5, :cond_9

    .line 2140
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    and-int/lit16 v9, v8, 0x80

    if-eqz v9, :cond_1

    const/4 v9, 0x1

    goto :goto_1

    :cond_1
    move v9, v4

    :goto_1
    and-int/lit8 v10, v8, 0x40

    if-eqz v10, :cond_2

    const/4 v10, 0x1

    goto :goto_2

    :cond_2
    move v10, v4

    :goto_2
    const/16 v11, 0x20

    and-int/2addr v8, v11

    if-eqz v8, :cond_3

    const/4 v8, 0x1

    goto :goto_3

    :cond_3
    move v8, v4

    :goto_3
    if-eqz v10, :cond_4

    .line 2145
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v12

    goto :goto_4

    :cond_4
    const-wide v12, -0x7fffffffffffffffL    # -4.9E-324

    :goto_4
    if-nez v10, :cond_6

    .line 2148
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 2149
    new-instance v14, Ljava/util/ArrayList;

    invoke-direct {v14, v0}, Ljava/util/ArrayList;-><init>(I)V

    move v15, v4

    :goto_5
    if-ge v15, v0, :cond_5

    .line 2151
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    .line 2152
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    .line 2153
    new-instance v11, Lcom/tkay/expressad/exoplayer/g/c/f$a;

    invoke-direct {v11, v3, v6, v7, v4}, Lcom/tkay/expressad/exoplayer/g/c/f$a;-><init>(IJB)V

    invoke-virtual {v14, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v15, v15, 0x1

    const/16 v11, 0x20

    goto :goto_5

    :cond_5
    move-object v0, v14

    :cond_6
    if-eqz v8, :cond_8

    .line 2157
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    int-to-long v6, v3

    const-wide/16 v14, 0x80

    and-long/2addr v14, v6

    const-wide/16 v16, 0x0

    cmp-long v3, v14, v16

    if-eqz v3, :cond_7

    const/4 v3, 0x1

    goto :goto_6

    :cond_7
    move v3, v4

    :goto_6
    const-wide/16 v14, 0x1

    and-long/2addr v6, v14

    const/16 v4, 0x20

    shl-long/2addr v6, v4

    .line 2159
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v14

    or-long/2addr v6, v14

    const-wide/16 v14, 0x3e8

    mul-long/2addr v6, v14

    const-wide/16 v14, 0x5a

    .line 2160
    div-long/2addr v6, v14

    move v4, v3

    goto :goto_7

    :cond_8
    const-wide v6, -0x7fffffffffffffffL    # -4.9E-324

    .line 2162
    :goto_7
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v3

    .line 2163
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    .line 2164
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v11

    move-wide/from16 v16, v6

    move v14, v11

    move-object v6, v0

    move-wide/from16 v18, v12

    move v12, v3

    move v13, v8

    move-wide/from16 v7, v18

    move/from16 v20, v9

    move v9, v4

    move/from16 v4, v20

    goto :goto_8

    :cond_9
    move-object v6, v0

    move v9, v4

    move v10, v9

    move v12, v10

    move v13, v12

    move v14, v13

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v16, -0x7fffffffffffffffL    # -4.9E-324

    .line 2166
    :goto_8
    new-instance v15, Lcom/tkay/expressad/exoplayer/g/c/f$b;

    move-object v0, v15

    move v3, v5

    move v5, v10

    move-wide/from16 v10, v16

    invoke-direct/range {v0 .. v14}, Lcom/tkay/expressad/exoplayer/g/c/f$b;-><init>(JZZZLjava/util/List;JZJIII)V

    return-object v15
.end method

.method private static synthetic a(Lcom/tkay/expressad/exoplayer/g/c/f$b;Landroid/os/Parcel;)V
    .locals 3

    .line 2172
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->a:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2173
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->b:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2174
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->c:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2175
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->d:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2176
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    .line 2177
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 2179
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/g/c/f$a;

    invoke-static {v2, p1}, Lcom/tkay/expressad/exoplayer/g/c/f$a;->a(Lcom/tkay/expressad/exoplayer/g/c/f$a;Landroid/os/Parcel;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 2181
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->e:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2182
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->g:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 2183
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->h:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 2184
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->i:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2185
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->j:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 2186
    iget p0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->k:I

    invoke-virtual {p1, p0}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method

.method private static b(Lcom/tkay/expressad/exoplayer/k/s;)Lcom/tkay/expressad/exoplayer/g/c/f$b;
    .locals 21

    .line 127
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v1

    .line 129
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    and-int/lit16 v0, v0, 0x80

    const/4 v4, 0x0

    if-eqz v0, :cond_0

    const/4 v5, 0x1

    goto :goto_0

    :cond_0
    move v5, v4

    .line 133
    :goto_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-nez v5, :cond_9

    .line 140
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    and-int/lit16 v9, v8, 0x80

    if-eqz v9, :cond_1

    const/4 v9, 0x1

    goto :goto_1

    :cond_1
    move v9, v4

    :goto_1
    and-int/lit8 v10, v8, 0x40

    if-eqz v10, :cond_2

    const/4 v10, 0x1

    goto :goto_2

    :cond_2
    move v10, v4

    :goto_2
    const/16 v11, 0x20

    and-int/2addr v8, v11

    if-eqz v8, :cond_3

    const/4 v8, 0x1

    goto :goto_3

    :cond_3
    move v8, v4

    :goto_3
    if-eqz v10, :cond_4

    .line 145
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v12

    goto :goto_4

    :cond_4
    const-wide v12, -0x7fffffffffffffffL    # -4.9E-324

    :goto_4
    if-nez v10, :cond_6

    .line 148
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v0

    .line 149
    new-instance v14, Ljava/util/ArrayList;

    invoke-direct {v14, v0}, Ljava/util/ArrayList;-><init>(I)V

    move v15, v4

    :goto_5
    if-ge v15, v0, :cond_5

    .line 151
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    .line 152
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v6

    .line 153
    new-instance v11, Lcom/tkay/expressad/exoplayer/g/c/f$a;

    invoke-direct {v11, v3, v6, v7, v4}, Lcom/tkay/expressad/exoplayer/g/c/f$a;-><init>(IJB)V

    invoke-virtual {v14, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v15, v15, 0x1

    const/16 v11, 0x20

    goto :goto_5

    :cond_5
    move-object v0, v14

    :cond_6
    if-eqz v8, :cond_8

    .line 157
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v3

    int-to-long v6, v3

    const-wide/16 v14, 0x80

    and-long/2addr v14, v6

    const-wide/16 v16, 0x0

    cmp-long v3, v14, v16

    if-eqz v3, :cond_7

    const/4 v3, 0x1

    goto :goto_6

    :cond_7
    move v3, v4

    :goto_6
    const-wide/16 v14, 0x1

    and-long/2addr v6, v14

    const/16 v4, 0x20

    shl-long/2addr v6, v4

    .line 159
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->h()J

    move-result-wide v14

    or-long/2addr v6, v14

    const-wide/16 v14, 0x3e8

    mul-long/2addr v6, v14

    const-wide/16 v14, 0x5a

    .line 160
    div-long/2addr v6, v14

    move v4, v3

    goto :goto_7

    :cond_8
    const-wide v6, -0x7fffffffffffffffL    # -4.9E-324

    .line 162
    :goto_7
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->e()I

    move-result v3

    .line 163
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v8

    .line 164
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/expressad/exoplayer/k/s;->d()I

    move-result v11

    move-wide/from16 v16, v6

    move v14, v11

    move-object v6, v0

    move-wide/from16 v18, v12

    move v12, v3

    move v13, v8

    move-wide/from16 v7, v18

    move/from16 v20, v9

    move v9, v4

    move/from16 v4, v20

    goto :goto_8

    :cond_9
    move-object v6, v0

    move v9, v4

    move v10, v9

    move v12, v10

    move v13, v12

    move v14, v13

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    const-wide v16, -0x7fffffffffffffffL    # -4.9E-324

    .line 166
    :goto_8
    new-instance v15, Lcom/tkay/expressad/exoplayer/g/c/f$b;

    move-object v0, v15

    move v3, v5

    move v5, v10

    move-wide/from16 v10, v16

    invoke-direct/range {v0 .. v14}, Lcom/tkay/expressad/exoplayer/g/c/f$b;-><init>(JZZZLjava/util/List;JZJIII)V

    return-object v15
.end method

.method private b(Landroid/os/Parcel;)V
    .locals 3

    .line 172
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->a:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 173
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->b:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 174
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->c:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 175
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->d:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    .line 177
    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 179
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->f:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/exoplayer/g/c/f$a;

    invoke-static {v2, p1}, Lcom/tkay/expressad/exoplayer/g/c/f$a;->a(Lcom/tkay/expressad/exoplayer/g/c/f$a;Landroid/os/Parcel;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 181
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->e:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 182
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->g:Z

    int-to-byte v0, v0

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeByte(B)V

    .line 183
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->h:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    .line 184
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->i:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 185
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->j:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    .line 186
    iget v0, p0, Lcom/tkay/expressad/exoplayer/g/c/f$b;->k:I

    invoke-virtual {p1, v0}, Landroid/os/Parcel;->writeInt(I)V

    return-void
.end method

.method private static c(Landroid/os/Parcel;)Lcom/tkay/expressad/exoplayer/g/c/f$b;
    .locals 1

    .line 190
    new-instance v0, Lcom/tkay/expressad/exoplayer/g/c/f$b;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/exoplayer/g/c/f$b;-><init>(Landroid/os/Parcel;)V

    return-object v0
.end method
