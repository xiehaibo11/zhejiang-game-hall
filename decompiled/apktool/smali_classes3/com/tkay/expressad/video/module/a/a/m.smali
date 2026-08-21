.class public final Lcom/tkay/expressad/video/module/a/a/m;
.super Lcom/tkay/expressad/video/module/a/a/o;


# static fields
.field public static final ag:J = 0xbb8L


# instance fields
.field private ai:Lcom/tkay/expressad/video/module/TkayVideoView;

.field private aj:Lcom/tkay/expressad/video/module/TkayContainerView;

.field private ak:I

.field private final al:Lcom/tkay/core/common/j/a;

.field private am:Z

.field private an:Z

.field private ao:I

.field private ap:I

.field private final aq:Lcom/tkay/core/common/j/b;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayVideoView;Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;IILcom/tkay/expressad/video/module/a/a;IZI)V
    .locals 12

    move-object v9, p0

    move-object v10, p1

    move-object v11, p2

    move-object v0, p0

    move-object v1, p3

    move-object/from16 v2, p4

    move-object/from16 v3, p5

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p10

    move/from16 v7, p11

    move/from16 v8, p12

    .line 39
    invoke-direct/range {v0 .. v8}, Lcom/tkay/expressad/video/module/a/a/o;-><init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Lcom/tkay/expressad/videocommon/b/a;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/video/module/a/a;IZ)V

    .line 1016
    invoke-static {}, Lcom/tkay/core/common/j/c;->a()Lcom/tkay/core/common/j/a;

    move-result-object v0

    .line 28
    iput-object v0, v9, Lcom/tkay/expressad/video/module/a/a/m;->al:Lcom/tkay/core/common/j/a;

    const/4 v0, 0x0

    .line 30
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    .line 32
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/m;->an:Z

    const/4 v1, 0x1

    .line 34
    iput v1, v9, Lcom/tkay/expressad/video/module/a/a/m;->ao:I

    .line 310
    new-instance v2, Lcom/tkay/expressad/video/module/a/a/m$1;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/a/a/m$1;-><init>(Lcom/tkay/expressad/video/module/a/a/m;)V

    iput-object v2, v9, Lcom/tkay/expressad/video/module/a/a/m;->aq:Lcom/tkay/core/common/j/b;

    .line 40
    iput-object v10, v9, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    .line 41
    iput-object v11, v9, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    move/from16 v2, p8

    .line 42
    iput v2, v9, Lcom/tkay/expressad/video/module/a/a/m;->ap:I

    move/from16 v2, p9

    .line 43
    iput v2, v9, Lcom/tkay/expressad/video/module/a/a/m;->ak:I

    move/from16 v2, p13

    .line 44
    iput v2, v9, Lcom/tkay/expressad/video/module/a/a/m;->ao:I

    if-eqz v10, :cond_1

    .line 46
    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->getVideoSkipTime()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    iput-boolean v1, v9, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    :cond_1
    if-eqz v10, :cond_2

    if-nez v11, :cond_3

    .line 49
    :cond_2
    iput-boolean v0, v9, Lcom/tkay/expressad/video/module/a/a/m;->W:Z

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/a/a/m;)Lcom/tkay/expressad/video/module/TkayContainerView;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    return-object p0
.end method

.method private a(II)V
    .locals 4

    .line 265
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    if-eqz v0, :cond_0

    return-void

    .line 268
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_1

    goto :goto_2

    .line 274
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ak:I

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-ltz v0, :cond_2

    if-lt p1, v0, :cond_2

    move v0, v2

    goto :goto_0

    :cond_2
    move v0, v1

    :goto_0
    if-eq v0, v2, :cond_4

    .line 279
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v3

    if-nez v3, :cond_3

    .line 280
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v3, v1, :cond_4

    goto :goto_1

    .line 284
    :cond_3
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v3

    if-le p1, v3, :cond_4

    :goto_1
    move v0, v2

    :cond_4
    if-eq v0, v2, :cond_5

    .line 289
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v3, v1, :cond_5

    if-ne p1, p2, :cond_5

    move v0, v2

    :cond_5
    if-ne v0, v2, :cond_6

    .line 296
    iget-object p1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    .line 297
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    :cond_6
    :goto_2
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/a/a/m;)Lcom/tkay/expressad/video/module/TkayVideoView;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    return-object p0
.end method

.method private g()V
    .locals 2

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->al:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aq:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V

    return-void
.end method

.method private h()V
    .locals 4

    .line 306
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/m;->g()V

    .line 307
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->al:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aq:Lcom/tkay/core/common/j/b;

    const-wide/16 v2, 0xbb8

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;J)V

    return-void
.end method

.method private i()V
    .locals 5

    .line 323
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    const/4 v1, 0x5

    if-ne v0, v1, :cond_5

    const/4 v0, 0x0

    .line 325
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_2

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    if-eqz v1, :cond_2

    const/4 v1, 0x0

    move v2, v1

    .line 327
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 328
    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v3, v3, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    if-ne v3, v4, :cond_0

    add-int/lit8 v1, v2, -0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    if-ltz v1, :cond_2

    .line 333
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v2, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 334
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    :cond_2
    if-eqz v0, :cond_5

    .line 338
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_3

    .line 339
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 341
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v1, :cond_4

    .line 342
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 344
    :cond_4
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/m;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_5
    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/Object;)V
    .locals 7

    .line 55
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->W:Z

    const/16 v1, 0x10

    if-eqz v0, :cond_27

    const/4 v0, -0x1

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eq p1, v3, :cond_23

    const/4 v5, 0x3

    const/4 v6, 0x5

    if-eq p1, v4, :cond_1e

    if-eq p1, v6, :cond_1c

    const/4 v0, 0x6

    if-eq p1, v0, :cond_1e

    const/16 v0, 0x8

    if-eq p1, v0, :cond_19

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_9

    :pswitch_0
    if-eqz p2, :cond_27

    .line 192
    instance-of v0, p2, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    if-eqz v0, :cond_27

    .line 193
    move-object v0, p2

    check-cast v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;

    .line 195
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->getVideoInteractiveType()I

    move-result v1

    .line 196
    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v5

    if-ne v5, v4, :cond_0

    .line 197
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    goto :goto_0

    :cond_0
    if-ltz v1, :cond_1

    .line 199
    iget v5, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    if-lt v5, v1, :cond_1

    .line 200
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 201
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    .line 205
    :cond_1
    :goto_0
    iget-boolean v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->c:Z

    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    .line 207
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v1

    if-ne v1, v6, :cond_7

    .line 208
    iget v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    .line 2265
    iget-boolean v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    if-nez v5, :cond_27

    .line 2268
    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v5, :cond_27

    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-nez v5, :cond_2

    goto/16 :goto_9

    .line 2274
    :cond_2
    iget v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ak:I

    if-ltz v5, :cond_3

    if-lt v1, v5, :cond_3

    move v5, v4

    goto :goto_1

    :cond_3
    move v5, v3

    :goto_1
    if-eq v5, v4, :cond_5

    .line 2279
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v6

    if-nez v6, :cond_4

    .line 2280
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v6, v6, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v6, v3, :cond_5

    goto :goto_2

    .line 2284
    :cond_4
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v6

    if-le v1, v6, :cond_5

    :goto_2
    move v5, v4

    :cond_5
    if-eq v5, v4, :cond_6

    .line 2289
    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v6, v6, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v6, v3, :cond_6

    if-ne v1, v0, :cond_6

    move v5, v4

    :cond_6
    if-ne v5, v4, :cond_27

    .line 2296
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    .line 2297
    iput-boolean v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    goto/16 :goto_9

    .line 212
    :cond_7
    iget v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ak:I

    if-ltz v1, :cond_8

    iget v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ak:I

    if-ge v1, v5, :cond_9

    iget v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget v5, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    if-eq v1, v5, :cond_9

    :cond_8
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v1

    if-lez v1, :cond_27

    iget v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v5

    if-gt v1, v5, :cond_9

    iget v1, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->a:I

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView$a;->b:I

    if-ne v1, v0, :cond_27

    :cond_9
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    if-nez v0, :cond_27

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    .line 214
    iput-boolean v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    goto/16 :goto_9

    .line 231
    :pswitch_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->am:Z

    if-nez v0, :cond_27

    .line 232
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    goto/16 :goto_9

    .line 227
    :pswitch_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    goto/16 :goto_9

    .line 110
    :pswitch_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/m;->f()V

    .line 112
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    .line 113
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->dismissAllAlert()V

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    if-eq v1, v5, :cond_a

    .line 115
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    goto :goto_3

    .line 117
    :cond_a
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    .line 120
    :goto_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->an:Z

    if-nez v0, :cond_b

    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ao:I

    if-eqz v0, :cond_27

    .line 124
    :cond_b
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    if-ne v0, v6, :cond_12

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 1323
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    if-ne v0, v6, :cond_11

    const/4 v0, 0x0

    .line 1325
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_e

    iget-object v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    if-eqz v1, :cond_e

    move v1, v2

    .line 1327
    :goto_4
    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v5, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-ge v1, v5, :cond_d

    .line 1328
    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v5, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v5, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_c

    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v5, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v5, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v6

    if-ne v5, v6, :cond_c

    sub-int/2addr v1, v3

    goto :goto_5

    :cond_c
    add-int/lit8 v1, v1, 0x1

    goto :goto_4

    :cond_d
    move v1, v2

    :goto_5
    if-ltz v1, :cond_e

    .line 1333
    iget-object v5, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v5, v5, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v5, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_e

    .line 1334
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    :cond_e
    if-eqz v0, :cond_11

    .line 1338
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v1, :cond_f

    .line 1339
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1341
    :cond_f
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v1, :cond_10

    .line 1342
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 1344
    :cond_10
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/a/a/m;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 128
    :cond_11
    iput v2, p0, Lcom/tkay/expressad/video/module/a/a/m;->ao:I

    .line 131
    :cond_12
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->an:Z

    if-nez v0, :cond_13

    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ao:I

    if-ne v0, v3, :cond_13

    .line 132
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/m;->e()V

    .line 133
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/m;->d()V

    .line 134
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/a/a/m;->c()V

    .line 137
    :cond_13
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-eq v0, v4, :cond_14

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showEndcard(I)V

    goto/16 :goto_9

    .line 140
    :cond_14
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoEndCover()V

    goto/16 :goto_9

    .line 85
    :pswitch_4
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    .line 87
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->dismissAllAlert()V

    .line 88
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    if-eq v1, v5, :cond_15

    .line 89
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v1

    if-eq v1, v4, :cond_16

    .line 90
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    goto :goto_6

    .line 93
    :cond_15
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    .line 95
    :cond_16
    :goto_6
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_17

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    if-ne v0, v6, :cond_17

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v1, v1, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    if-ne v0, v1, :cond_17

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_27

    .line 97
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setRewardStatus(Z)V

    .line 98
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showOrderCampView()V

    goto/16 :goto_9

    .line 101
    :cond_17
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-ne v0, v4, :cond_18

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoEndCover()V

    goto/16 :goto_9

    .line 104
    :cond_18
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showEndcard(I)V

    goto/16 :goto_9

    .line 220
    :pswitch_5
    iput-boolean v3, p0, Lcom/tkay/expressad/video/module/a/a/m;->an:Z

    .line 221
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    .line 222
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->progressOperate(II)V

    goto/16 :goto_9

    .line 236
    :cond_19
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_1b

    .line 237
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showAlertWebView()Z

    move-result v0

    if-nez v0, :cond_1a

    .line 238
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_27

    .line 239
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->showAlertView()V

    goto/16 :goto_9

    .line 242
    :cond_1a
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_27

    .line 243
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->alertWebViewShowed()V

    goto/16 :goto_9

    .line 247
    :cond_1b
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    if-eqz v0, :cond_27

    .line 248
    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->showAlertView()V

    goto/16 :goto_9

    :cond_1c
    if-eqz p2, :cond_27

    .line 179
    instance-of v1, p2, Ljava/lang/Integer;

    if-eqz v1, :cond_27

    .line 180
    move-object v1, p2

    check-cast v1, Ljava/lang/Integer;

    .line 181
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne v1, v3, :cond_1d

    .line 182
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    goto :goto_7

    .line 184
    :cond_1d
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    .line 186
    :goto_7
    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v2, v1, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    goto/16 :goto_9

    .line 147
    :cond_1e
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->dismissAllAlert()V

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v5}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    .line 149
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_20

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_20

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v0

    if-ne v0, v6, :cond_20

    .line 151
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_20

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v0, v0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    iget-object v2, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    iget v2, v2, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    if-ne v0, v2, :cond_20

    .line 152
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-ne v0, v4, :cond_1f

    goto :goto_8

    .line 155
    :cond_1f
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->setRewardStatus(Z)V

    .line 156
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showOrderCampView()V

    goto/16 :goto_9

    .line 164
    :cond_20
    iget v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ap:I

    if-ne v0, v4, :cond_22

    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->endCardShowing()Z

    move-result v0

    if-nez v0, :cond_22

    .line 166
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-ne v0, v4, :cond_21

    goto :goto_8

    .line 169
    :cond_21
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->X:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->showEndcard(I)V

    goto :goto_9

    :cond_22
    :goto_8
    move p1, v1

    goto :goto_9

    .line 58
    :cond_23
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->endCardShowing()Z

    move-result v1

    if-nez v1, :cond_27

    .line 60
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->getVideoInteractiveType()I

    move-result v1

    const/4 v5, -0x2

    if-eq v1, v5, :cond_26

    if-eq v1, v0, :cond_24

    goto :goto_9

    .line 70
    :cond_24
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->isLast()Z

    move-result v1

    if-eqz v1, :cond_25

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 72
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    .line 1306
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/m;->g()V

    .line 1307
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->al:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aq:Lcom/tkay/core/common/j/b;

    const-wide/16 v2, 0xbb8

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;J)V

    goto :goto_9

    .line 75
    :cond_25
    iget-object v1, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 76
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->ai:Lcom/tkay/expressad/video/module/TkayVideoView;

    invoke-virtual {v0, v2, v4}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(II)V

    .line 77
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/a/a/m;->g()V

    goto :goto_9

    .line 64
    :cond_26
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->miniCardLoaded()Z

    move-result v0

    if-eqz v0, :cond_27

    .line 65
    iget-object v0, p0, Lcom/tkay/expressad/video/module/a/a/m;->aj:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, v4}, Lcom/tkay/expressad/video/module/TkayContainerView;->showVideoClickView(I)V

    .line 254
    :cond_27
    :goto_9
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/video/module/a/a/o;->a(ILjava/lang/Object;)V

    return-void

    :pswitch_data_0
    .packed-switch 0xa
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
