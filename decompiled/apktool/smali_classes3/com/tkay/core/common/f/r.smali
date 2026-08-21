.class public final Lcom/tkay/core/common/f/r;
.super Lcom/tkay/core/common/f/h;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f/h<",
        "Lcom/tkay/core/common/f/t;",
        ">;"
    }
.end annotation


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2


# instance fields
.field public R:I

.field public S:J

.field T:Ljava/lang/String;

.field private U:Ljava/lang/String;

.field private V:Ljava/lang/String;

.field private W:Ljava/lang/String;

.field private X:Ljava/lang/String;

.field private Y:Ljava/lang/String;

.field private Z:Ljava/lang/String;

.field private aa:Ljava/lang/String;

.field private ab:Ljava/lang/String;

.field private ac:Ljava/lang/String;

.field private ad:Ljava/lang/String;

.field private ae:J

.field private af:I

.field private ag:Ljava/lang/String;

.field private ah:Ljava/lang/String;

.field private ai:Ljava/lang/String;

.field private aj:Ljava/lang/String;

.field private ak:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 216
    invoke-direct {p0}, Lcom/tkay/core/common/f/h;-><init>()V

    const-string v0, ""

    .line 233
    iput-object v0, p0, Lcom/tkay/core/common/f/r;->T:Ljava/lang/String;

    return-void
.end method

.method private Z()Ljava/lang/String;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ak:Ljava/lang/String;

    return-object v0
.end method

.method private aa()I
    .locals 1

    .line 191
    iget v0, p0, Lcom/tkay/core/common/f/r;->R:I

    return v0
.end method

.method private ab()J
    .locals 2

    .line 199
    iget-wide v0, p0, Lcom/tkay/core/common/f/r;->S:J

    return-wide v0
.end method

.method private ac()J
    .locals 2

    .line 208
    iget-wide v0, p0, Lcom/tkay/core/common/f/r;->ae:J

    return-wide v0
.end method

.method private b(Lcom/tkay/core/common/f/t;)Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/t;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 237
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 240
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 242
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "0"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    .line 246
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "2"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_c

    .line 247
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->r()Ljava/lang/String;

    move-result-object v2

    const/4 v5, -0x1

    .line 249
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v6

    const/4 v7, 0x2

    sparse-switch v6, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v6, "728x90"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v7

    goto :goto_0

    :sswitch_1
    const-string v6, "320x90"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v4

    goto :goto_0

    :sswitch_2
    const-string v6, "320x50"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x3

    goto :goto_0

    :sswitch_3
    const-string v6, "300x250"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v3

    :cond_0
    :goto_0
    if-eqz v5, :cond_5

    if-eq v5, v3, :cond_3

    if-eq v5, v7, :cond_1

    .line 285
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    .line 287
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 273
    :cond_1
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 274
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 276
    :cond_2
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 277
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 262
    :cond_3
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 263
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 265
    :cond_4
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 266
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 251
    :cond_5
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_6

    .line 252
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :goto_1
    move v5, v3

    :goto_2
    move v6, v5

    goto :goto_4

    .line 254
    :cond_6
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 255
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_7
    :goto_3
    move v6, v3

    move v5, v4

    goto :goto_4

    :cond_8
    move v5, v4

    goto :goto_2

    :goto_4
    if-nez v5, :cond_a

    .line 293
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_9

    .line 294
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_9
    move v6, v4

    :cond_a
    :goto_5
    if-nez v6, :cond_b

    .line 301
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, " url,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 304
    :cond_b
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_d

    .line 305
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_6

    :cond_c
    move v6, v3

    .line 310
    :cond_d
    :goto_6
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v5, "1"

    invoke-static {v2, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v5, "video_u,"

    const-string v7, "icon_u,"

    const-string v8, "full_u,"

    if-eqz v2, :cond_12

    .line 311
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_e

    .line 312
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_7

    .line 314
    :cond_e
    invoke-virtual {v1, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 318
    :goto_7
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_f

    .line 319
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 322
    :cond_f
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_10

    .line 323
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 325
    :cond_10
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 329
    :goto_8
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_11

    .line 330
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_9

    .line 332
    :cond_11
    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 337
    :cond_12
    :goto_9
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v9

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v9, "3"

    invoke-static {v2, v9}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_17

    .line 338
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_13

    .line 339
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_a

    .line 341
    :cond_13
    invoke-virtual {v1, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 345
    :goto_a
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_14

    .line 346
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 349
    :cond_14
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_15

    .line 350
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_b

    .line 352
    :cond_15
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 356
    :goto_b
    iget v2, p0, Lcom/tkay/core/common/f/r;->v:I

    if-ne v2, v3, :cond_17

    .line 357
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_16

    .line 358
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_c

    .line 360
    :cond_16
    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 368
    :cond_17
    :goto_c
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v2, "4"

    invoke-static {p1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1a

    .line 369
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_18

    .line 370
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 373
    :cond_18
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_19

    .line 374
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_d

    .line 376
    :cond_19
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    :cond_1a
    :goto_d
    if-eqz v6, :cond_1b

    return-object v0

    .line 385
    :cond_1b
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    sub-int/2addr p1, v3

    invoke-virtual {v1, v4, p1}, Ljava/lang/StringBuffer;->substring(II)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/r;->T:Ljava/lang/String;

    const/4 p1, 0x0

    return-object p1

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x59df59c2 -> :sswitch_2
        0x59df5a3e -> :sswitch_1
        0x60b65fb2 -> :sswitch_0
    .end sparse-switch
.end method

.method private b(J)V
    .locals 0

    .line 203
    iput-wide p1, p0, Lcom/tkay/core/common/f/r;->S:J

    return-void
.end method

.method private g(I)V
    .locals 0

    .line 195
    iput p1, p0, Lcom/tkay/core/common/f/r;->R:I

    return-void
.end method


# virtual methods
.method public final E(Ljava/lang/String;)V
    .locals 0

    .line 82
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    return-void
.end method

.method public final F(Ljava/lang/String;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    return-void
.end method

.method public final G(Ljava/lang/String;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    return-void
.end method

.method public final H(Ljava/lang/String;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->U:Ljava/lang/String;

    return-void
.end method

.method public final I(Ljava/lang/String;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->V:Ljava/lang/String;

    return-void
.end method

.method public final J(Ljava/lang/String;)V
    .locals 0

    .line 131
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->W:Ljava/lang/String;

    return-void
.end method

.method public final K(Ljava/lang/String;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->X:Ljava/lang/String;

    return-void
.end method

.method public final L(Ljava/lang/String;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->Y:Ljava/lang/String;

    return-void
.end method

.method public final M(Ljava/lang/String;)V
    .locals 0

    .line 155
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->Z:Ljava/lang/String;

    return-void
.end method

.method public final N()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    return-object v0
.end method

.method public final N(Ljava/lang/String;)V
    .locals 0

    .line 163
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->aa:Ljava/lang/String;

    return-void
.end method

.method public final O()I
    .locals 1

    .line 102
    iget v0, p0, Lcom/tkay/core/common/f/r;->af:I

    return v0
.end method

.method public final O(Ljava/lang/String;)V
    .locals 0

    .line 171
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ab:Ljava/lang/String;

    return-void
.end method

.method public final P()Ljava/lang/String;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->U:Ljava/lang/String;

    return-object v0
.end method

.method public final P(Ljava/lang/String;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ac:Ljava/lang/String;

    return-void
.end method

.method public final Q()Ljava/lang/String;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->V:Ljava/lang/String;

    return-object v0
.end method

.method public final Q(Ljava/lang/String;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ad:Ljava/lang/String;

    return-void
.end method

.method public final R()Ljava/lang/String;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->W:Ljava/lang/String;

    return-object v0
.end method

.method public final R(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 408
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/tkay/core/common/f/r;->ak:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 412
    invoke-virtual {v0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 413
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 414
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 415
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "\\{"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\\}"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_0
    return-object p1
.end method

.method public final S()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->X:Ljava/lang/String;

    return-object v0
.end method

.method public final T()Ljava/lang/String;
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->Y:Ljava/lang/String;

    return-object v0
.end method

.method public final U()Ljava/lang/String;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->Z:Ljava/lang/String;

    return-object v0
.end method

.method public final V()Ljava/lang/String;
    .locals 1

    .line 159
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->aa:Ljava/lang/String;

    return-object v0
.end method

.method public final W()Ljava/lang/String;
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ab:Ljava/lang/String;

    return-object v0
.end method

.method public final X()Ljava/lang/String;
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ac:Ljava/lang/String;

    return-object v0
.end method

.method public final Y()Ljava/lang/String;
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ad:Ljava/lang/String;

    return-object v0
.end method

.method public final a()Ljava/lang/String;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 106
    iput p1, p0, Lcom/tkay/core/common/f/r;->af:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 212
    iput-wide p1, p0, Lcom/tkay/core/common/f/r;->ae:J

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ak:Ljava/lang/String;

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/t;)Z
    .locals 5

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 224
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/tkay/core/common/f/r;->ae:J

    sub-long/2addr v1, v3

    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->A()J

    move-result-wide v3

    cmp-long p1, v1, v3

    if-lez p1, :cond_1

    return v0

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    return-object v0
.end method

.method public final synthetic b(Lcom/tkay/core/common/f/j;)Ljava/util/List;
    .locals 10

    .line 20
    check-cast p1, Lcom/tkay/core/common/f/t;

    .line 1237
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 1240
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 1242
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "0"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    .line 1246
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "2"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_c

    .line 1247
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->r()Ljava/lang/String;

    move-result-object v2

    const/4 v5, -0x1

    .line 1249
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v6

    const/4 v7, 0x2

    sparse-switch v6, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v6, "728x90"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v7

    goto :goto_0

    :sswitch_1
    const-string v6, "320x90"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v4

    goto :goto_0

    :sswitch_2
    const-string v6, "320x50"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v5, 0x3

    goto :goto_0

    :sswitch_3
    const-string v6, "300x250"

    invoke-virtual {v2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    move v5, v3

    :cond_0
    :goto_0
    if-eqz v5, :cond_5

    if-eq v5, v3, :cond_3

    if-eq v5, v7, :cond_1

    .line 1285
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    .line 1287
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1273
    :cond_1
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 1274
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->aj:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1276
    :cond_2
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 1277
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 1262
    :cond_3
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 1263
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1265
    :cond_4
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 1266
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 1251
    :cond_5
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_6

    .line 1252
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->ah:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :goto_1
    move v5, v3

    :goto_2
    move v6, v5

    goto :goto_4

    .line 1254
    :cond_6
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_8

    .line 1255
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_7
    :goto_3
    move v6, v3

    move v5, v4

    goto :goto_4

    :cond_8
    move v5, v4

    goto :goto_2

    :goto_4
    if-nez v5, :cond_a

    .line 1293
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_9

    .line 1294
    iget-object v5, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_9
    move v6, v4

    :cond_a
    :goto_5
    if-nez v6, :cond_b

    .line 1301
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, " url,"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 1304
    :cond_b
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_d

    .line 1305
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_6

    :cond_c
    move v6, v3

    .line 1310
    :cond_d
    :goto_6
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v5, "1"

    invoke-static {v2, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v5, "video_u,"

    const-string v7, "icon_u,"

    const-string v8, "full_u,"

    if-eqz v2, :cond_12

    .line 1311
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_e

    .line 1312
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_7

    .line 1314
    :cond_e
    invoke-virtual {v1, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1318
    :goto_7
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_f

    .line 1319
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1322
    :cond_f
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_10

    .line 1323
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 1325
    :cond_10
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1329
    :goto_8
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_11

    .line 1330
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_9

    .line 1332
    :cond_11
    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1337
    :cond_12
    :goto_9
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result v9

    invoke-virtual {v2, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v9, "3"

    invoke-static {v2, v9}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_17

    .line 1338
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_13

    .line 1339
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_a

    .line 1341
    :cond_13
    invoke-virtual {v1, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1345
    :goto_a
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_14

    .line 1346
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1349
    :cond_14
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_15

    .line 1350
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_b

    .line 1352
    :cond_15
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1356
    :goto_b
    iget v2, p0, Lcom/tkay/core/common/f/r;->v:I

    if-ne v2, v3, :cond_17

    .line 1357
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_16

    .line 1358
    iget-object v2, p0, Lcom/tkay/core/common/f/r;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_c

    .line 1360
    :cond_16
    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    .line 1368
    :cond_17
    :goto_c
    invoke-virtual {p1}, Lcom/tkay/core/common/f/t;->t()I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v2, "4"

    invoke-static {p1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1a

    .line 1369
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_18

    .line 1370
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1373
    :cond_18
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_19

    .line 1374
    iget-object p1, p0, Lcom/tkay/core/common/f/r;->n:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_d

    .line 1376
    :cond_19
    invoke-virtual {v1, v8}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v6, v4

    :cond_1a
    :goto_d
    if-eqz v6, :cond_1b

    return-object v0

    .line 1385
    :cond_1b
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    sub-int/2addr p1, v3

    invoke-virtual {v1, v4, p1}, Ljava/lang/StringBuffer;->substring(II)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/r;->T:Ljava/lang/String;

    const/4 p1, 0x0

    return-object p1

    nop

    :sswitch_data_0
    .sparse-switch
        -0x215ddd38 -> :sswitch_3
        0x59df59c2 -> :sswitch_2
        0x59df5a3e -> :sswitch_1
        0x60b65fb2 -> :sswitch_0
    .end sparse-switch
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/tkay/core/common/f/r;->ag:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->ai:Ljava/lang/String;

    return-object v0
.end method

.method public final d()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final m()Ljava/lang/String;
    .locals 1

    .line 392
    iget-object v0, p0, Lcom/tkay/core/common/f/r;->T:Ljava/lang/String;

    return-object v0
.end method
