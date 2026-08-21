.class Lcom/sigmob/sdk/base/common/aa;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/q;


# instance fields
.field private a:I

.field private b:Z

.field private c:I

.field private d:I


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    iput v0, p0, Lcom/sigmob/sdk/base/common/aa;->d:I

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/aa;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    return p0
.end method

.method private a(I)Ljava/lang/String;
    .locals 0

    if-nez p1, :cond_0

    const-string p1, "0"

    return-object p1

    :cond_0
    div-int/lit16 p1, p1, 0x3e8

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/aa;I)Ljava/lang/String;
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/aa;->b(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/common/aa$1;

    invoke-direct {v0, p0, p3, p2, p1}, Lcom/sigmob/sdk/base/common/aa$1;-><init>(Lcom/sigmob/sdk/base/common/aa;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {p2, p4, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method private a()Z
    .locals 2

    iget v0, p0, Lcom/sigmob/sdk/base/common/aa;->d:I

    if-lez v0, :cond_0

    mul-int/lit16 v0, v0, 0x3e8

    iget v1, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-ge v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private b()I
    .locals 3

    iget v0, p0, Lcom/sigmob/sdk/base/common/aa;->d:I

    if-lez v0, :cond_0

    mul-int/lit16 v1, v0, 0x3e8

    iget v2, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-ge v1, v2, :cond_0

    mul-int/lit16 v0, v0, 0x3e8

    return v0

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    return v0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/aa;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/common/aa;->c:I

    return p0
.end method

.method private b(I)Ljava/lang/String;
    .locals 3

    if-nez p1, :cond_0

    const-string p1, "0"

    return-object p1

    :cond_0
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    int-to-float p1, p1

    const/high16 v2, 0x447a0000    # 1000.0f

    div-float/2addr p1, v2

    invoke-static {p1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p1

    aput-object p1, v0, v1

    const-string p1, "%.2f"

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/aa;I)Ljava/lang/String;
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/common/aa;)I
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result p0

    return p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/common/aa;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/common/aa;->d:I

    return p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/base/common/aa;)Z
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/aa;->a()Z

    move-result p0

    return p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/base/common/aa;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/base/common/aa;->b:Z

    return p0
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;II)Z
    .locals 0

    iput p2, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndTime()I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/base/common/aa;->d:I

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p1

    instance-of p2, p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz p2, :cond_0

    check-cast p1, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget p2, p0, Lcom/sigmob/sdk/base/common/aa;->a:I

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object p2

    const-string p3, "_VIDEOTIME_"

    invoke-virtual {p1, p3, p2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x1

    return p1
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;I)Z
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move/from16 v2, p3

    :try_start_0
    sget-object v3, Lcom/sigmob/sdk/base/common/aa$2;->a:[I

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/common/a;->ordinal()I

    move-result v4

    aget v3, v3, v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v4, "_VIDEOTIME_"

    const-string v5, "_COMPLETED_"

    const-string v6, "close"

    const-string v7, "show"

    const-string v8, "fourElements"

    const-string v9, "closecard"

    const-string v11, "silent"

    const-string v12, "1"

    const-string v13, "play"

    const-string v14, "_ENDTIME_"

    const-string v15, "0"

    const-string v10, "_PROGRESS_"

    packed-switch v3, :pswitch_data_0

    :try_start_1
    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object v3

    goto/16 :goto_a

    :pswitch_0
    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v0, v3, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    goto/16 :goto_b

    :pswitch_1
    const-string v3, "0.85"

    invoke-direct {v1, v0, v13, v2, v3}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_0

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "85"

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->q:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-static {v0, v2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    goto/16 :goto_b

    :pswitch_2
    const-string v3, "0.75"

    invoke-direct {v1, v0, v13, v2, v3}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_1

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "75"

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->p:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :pswitch_3
    const-string v3, "0.50"

    invoke-direct {v1, v0, v13, v2, v3}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_2

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "50"

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->o:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :pswitch_4
    const-string v3, "0.25"

    invoke-direct {v1, v0, v13, v2, v3}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_3

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "25"

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->n:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :pswitch_5
    invoke-direct {v1, v0, v13, v2, v15}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_6
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    if-eqz v3, :cond_1f

    const-string v3, "screenswitch"

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v4

    invoke-virtual {v4}, Lcom/czhj/sdk/common/ClientMetadata;->getRotation()Ljava/lang/String;

    move-result-object v4

    :goto_1
    invoke-direct {v1, v0, v3, v2, v4}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_7
    invoke-direct {v1, v0, v11, v2, v15}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_8
    invoke-direct {v1, v0, v11, v2, v12}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_9
    const-string v3, "vclose"

    const/4 v4, 0x0

    goto :goto_1

    :pswitch_a
    if-nez v2, :cond_4

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_4
    const-string v3, "finish"

    invoke-direct {v1, v0, v3, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_6

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_5

    if-lez v2, :cond_5

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v6, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v7

    div-int/2addr v6, v7

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v4, v10, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_5
    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v4, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v4, v5, v12}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v5, "_PLAYLASTFRAME_"

    invoke-virtual {v4, v5, v12}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->b:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_b
    if-nez v2, :cond_7

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_7
    const-string v3, "complete"

    invoke-direct {v1, v0, v3, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_8

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v2, "100"

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->r:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_c
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v5, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v5, :cond_a

    move-object v5, v3

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v6, "_SHOWSKIPTIME_"

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v5, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v5, :cond_9

    if-lez v2, :cond_9

    move-object v5, v3

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v6, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v7

    div-int/2addr v6, v7

    invoke-static {v6}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v10, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_9
    move-object v5, v3

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v5, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    move-object v5, v3

    check-cast v5, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v14, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget v2, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v4, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->L:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_d
    if-nez v2, :cond_b

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_b
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_d

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v14, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_c

    if-lez v2, :cond_c

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v2, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v4

    div-int/2addr v2, v4

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_c
    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    :goto_4
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->v:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_e
    if-nez v2, :cond_e

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_e
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_10

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v14, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_f

    if-lez v2, :cond_f

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v2, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v4

    div-int/2addr v2, v4

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_5

    :cond_f
    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    :goto_5
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->u:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_f
    if-nez v2, :cond_11

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_11
    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_13

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v14, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_12

    if-lez v2, :cond_12

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v2, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v4

    div-int/2addr v2, v4

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_6

    :cond_12
    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    :goto_6
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_10
    if-nez v2, :cond_14

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_14
    const-string v3, "endcard"

    sget-object v4, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/common/a;->a()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v0, v3, v2, v4}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_16

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v14, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_15

    if-lez v2, :cond_15

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v2, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v4

    div-int/2addr v2, v4

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    :cond_15
    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_16
    :goto_7
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_11
    if-nez v2, :cond_17

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_17
    invoke-direct {v1, v0, v8, v2, v6}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_12
    if-nez v2, :cond_18

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_18
    invoke-direct {v1, v0, v8, v2, v7}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_13
    if-nez v2, :cond_19

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_19
    invoke-direct {v1, v0, v9, v2, v6}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_14
    if-nez v2, :cond_1a

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v2

    :cond_1a
    invoke-direct {v1, v0, v9, v2, v7}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    goto/16 :goto_b

    :pswitch_15
    const-string v3, "skip"

    invoke-direct {v1, v0, v3, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v3

    instance-of v4, v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v4, :cond_1c

    move-object v4, v3

    check-cast v4, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-direct {v1, v2}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v14, v5}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    iget v4, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    if-lez v4, :cond_1b

    if-lez v2, :cond_1b

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    mul-int/lit8 v2, v2, 0x64

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v4

    div-int/2addr v2, v4

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v10, v2}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    :cond_1b
    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v10, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1c
    :goto_8
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :pswitch_16
    const-string v3, "start"

    const/4 v6, 0x0

    invoke-direct {v1, v0, v3, v2, v6}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object v2

    instance-of v3, v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v3, :cond_1e

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v6, "_SETCLOSETIME_"

    iget v7, v1, Lcom/sigmob/sdk/base/common/aa;->d:I

    invoke-static {v7}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v6, v7}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v14, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget v6, v1, Lcom/sigmob/sdk/base/common/aa;->a:I

    invoke-direct {v1, v6}, Lcom/sigmob/sdk/base/common/aa;->a(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v4, v6}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-virtual {v3, v5, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    move-object v3, v2

    check-cast v3, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v4, "_PLAYFIRSTFRAME_"

    invoke-virtual {v3, v4, v15}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    check-cast v2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v3, "_ISTRUNCATION_"

    invoke-direct/range {p0 .. p0}, Lcom/sigmob/sdk/base/common/aa;->a()Z

    move-result v4

    if-eqz v4, :cond_1d

    goto :goto_9

    :cond_1d
    move-object v12, v15

    :goto_9
    invoke-virtual {v2, v3, v12}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1e
    sget-object v2, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    goto/16 :goto_0

    :goto_a
    invoke-direct {v1, v0, v3, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;I)V

    invoke-static/range {p1 .. p2}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_b

    :catchall_0
    move-exception v0

    const-string v2, "recordDisplayEvent "

    invoke-static {v2, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1f
    :goto_b
    const/4 v0, 0x1

    return v0

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
        :pswitch_10
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;ZI)Z
    .locals 0

    iput-boolean p2, p0, Lcom/sigmob/sdk/base/common/aa;->b:Z

    iput p3, p0, Lcom/sigmob/sdk/base/common/aa;->c:I

    const/4 p1, 0x1

    return p1
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 3

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->w:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/aa;->b()I

    move-result v0

    const-string v1, "endcard"

    const-string v2, "close"

    invoke-direct {p0, p1, v1, v0, v2}, Lcom/sigmob/sdk/base/common/aa;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method
