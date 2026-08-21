.class public final Lcom/mbridge/msdk/videocommon/d/c;
.super Ljava/lang/Object;
.source "RewardUnitSetting.java"


# static fields
.field private static O:Lcom/mbridge/msdk/foundation/db/i;

.field public static a:Ljava/lang/String;


# instance fields
.field private A:I

.field private B:I

.field private C:I

.field private D:I

.field private E:I

.field private F:Ljava/lang/String;

.field private G:I

.field private H:I

.field private I:I

.field private J:I

.field private K:I

.field private L:I

.field private M:I

.field private N:I

.field private P:I

.field private Q:I

.field private R:I

.field private S:Ljava/lang/String;

.field private T:I

.field private U:Ljava/lang/String;

.field private V:I

.field private W:Ljava/lang/String;

.field private X:I

.field private Y:I

.field private Z:I

.field private aa:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/b/b;",
            ">;"
        }
    .end annotation
.end field

.field private e:J

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I

.field private k:I

.field private l:I

.field private m:D

.field private n:I

.field private o:I

.field private p:I

.field private q:I

.field private r:I

.field private s:I

.field private t:I

.field private u:Lcom/mbridge/msdk/videocommon/b/c;

.field private v:D

.field private w:I

.field private x:I

.field private y:D

.field private z:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 8

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 68
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->f:I

    const/4 v1, 0x0

    .line 74
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->g:I

    .line 79
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->h:I

    const/4 v2, 0x1

    .line 83
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->i:I

    .line 85
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    .line 87
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    .line 89
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->l:I

    const-wide/high16 v3, 0x3ff0000000000000L    # 1.0

    .line 91
    iput-wide v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    const/4 v5, 0x2

    .line 93
    iput v5, p0, Lcom/mbridge/msdk/videocommon/d/c;->n:I

    const/4 v6, 0x5

    .line 95
    iput v6, p0, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    .line 100
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    const/4 v6, 0x3

    .line 102
    iput v6, p0, Lcom/mbridge/msdk/videocommon/d/c;->q:I

    const/16 v7, 0x50

    .line 104
    iput v7, p0, Lcom/mbridge/msdk/videocommon/d/c;->r:I

    const/16 v7, 0x64

    .line 106
    iput v7, p0, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    .line 108
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->t:I

    .line 117
    iput-wide v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->v:D

    .line 119
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->w:I

    .line 130
    iput v5, p0, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    .line 136
    iput-wide v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    .line 150
    iput v6, p0, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    .line 159
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    .line 171
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    const/16 v3, 0xa

    .line 178
    iput v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->D:I

    const/16 v3, 0x3c

    .line 185
    iput v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->E:I

    const-string v4, ""

    .line 186
    iput-object v4, p0, Lcom/mbridge/msdk/videocommon/d/c;->F:Ljava/lang/String;

    .line 238
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    const/16 v5, 0x46

    .line 300
    iput v5, p0, Lcom/mbridge/msdk/videocommon/d/c;->H:I

    .line 302
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    .line 303
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    .line 304
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    .line 305
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    const/16 v0, 0x14

    .line 310
    iput v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->N:I

    .line 358
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->Q:I

    .line 359
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->R:I

    .line 360
    iput-object v4, p0, Lcom/mbridge/msdk/videocommon/d/c;->S:Ljava/lang/String;

    .line 361
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->T:I

    .line 362
    iput-object v4, p0, Lcom/mbridge/msdk/videocommon/d/c;->U:Ljava/lang/String;

    .line 363
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->V:I

    const-string v0, "Virtual Item"

    .line 364
    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->W:Ljava/lang/String;

    .line 366
    iput v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->X:I

    .line 372
    iput v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    .line 377
    iput v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->Z:I

    .line 379
    iput-object v4, p0, Lcom/mbridge/msdk/videocommon/d/c;->aa:Ljava/lang/String;

    return-void
.end method

.method private B(I)V
    .locals 0

    if-gtz p1, :cond_0

    const/4 p1, 0x1

    .line 419
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->T:I

    goto :goto_0

    .line 421
    :cond_0
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->T:I

    :goto_0
    return-void
.end method

.method public static a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 12

    const-string v0, ""

    const/4 v1, 0x0

    if-eqz p0, :cond_8

    .line 994
    :try_start_0
    new-instance v2, Lcom/mbridge/msdk/videocommon/d/c;

    invoke-direct {v2}, Lcom/mbridge/msdk/videocommon/d/c;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v1, "adSourceList"

    .line 996
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 995
    invoke-static {v1}, Lcom/mbridge/msdk/videocommon/b/b;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v1

    .line 17601
    iput-object v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    const-string v1, "callbackType"

    .line 998
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    .line 18577
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->i:I

    const-string v1, "aqn"

    const/4 v3, 0x1

    .line 999
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gtz v1, :cond_0

    move v1, v3

    .line 19521
    :cond_0
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    const-string v1, "acn"

    .line 1004
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gez v1, :cond_1

    move v1, v3

    .line 19529
    :cond_1
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    const-string v1, "vcn"

    const/4 v4, 0x5

    .line 1009
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19537
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->l:I

    const-string v1, "cbp"

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    .line 1010
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v7

    .line 19541
    iput-wide v7, v2, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    const-string v1, "ttc_type"

    const/4 v7, 0x2

    .line 1011
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19553
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->n:I

    const-string v1, "offset"

    .line 1012
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19561
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    const-string v1, "dlnet"

    .line 1013
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 19569
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    const-string v1, "endscreen_type"

    .line 1014
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20480
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->P:I

    const-string v1, "tv_start"

    const/4 v4, 0x3

    .line 1016
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20488
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->q:I

    const-string v1, "tv_end"

    const/16 v8, 0x50

    .line 1017
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20496
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->r:I

    const-string v1, "ready_rate"

    const/16 v8, 0x64

    .line 1018
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 20505
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    const-string v1, "current_time"

    .line 1019
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v8

    .line 20585
    iput-wide v8, v2, Lcom/mbridge/msdk/videocommon/d/c;->e:J

    const-string v1, "orientation"

    const/4 v8, 0x0

    .line 1021
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21234
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    const-string v1, "daily_play_cap"

    .line 1022
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21248
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    const-string v1, "video_skip_time"

    const/4 v9, -0x1

    .line 1024
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21256
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    const-string v1, "video_skip_result"

    .line 1025
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21264
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    const-string v1, "video_interactive_type"

    .line 1026
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21272
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    const-string v1, "close_button_delay"

    .line 1027
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 21472
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->M:I

    const-string v1, "playclosebtn_tm"

    .line 1029
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22280
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->f:I

    const-string v1, "play_ctdown"

    .line 1030
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22288
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->g:I

    const-string v1, "close_alert"

    .line 1031
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22296
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->h:I

    const-string v1, "rdrct"

    const/16 v10, 0x14

    .line 1033
    invoke-virtual {p0, v1, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22464
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->N:I

    const-string v1, "rfpv"

    .line 1035
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 22678
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->w:I

    const-string v1, "vdcmp"

    .line 1036
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 23617
    iput-wide v9, v2, Lcom/mbridge/msdk/videocommon/d/c;->v:D

    const-string v1, "cbprule"

    .line 1037
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/videocommon/b/c;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object v1

    .line 24609
    iput-object v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    const-string v1, "ccbprule"

    .line 1040
    invoke-virtual {p0, v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 24644
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    const-string v1, "ccbp"

    .line 1041
    invoke-virtual {p0, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 24652
    iput-wide v9, v2, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    const-string v1, "load_global_timeout"

    const/16 v9, 0x46

    .line 1043
    invoke-virtual {p0, v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 25107
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->H:I

    const-string v1, "atl_type"

    .line 1045
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 1046
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v1, :cond_2

    move v10, v8

    .line 1049
    :goto_0
    :try_start_2
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v11

    if-ge v10, v11, :cond_3

    .line 1050
    invoke-virtual {v1, v10}, Lorg/json/JSONArray;->getInt(I)I

    move-result v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v9, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x4

    .line 1056
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v9, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x6

    .line 1057
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v9, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 25226
    :cond_3
    iput-object v9, v2, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 1061
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    const-string v1, "atl_dyt"

    .line 1063
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 25694
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    const-string v1, "tmorl"

    .line 1065
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-gt v1, v7, :cond_4

    if-gtz v1, :cond_5

    :cond_4
    move v1, v3

    .line 26660
    :cond_5
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    .line 27545
    iget-wide v9, v2, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    cmpl-double v1, v9, v5

    if-nez v1, :cond_6

    goto :goto_2

    .line 1075
    :cond_6
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    invoke-virtual {v1}, Ljava/util/Random;->nextDouble()D

    move-result-wide v4

    .line 28545
    iget-wide v6, v2, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    cmpl-double v1, v4, v6

    if-lez v1, :cond_7

    move v1, v3

    goto :goto_3

    :cond_7
    :goto_2
    move v1, v8

    .line 29218
    :goto_3
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    const-string v1, "placementid"

    .line 1079
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 29686
    iput-object v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->c:Ljava/lang/String;

    const-string v1, "ltafemty"

    const/16 v4, 0xa

    .line 1081
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30202
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->D:I

    const-string v1, "ltorwc"

    const/16 v4, 0x3c

    .line 1082
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30210
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->E:I

    const-string v1, "ab_id"

    .line 1083
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v1}, Lcom/mbridge/msdk/videocommon/d/c;->d(Ljava/lang/String;)V

    const-string v1, "amount_max"

    .line 1084
    invoke-virtual {p0, v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30394
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->Q:I

    const-string v1, "callback_rule"

    .line 1085
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30402
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->R:I

    const-string v1, "virtual_currency"

    .line 1086
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 30410
    iput-object v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->S:Ljava/lang/String;

    const-string v1, "amount"

    .line 1087
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    invoke-direct {v2, v1}, Lcom/mbridge/msdk/videocommon/d/c;->B(I)V

    const-string v1, "icon"

    .line 1088
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 30430
    iput-object v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->U:Ljava/lang/String;

    const-string v1, "currency_id"

    .line 1089
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 30438
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->V:I

    const-string v1, "name"

    const-string v5, "Virtual Item"

    .line 1090
    invoke-virtual {p0, v1, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v1}, Lcom/mbridge/msdk/videocommon/d/c;->e(Ljava/lang/String;)V

    const-string v1, "video_error_rule"

    .line 1091
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 31123
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    const-string v1, "loadtmo"

    .line 1092
    invoke-virtual {p0, v1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    .line 31131
    iput v1, v2, Lcom/mbridge/msdk/videocommon/d/c;->Z:I

    const-string v1, "vtag"

    .line 1093
    invoke-virtual {p0, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 31386
    iput-object p0, v2, Lcom/mbridge/msdk/videocommon/d/c;->aa:Ljava/lang/String;
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

    .line 1097
    :goto_4
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_8
    :goto_5
    return-object v1
.end method

.method public static c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 12

    const-string v0, ""

    .line 754
    sget-object v1, Lcom/mbridge/msdk/videocommon/d/c;->O:Lcom/mbridge/msdk/foundation/db/i;

    if-nez v1, :cond_0

    .line 755
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    sput-object v1, Lcom/mbridge/msdk/videocommon/d/c;->O:Lcom/mbridge/msdk/foundation/db/i;

    .line 757
    :cond_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_b

    .line 759
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "vtag"

    .line 760
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v3, "unitSetting"

    .line 761
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v3

    if-eqz v3, :cond_a

    const/4 v4, 0x0

    .line 763
    invoke-virtual {v3, v4}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    if-eqz v3, :cond_a

    const-string v5, "unitId"

    .line 765
    invoke-virtual {v3, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 766
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_a

    .line 767
    new-instance v6, Lcom/mbridge/msdk/videocommon/d/c;

    invoke-direct {v6}, Lcom/mbridge/msdk/videocommon/d/c;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 1386
    :try_start_1
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->aa:Ljava/lang/String;

    const-string p0, "adSourceList"

    .line 770
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    .line 769
    invoke-static {p0}, Lcom/mbridge/msdk/videocommon/b/b;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object p0

    .line 1593
    iput-object v5, v6, Lcom/mbridge/msdk/videocommon/d/c;->b:Ljava/lang/String;

    .line 1601
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    const-string p0, "callbackType"

    .line 775
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 2577
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->i:I

    const-string p0, "aqn"

    const/4 v2, 0x1

    .line 776
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-gtz p0, :cond_1

    move p0, v2

    .line 3521
    :cond_1
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    const-string p0, "acn"

    .line 781
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-gez p0, :cond_2

    move p0, v2

    .line 3529
    :cond_2
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    const-string p0, "vcn"

    const/4 v5, 0x5

    .line 786
    invoke-virtual {v3, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 3537
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->l:I

    const-string p0, "cbp"

    const-wide/high16 v7, 0x3ff0000000000000L    # 1.0

    .line 787
    invoke-virtual {v3, p0, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9

    .line 3541
    iput-wide v9, v6, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    const-string p0, "ttc_type"

    const/4 v9, 0x2

    .line 788
    invoke-virtual {v3, p0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 3553
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->n:I

    const-string p0, "offset"

    .line 789
    invoke-virtual {v3, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 3561
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    const-string p0, "dlnet"

    .line 790
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 3569
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    const-string p0, "endscreen_type"

    .line 791
    invoke-virtual {v3, p0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4480
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->P:I

    const-string p0, "tv_start"

    const/4 v5, 0x3

    .line 793
    invoke-virtual {v3, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4488
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->q:I

    const-string p0, "tv_end"

    const/16 v10, 0x50

    .line 794
    invoke-virtual {v3, p0, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4496
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->r:I

    const-string p0, "ready_rate"

    const/16 v10, 0x64

    .line 795
    invoke-virtual {v3, p0, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4505
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    const-string p0, "cd_rate"

    .line 796
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4513
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->t:I

    const-string p0, "current_time"

    .line 797
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v10

    .line 4585
    iput-wide v10, v6, Lcom/mbridge/msdk/videocommon/d/c;->e:J

    const-string p0, "orientation"

    .line 800
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5234
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    const-string p0, "daily_play_cap"

    .line 801
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5248
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    const-string p0, "video_skip_time"

    const/4 v1, -0x1

    .line 803
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5256
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    const-string p0, "video_skip_result"

    .line 804
    invoke-virtual {v3, p0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5264
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    const-string p0, "video_interactive_type"

    .line 805
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5272
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    const-string p0, "close_button_delay"

    .line 806
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 5472
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->M:I

    const-string p0, "playclosebtn_tm"

    .line 808
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6280
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->f:I

    const-string p0, "play_ctdown"

    .line 809
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6288
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->g:I

    const-string p0, "close_alert"

    .line 810
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6296
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->h:I

    const-string p0, "rdrct"

    const/16 v10, 0x14

    .line 812
    invoke-virtual {v3, p0, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6464
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->N:I

    const-string p0, "load_global_timeout"

    const/16 v10, 0x46

    .line 813
    invoke-virtual {v3, p0, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 7107
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->H:I

    const-string p0, "rfpv"

    .line 816
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 7678
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->w:I

    const-string p0, "vdcmp"

    .line 817
    invoke-virtual {v3, p0, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v10

    .line 8617
    iput-wide v10, v6, Lcom/mbridge/msdk/videocommon/d/c;->v:D

    const-string p0, "cbprule"

    .line 818
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/videocommon/b/c;->a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/videocommon/b/c;

    move-result-object p0

    .line 9609
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    const-string p0, "ccbprule"

    .line 821
    invoke-virtual {v3, p0, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 9644
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    const-string p0, "ccbp"

    .line 822
    invoke-virtual {v3, p0, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v10

    .line 9652
    iput-wide v10, v6, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    const-string p0, "atzu"

    .line 823
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 10625
    sput-object p0, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    const-string p0, "atl_type"

    .line 826
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    .line 827
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz p0, :cond_3

    move v10, v4

    .line 830
    :goto_0
    :try_start_2
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v11

    if-ge v10, v11, :cond_4

    .line 831
    invoke-virtual {p0, v10}, Lorg/json/JSONArray;->getInt(I)I

    move-result v11

    invoke-static {v11}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v11

    invoke-virtual {v1, v11}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v10, v10, 0x1

    goto :goto_0

    :cond_3
    const/4 p0, 0x4

    .line 837
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 p0, 0x6

    .line 838
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 11226
    :cond_4
    iput-object v1, v6, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 843
    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    const-string p0, "atl_dyt"

    .line 846
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-lez p0, :cond_5

    move v5, p0

    .line 11694
    :cond_5
    iput v5, v6, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    const-string p0, "tmorl"

    .line 849
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-gt p0, v9, :cond_6

    if-gtz p0, :cond_7

    :cond_6
    move p0, v2

    .line 12660
    :cond_7
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    .line 13545
    iget-wide v9, v6, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    cmpl-double p0, v9, v7

    if-nez p0, :cond_8

    goto :goto_2

    .line 859
    :cond_8
    new-instance p0, Ljava/util/Random;

    invoke-direct {p0}, Ljava/util/Random;-><init>()V

    invoke-virtual {p0}, Ljava/util/Random;->nextDouble()D

    move-result-wide v7

    .line 14545
    iget-wide v9, v6, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    cmpl-double p0, v7, v9

    if-lez p0, :cond_9

    move p0, v2

    goto :goto_3

    :cond_9
    :goto_2
    move p0, v4

    .line 15218
    :goto_3
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    const-string p0, "placementid"

    .line 863
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 15686
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->c:Ljava/lang/String;

    const-string p0, "ltafemty"

    const/16 v1, 0xa

    .line 865
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16202
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->D:I

    const-string p0, "ltorwc"

    const/16 v1, 0x3c

    .line 866
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16210
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->E:I

    const-string p0, "ab_id"

    .line 867
    invoke-virtual {v3, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v6, p0}, Lcom/mbridge/msdk/videocommon/d/c;->d(Ljava/lang/String;)V

    const-string p0, "amount_max"

    .line 868
    invoke-virtual {v3, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16394
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->Q:I

    const-string p0, "callback_rule"

    .line 869
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16402
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->R:I

    const-string p0, "virtual_currency"

    .line 870
    invoke-virtual {v3, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 16410
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->S:Ljava/lang/String;

    const-string p0, "amount"

    .line 871
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-direct {v6, p0}, Lcom/mbridge/msdk/videocommon/d/c;->B(I)V

    const-string p0, "icon"

    .line 872
    invoke-virtual {v3, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 16430
    iput-object p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->U:Ljava/lang/String;

    const-string p0, "currency_id"

    .line 873
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16438
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->V:I

    const-string p0, "name"

    const-string v0, "Virtual Item"

    .line 874
    invoke-virtual {v3, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v6, p0}, Lcom/mbridge/msdk/videocommon/d/c;->e(Ljava/lang/String;)V

    const-string p0, "video_error_rule"

    .line 875
    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 17123
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    const-string p0, "loadtmo"

    .line 876
    invoke-virtual {v3, p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 17131
    iput p0, v6, Lcom/mbridge/msdk/videocommon/d/c;->Z:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    move-object v2, v6

    goto :goto_4

    :catch_1
    move-exception p0

    move-object v2, v6

    goto :goto_5

    :cond_a
    :goto_4
    return-object v2

    :catch_2
    move-exception p0

    .line 882
    :goto_5
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_b
    return-object v2
.end method

.method private d(Ljava/lang/String;)V
    .locals 2

    .line 193
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->F:Ljava/lang/String;

    .line 194
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/a;->b:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 1

    .line 447
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 448
    iget-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->S:Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->W:Ljava/lang/String;

    goto :goto_0

    .line 450
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->W:Ljava/lang/String;

    :goto_0
    return-void
.end method


# virtual methods
.method public final A()I
    .locals 1

    .line 640
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    return v0
.end method

.method public final A(I)V
    .locals 0

    .line 1131
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->Z:I

    return-void
.end method

.method public final B()D
    .locals 2

    .line 648
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    return-wide v0
.end method

.method public final C()I
    .locals 1

    .line 656
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    return v0
.end method

.method public final D()Ljava/lang/String;
    .locals 1

    .line 682
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final E()I
    .locals 1

    .line 690
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    return v0
.end method

.method public final F()Ljava/util/Queue;
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

    .line 736
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 737
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v0, 0x0

    .line 738
    :goto_0
    :try_start_1
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_0

    .line 739
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/videocommon/b/b;

    .line 740
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/b/b;->b()I

    move-result v2

    .line 741
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

    .line 746
    :goto_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    move-object v0, v1

    :cond_1
    return-object v0
.end method

.method public final G()Lorg/json/JSONObject;
    .locals 7

    .line 889
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "unitId"

    .line 891
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "callbackType"

    .line 892
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->i:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 893
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 894
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 895
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/videocommon/b/b;

    .line 896
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "id"

    .line 897
    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/b/b;->a()I

    move-result v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v5, "timeout"

    .line 898
    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/b/b;->b()I

    move-result v3

    invoke-virtual {v4, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 899
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    :cond_0
    const-string v2, "adSourceList"

    .line 901
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "aqn"

    .line 903
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "acn"

    .line 904
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vcn"

    .line 905
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->l:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "cbp"

    .line 906
    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "ttc_type"

    .line 907
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->n:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "offset"

    .line 908
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dlnet"

    .line 909
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tv_start"

    .line 910
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tv_end"

    .line 911
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->r:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ready_rate"

    .line 912
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "endscreen_type"

    .line 913
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->P:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "daily_play_cap"

    .line 914
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_skip_time"

    .line 915
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_skip_result"

    .line 916
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_interactive_type"

    .line 917
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "orientation"

    .line 918
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_button_delay"

    .line 919
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->M:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "playclosebtn_tm"

    .line 921
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->f:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "play_ctdown"

    .line 922
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->g:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_alert"

    .line 923
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->h:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "rfpv"

    .line 926
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->w:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vdcmp"

    .line 927
    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->v:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 928
    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    if-eqz v1, :cond_3

    .line 929
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "type"

    .line 930
    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/b/c;->a()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 931
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 932
    iget-object v3, p0, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/b/c;->b()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    .line 933
    invoke-virtual {v2, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_1

    :cond_2
    const-string v3, "value"

    .line 935
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "cbprule"

    .line 936
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "ccbprule"

    .line 940
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ccbp"

    .line 941
    iget-wide v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 944
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 945
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    if-eqz v2, :cond_5

    .line 946
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_4

    .line 947
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 948
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    :cond_4
    const-string v2, "atl_type"

    .line 951
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5
    const-string v1, "atl_dyt"

    .line 954
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tmorl"

    .line 956
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "hitcbp"

    .line 957
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "placementid"

    .line 959
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ltafemty"

    .line 961
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->D:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ltorwc"

    .line 962
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->E:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "amount_max"

    .line 964
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->Q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "callback_rule"

    .line 965
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->R:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "virtual_currency"

    .line 966
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->S:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "amount"

    .line 967
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->T:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "icon"

    .line 968
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->U:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "currency_id"

    .line 969
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->V:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "name"

    .line 970
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->W:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "isDefault"

    .line 972
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->X:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "video_error_rule"

    .line 974
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "loadtmo"

    .line 975
    iget v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->Z:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vtag"

    .line 977
    iget-object v2, p0, Lcom/mbridge/msdk/videocommon/d/c;->aa:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception v1

    .line 979
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    return-object v0
.end method

.method public final H()I
    .locals 1

    .line 1103
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->H:I

    return v0
.end method

.method public final I()I
    .locals 1

    .line 1119
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    return v0
.end method

.method public final J()I
    .locals 1

    .line 1127
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->Z:I

    return v0
.end method

.method public final a()Ljava/lang/String;
    .locals 1

    .line 189
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->F:Ljava/lang/String;

    return-object v0
.end method

.method public final a(D)V
    .locals 0

    .line 541
    iput-wide p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->m:D

    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 218
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 593
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->b:Ljava/lang/String;

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

    .line 226
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/b/b;",
            ">;)V"
        }
    .end annotation

    .line 601
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 198
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->D:I

    return v0
.end method

.method public final b(D)V
    .locals 0

    .line 652
    iput-wide p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->y:D

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 234
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 686
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->c:Ljava/lang/String;

    return-void
.end method

.method public final c()I
    .locals 1

    .line 206
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->E:I

    return v0
.end method

.method public final c(I)V
    .locals 0

    .line 248
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    return-void
.end method

.method public final d()I
    .locals 1

    .line 214
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->C:I

    return v0
.end method

.method public final d(I)V
    .locals 0

    .line 256
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    return-void
.end method

.method public final e()I
    .locals 1

    .line 230
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->G:I

    return v0
.end method

.method public final e(I)V
    .locals 0

    .line 264
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    return-void
.end method

.method public final f()I
    .locals 1

    .line 244
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->I:I

    return v0
.end method

.method public final f(I)V
    .locals 0

    .line 272
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    return-void
.end method

.method public final g()I
    .locals 1

    .line 252
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->J:I

    return v0
.end method

.method public final g(I)V
    .locals 0

    .line 472
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->M:I

    return-void
.end method

.method public final h()I
    .locals 1

    .line 260
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->K:I

    return v0
.end method

.method public final h(I)V
    .locals 0

    .line 480
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->P:I

    return-void
.end method

.method public final i()I
    .locals 1

    .line 268
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->L:I

    return v0
.end method

.method public final i(I)V
    .locals 0

    .line 488
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->q:I

    return-void
.end method

.method public final j()I
    .locals 1

    .line 276
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->f:I

    return v0
.end method

.method public final j(I)V
    .locals 0

    .line 496
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->r:I

    return-void
.end method

.method public final k()I
    .locals 1

    .line 292
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->h:I

    return v0
.end method

.method public final k(I)V
    .locals 0

    .line 505
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    return-void
.end method

.method public final l()Ljava/lang/String;
    .locals 1

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->aa:Ljava/lang/String;

    return-object v0
.end method

.method public final l(I)V
    .locals 0

    .line 513
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->t:I

    return-void
.end method

.method public final m()I
    .locals 1

    .line 414
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->T:I

    return v0
.end method

.method public final m(I)V
    .locals 0

    .line 521
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    return-void
.end method

.method public final n()Ljava/lang/String;
    .locals 1

    .line 442
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->W:Ljava/lang/String;

    return-object v0
.end method

.method public final n(I)V
    .locals 0

    .line 529
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    return-void
.end method

.method public final o()I
    .locals 1

    .line 460
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->N:I

    return v0
.end method

.method public final o(I)V
    .locals 0

    .line 537
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->l:I

    return-void
.end method

.method public final p()I
    .locals 1

    .line 468
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->M:I

    return v0
.end method

.method public final p(I)V
    .locals 0

    .line 553
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->n:I

    return-void
.end method

.method public final q()I
    .locals 1

    .line 476
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->P:I

    return v0
.end method

.method public final q(I)V
    .locals 0

    .line 561
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    return-void
.end method

.method public final r()I
    .locals 1

    .line 500
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->s:I

    return v0
.end method

.method public final r(I)V
    .locals 0

    .line 569
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    return-void
.end method

.method public final s()I
    .locals 1

    .line 509
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->t:I

    return v0
.end method

.method public final s(I)V
    .locals 0

    .line 577
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->i:I

    return-void
.end method

.method public final t()I
    .locals 1

    .line 517
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->j:I

    return v0
.end method

.method public final t(I)V
    .locals 0

    .line 644
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->x:I

    return-void
.end method

.method public final u()I
    .locals 1

    .line 525
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->k:I

    return v0
.end method

.method public final u(I)V
    .locals 0

    .line 660
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->B:I

    return-void
.end method

.method public final v()I
    .locals 1

    .line 557
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->o:I

    return v0
.end method

.method public final v(I)Z
    .locals 1

    .line 670
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 671
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->z:Ljava/util/ArrayList;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final w()I
    .locals 1

    .line 565
    iget v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->p:I

    return v0
.end method

.method public final w(I)V
    .locals 0

    .line 694
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->A:I

    return-void
.end method

.method public final x()J
    .locals 2

    .line 581
    iget-wide v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->e:J

    return-wide v0
.end method

.method public final x(I)V
    .locals 0

    .line 1107
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->H:I

    return-void
.end method

.method public final y()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/b/b;",
            ">;"
        }
    .end annotation

    .line 597
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->d:Ljava/util/List;

    return-object v0
.end method

.method public final y(I)V
    .locals 0

    .line 1115
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->X:I

    return-void
.end method

.method public final z()Lcom/mbridge/msdk/videocommon/b/c;
    .locals 1

    .line 605
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/c;->u:Lcom/mbridge/msdk/videocommon/b/c;

    return-object v0
.end method

.method public final z(I)V
    .locals 0

    .line 1123
    iput p1, p0, Lcom/mbridge/msdk/videocommon/d/c;->Y:I

    return-void
.end method
