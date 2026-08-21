.class public abstract Lcom/tkay/core/common/f/z;
.super Lcom/tkay/core/common/f/h;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f/h<",
        "Lcom/tkay/core/common/f/aa;",
        ">;"
    }
.end annotation


# static fields
.field public static final X:I = 0x1

.field public static final Y:I = 0x2

.field public static final Z:I = 0x3

.field public static final aa:I = 0x4

.field public static final ab:I = 0x5

.field public static final ac:I = 0x6


# instance fields
.field private R:I

.field private S:I

.field T:J

.field U:Ljava/lang/String;

.field V:Ljava/lang/String;

.field W:I

.field private a:I

.field ad:Ljava/lang/String;

.field ae:Ljava/lang/String;

.field af:Lcom/tkay/core/common/f/ab;

.field ag:I

.field ah:Ljava/lang/String;

.field ai:J

.field aj:J

.field ak:J

.field al:Ljava/lang/String;

.field private am:Ljava/lang/String;

.field private an:Ljava/lang/String;

.field private ao:Ljava/lang/String;

.field private ap:Ljava/lang/String;

.field private aq:Ljava/lang/String;

.field private ar:I

.field private as:I

.field private b:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 17
    invoke-direct {p0}, Lcom/tkay/core/common/f/h;-><init>()V

    const-string v0, ""

    .line 232
    iput-object v0, p0, Lcom/tkay/core/common/f/z;->al:Ljava/lang/String;

    return-void
.end method

.method private a()I
    .locals 1

    .line 160
    iget v0, p0, Lcom/tkay/core/common/f/z;->ag:I

    return v0
.end method

.method private a(Lcom/tkay/core/common/f/aa;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/aa;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 236
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 238
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 252
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "1"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    const-string v4, "full_u,"

    const/4 v5, 0x0

    if-eqz v2, :cond_5

    .line 253
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v2

    if-nez v2, :cond_3

    .line 254
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 255
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 258
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 259
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 262
    :cond_1
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 263
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 265
    :cond_2
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    goto :goto_1

    :cond_3
    :goto_0
    move v2, v3

    .line 269
    :goto_1
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 270
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_4
    const-string v2, "video_u,"

    .line 272
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    goto :goto_2

    :cond_5
    move v2, v3

    .line 277
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    const-string v7, "3"

    invoke-static {v6, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_a

    .line 278
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v6

    if-nez v6, :cond_9

    .line 279
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    .line 280
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 283
    :cond_6
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_7

    .line 284
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 287
    :cond_7
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_8

    .line 288
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 290
    :cond_8
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    .line 295
    :cond_9
    :goto_3
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->E()Z

    move-result v6

    if-eqz v6, :cond_a

    .line 296
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 301
    :cond_a
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "2"

    invoke-static {v6, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_13

    .line 1208
    iget v6, p0, Lcom/tkay/core/common/f/z;->W:I

    if-eq v6, v3, :cond_10

    const/4 v7, 0x2

    if-eq v6, v7, :cond_f

    const/4 v7, 0x3

    if-eq v6, v7, :cond_b

    const/4 v7, 0x4

    if-eq v6, v7, :cond_f

    goto :goto_5

    .line 313
    :cond_b
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->r()Ljava/lang/String;

    move-result-object v6

    const-string v7, "320x50"

    invoke-static {v7, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_d

    .line 314
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_c

    .line 315
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_c
    const-string v2, "icon_u,"

    .line 317
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 321
    :cond_d
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_e

    .line 322
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 324
    :cond_e
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 331
    :cond_f
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->ad:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_12

    const-string v2, "img_list,"

    .line 334
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 305
    :cond_10
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_11

    .line 306
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 308
    :cond_11
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :goto_4
    move v2, v5

    .line 342
    :cond_12
    :goto_5
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_13

    .line 343
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 352
    :cond_13
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v6, "4"

    invoke-static {p1, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_17

    .line 2208
    iget p1, p0, Lcom/tkay/core/common/f/z;->W:I

    if-eq v3, p1, :cond_14

    .line 355
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_14

    .line 356
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 360
    :cond_14
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_15

    .line 361
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 364
    :cond_15
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_16

    .line 365
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 367
    :cond_16
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    :cond_17
    :goto_6
    if-eqz v2, :cond_18

    return-object v0

    .line 377
    :cond_18
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    sub-int/2addr p1, v3

    invoke-virtual {v1, v5, p1}, Ljava/lang/StringBuffer;->substring(II)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/z;->al:Ljava/lang/String;

    const/4 p1, 0x0

    return-object p1
.end method

.method private a(I)V
    .locals 0

    .line 164
    iput p1, p0, Lcom/tkay/core/common/f/z;->ag:I

    return-void
.end method

.method private ab()Ljava/lang/String;
    .locals 1

    .line 200
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->V:Ljava/lang/String;

    return-object v0
.end method

.method private ac()Ljava/lang/String;
    .locals 1

    .line 225
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->ae:Ljava/lang/String;

    return-object v0
.end method

.method private ad()I
    .locals 1

    .line 398
    iget v0, p0, Lcom/tkay/core/common/f/z;->a:I

    return v0
.end method

.method private ae()I
    .locals 1

    .line 406
    iget v0, p0, Lcom/tkay/core/common/f/z;->b:I

    return v0
.end method

.method private af()I
    .locals 1

    .line 414
    iget v0, p0, Lcom/tkay/core/common/f/z;->R:I

    return v0
.end method

.method private ag()I
    .locals 1

    .line 422
    iget v0, p0, Lcom/tkay/core/common/f/z;->S:I

    return v0
.end method

.method private b()J
    .locals 2

    .line 184
    iget-wide v0, p0, Lcom/tkay/core/common/f/z;->T:J

    return-wide v0
.end method

.method private c()Ljava/lang/String;
    .locals 1

    .line 192
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->U:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final E(Ljava/lang/String;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->am:Ljava/lang/String;

    return-void
.end method

.method public final F(Ljava/lang/String;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->an:Ljava/lang/String;

    return-void
.end method

.method public final G(Ljava/lang/String;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->ao:Ljava/lang/String;

    return-void
.end method

.method public final H(Ljava/lang/String;)V
    .locals 0

    .line 131
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->ap:Ljava/lang/String;

    return-void
.end method

.method public final I(Ljava/lang/String;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->aq:Ljava/lang/String;

    return-void
.end method

.method public final J(Ljava/lang/String;)V
    .locals 0

    .line 196
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->U:Ljava/lang/String;

    return-void
.end method

.method public final K(Ljava/lang/String;)V
    .locals 0

    .line 204
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->V:Ljava/lang/String;

    return-void
.end method

.method public final L(Ljava/lang/String;)V
    .locals 0

    .line 220
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->ad:Ljava/lang/String;

    return-void
.end method

.method public final M(Ljava/lang/String;)V
    .locals 0

    .line 229
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->ae:Ljava/lang/String;

    return-void
.end method

.method public final N(Ljava/lang/String;)V
    .locals 0

    .line 393
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->ah:Ljava/lang/String;

    return-void
.end method

.method public final N()Z
    .locals 4

    .line 80
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/common/f/z;->aj:J

    sub-long/2addr v0, v2

    iget-wide v2, p0, Lcom/tkay/core/common/f/z;->ai:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final O()J
    .locals 2

    .line 94
    iget-wide v0, p0, Lcom/tkay/core/common/f/z;->ak:J

    return-wide v0
.end method

.method public final P()J
    .locals 2

    .line 98
    iget-wide v0, p0, Lcom/tkay/core/common/f/z;->ai:J

    return-wide v0
.end method

.method public final Q()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->am:Ljava/lang/String;

    return-object v0
.end method

.method public final R()Ljava/lang/String;
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->an:Ljava/lang/String;

    return-object v0
.end method

.method public final S()Ljava/lang/String;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->ao:Ljava/lang/String;

    return-object v0
.end method

.method public final T()Ljava/lang/String;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->ap:Ljava/lang/String;

    return-object v0
.end method

.method public final U()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->aq:Ljava/lang/String;

    return-object v0
.end method

.method public final V()I
    .locals 1

    .line 143
    iget v0, p0, Lcom/tkay/core/common/f/z;->ar:I

    return v0
.end method

.method public final W()I
    .locals 1

    .line 151
    iget v0, p0, Lcom/tkay/core/common/f/z;->as:I

    return v0
.end method

.method public final X()Lcom/tkay/core/common/f/ab;
    .locals 1

    .line 176
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->af:Lcom/tkay/core/common/f/ab;

    return-object v0
.end method

.method public final Y()I
    .locals 1

    .line 208
    iget v0, p0, Lcom/tkay/core/common/f/z;->W:I

    return v0
.end method

.method public final Z()Ljava/lang/String;
    .locals 1

    .line 216
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->ad:Ljava/lang/String;

    return-object v0
.end method

.method public final a(J)V
    .locals 0

    .line 69
    iput-wide p1, p0, Lcom/tkay/core/common/f/z;->ai:J

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/ab;)V
    .locals 0

    .line 180
    iput-object p1, p0, Lcom/tkay/core/common/f/z;->af:Lcom/tkay/core/common/f/ab;

    return-void
.end method

.method public final a(ZZ)Z
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_3

    if-eqz p2, :cond_1

    .line 2398
    iget p1, p0, Lcom/tkay/core/common/f/z;->a:I

    if-ne p1, v1, :cond_0

    return v1

    :cond_0
    return v0

    .line 2406
    :cond_1
    iget p1, p0, Lcom/tkay/core/common/f/z;->b:I

    if-ne p1, v1, :cond_2

    return v1

    :cond_2
    return v0

    :cond_3
    if-eqz p2, :cond_5

    .line 2414
    iget p1, p0, Lcom/tkay/core/common/f/z;->R:I

    if-ne p1, v1, :cond_4

    return v1

    :cond_4
    return v0

    .line 2422
    :cond_5
    iget p1, p0, Lcom/tkay/core/common/f/z;->S:I

    if-ne p1, v1, :cond_6

    return v1

    :cond_6
    return v0
.end method

.method public final aa()Ljava/lang/String;
    .locals 1

    .line 389
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->ah:Ljava/lang/String;

    return-object v0
.end method

.method public final synthetic b(Lcom/tkay/core/common/f/j;)Ljava/util/List;
    .locals 8

    .line 17
    check-cast p1, Lcom/tkay/core/common/f/aa;

    .line 3236
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 3238
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 3252
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "1"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    const-string v4, "full_u,"

    const/4 v5, 0x0

    if-eqz v2, :cond_5

    .line 3253
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v2

    if-nez v2, :cond_3

    .line 3254
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 3255
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3258
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 3259
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3262
    :cond_1
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 3263
    iget-object v2, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 3265
    :cond_2
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    goto :goto_1

    :cond_3
    :goto_0
    move v2, v3

    .line 3269
    :goto_1
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    .line 3270
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_4
    const-string v2, "video_u,"

    .line 3272
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    goto :goto_2

    :cond_5
    move v2, v3

    .line 3277
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v6

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    const-string v7, "3"

    invoke-static {v6, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_a

    .line 3278
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v6

    if-nez v6, :cond_9

    .line 3279
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    .line 3280
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3283
    :cond_6
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_7

    .line 3284
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3287
    :cond_7
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_8

    .line 3288
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 3290
    :cond_8
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    .line 3295
    :cond_9
    :goto_3
    invoke-virtual {p0}, Lcom/tkay/core/common/f/z;->E()Z

    move-result v6

    if-eqz v6, :cond_a

    .line 3296
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->q:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3301
    :cond_a
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "2"

    invoke-static {v6, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_13

    .line 4208
    iget v6, p0, Lcom/tkay/core/common/f/z;->W:I

    if-eq v6, v3, :cond_10

    const/4 v7, 0x2

    if-eq v6, v7, :cond_f

    const/4 v7, 0x3

    if-eq v6, v7, :cond_b

    const/4 v7, 0x4

    if-eq v6, v7, :cond_f

    goto :goto_5

    .line 3313
    :cond_b
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->r()Ljava/lang/String;

    move-result-object v6

    const-string v7, "320x50"

    invoke-static {v7, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_d

    .line 3314
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_c

    .line 3315
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    :cond_c
    const-string v2, "icon_u,"

    .line 3317
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 3321
    :cond_d
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_e

    .line 3322
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 3324
    :cond_e
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 3331
    :cond_f
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->ad:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_12

    const-string v2, "img_list,"

    .line 3334
    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_4

    .line 3305
    :cond_10
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_11

    .line 3306
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 3308
    :cond_11
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :goto_4
    move v2, v5

    .line 3342
    :cond_12
    :goto_5
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_13

    .line 3343
    iget-object v6, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3352
    :cond_13
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->t()I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v6, "4"

    invoke-static {p1, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_17

    .line 5208
    iget p1, p0, Lcom/tkay/core/common/f/z;->W:I

    if-eq v3, p1, :cond_14

    .line 3355
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_14

    .line 3356
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->l:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3360
    :cond_14
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_15

    .line 3361
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 3364
    :cond_15
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_16

    .line 3365
    iget-object p1, p0, Lcom/tkay/core/common/f/z;->n:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_6

    .line 3367
    :cond_16
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    move v2, v5

    :cond_17
    :goto_6
    if-eqz v2, :cond_18

    return-object v0

    .line 3377
    :cond_18
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    sub-int/2addr p1, v3

    invoke-virtual {v1, v5, p1}, Ljava/lang/StringBuffer;->substring(II)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/z;->al:Ljava/lang/String;

    const/4 p1, 0x0

    return-object p1
.end method

.method public final b(J)V
    .locals 0

    .line 76
    iput-wide p1, p0, Lcom/tkay/core/common/f/z;->aj:J

    return-void
.end method

.method public final c(J)V
    .locals 0

    .line 90
    iput-wide p1, p0, Lcom/tkay/core/common/f/z;->ak:J

    return-void
.end method

.method public final d(J)V
    .locals 0

    .line 188
    iput-wide p1, p0, Lcom/tkay/core/common/f/z;->T:J

    return-void
.end method

.method public final h(I)V
    .locals 0

    .line 147
    iput p1, p0, Lcom/tkay/core/common/f/z;->ar:I

    return-void
.end method

.method public final i(I)V
    .locals 0

    .line 155
    iput p1, p0, Lcom/tkay/core/common/f/z;->as:I

    return-void
.end method

.method public final j(I)V
    .locals 0

    .line 212
    iput p1, p0, Lcom/tkay/core/common/f/z;->W:I

    return-void
.end method

.method public final k(I)V
    .locals 0

    .line 402
    iput p1, p0, Lcom/tkay/core/common/f/z;->a:I

    return-void
.end method

.method public final l(I)V
    .locals 0

    .line 410
    iput p1, p0, Lcom/tkay/core/common/f/z;->b:I

    return-void
.end method

.method public final m()Ljava/lang/String;
    .locals 1

    .line 385
    iget-object v0, p0, Lcom/tkay/core/common/f/z;->al:Ljava/lang/String;

    return-object v0
.end method

.method public final m(I)V
    .locals 0

    .line 418
    iput p1, p0, Lcom/tkay/core/common/f/z;->R:I

    return-void
.end method

.method public final n(I)V
    .locals 0

    .line 426
    iput p1, p0, Lcom/tkay/core/common/f/z;->S:I

    return-void
.end method
