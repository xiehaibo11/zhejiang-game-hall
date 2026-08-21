.class public Lcom/tkay/core/common/f/d;
.super Lcom/tkay/core/common/f/ai;

# interfaces
.implements Ljava/lang/Cloneable;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x4

.field public static final e:I = 0x5

.field public static final f:I = 0x6

.field public static final g:I = 0x7

.field public static final h:I = 0x8

.field public static final i:I = 0x0

.field public static final j:I = 0x1

.field public static final k:I = 0x2

.field public static final l:I = 0x0

.field public static final m:I = 0x1

.field public static final n:I = 0x2


# instance fields
.field A:I

.field B:I

.field public C:Ljava/lang/String;

.field protected D:I

.field protected E:I

.field protected F:I

.field protected G:I

.field protected H:D

.field I:Z

.field J:I

.field K:Ljava/lang/String;

.field L:J

.field M:J

.field N:Ljava/lang/String;

.field private aA:I

.field private aB:Ljava/lang/String;

.field private aC:I

.field private aD:I

.field private aE:I

.field private aF:I

.field private aG:Z

.field private aH:J

.field private aI:J

.field private aJ:Ljava/lang/String;

.field private aK:Ljava/lang/String;

.field private aL:Ljava/lang/String;

.field private aM:I

.field private aN:Ljava/lang/String;

.field private aO:Ljava/lang/String;

.field private aP:Ljava/lang/String;

.field private aQ:D

.field private aR:Ljava/lang/String;

.field private aS:D

.field private aT:D

.field private aU:Lcom/tkay/core/api/TYRewardInfo;

.field private aV:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/TYRewardInfo;",
            ">;"
        }
    .end annotation
.end field

.field private aW:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private aX:Ljava/lang/String;

.field private aY:J

.field private aZ:Ljava/lang/String;

.field private aw:I

.field private ax:Ljava/lang/String;

.field private ay:Ljava/lang/String;

.field private az:I

.field private ba:Ljava/lang/String;

.field private bb:I

.field private bc:I

.field private bd:Ljava/lang/String;

.field private be:J

.field private bf:I

.field private bg:I

.field private bh:I

.field private bi:I

.field private bj:J

.field private bk:I

.field private bl:I

.field private bm:I

.field private bn:I

.field private bo:I

.field private bp:Ljava/lang/String;

.field private bq:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field protected o:I

.field public p:Ljava/lang/String;

.field public q:I

.field public r:I

.field public s:I

.field public t:I

.field public u:Ljava/lang/String;

.field public v:Ljava/lang/String;

.field w:I

.field protected x:D

.field y:Ljava/lang/String;

.field public z:I


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 21
    invoke-direct {p0}, Lcom/tkay/core/common/f/ai;-><init>()V

    const/4 v0, -0x1

    .line 57
    iput v0, p0, Lcom/tkay/core/common/f/d;->aD:I

    const-string v1, ""

    .line 65
    iput-object v1, p0, Lcom/tkay/core/common/f/d;->p:Ljava/lang/String;

    const/4 v1, 0x0

    .line 66
    iput v1, p0, Lcom/tkay/core/common/f/d;->q:I

    .line 67
    iput v1, p0, Lcom/tkay/core/common/f/d;->r:I

    .line 68
    iput v1, p0, Lcom/tkay/core/common/f/d;->s:I

    const-string v1, "unknow"

    .line 90
    iput-object v1, p0, Lcom/tkay/core/common/f/d;->aN:Ljava/lang/String;

    .line 146
    iput v0, p0, Lcom/tkay/core/common/f/d;->bk:I

    const/4 v0, 0x1

    .line 159
    iput v0, p0, Lcom/tkay/core/common/f/d;->bn:I

    return-void
.end method

.method private A(Ljava/lang/String;)V
    .locals 0

    .line 406
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    return-void
.end method

.method private B(Ljava/lang/String;)V
    .locals 0

    .line 455
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    return-void
.end method

.method private C(Ljava/lang/String;)V
    .locals 0

    .line 578
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    return-void
.end method

.method private F(I)V
    .locals 0

    .line 594
    iput p1, p0, Lcom/tkay/core/common/f/d;->q:I

    return-void
.end method

.method private G(I)V
    .locals 0

    .line 603
    iput p1, p0, Lcom/tkay/core/common/f/d;->r:I

    return-void
.end method

.method private H(I)V
    .locals 0

    .line 612
    iput p1, p0, Lcom/tkay/core/common/f/d;->s:I

    return-void
.end method

.method private I(I)V
    .locals 0

    .line 637
    iput p1, p0, Lcom/tkay/core/common/f/d;->t:I

    return-void
.end method

.method private J(I)Lorg/json/JSONObject;
    .locals 0

    .line 965
    invoke-super {p0, p1}, Lcom/tkay/core/common/f/ai;->A(I)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method private a(ILorg/json/JSONObject;)V
    .locals 1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_0

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const/4 v0, 0x6

    if-eq p1, v0, :cond_0

    const/16 v0, 0xd

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 958
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/common/f/d;->aZ:Ljava/lang/String;

    const-string v0, "extra"

    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_0
    return-void
.end method

.method private aa()D
    .locals 2

    .line 182
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->H:D

    return-wide v0
.end method

.method private ab()I
    .locals 1

    .line 211
    iget v0, p0, Lcom/tkay/core/common/f/d;->bh:I

    return v0
.end method

.method private ac()I
    .locals 1

    .line 219
    iget v0, p0, Lcom/tkay/core/common/f/d;->bg:I

    return v0
.end method

.method private ad()Ljava/lang/String;
    .locals 1

    .line 402
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    return-object v0
.end method

.method private ae()I
    .locals 1

    .line 427
    iget v0, p0, Lcom/tkay/core/common/f/d;->z:I

    return v0
.end method

.method private af()V
    .locals 1

    const/4 v0, 0x1

    .line 431
    iput v0, p0, Lcom/tkay/core/common/f/d;->z:I

    return-void
.end method

.method private ag()Ljava/lang/String;
    .locals 1

    .line 451
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    return-object v0
.end method

.method private ah()Z
    .locals 2

    .line 467
    iget v0, p0, Lcom/tkay/core/common/f/d;->bi:I

    const/16 v1, 0x9

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private ai()Ljava/lang/String;
    .locals 1

    .line 561
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->ax:Ljava/lang/String;

    return-object v0
.end method

.method private aj()Ljava/lang/String;
    .locals 1

    .line 590
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->p:Ljava/lang/String;

    return-object v0
.end method

.method private ak()I
    .locals 1

    .line 598
    iget v0, p0, Lcom/tkay/core/common/f/d;->q:I

    return v0
.end method

.method private al()I
    .locals 1

    .line 607
    iget v0, p0, Lcom/tkay/core/common/f/d;->r:I

    return v0
.end method

.method private am()I
    .locals 1

    .line 633
    iget v0, p0, Lcom/tkay/core/common/f/d;->t:I

    return v0
.end method

.method private an()Z
    .locals 1

    .line 670
    iget-boolean v0, p0, Lcom/tkay/core/common/f/d;->I:Z

    return v0
.end method

.method private ao()I
    .locals 1

    .line 678
    iget v0, p0, Lcom/tkay/core/common/f/d;->J:I

    return v0
.end method

.method private ap()Ljava/lang/String;
    .locals 1

    .line 686
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->K:Ljava/lang/String;

    return-object v0
.end method

.method private aq()J
    .locals 2

    .line 700
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->L:J

    return-wide v0
.end method

.method private ar()J
    .locals 2

    .line 708
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->M:J

    return-wide v0
.end method

.method private as()Ljava/lang/String;
    .locals 1

    .line 716
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    return-object v0
.end method

.method private b(Z)V
    .locals 0

    .line 482
    iput-boolean p1, p0, Lcom/tkay/core/common/f/d;->aG:Z

    return-void
.end method


# virtual methods
.method public final A()I
    .locals 1

    .line 494
    iget v0, p0, Lcom/tkay/core/common/f/d;->aF:I

    return v0
.end method

.method public final A(I)Lorg/json/JSONObject;
    .locals 22

    move-object/from16 v1, p0

    move/from16 v0, p1

    .line 728
    invoke-super/range {p0 .. p1}, Lcom/tkay/core/common/f/ai;->A(I)Lorg/json/JSONObject;

    move-result-object v2

    :try_start_0
    const-string v3, "nw_ver"

    .line 730
    iget-object v4, v1, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 731
    iget v3, v1, Lcom/tkay/core/common/f/d;->aD:I

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    const-string v3, "refresh"

    .line 732
    iget v4, v1, Lcom/tkay/core/common/f/d;->aD:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 736
    :cond_0
    iget-object v3, v1, Lcom/tkay/core/common/f/d;->ba:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    const-string v3, "tp_bid_id"

    .line 737
    iget-object v4, v1, Lcom/tkay/core/common/f/d;->ba:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v3, "4"

    .line 740
    iget-object v4, v1, Lcom/tkay/core/common/f/d;->am:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "ad_type"

    .line 741
    iget v4, v1, Lcom/tkay/core/common/f/d;->bk:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_2
    const/4 v3, 0x6

    const/4 v4, 0x1

    if-eq v0, v4, :cond_3

    const/4 v5, 0x2

    if-eq v0, v5, :cond_3

    const/4 v5, 0x4

    if-eq v0, v5, :cond_3

    if-eq v0, v3, :cond_3

    const/16 v5, 0xd

    if-eq v0, v5, :cond_3

    goto :goto_0

    :cond_3
    const-string v5, "extra"

    .line 1958
    iget-object v6, v1, Lcom/tkay/core/common/f/d;->aZ:Ljava/lang/String;

    invoke-virtual {v2, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    const-string v5, "s_pty"

    const-string v6, "req_par_num"

    const-string v7, "req_par"

    const-string v8, "reason"

    const-string v9, "bidresponselist"

    const-string v10, "scenario"

    const-string v11, "phs"

    const-string v12, "[]"

    const-string v13, "pds"

    const-string v15, "ahs"

    const-string v3, "ads"

    const-string v4, "aprn_auto_req"

    const-string v14, "bidprice"

    move-object/from16 v17, v12

    const-string v12, "bidtype"

    move-object/from16 v18, v4

    const-string v4, "nw_firm_id"

    move-object/from16 v19, v6

    const-string v6, "auto_req"

    move-object/from16 v20, v7

    const-string v7, "unit_id"

    move-object/from16 v21, v8

    const-string v8, "gro_id"

    packed-switch v0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_8

    :pswitch_1
    :try_start_1
    const-string v0, "dl_ts"

    .line 932
    iget-wide v5, v1, Lcom/tkay/core/common/f/d;->be:J

    invoke-virtual {v2, v0, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 935
    :pswitch_2
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 936
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "app_nm"

    .line 937
    iget-object v3, v1, Lcom/tkay/core/common/f/d;->bd:Ljava/lang/String;

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_3
    const-string v0, "ad_ch_st"

    .line 877
    iget v9, v1, Lcom/tkay/core/common/f/d;->bh:I

    invoke-virtual {v2, v0, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_2

    .line 927
    :pswitch_4
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 928
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    move-object/from16 v12, v17

    goto :goto_1

    :cond_4
    new-instance v12, Lorg/json/JSONArray;

    iget-object v0, v1, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    invoke-direct {v12, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    :goto_1
    invoke-virtual {v2, v9, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_8

    .line 879
    :goto_2
    :pswitch_5
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 880
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 881
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 882
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 883
    iget-wide v7, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 884
    iget-wide v7, v1, Lcom/tkay/core/common/f/d;->H:D

    invoke-static {v7, v8}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "as_result"

    .line 886
    iget-object v4, v1, Lcom/tkay/core/common/f/d;->K:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_5

    move-object/from16 v12, v17

    goto :goto_3

    :cond_5
    new-instance v12, Lorg/json/JSONArray;

    iget-object v4, v1, Lcom/tkay/core/common/f/d;->K:Ljava/lang/String;

    invoke-direct {v12, v4}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    :goto_3
    invoke-virtual {v2, v0, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "new_req_id"

    .line 887
    iget-object v4, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 888
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 890
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v4, "req_id_match"

    if-nez v0, :cond_6

    :try_start_2
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->al:Ljava/lang/String;

    if-nez v0, :cond_6

    const/4 v0, 0x0

    .line 891
    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 894
    :cond_6
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, v1, Lcom/tkay/core/common/f/d;->al:Ljava/lang/String;

    if-eqz v0, :cond_8

    .line 895
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    iget-object v5, v1, Lcom/tkay/core/common/f/d;->al:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    const/4 v0, 0x0

    .line 896
    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_4

    :cond_7
    const/4 v0, 0x1

    .line 898
    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_4

    :cond_8
    const/4 v5, 0x1

    .line 901
    invoke-virtual {v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :goto_4
    const-string v0, "myoffer_showtype"

    .line 905
    iget v4, v1, Lcom/tkay/core/common/f/d;->z:I

    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 907
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 908
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-virtual {v2, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 912
    :cond_9
    iget v0, v1, Lcom/tkay/core/common/f/d;->D:I

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 913
    iget v0, v1, Lcom/tkay/core/common/f/d;->E:I

    invoke-virtual {v2, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 914
    iget v0, v1, Lcom/tkay/core/common/f/d;->F:I

    invoke-virtual {v2, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 915
    iget v0, v1, Lcom/tkay/core/common/f/d;->G:I

    invoke-virtual {v2, v11, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_6
    const-string v0, "loadtime"

    .line 864
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->aI:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 865
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 866
    iget v0, v1, Lcom/tkay/core/common/f/d;->J:I

    const/4 v3, 0x5

    if-eq v0, v3, :cond_a

    const/16 v3, 0x9

    if-eq v0, v3, :cond_a

    goto :goto_5

    .line 869
    :cond_a
    iget v0, v1, Lcom/tkay/core/common/f/d;->J:I

    move-object/from16 v3, v21

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 872
    :goto_5
    iget v0, v1, Lcom/tkay/core/common/f/d;->bl:I

    move-object/from16 v4, v20

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 873
    iget v0, v1, Lcom/tkay/core/common/f/d;->bm:I

    move-object/from16 v6, v19

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto/16 :goto_8

    .line 919
    :pswitch_7
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 920
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "bidrequesttime"

    .line 921
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->L:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "bidresponsetime"

    .line 922
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->M:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 923
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_b

    move-object/from16 v12, v17

    goto :goto_6

    :cond_b
    new-instance v12, Lorg/json/JSONArray;

    iget-object v0, v1, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    invoke-direct {v12, v0}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    :goto_6
    invoke-virtual {v2, v9, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_8
    move-object/from16 v6, v19

    move-object/from16 v4, v20

    move-object/from16 v3, v21

    const/4 v0, 0x0

    const/4 v5, 0x1

    const-string v7, "isload"

    .line 857
    iget-boolean v9, v1, Lcom/tkay/core/common/f/d;->I:Z

    if-eqz v9, :cond_c

    move v0, v5

    :cond_c
    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 858
    iget v0, v1, Lcom/tkay/core/common/f/d;->J:I

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 859
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 860
    iget v0, v1, Lcom/tkay/core/common/f/d;->bl:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 861
    iget v0, v1, Lcom/tkay/core/common/f/d;->bm:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto/16 :goto_8

    .line 842
    :pswitch_9
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 843
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 844
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 845
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 846
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v0

    move-object/from16 v9, v18

    invoke-virtual {v2, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 847
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 848
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 851
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_f

    .line 852
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-virtual {v2, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_a
    move-object/from16 v9, v18

    .line 829
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 830
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 831
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 832
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 833
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v0

    invoke-virtual {v2, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "progress"

    .line 834
    iget v3, v1, Lcom/tkay/core/common/f/d;->t:I

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 835
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 836
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_b
    move-object/from16 v9, v18

    move-object/from16 v16, v11

    goto :goto_7

    :pswitch_c
    move-object/from16 v9, v18

    .line 782
    iget v0, v1, Lcom/tkay/core/common/f/d;->D:I

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 783
    iget v0, v1, Lcom/tkay/core/common/f/d;->E:I

    invoke-virtual {v2, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 784
    iget v0, v1, Lcom/tkay/core/common/f/d;->F:I

    invoke-virtual {v2, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 785
    iget v0, v1, Lcom/tkay/core/common/f/d;->G:I

    invoke-virtual {v2, v11, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "cl_imp"

    move-object/from16 v16, v11

    .line 788
    iget v11, v1, Lcom/tkay/core/common/f/d;->bb:I

    invoke-virtual {v2, v0, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 791
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->bp:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_d

    const-string v0, "ilrd"

    .line 792
    iget-object v11, v1, Lcom/tkay/core/common/f/d;->bp:Ljava/lang/String;

    invoke-virtual {v2, v0, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 796
    :cond_d
    :goto_7
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 797
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 798
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 799
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 800
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v0

    invoke-virtual {v2, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 802
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 803
    iget-wide v6, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 804
    iget-wide v6, v1, Lcom/tkay/core/common/f/d;->H:D

    invoke-static {v6, v7}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "myoffer_showtype"

    .line 808
    iget v4, v1, Lcom/tkay/core/common/f/d;->z:I

    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 810
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 811
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    invoke-virtual {v2, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 815
    :cond_e
    iget v0, v1, Lcom/tkay/core/common/f/d;->D:I

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 816
    iget v0, v1, Lcom/tkay/core/common/f/d;->E:I

    invoke-virtual {v2, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 817
    iget v0, v1, Lcom/tkay/core/common/f/d;->F:I

    invoke-virtual {v2, v13, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 818
    iget v0, v1, Lcom/tkay/core/common/f/d;->G:I

    move-object/from16 v3, v16

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    move/from16 v0, p1

    const/4 v3, 0x6

    if-ne v0, v3, :cond_f

    const-string v0, "cl_s_type"

    .line 822
    iget v3, v1, Lcom/tkay/core/common/f/d;->bn:I

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto/16 :goto_8

    :pswitch_d
    move-object/from16 v9, v18

    .line 765
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 766
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 767
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 768
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 769
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v0

    invoke-virtual {v2, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "status"

    .line 770
    iget v3, v1, Lcom/tkay/core/common/f/d;->r:I

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "filledtime"

    .line 771
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->aI:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "flag"

    .line 772
    iget v3, v1, Lcom/tkay/core/common/f/d;->s:I

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 773
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 774
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "data_ft"

    .line 775
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->aH:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "cp_pre_md"

    .line 776
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->O()I

    move-result v3

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_8

    :pswitch_e
    move-object/from16 v9, v18

    .line 748
    iget-object v0, v1, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    invoke-virtual {v2, v7, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 749
    iget v0, v1, Lcom/tkay/core/common/f/d;->o:I

    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 750
    iget v0, v1, Lcom/tkay/core/common/f/d;->aw:I

    invoke-virtual {v2, v8, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 751
    iget v0, v1, Lcom/tkay/core/common/f/d;->q:I

    invoke-virtual {v2, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 752
    invoke-virtual/range {p0 .. p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v0

    invoke-virtual {v2, v9, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 753
    iget v0, v1, Lcom/tkay/core/common/f/d;->w:I

    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 754
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->x:D

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v14, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "ad_reqt"

    .line 759
    iget-wide v3, v1, Lcom/tkay/core/common/f/d;->bj:J

    invoke-virtual {v2, v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_8

    :catch_0
    move-exception v0

    .line 943
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_f
    :goto_8
    return-object v2

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_e
        :pswitch_d
        :pswitch_0
        :pswitch_c
        :pswitch_0
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_0
        :pswitch_4
        :pswitch_3
        :pswitch_0
        :pswitch_2
        :pswitch_1
        :pswitch_2
    .end packed-switch
.end method

.method public final B()I
    .locals 1

    .line 502
    iget v0, p0, Lcom/tkay/core/common/f/d;->az:I

    return v0
.end method

.method public final C()I
    .locals 1

    .line 510
    iget v0, p0, Lcom/tkay/core/common/f/d;->aA:I

    return v0
.end method

.method public final D()Ljava/lang/String;
    .locals 1

    .line 518
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aB:Ljava/lang/String;

    return-object v0
.end method

.method public final E()I
    .locals 1

    .line 526
    iget v0, p0, Lcom/tkay/core/common/f/d;->aC:I

    return v0
.end method

.method public final F()I
    .locals 1

    .line 534
    iget v0, p0, Lcom/tkay/core/common/f/d;->aD:I

    return v0
.end method

.method public final G()Ljava/lang/String;
    .locals 1

    .line 543
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->ay:Ljava/lang/String;

    return-object v0
.end method

.method public final H()I
    .locals 1

    .line 552
    iget v0, p0, Lcom/tkay/core/common/f/d;->o:I

    return v0
.end method

.method public final I()I
    .locals 1

    .line 570
    iget v0, p0, Lcom/tkay/core/common/f/d;->aw:I

    return v0
.end method

.method public final J()J
    .locals 2

    .line 616
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->aH:J

    return-wide v0
.end method

.method public final K()J
    .locals 2

    .line 628
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->aI:J

    return-wide v0
.end method

.method public final L()I
    .locals 1

    .line 645
    iget v0, p0, Lcom/tkay/core/common/f/d;->bk:I

    return v0
.end method

.method public final M()I
    .locals 1

    .line 657
    iget v0, p0, Lcom/tkay/core/common/f/d;->bo:I

    return v0
.end method

.method public final N()Lcom/tkay/core/common/f/d;
    .locals 2

    .line 970
    :try_start_0
    invoke-super {p0}, Ljava/lang/Object;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/d;

    .line 972
    iget-object v1, p0, Lcom/tkay/core/common/f/d;->aU:Lcom/tkay/core/api/TYRewardInfo;

    iput-object v1, v0, Lcom/tkay/core/common/f/d;->aU:Lcom/tkay/core/api/TYRewardInfo;

    .line 973
    iget-object v1, p0, Lcom/tkay/core/common/f/d;->bq:Ljava/util/Map;

    iput-object v1, v0, Lcom/tkay/core/common/f/d;->bq:Ljava/util/Map;

    .line 974
    iget-object v1, p0, Lcom/tkay/core/common/f/d;->aV:Ljava/util/Map;

    iput-object v1, v0, Lcom/tkay/core/common/f/d;->aV:Ljava/util/Map;

    .line 975
    iget-object v1, p0, Lcom/tkay/core/common/f/d;->aW:Ljava/util/Map;

    iput-object v1, v0, Lcom/tkay/core/common/f/d;->aW:Ljava/util/Map;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    return-object p0
.end method

.method public final a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 178
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->bq:Ljava/util/Map;

    return-object v0
.end method

.method public final a(D)V
    .locals 0

    .line 186
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->H:D

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 194
    iput p1, p0, Lcom/tkay/core/common/f/d;->bl:I

    return-void
.end method

.method public final a(J)V
    .locals 0

    .line 203
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->bj:J

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYRewardInfo;)V
    .locals 0

    .line 390
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aU:Lcom/tkay/core/api/TYRewardInfo;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 190
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->bp:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 174
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->bq:Ljava/util/Map;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 674
    iput-boolean p1, p0, Lcom/tkay/core/common/f/d;->I:Z

    return-void
.end method

.method public final b()I
    .locals 1

    .line 227
    iget v0, p0, Lcom/tkay/core/common/f/d;->bf:I

    return v0
.end method

.method public final b(D)V
    .locals 0

    .line 274
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->aT:D

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 198
    iput p1, p0, Lcom/tkay/core/common/f/d;->bm:I

    return-void
.end method

.method public final b(J)V
    .locals 0

    .line 239
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->be:J

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 235
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->bd:Ljava/lang/String;

    return-void
.end method

.method public final b(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/TYRewardInfo;",
            ">;)V"
        }
    .end annotation

    .line 382
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aV:Ljava/util/Map;

    return-void
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x1

    .line 243
    iput v0, p0, Lcom/tkay/core/common/f/d;->bc:I

    return-void
.end method

.method public final c(D)V
    .locals 0

    .line 282
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->aQ:D

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 207
    iput p1, p0, Lcom/tkay/core/common/f/d;->bi:I

    return-void
.end method

.method public final c(J)V
    .locals 0

    .line 620
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->aH:J

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 254
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->ba:Ljava/lang/String;

    return-void
.end method

.method public final c(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 398
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aW:Ljava/util/Map;

    return-void
.end method

.method public final d()V
    .locals 2

    .line 247
    iget v0, p0, Lcom/tkay/core/common/f/d;->bc:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    .line 248
    iput v1, p0, Lcom/tkay/core/common/f/d;->bb:I

    :cond_0
    return-void
.end method

.method public final d(D)V
    .locals 0

    .line 447
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->x:D

    return-void
.end method

.method public final d(I)V
    .locals 0

    .line 215
    iput p1, p0, Lcom/tkay/core/common/f/d;->bh:I

    return-void
.end method

.method public final d(J)V
    .locals 0

    .line 624
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->aI:J

    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 290
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aR:Ljava/lang/String;

    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 258
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->ba:Ljava/lang/String;

    return-object v0
.end method

.method public final e(I)V
    .locals 0

    .line 223
    iput p1, p0, Lcom/tkay/core/common/f/d;->bg:I

    return-void
.end method

.method public final e(J)V
    .locals 0

    .line 704
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->L:J

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 299
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aX:Ljava/lang/String;

    return-void
.end method

.method public final f()D
    .locals 2

    .line 270
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->aT:D

    return-wide v0
.end method

.method public final f(I)V
    .locals 0

    .line 231
    iput p1, p0, Lcom/tkay/core/common/f/d;->bf:I

    return-void
.end method

.method public final f(J)V
    .locals 0

    .line 712
    iput-wide p1, p0, Lcom/tkay/core/common/f/d;->M:J

    return-void
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    .line 307
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->y:Ljava/lang/String;

    return-void
.end method

.method public final g()D
    .locals 2

    .line 278
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->aQ:D

    return-wide v0
.end method

.method public final g(I)V
    .locals 0

    .line 312
    iput p1, p0, Lcom/tkay/core/common/f/d;->D:I

    return-void
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 333
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aK:Ljava/lang/String;

    return-void
.end method

.method public final h()Ljava/lang/String;
    .locals 1

    .line 286
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aR:Ljava/lang/String;

    return-object v0
.end method

.method public final h(I)V
    .locals 0

    .line 316
    iput p1, p0, Lcom/tkay/core/common/f/d;->E:I

    return-void
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    .line 342
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aL:Ljava/lang/String;

    return-void
.end method

.method public final i()Ljava/lang/String;
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aX:Ljava/lang/String;

    return-object v0
.end method

.method public final i(I)V
    .locals 0

    .line 320
    iput p1, p0, Lcom/tkay/core/common/f/d;->F:I

    return-void
.end method

.method public final i(Ljava/lang/String;)V
    .locals 0

    .line 358
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aN:Ljava/lang/String;

    return-void
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->y:Ljava/lang/String;

    return-object v0
.end method

.method public final j(I)V
    .locals 0

    .line 324
    iput p1, p0, Lcom/tkay/core/common/f/d;->G:I

    return-void
.end method

.method public final j(Ljava/lang/String;)V
    .locals 0

    .line 366
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aO:Ljava/lang/String;

    return-void
.end method

.method public final k()Ljava/lang/String;
    .locals 1

    .line 329
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aK:Ljava/lang/String;

    return-object v0
.end method

.method public final k(I)V
    .locals 0

    .line 350
    iput p1, p0, Lcom/tkay/core/common/f/d;->aM:I

    return-void
.end method

.method public final k(Ljava/lang/String;)V
    .locals 0

    .line 374
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aP:Ljava/lang/String;

    return-void
.end method

.method public final l()Ljava/lang/String;
    .locals 1

    .line 338
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aL:Ljava/lang/String;

    return-object v0
.end method

.method public final l(I)V
    .locals 0

    .line 414
    iput p1, p0, Lcom/tkay/core/common/f/d;->A:I

    return-void
.end method

.method public final l(Ljava/lang/String;)V
    .locals 0

    .line 463
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    return-void
.end method

.method public final m()I
    .locals 1

    .line 346
    iget v0, p0, Lcom/tkay/core/common/f/d;->aM:I

    return v0
.end method

.method public final m(I)V
    .locals 0

    .line 423
    iput p1, p0, Lcom/tkay/core/common/f/d;->B:I

    return-void
.end method

.method public final m(Ljava/lang/String;)V
    .locals 0

    .line 522
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aB:Ljava/lang/String;

    return-void
.end method

.method public final n()Ljava/lang/String;
    .locals 1

    .line 354
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aN:Ljava/lang/String;

    return-object v0
.end method

.method public final n(I)V
    .locals 0

    .line 439
    iput p1, p0, Lcom/tkay/core/common/f/d;->w:I

    return-void
.end method

.method public final n(Ljava/lang/String;)V
    .locals 0

    .line 547
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->ay:Ljava/lang/String;

    return-void
.end method

.method public final o()Ljava/lang/String;
    .locals 1

    .line 362
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aO:Ljava/lang/String;

    return-object v0
.end method

.method public final o(I)V
    .locals 0

    .line 490
    iput p1, p0, Lcom/tkay/core/common/f/d;->aE:I

    return-void
.end method

.method public final o(Ljava/lang/String;)V
    .locals 0

    .line 565
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->ax:Ljava/lang/String;

    return-void
.end method

.method public final p()Ljava/lang/String;
    .locals 1

    .line 370
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aP:Ljava/lang/String;

    return-object v0
.end method

.method public final p(I)V
    .locals 0

    .line 498
    iput p1, p0, Lcom/tkay/core/common/f/d;->aF:I

    return-void
.end method

.method public final p(Ljava/lang/String;)V
    .locals 1

    .line 584
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 585
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->p:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final q()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/TYRewardInfo;",
            ">;"
        }
    .end annotation

    .line 378
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aV:Ljava/util/Map;

    return-object v0
.end method

.method public final q(I)V
    .locals 0

    .line 506
    iput p1, p0, Lcom/tkay/core/common/f/d;->az:I

    return-void
.end method

.method public final q(Ljava/lang/String;)V
    .locals 0

    .line 641
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->aZ:Ljava/lang/String;

    return-void
.end method

.method public final r()Lcom/tkay/core/api/TYRewardInfo;
    .locals 1

    .line 386
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aU:Lcom/tkay/core/api/TYRewardInfo;

    return-object v0
.end method

.method public final r(I)V
    .locals 0

    .line 514
    iput p1, p0, Lcom/tkay/core/common/f/d;->aA:I

    return-void
.end method

.method public final r(Ljava/lang/String;)V
    .locals 0

    .line 690
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->K:Ljava/lang/String;

    return-void
.end method

.method public final s()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 394
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aW:Ljava/util/Map;

    return-object v0
.end method

.method public final s(I)V
    .locals 0

    .line 530
    iput p1, p0, Lcom/tkay/core/common/f/d;->aC:I

    return-void
.end method

.method public final s(Ljava/lang/String;)V
    .locals 0

    .line 720
    iput-object p1, p0, Lcom/tkay/core/common/f/d;->N:Ljava/lang/String;

    return-void
.end method

.method public final t()I
    .locals 1

    .line 410
    iget v0, p0, Lcom/tkay/core/common/f/d;->A:I

    return v0
.end method

.method public final t(I)V
    .locals 0

    .line 538
    iput p1, p0, Lcom/tkay/core/common/f/d;->aD:I

    return-void
.end method

.method public final u()I
    .locals 1

    .line 419
    iget v0, p0, Lcom/tkay/core/common/f/d;->B:I

    return v0
.end method

.method public final u(I)V
    .locals 0

    .line 557
    iput p1, p0, Lcom/tkay/core/common/f/d;->o:I

    return-void
.end method

.method public final v()I
    .locals 1

    .line 435
    iget v0, p0, Lcom/tkay/core/common/f/d;->w:I

    return v0
.end method

.method public final v(I)V
    .locals 0

    .line 574
    iput p1, p0, Lcom/tkay/core/common/f/d;->aw:I

    return-void
.end method

.method public final w()D
    .locals 2

    .line 443
    iget-wide v0, p0, Lcom/tkay/core/common/f/d;->x:D

    return-wide v0
.end method

.method public final w(I)V
    .locals 0

    .line 649
    iput p1, p0, Lcom/tkay/core/common/f/d;->bk:I

    return-void
.end method

.method public final x()Ljava/lang/String;
    .locals 1

    .line 459
    iget-object v0, p0, Lcom/tkay/core/common/f/d;->aJ:Ljava/lang/String;

    return-object v0
.end method

.method public final x(I)V
    .locals 0

    .line 653
    iput p1, p0, Lcom/tkay/core/common/f/d;->bn:I

    return-void
.end method

.method public final y()I
    .locals 2

    .line 471
    iget v0, p0, Lcom/tkay/core/common/f/d;->bi:I

    const/16 v1, 0x8

    if-eq v0, v1, :cond_1

    const/16 v1, 0x9

    if-eq v0, v1, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x2

    return v0
.end method

.method public final y(I)V
    .locals 0

    .line 661
    iput p1, p0, Lcom/tkay/core/common/f/d;->bo:I

    return-void
.end method

.method public final z()I
    .locals 1

    .line 486
    iget v0, p0, Lcom/tkay/core/common/f/d;->aE:I

    return v0
.end method

.method public final z(I)V
    .locals 0

    .line 682
    iput p1, p0, Lcom/tkay/core/common/f/d;->J:I

    return-void
.end method
