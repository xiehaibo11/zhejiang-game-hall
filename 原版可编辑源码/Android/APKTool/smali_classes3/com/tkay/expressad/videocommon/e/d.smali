.class public Lcom/tkay/expressad/videocommon/e/d;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x2

.field private static ak:Lcom/tkay/expressad/foundation/c/c; = null

.field public static final b:I = 0x4

.field public static final c:I = 0x5

.field public static final d:I = 0x6

.field public static final e:I = 0x7

.field public static final f:I = -0x2

.field public static final g:I = 0x1

.field public static final h:I = 0x0

.field public static final i:I = 0x1

.field public static final j:I = 0x2

.field public static final k:I = 0x0

.field public static final l:I = -0x1

.field public static final m:I = 0x5

.field public static final n:I = 0x0

.field public static final o:I = 0x2

.field public static final p:I = 0x2

.field public static final q:I = -0x1

.field public static final r:I = -0x2

.field public static final s:I = -0x3

.field public static final t:I = 0x1

.field public static final u:I = -0x1

.field public static final v:I = 0x1

.field public static final w:I = 0x2

.field public static x:Ljava/lang/String;


# instance fields
.field private A:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/c/b;",
            ">;"
        }
    .end annotation
.end field

.field private B:J

.field private C:I

.field private D:I

.field private E:I

.field private F:I

.field private G:I

.field private H:I

.field private I:I

.field private J:D

.field private K:I

.field private L:I

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:I

.field private R:D

.field private S:I

.field private T:I

.field private U:D

.field private V:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private W:I

.field private X:I

.field private Y:I

.field private Z:I

.field private aa:I

.field private ab:Ljava/lang/String;

.field private ac:I

.field private ad:I

.field private ae:I

.field private af:I

.field private ag:I

.field private ah:I

.field private ai:I

.field private aj:I

.field private al:I

.field private am:I

.field private an:I

.field private ao:Ljava/lang/String;

.field private ap:I

.field private aq:Ljava/lang/String;

.field private ar:I

.field private as:Ljava/lang/String;

.field private at:I

.field private au:I

.field private av:I

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 8

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 63
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->C:I

    const/4 v1, 0x0

    .line 69
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->D:I

    .line 74
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->E:I

    const/4 v2, 0x1

    .line 78
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->F:I

    .line 80
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->G:I

    .line 82
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->H:I

    .line 84
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->I:I

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    .line 86
    iput-wide v3, p0, Lcom/tkay/expressad/videocommon/e/d;->J:D

    const/4 v5, 0x2

    .line 88
    iput v5, p0, Lcom/tkay/expressad/videocommon/e/d;->K:I

    const/4 v6, 0x5

    .line 90
    iput v6, p0, Lcom/tkay/expressad/videocommon/e/d;->L:I

    .line 95
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->M:I

    const/4 v6, 0x3

    .line 97
    iput v6, p0, Lcom/tkay/expressad/videocommon/e/d;->N:I

    const/16 v7, 0x50

    .line 99
    iput v7, p0, Lcom/tkay/expressad/videocommon/e/d;->O:I

    const/16 v7, 0x64

    .line 101
    iput v7, p0, Lcom/tkay/expressad/videocommon/e/d;->P:I

    .line 103
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->Q:I

    .line 112
    iput-wide v3, p0, Lcom/tkay/expressad/videocommon/e/d;->R:D

    .line 114
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->S:I

    .line 125
    iput v5, p0, Lcom/tkay/expressad/videocommon/e/d;->T:I

    .line 131
    iput-wide v3, p0, Lcom/tkay/expressad/videocommon/e/d;->U:D

    .line 145
    iput v6, p0, Lcom/tkay/expressad/videocommon/e/d;->W:I

    .line 154
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->X:I

    .line 166
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    const/16 v3, 0xa

    .line 173
    iput v3, p0, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    const/16 v3, 0x3c

    .line 180
    iput v3, p0, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    const-string v4, ""

    .line 181
    iput-object v4, p0, Lcom/tkay/expressad/videocommon/e/d;->ab:Ljava/lang/String;

    .line 232
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    const/16 v5, 0x46

    .line 294
    iput v5, p0, Lcom/tkay/expressad/videocommon/e/d;->ad:I

    .line 296
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    .line 297
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->af:I

    .line 298
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    .line 299
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    const/16 v0, 0x14

    .line 304
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->aj:I

    .line 352
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->am:I

    .line 353
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->an:I

    .line 354
    iput-object v4, p0, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    .line 355
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ap:I

    .line 356
    iput-object v4, p0, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    .line 357
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    const-string v0, "Virtual Item"

    .line 358
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->as:Ljava/lang/String;

    .line 360
    iput v1, p0, Lcom/tkay/expressad/videocommon/e/d;->at:I

    .line 366
    iput v2, p0, Lcom/tkay/expressad/videocommon/e/d;->au:I

    .line 371
    iput v3, p0, Lcom/tkay/expressad/videocommon/e/d;->av:I

    return-void
.end method

.method public static J()Ljava/lang/String;
    .locals 1

    .line 605
    sget-object v0, Lcom/tkay/expressad/videocommon/e/d;->x:Ljava/lang/String;

    return-object v0
.end method

.method private W()Ljava/lang/String;
    .locals 1

    .line 184
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ab:Ljava/lang/String;

    return-object v0
.end method

.method private X()I
    .locals 1

    .line 192
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    return v0
.end method

.method private Y()I
    .locals 1

    .line 200
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    return v0
.end method

.method private Z()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 216
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    return-object v0
.end method

.method public static a(Lorg/json/JSONObject;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 12

    const-string v0, ""

    const/4 v1, 0x0

    if-eqz p0, :cond_8

    .line 985
    :try_start_0
    new-instance v2, Lcom/tkay/expressad/videocommon/e/d;

    invoke-direct {v2}, Lcom/tkay/expressad/videocommon/e/d;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v1, "adSourceList"

    .line 987
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 986
    invoke-static {v1}, Lcom/tkay/expressad/videocommon/c/b;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v1

    .line 17585
    iput-object v1, v2, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    const-string v1, "callbackType"

    .line 989
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 18561
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->F:I

    const-string v1, "aqn"

    const/4 v3, 0x1

    .line 990
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gtz v1, :cond_0

    move v1, v3

    .line 19505
    :cond_0
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->G:I

    const-string v1, "acn"

    .line 995
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gez v1, :cond_1

    move v1, v3

    .line 19513
    :cond_1
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->H:I

    const-string v1, "vcn"

    const/4 v4, 0x5

    .line 1000
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19521
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->I:I

    const-string v1, "cbp"

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    .line 1001
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v7

    .line 19525
    iput-wide v7, v2, Lcom/tkay/expressad/videocommon/e/d;->J:D

    const-string v1, "ttc_type"

    const/4 v7, 0x2

    .line 1002
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19537
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->K:I

    const-string v1, "offset"

    .line 1003
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19545
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->L:I

    const-string v1, "dlnet"

    .line 1004
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19553
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->M:I

    const-string v1, "endscreen_type"

    .line 1005
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20464
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->al:I

    const-string v1, "tv_start"

    const/4 v4, 0x3

    .line 1007
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20472
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->N:I

    const-string v1, "tv_end"

    const/16 v8, 0x50

    .line 1008
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20480
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->O:I

    const-string v1, "ready_rate"

    const/16 v8, 0x64

    .line 1009
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20489
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->P:I

    const-string v1, "current_time"

    .line 1010
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v8

    .line 20569
    iput-wide v8, v2, Lcom/tkay/expressad/videocommon/e/d;->B:J

    const-string v1, "orientation"

    const/4 v8, 0x0

    .line 1012
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21228
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    const-string v1, "daily_play_cap"

    .line 1013
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21242
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    const-string v1, "video_skip_time"

    const/4 v9, -0x1

    .line 1015
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21250
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->af:I

    const-string v1, "video_skip_result"

    .line 1016
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21258
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    const-string v1, "video_interactive_type"

    .line 1017
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21266
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    const-string v1, "close_button_delay"

    .line 1018
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21456
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ai:I

    const-string v1, "playclosebtn_tm"

    .line 1020
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22274
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->C:I

    const-string v1, "play_ctdown"

    .line 1021
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22282
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->D:I

    const-string v1, "close_alert"

    .line 1022
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22290
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->E:I

    const-string v1, "rdrct"

    const/16 v10, 0x14

    .line 1024
    invoke-virtual {p0, v1, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22448
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->aj:I

    const-string v1, "rfpv"

    .line 1026
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22662
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->S:I

    const-string v1, "vdcmp"

    .line 1027
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 23601
    iput-wide v9, v2, Lcom/tkay/expressad/videocommon/e/d;->R:D

    const-string v1, "ccbprule"

    .line 1031
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 23628
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->T:I

    const-string v1, "ccbp"

    .line 1032
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 23636
    iput-wide v9, v2, Lcom/tkay/expressad/videocommon/e/d;->U:D

    const-string v1, "load_global_timeout"

    const/16 v9, 0x46

    .line 1034
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 24097
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ad:I

    const-string v1, "atl_type"

    .line 1036
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 1037
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v1, :cond_2

    move v10, v8

    .line 1040
    :goto_0
    :try_start_2
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v11

    if-ge v10, v11, :cond_3

    .line 1041
    invoke-virtual {v1, v10}, Lorg/json/JSONArray;->getInt(I)I

    move-result v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x4

    .line 1047
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v9, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x6

    .line 1048
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v9, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 24220
    :cond_3
    iput-object v9, v2, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 1052
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    const-string v1, "atl_dyt"

    .line 1054
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 24678
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->W:I

    const-string v1, "tmorl"

    .line 1056
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gt v1, v7, :cond_4

    if-gtz v1, :cond_5

    :cond_4
    move v1, v3

    .line 25644
    :cond_5
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->X:I

    .line 26529
    iget-wide v9, v2, Lcom/tkay/expressad/videocommon/e/d;->J:D

    cmpl-double v1, v9, v5

    if-nez v1, :cond_6

    goto :goto_2

    .line 1066
    :cond_6
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextDouble()D

    move-result-wide v4

    .line 27529
    iget-wide v6, v2, Lcom/tkay/expressad/videocommon/e/d;->J:D

    cmpl-double v1, v4, v6

    if-lez v1, :cond_7

    move v1, v3

    goto :goto_3

    :cond_7
    :goto_2
    move v1, v8

    .line 28212
    :goto_3
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    const-string v1, "placementid"

    .line 1070
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 28670
    iput-object v1, v2, Lcom/tkay/expressad/videocommon/e/d;->z:Ljava/lang/String;

    const-string v1, "ltafemty"

    const/16 v4, 0xa

    .line 1072
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 29196
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    const-string v1, "ltorwc"

    const/16 v4, 0x3c

    .line 1073
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 29204
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    const-string v1, "ab_id"

    .line 1074
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 30188
    iput-object v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ab:Ljava/lang/String;

    const-string v1, "amount_max"

    .line 1075
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30378
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->am:I

    const-string v1, "callback_rule"

    .line 1076
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30386
    iput v1, v2, Lcom/tkay/expressad/videocommon/e/d;->an:I

    const-string v1, "virtual_currency"

    .line 1077
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 30394
    iput-object v1, v2, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    const-string v1, "amount"

    .line 1078
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-direct {v2, v1}, Lcom/tkay/expressad/videocommon/e/d;->i(I)V

    const-string v1, "icon"

    .line 1079
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 30414
    iput-object v0, v2, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    const-string v0, "currency_id"

    .line 1080
    invoke-virtual {p0, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 30422
    iput v0, v2, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    const-string v0, "name"

    const-string v1, "Virtual Item"

    .line 1081
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Lcom/tkay/expressad/videocommon/e/d;->g(Ljava/lang/String;)V

    const-string v0, "video_error_rule"

    .line 1082
    invoke-virtual {p0, v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 31113
    iput v0, v2, Lcom/tkay/expressad/videocommon/e/d;->au:I

    const-string v0, "loadtmo"

    .line 1083
    invoke-virtual {p0, v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 31121
    iput p0, v2, Lcom/tkay/expressad/videocommon/e/d;->av:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    move-object v1, v2

    goto :goto_5

    :catch_1
    move-exception p0

    move-object v1, v2

    goto :goto_4

    :catch_2
    move-exception p0

    .line 1087
    :goto_4
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_8
    :goto_5
    return-object v1
.end method

.method private a(D)V
    .locals 0

    .line 525
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/e/d;->J:D

    return-void
.end method

.method private a(J)V
    .locals 0

    .line 569
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/e/d;->B:J

    return-void
.end method

.method private aa()I
    .locals 1

    .line 238
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    return v0
.end method

.method private ab()I
    .locals 1

    .line 278
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->D:I

    return v0
.end method

.method private ac()I
    .locals 1

    .line 374
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->am:I

    return v0
.end method

.method private ad()I
    .locals 1

    .line 382
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->an:I

    return v0
.end method

.method private ae()Ljava/lang/String;
    .locals 1

    .line 390
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    return-object v0
.end method

.method private af()Ljava/lang/String;
    .locals 1

    .line 410
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    return-object v0
.end method

.method private ag()I
    .locals 1

    .line 418
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    return v0
.end method

.method private ah()I
    .locals 1

    .line 468
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->N:I

    return v0
.end method

.method private ai()I
    .locals 1

    .line 476
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->O:I

    return v0
.end method

.method private aj()I
    .locals 1

    .line 501
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->G:I

    return v0
.end method

.method private ak()I
    .locals 1

    .line 517
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->I:I

    return v0
.end method

.method private al()D
    .locals 2

    .line 529
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/d;->J:D

    return-wide v0
.end method

.method private am()I
    .locals 1

    .line 533
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->K:I

    return v0
.end method

.method private an()I
    .locals 1

    .line 557
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->F:I

    return v0
.end method

.method private ao()J
    .locals 2

    .line 565
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/d;->B:J

    return-wide v0
.end method

.method private ap()Ljava/lang/String;
    .locals 1

    .line 573
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->y:Ljava/lang/String;

    return-object v0
.end method

.method private aq()D
    .locals 2

    .line 597
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/d;->R:D

    return-wide v0
.end method

.method private ar()I
    .locals 1

    .line 674
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->W:I

    return v0
.end method

.method private as()Ljava/util/Queue;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 691
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 692
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v0, 0x0

    .line 693
    :goto_0
    :try_start_1
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_0

    .line 694
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/videocommon/c/b;

    .line 695
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v2

    .line 696
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v1

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    .line 701
    :goto_1
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_0

    .line 702
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    move-object v0, v1

    :cond_1
    return-object v0
.end method

.method private at()I
    .locals 1

    .line 1101
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->at:I

    return v0
.end method

.method private b(D)V
    .locals 0

    .line 601
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/e/d;->R:D

    return-void
.end method

.method private b(I)V
    .locals 0

    .line 196
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    return-void
.end method

.method public static c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 12

    const-string v0, ""

    .line 738
    sget-object v1, Lcom/tkay/expressad/videocommon/e/d;->ak:Lcom/tkay/expressad/foundation/c/c;

    if-nez v1, :cond_0

    .line 739
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/c/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/c/c;

    move-result-object v1

    sput-object v1, Lcom/tkay/expressad/videocommon/e/d;->ak:Lcom/tkay/expressad/foundation/c/c;

    .line 741
    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_b

    .line 743
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "unitSetting"

    .line 744
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_a

    const/4 v3, 0x0

    .line 746
    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_a

    const-string v4, "unitId"

    .line 749
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 750
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_a

    .line 751
    new-instance v5, Lcom/tkay/expressad/videocommon/e/d;

    invoke-direct {v5}, Lcom/tkay/expressad/videocommon/e/d;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v2, "adSourceList"

    .line 754
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 753
    invoke-static {v2}, Lcom/tkay/expressad/videocommon/c/b;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v2

    .line 1577
    iput-object v4, v5, Lcom/tkay/expressad/videocommon/e/d;->y:Ljava/lang/String;

    .line 1585
    iput-object v2, v5, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    const-string v2, "callbackType"

    .line 760
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 2561
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->F:I

    const-string v2, "aqn"

    const/4 v4, 0x1

    .line 761
    invoke-virtual {p0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-gtz v2, :cond_1

    move v2, v4

    .line 3505
    :cond_1
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->G:I

    const-string v2, "acn"

    .line 767
    invoke-virtual {p0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    if-gez v2, :cond_2

    move v2, v4

    .line 3513
    :cond_2
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->H:I

    const-string v2, "vcn"

    const/4 v6, 0x5

    .line 773
    invoke-virtual {p0, v2, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 3521
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->I:I

    const-string v2, "cbp"

    const-wide/high16 v7, 0x3ff0000000000000L    # 1.0

    .line 775
    invoke-virtual {p0, v2, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 3525
    iput-wide v9, v5, Lcom/tkay/expressad/videocommon/e/d;->J:D

    const-string v2, "ttc_type"

    const/4 v9, 0x2

    .line 777
    invoke-virtual {p0, v2, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 3537
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->K:I

    const-string v2, "offset"

    .line 779
    invoke-virtual {p0, v2, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 3545
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->L:I

    const-string v2, "dlnet"

    .line 781
    invoke-virtual {p0, v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 3553
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->M:I

    const-string v2, "endscreen_type"

    .line 783
    invoke-virtual {p0, v2, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 4464
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->al:I

    const-string v2, "tv_start"

    const/4 v6, 0x3

    .line 785
    invoke-virtual {p0, v2, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 4472
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->N:I

    const-string v2, "tv_end"

    const/16 v10, 0x50

    .line 786
    invoke-virtual {p0, v2, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 4480
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->O:I

    const-string v2, "ready_rate"

    const/16 v10, 0x64

    .line 787
    invoke-virtual {p0, v2, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 4489
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->P:I

    const-string v2, "cd_rate"

    .line 788
    invoke-virtual {p0, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    .line 4497
    iput v2, v5, Lcom/tkay/expressad/videocommon/e/d;->Q:I

    const-string v2, "current_time"

    .line 790
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    .line 4569
    iput-wide v1, v5, Lcom/tkay/expressad/videocommon/e/d;->B:J

    const-string v1, "orientation"

    .line 793
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5228
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    const-string v1, "daily_play_cap"

    .line 794
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5242
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    const-string v1, "video_skip_time"

    const/4 v2, -0x1

    .line 796
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5250
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->af:I

    const-string v1, "video_skip_result"

    .line 797
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5258
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    const-string v1, "video_interactive_type"

    .line 798
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5266
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    const-string v1, "close_button_delay"

    .line 799
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 5456
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ai:I

    const-string v1, "playclosebtn_tm"

    .line 801
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 6274
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->C:I

    const-string v1, "play_ctdown"

    .line 802
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 6282
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->D:I

    const-string v1, "close_alert"

    .line 803
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 6290
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->E:I

    const-string v1, "rdrct"

    const/16 v10, 0x14

    .line 805
    invoke-virtual {p0, v1, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 6448
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->aj:I

    const-string v1, "load_global_timeout"

    const/16 v10, 0x46

    .line 806
    invoke-virtual {p0, v1, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 7097
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ad:I

    const-string v1, "rfpv"

    .line 809
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 7662
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->S:I

    const-string v1, "vdcmp"

    .line 810
    invoke-virtual {p0, v1, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v1

    .line 8601
    iput-wide v1, v5, Lcom/tkay/expressad/videocommon/e/d;->R:D

    const-string v1, "ccbprule"

    .line 814
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 8628
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->T:I

    const-string v1, "ccbp"

    .line 815
    invoke-virtual {p0, v1, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v1

    .line 8636
    iput-wide v1, v5, Lcom/tkay/expressad/videocommon/e/d;->U:D

    const-string v1, "atzu"

    .line 816
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 9609
    sput-object v1, Lcom/tkay/expressad/videocommon/e/d;->x:Ljava/lang/String;

    const-string v1, "atl_type"

    .line 819
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 820
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v1, :cond_3

    move v10, v3

    .line 823
    :goto_0
    :try_start_2
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v11

    if-ge v10, v11, :cond_4

    .line 824
    invoke-virtual {v1, v10}, Lorg/json/JSONArray;->getInt(I)I

    move-result v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v2, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    :cond_3
    const/4 v1, 0x4

    .line 830
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x6

    .line 831
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 10220
    :cond_4
    iput-object v2, v5, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 836
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    const-string v1, "atl_dyt"

    .line 839
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-lez v1, :cond_5

    move v6, v1

    .line 10678
    :cond_5
    iput v6, v5, Lcom/tkay/expressad/videocommon/e/d;->W:I

    const-string v1, "tmorl"

    .line 842
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gt v1, v9, :cond_6

    if-gtz v1, :cond_7

    :cond_6
    move v1, v4

    .line 11644
    :cond_7
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->X:I

    .line 12529
    iget-wide v1, v5, Lcom/tkay/expressad/videocommon/e/d;->J:D

    cmpl-double v1, v1, v7

    if-nez v1, :cond_8

    goto :goto_2

    .line 852
    :cond_8
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextDouble()D

    move-result-wide v1

    .line 13529
    iget-wide v6, v5, Lcom/tkay/expressad/videocommon/e/d;->J:D

    cmpl-double v1, v1, v6

    if-lez v1, :cond_9

    move v1, v4

    goto :goto_3

    :cond_9
    :goto_2
    move v1, v3

    .line 14212
    :goto_3
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    const-string v1, "placementid"

    .line 856
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 14670
    iput-object v1, v5, Lcom/tkay/expressad/videocommon/e/d;->z:Ljava/lang/String;

    const-string v1, "ltafemty"

    const/16 v2, 0xa

    .line 858
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 15196
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    const-string v1, "ltorwc"

    const/16 v2, 0x3c

    .line 859
    invoke-virtual {p0, v1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 15204
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    const-string v1, "ab_id"

    .line 860
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 16188
    iput-object v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ab:Ljava/lang/String;

    const-string v1, "amount_max"

    .line 861
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 16378
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->am:I

    const-string v1, "callback_rule"

    .line 862
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 16386
    iput v1, v5, Lcom/tkay/expressad/videocommon/e/d;->an:I

    const-string v1, "virtual_currency"

    .line 863
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 16394
    iput-object v1, v5, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    const-string v1, "amount"

    .line 864
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-direct {v5, v1}, Lcom/tkay/expressad/videocommon/e/d;->i(I)V

    const-string v1, "icon"

    .line 865
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 16414
    iput-object v0, v5, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    const-string v0, "currency_id"

    .line 866
    invoke-virtual {p0, v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 16422
    iput v0, v5, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    const-string v0, "name"

    const-string v1, "Virtual Item"

    .line 867
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v5, v0}, Lcom/tkay/expressad/videocommon/e/d;->g(Ljava/lang/String;)V

    const-string v0, "video_error_rule"

    .line 868
    invoke-virtual {p0, v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    .line 17113
    iput v0, v5, Lcom/tkay/expressad/videocommon/e/d;->au:I

    const-string v0, "loadtmo"

    .line 869
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 17121
    iput p0, v5, Lcom/tkay/expressad/videocommon/e/d;->av:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    move-object v2, v5

    goto :goto_4

    :catch_1
    move-exception p0

    move-object v2, v5

    goto :goto_5

    :cond_a
    :goto_4
    return-object v2

    :catch_2
    move-exception p0

    .line 875
    :goto_5
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    return-object v2
.end method

.method private c(D)V
    .locals 0

    .line 636
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/e/d;->U:D

    return-void
.end method

.method private c(I)V
    .locals 0

    .line 204
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    return-void
.end method

.method private d(I)V
    .locals 0

    .line 212
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 0

    .line 188
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ab:Ljava/lang/String;

    return-void
.end method

.method private e(I)V
    .locals 0

    .line 274
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->C:I

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 394
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    return-void
.end method

.method private f(I)V
    .locals 0

    .line 282
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->D:I

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 414
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    return-void
.end method

.method private g(I)V
    .locals 0

    .line 378
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->am:I

    return-void
.end method

.method private g(Ljava/lang/String;)V
    .locals 1

    .line 431
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 432
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->as:Ljava/lang/String;

    return-void

    .line 434
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->as:Ljava/lang/String;

    return-void
.end method

.method private h(I)V
    .locals 0

    .line 386
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->an:I

    return-void
.end method

.method private static h(Ljava/lang/String;)V
    .locals 0

    .line 609
    sput-object p0, Lcom/tkay/expressad/videocommon/e/d;->x:Ljava/lang/String;

    return-void
.end method

.method private i(I)V
    .locals 0

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    .line 403
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ap:I

    return-void

    .line 405
    :cond_0
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ap:I

    return-void
.end method

.method private j(I)V
    .locals 0

    .line 422
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    return-void
.end method

.method private k(I)V
    .locals 0

    .line 448
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->aj:I

    return-void
.end method

.method private l(I)V
    .locals 0

    .line 537
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->K:I

    return-void
.end method

.method private m(I)I
    .locals 2

    .line 613
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->S:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    const/16 v0, 0x5e

    if-ne p1, v0, :cond_0

    const/4 p1, 0x2

    return p1

    :cond_0
    const/16 v0, 0x11f

    if-ne p1, v0, :cond_1

    const/4 p1, 0x3

    return p1

    .line 620
    :cond_1
    iget p1, p0, Lcom/tkay/expressad/videocommon/e/d;->S:I

    return p1
.end method

.method private n(I)V
    .locals 0

    .line 628
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->T:I

    return-void
.end method

.method private o(I)Z
    .locals 1

    .line 654
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 655
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method private p(I)V
    .locals 0

    .line 662
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->S:I

    return-void
.end method

.method private q(I)V
    .locals 0

    .line 1105
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->at:I

    return-void
.end method

.method private r(I)V
    .locals 0

    .line 1113
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->au:I

    return-void
.end method

.method private s(I)V
    .locals 0

    .line 1121
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->av:I

    return-void
.end method


# virtual methods
.method public final A()I
    .locals 1

    .line 509
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->H:I

    return v0
.end method

.method public final B()V
    .locals 1

    const/4 v0, 0x1

    .line 513
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->H:I

    return-void
.end method

.method public final C()V
    .locals 1

    const/4 v0, 0x1

    .line 521
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->I:I

    return-void
.end method

.method public final D()I
    .locals 1

    .line 541
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->L:I

    return v0
.end method

.method public final E()V
    .locals 1

    const/4 v0, 0x1

    .line 545
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->L:I

    return-void
.end method

.method public final F()I
    .locals 1

    .line 549
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->M:I

    return v0
.end method

.method public final G()V
    .locals 1

    const/4 v0, 0x1

    .line 553
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->M:I

    return-void
.end method

.method public final H()V
    .locals 1

    const/4 v0, 0x1

    .line 561
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->F:I

    return-void
.end method

.method public final I()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/c/b;",
            ">;"
        }
    .end annotation

    .line 581
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    return-object v0
.end method

.method public final K()I
    .locals 1

    .line 624
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->T:I

    return v0
.end method

.method public final L()D
    .locals 2

    .line 632
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/d;->U:D

    return-wide v0
.end method

.method public final M()I
    .locals 1

    .line 640
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->X:I

    return v0
.end method

.method public final N()V
    .locals 1

    const/4 v0, 0x1

    .line 644
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->X:I

    return-void
.end method

.method public final O()Ljava/lang/String;
    .locals 1

    .line 666
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->z:Ljava/lang/String;

    return-object v0
.end method

.method public final P()V
    .locals 1

    const/4 v0, 0x3

    .line 678
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->W:I

    return-void
.end method

.method public final Q()Ljava/util/Queue;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 720
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 721
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v0, 0x0

    .line 722
    :goto_0
    :try_start_1
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_0

    .line 723
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/videocommon/c/b;

    .line 724
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/c/b;->b()I

    move-result v2

    .line 725
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    goto :goto_1

    :catch_1
    move-exception v1

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    .line 730
    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    move-object v0, v1

    :cond_1
    return-object v0
.end method

.method public final R()Lorg/json/JSONObject;
    .locals 7

    .line 882
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "unitId"

    .line 884
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "callbackType"

    .line 885
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->F:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 886
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 887
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 888
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/c/b;

    .line 889
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "id"

    .line 890
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "timeout"

    .line 891
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/b;->b()I

    move-result v3

    invoke-virtual {v4, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 892
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    const-string v2, "adSourceList"

    .line 894
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "aqn"

    .line 896
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->G:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "acn"

    .line 897
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->H:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vcn"

    .line 898
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->I:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "cbp"

    .line 899
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/d;->J:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "ttc_type"

    .line 900
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->K:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "offset"

    .line 901
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->L:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dlnet"

    .line 902
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->M:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tv_start"

    .line 903
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->N:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tv_end"

    .line 904
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->O:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ready_rate"

    .line 905
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->P:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "endscreen_type"

    .line 906
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->al:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "daily_play_cap"

    .line 907
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_skip_time"

    .line 908
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->af:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_skip_result"

    .line 909
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_interactive_type"

    .line 910
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "orientation"

    .line 911
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_button_delay"

    .line 912
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ai:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "playclosebtn_tm"

    .line 914
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->C:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "play_ctdown"

    .line 915
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->D:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_alert"

    .line 916
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->E:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "rfpv"

    .line 919
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->S:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vdcmp"

    .line 920
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/d;->R:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "ccbprule"

    .line 933
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->T:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ccbp"

    .line 934
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/d;->U:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 937
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 938
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    if-eqz v2, :cond_3

    .line 939
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 940
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 941
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_1

    :cond_2
    const-string v2, "atl_type"

    .line 944
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "atl_dyt"

    .line 947
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->W:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tmorl"

    .line 949
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->X:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "hitcbp"

    .line 950
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "placementid"

    .line 952
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->z:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ltafemty"

    .line 954
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->Z:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ltorwc"

    .line 955
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->aa:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "amount_max"

    .line 957
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->am:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "callback_rule"

    .line 958
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->an:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "virtual_currency"

    .line 959
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ao:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "amount"

    .line 960
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ap:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "icon"

    .line 961
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->aq:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "currency_id"

    .line 962
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->ar:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "name"

    .line 963
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/d;->as:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "isDefault"

    .line 965
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->at:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_error_rule"

    .line 967
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->au:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "loadtmo"

    .line 968
    iget v2, p0, Lcom/tkay/expressad/videocommon/e/d;->av:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 970
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-object v0
.end method

.method public final S()I
    .locals 1

    .line 1093
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ad:I

    return v0
.end method

.method public final T()V
    .locals 1

    const/16 v0, 0x46

    .line 1097
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ad:I

    return-void
.end method

.method public final U()I
    .locals 1

    .line 1109
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->au:I

    return v0
.end method

.method public final V()I
    .locals 1

    .line 1117
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->av:I

    return v0
.end method

.method public final a()I
    .locals 1

    .line 208
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->Y:I

    return v0
.end method

.method public final a(I)V
    .locals 0

    .line 250
    iput p1, p0, Lcom/tkay/expressad/videocommon/e/d;->af:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 577
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->y:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 220
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->V:Ljava/util/ArrayList;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/c/b;",
            ">;)V"
        }
    .end annotation

    .line 585
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->A:Ljava/util/List;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 224
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    return v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 670
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/d;->z:Ljava/lang/String;

    return-void
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x0

    .line 228
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ac:I

    return-void
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x0

    .line 242
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ae:I

    return-void
.end method

.method public final e()I
    .locals 1

    .line 246
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->af:I

    return v0
.end method

.method public final f()I
    .locals 1

    .line 254
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    return v0
.end method

.method public final g()V
    .locals 1

    const/4 v0, 0x2

    .line 258
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ag:I

    return-void
.end method

.method public final h()I
    .locals 1

    .line 262
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    return v0
.end method

.method public final i()V
    .locals 1

    const/4 v0, -0x1

    .line 266
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ah:I

    return-void
.end method

.method public final j()I
    .locals 1

    .line 270
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->C:I

    return v0
.end method

.method public final k()I
    .locals 1

    .line 286
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->E:I

    return v0
.end method

.method public final l()V
    .locals 1

    const/4 v0, 0x1

    .line 290
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->E:I

    return-void
.end method

.method public final m()I
    .locals 1

    .line 398
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ap:I

    return v0
.end method

.method public final n()Ljava/lang/String;
    .locals 1

    .line 426
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/d;->as:Ljava/lang/String;

    return-object v0
.end method

.method public final o()I
    .locals 1

    .line 444
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->aj:I

    return v0
.end method

.method public final p()I
    .locals 1

    .line 452
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ai:I

    return v0
.end method

.method public final q()V
    .locals 1

    const/4 v0, 0x1

    .line 456
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->ai:I

    return-void
.end method

.method public final r()I
    .locals 1

    .line 460
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->al:I

    return v0
.end method

.method public final s()V
    .locals 1

    const/4 v0, 0x2

    .line 464
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->al:I

    return-void
.end method

.method public final t()V
    .locals 1

    const/4 v0, 0x3

    .line 472
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->N:I

    return-void
.end method

.method public final u()V
    .locals 1

    const/16 v0, 0x50

    .line 480
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->O:I

    return-void
.end method

.method public final v()I
    .locals 1

    .line 484
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->P:I

    return v0
.end method

.method public final w()V
    .locals 1

    const/16 v0, 0x64

    .line 489
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->P:I

    return-void
.end method

.method public final x()I
    .locals 1

    .line 493
    iget v0, p0, Lcom/tkay/expressad/videocommon/e/d;->Q:I

    return v0
.end method

.method public final y()V
    .locals 1

    const/4 v0, 0x0

    .line 497
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->Q:I

    return-void
.end method

.method public final z()V
    .locals 1

    const/4 v0, 0x1

    .line 505
    iput v0, p0, Lcom/tkay/expressad/videocommon/e/d;->G:I

    return-void
.end method
