.class public Lcom/mbridge/msdk/video/js/a/j;
.super Lcom/mbridge/msdk/video/js/a/c;
.source "JSCommon.java"


# static fields
.field private static final o:Ljava/lang/String;


# instance fields
.field private A:Z

.field private B:Z

.field private p:Landroid/app/Activity;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Landroid/content/Context;

.field private t:Lcom/mbridge/msdk/video/bt/module/a/b;

.field private u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private v:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private w:I

.field private x:Ljava/lang/String;

.field private y:Ljava/lang/String;

.field private z:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 57
    const-class v0, Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 1

    .line 105
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/c;-><init>()V

    const-string v0, ""

    .line 86
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->x:Ljava/lang/String;

    .line 87
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->y:Ljava/lang/String;

    const/4 v0, 0x0

    .line 88
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->z:Z

    .line 89
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->A:Z

    const/4 v0, 0x1

    .line 99
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->B:Z

    .line 106
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    .line 107
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 110
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/c;-><init>()V

    const-string v0, ""

    .line 86
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->x:Ljava/lang/String;

    .line 87
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->y:Ljava/lang/String;

    const/4 v0, 0x0

    .line 88
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->z:Z

    .line 89
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->A:Z

    const/4 v0, 0x1

    .line 99
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->B:Z

    .line 111
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    .line 112
    iput-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 113
    iput-object p3, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    return-void
.end method

.method private A()Lorg/json/JSONObject;
    .locals 2

    .line 736
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 737
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 739
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/a;->k()Lorg/json/JSONObject;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 7

    const-string v0, "deep_link"

    const-string v1, "akdlui"

    .line 240
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object p2

    .line 243
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    if-eqz p2, :cond_1

    goto :goto_0

    :cond_1
    const/4 p2, 0x0

    goto/16 :goto_4

    :cond_2
    :goto_0
    const-string v2, "notice"

    .line 244
    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 246
    :try_start_0
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 247
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    if-nez v1, :cond_3

    move-object v1, p2

    .line 251
    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 252
    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 253
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 254
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->p:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v0, "-999"

    if-eqz p1, :cond_4

    .line 259
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->n:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    int-to-float v2, v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    .line 260
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->o:Ljava/lang/String;

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    int-to-float v3, v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_4
    move-object v2, v0

    .line 262
    :goto_1
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v0, v2}, Lcom/mbridge/msdk/click/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 263
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 265
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_8

    .line 267
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 268
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 269
    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_7

    const-string v4, "&"

    .line 270
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 271
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 272
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 273
    sget-object v6, Lcom/mbridge/msdk/foundation/same/a;->n:Ljava/lang/String;

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_5

    sget-object v6, Lcom/mbridge/msdk/foundation/same/a;->o:Ljava/lang/String;

    invoke-virtual {v6, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_6

    .line 274
    :cond_5
    iget-object v6, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    int-to-float v5, v5

    invoke-static {v6, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    .line 276
    :cond_6
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 278
    :cond_7
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 279
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setNoticeUrl(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_8
    move-object p2, v1

    goto :goto_4

    :catchall_0
    move-exception p1

    .line 287
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_4

    :catch_0
    move-exception p1

    .line 284
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_4

    .line 293
    :cond_9
    :try_start_2
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v2

    .line 294
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 295
    invoke-virtual {v3, v1}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    const-string v4, ""

    if-nez p1, :cond_a

    .line 296
    :try_start_3
    invoke-virtual {v3, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_2

    .line 300
    :cond_a
    :try_start_4
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_b

    .line 301
    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_2

    .line 306
    :catch_1
    :cond_b
    :try_start_5
    invoke-virtual {v3}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p1

    .line 309
    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_c

    .line 310
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 311
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 312
    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_3

    .line 314
    :cond_c
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    .line 315
    invoke-direct {p0, v2, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_5
    .catch Lorg/json/JSONException; {:try_start_5 .. :try_end_5} :catch_2

    move-object p2, p1

    goto :goto_4

    :catch_2
    move-exception p1

    .line 318
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_4
    return-object p2
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/video/bt/module/a/b;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/mbridge/msdk/video/js/a/j;->t:Lcom/mbridge/msdk/video/bt/module/a/b;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/js/a/j;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 55
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/a/j;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 7

    const-string v0, ""

    .line 206
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 207
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MBridge_ConfirmTitle"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    .line 208
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "MBridge_ConfirmContent"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 209
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "MBridge_CancelText"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    .line 210
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "MBridge_ConfirmText"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v1, v5, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 211
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "confirm_title"

    .line 212
    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 214
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "confirm_description"

    .line 215
    invoke-virtual {p1, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 217
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "confirm_t"

    .line 218
    invoke-virtual {p1, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 220
    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "confirm_c_play"

    .line 221
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 223
    :cond_3
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "confirm_c_rv"

    .line 224
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 227
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_0
    return-void
.end method

.method private a(Lorg/json/JSONObject;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 1

    :try_start_0
    const-string v0, "unitId"

    .line 332
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 333
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 334
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 337
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/js/a/j;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    .line 500
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNoticeUrl()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    .line 503
    :try_start_0
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 504
    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 505
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 506
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 508
    sget-object v2, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    const-string v3, "INSTALL"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    move v0, v1

    .line 510
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    const/4 v3, 0x2

    if-ne v0, v3, :cond_1

    const/4 v1, 0x1

    :cond_1
    invoke-interface {v2, v1}, Lcom/mbridge/msdk/video/js/c$a;->a(Z)V

    .line 513
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->r()Lcom/mbridge/msdk/click/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    .line 515
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->r()Lcom/mbridge/msdk/click/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 517
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/video/module/b/b;->d(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/js/a/j;)Landroid/app/Activity;
    .locals 0

    .line 55
    iget-object p0, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    return-object p0
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z
    .locals 6

    .line 771
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 772
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-wide/16 v2, 0x0

    if-nez v1, :cond_0

    .line 773
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 775
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->W()J

    move-result-wide v0

    const-wide/16 v4, 0x3e8

    mul-long/2addr v0, v4

    goto :goto_0

    :cond_0
    move-wide v0, v2

    .line 779
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 781
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/a;->e()J

    move-result-wide v2

    :cond_1
    if-eqz p1, :cond_2

    .line 785
    invoke-virtual {p1, v2, v3, v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isSpareOffer(JJ)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    :cond_2
    const/4 p1, 0x0

    return p1
.end method

.method private q()Ljava/lang/String;
    .locals 7

    const-string v0, "unit_id"

    .line 153
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 154
    new-instance v2, Lcom/mbridge/msdk/foundation/tools/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/mbridge/msdk/foundation/tools/d;-><init>(Landroid/content/Context;)V

    .line 156
    :try_start_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v1, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "instanceId"

    .line 158
    iget-object v5, p0, Lcom/mbridge/msdk/video/js/a/j;->x:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "rootViewInstanceId"

    .line 159
    iget-object v5, p0, Lcom/mbridge/msdk/video/js/a/j;->y:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "isRootTemplateWebView"

    .line 160
    iget-boolean v5, p0, Lcom/mbridge/msdk/video/js/a/j;->z:Z

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v4, "MAL_16.3.67,3.0.1"

    const-string v5, "sdk_info"

    .line 162
    invoke-virtual {v1, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "playVideoMute"

    .line 163
    iget v5, p0, Lcom/mbridge/msdk/video/js/a/j;->n:I

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v4, "sdkSetting"

    .line 164
    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "device"

    .line 165
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/tools/d;->a()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 166
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    .line 168
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 169
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 170
    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReady()Z

    move-result v5

    invoke-direct {p0, v4}, Lcom/mbridge/msdk/video/js/a/j;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v6

    invoke-static {v4, v5, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZZ)Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v2, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 173
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_1
    const-string v3, "campaignList"

    .line 175
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 176
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->z()Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "unitSetting"

    .line 177
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 178
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    .line 179
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 180
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 181
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 182
    invoke-direct {p0, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Lorg/json/JSONObject;)V

    .line 183
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 184
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 185
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "ivreward"

    .line 186
    invoke-virtual {v3, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v2, "appSetting"

    .line 188
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v2, "rewardSetting"

    .line 191
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->A()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 193
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    .line 194
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v0, "rw_plus"

    .line 196
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/js/a/j;->A:Z

    if-eqz v2, :cond_5

    const-string v2, "1"

    goto :goto_1

    :cond_5
    const-string v2, "0"

    :goto_1
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 198
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 200
    :goto_2
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private r()Lcom/mbridge/msdk/click/b;
    .locals 3

    .line 587
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->l:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_0

    .line 588
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->l:Lcom/mbridge/msdk/click/b;

    .line 590
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->l:Lcom/mbridge/msdk/click/b;

    return-object v0
.end method

.method private s()Lorg/json/JSONObject;
    .locals 5

    .line 623
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 624
    new-instance v1, Lcom/mbridge/msdk/foundation/tools/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/tools/d;-><init>(Landroid/content/Context;)V

    .line 626
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "playVideoMute"

    .line 627
    iget v4, p0, Lcom/mbridge/msdk/video/js/a/j;->n:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "sdkSetting"

    .line 628
    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "device"

    .line 629
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/tools/d;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 630
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 631
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    const-string v2, "campaignList"

    .line 632
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 633
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->z()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "unitSetting"

    .line 634
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 635
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    .line 636
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 637
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 638
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 639
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/js/a/j;->a(Lorg/json/JSONObject;)V

    .line 640
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 641
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "ivreward"

    .line 642
    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "appSetting"

    .line 644
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "rewardSetting"

    .line 646
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->A()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 648
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private t()Lorg/json/JSONObject;
    .locals 3

    .line 654
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "sdk_info"

    const-string v2, "MAL_16.3.67,3.0.1"

    .line 656
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 658
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private u()Lorg/json/JSONObject;
    .locals 3

    .line 664
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 666
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unit_id"

    .line 667
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 670
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private v()Lorg/json/JSONObject;
    .locals 4

    .line 676
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 678
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    .line 679
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 680
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    const-string v2, "appSetting"

    .line 681
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 684
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :catchall_0
    :cond_0
    :goto_0
    return-object v0
.end method

.method private w()Lorg/json/JSONObject;
    .locals 3

    .line 692
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 694
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v1, :cond_0

    const-string v1, "unitSetting"

    .line 695
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->G()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 698
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-object v0
.end method

.method private x()Lorg/json/JSONObject;
    .locals 3

    .line 704
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 706
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/foundation/tools/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/tools/d;-><init>(Landroid/content/Context;)V

    const-string v2, "device"

    .line 707
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/tools/d;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 709
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private y()Lorg/json/JSONObject;
    .locals 4

    .line 715
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 717
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "playVideoMute"

    .line 718
    iget v3, p0, Lcom/mbridge/msdk/video/js/a/j;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "instanceId"

    .line 719
    iget-object v3, p0, Lcom/mbridge/msdk/video/js/a/j;->x:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "sdkSetting"

    .line 720
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 722
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private z()Lorg/json/JSONObject;
    .locals 2

    .line 728
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 729
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v1, :cond_0

    .line 730
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->G()Lorg/json/JSONObject;

    move-result-object v0

    :cond_0
    return-object v0
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 9

    const-string v0, "-1"

    const-string v1, "event"

    .line 532
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c;->a(ILjava/lang/String;)V

    const/4 v2, 0x2

    if-eq p1, v2, :cond_0

    goto :goto_0

    .line 536
    :cond_0
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 537
    invoke-virtual {p1, v1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string p2, "template"

    .line 538
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string p2, "layout"

    .line 539
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string p2, "unit_id"

    .line 540
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 541
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v8

    .line 542
    new-instance p1, Lcom/mbridge/msdk/video/js/a/j$2;

    move-object v2, p1

    move-object v3, p0

    invoke-direct/range {v2 .. v8}, Lcom/mbridge/msdk/video/js/a/j$2;-><init>(Lcom/mbridge/msdk/video/js/a/j;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 552
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 553
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 555
    :cond_1
    invoke-interface {p1}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 562
    sget-object p2, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final a(Landroid/app/Activity;)V
    .locals 0

    .line 764
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 0

    .line 794
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->s:Landroid/content/Context;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 68
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/video/bt/module/a/b;)V
    .locals 0

    .line 799
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->t:Lcom/mbridge/msdk/video/bt/module/a/b;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 77
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 804
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 805
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->r:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->x:Ljava/lang/String;

    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 96
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/a/j;->B:Z

    return-void
.end method

.method public click(ILjava/lang/String;)V
    .locals 8

    const-string v0, "camp_position"

    .line 343
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c;->click(ILjava/lang/String;)V

    .line 345
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v1

    const/4 v2, 0x5

    if-ne v1, v2, :cond_3

    .line 1406
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v1, :cond_0

    goto :goto_0

    .line 1409
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    if-nez v1, :cond_1

    goto :goto_0

    .line 1412
    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    .line 1416
    :cond_2
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 1420
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 1421
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 1422
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1425
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_3
    :goto_0
    const/4 v0, 0x1

    if-eq p1, v0, :cond_8

    const/4 v1, 0x3

    if-eq p1, v1, :cond_4

    goto/16 :goto_5

    .line 381
    :cond_4
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result p1

    const/4 v1, -0x2

    if-le p1, v1, :cond_5

    .line 382
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result p1

    goto :goto_1

    .line 383
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_6

    .line 384
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->p()I

    move-result p1

    goto :goto_1

    :cond_6
    move p1, v0

    :goto_1
    const/4 v1, -0x1

    if-ne p1, v1, :cond_7

    .line 387
    new-instance p1, Lcom/mbridge/msdk/video/js/a/c$b;

    iget-object v1, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-direct {p1, p0, v1}, Lcom/mbridge/msdk/video/js/a/c$b;-><init>(Lcom/mbridge/msdk/video/js/c;Lcom/mbridge/msdk/video/js/c$a;)V

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/video/js/c$a;)V

    .line 389
    :cond_7
    invoke-virtual {p0, v0, p2}, Lcom/mbridge/msdk/video/js/a/j;->click(ILjava/lang/String;)V

    goto/16 :goto_5

    .line 351
    :cond_8
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x0

    if-nez p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_9

    .line 352
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->v:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 354
    :cond_9
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez p1, :cond_a

    return-void

    .line 357
    :cond_a
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->u:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, p2, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_b

    .line 364
    invoke-static {}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->getInstance()Lcom/mbridge/msdk/scheme/applet/AppletModelManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->get(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/scheme/applet/AppletsModel;

    move-result-object p2

    if-eqz p2, :cond_b

    .line 366
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/scheme/applet/AppletsModel;->setUserClick(Z)V

    .line 367
    invoke-static {}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->getInstance()Lcom/mbridge/msdk/scheme/applet/AppletModelManager;

    move-result-object v0

    invoke-virtual {v0, p2, p1}, Lcom/mbridge/msdk/scheme/applet/AppletModelManager;->replace(Lcom/mbridge/msdk/scheme/applet/AppletsModel;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_b
    if-eqz p1, :cond_12

    .line 370
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result p2

    if-eqz p2, :cond_12

    iget-boolean p2, p0, Lcom/mbridge/msdk/video/js/a/j;->B:Z

    if-eqz p2, :cond_12

    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p2

    if-eqz p2, :cond_12

    .line 372
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 1431
    :try_start_2
    new-instance v7, Lcom/mbridge/msdk/video/js/a/j$1;

    invoke-direct {v7, p0, p1}, Lcom/mbridge/msdk/video/js/a/j$1;-><init>(Lcom/mbridge/msdk/video/js/a/j;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1451
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    if-eqz p2, :cond_d

    .line 1452
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-ne p2, v0, :cond_c

    goto :goto_3

    :cond_c
    :goto_2
    move-object v5, p2

    goto :goto_4

    .line 1453
    :cond_d
    :goto_3
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->s:Landroid/content/Context;

    if-eqz p2, :cond_e

    .line 1454
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-ne p2, v0, :cond_c

    .line 1455
    :cond_e
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/video/bt/a/c;->d(Ljava/lang/String;)Landroid/app/Activity;

    move-result-object p2

    if-eqz p2, :cond_f

    .line 1456
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-ne p2, v0, :cond_c

    .line 1457
    :cond_f
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    goto :goto_2

    :goto_4
    if-eqz v5, :cond_11

    if-eqz p1, :cond_11

    .line 1463
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->r()Lcom/mbridge/msdk/click/b;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p2

    if-nez p2, :cond_10

    .line 1464
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    invoke-virtual {p2, v0, v2, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 1621
    sget-object v3, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 1466
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    iget-object v6, p0, Lcom/mbridge/msdk/video/js/a/j;->j:Ljava/lang/String;

    move-object v4, p1

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    .line 1467
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->t:Lcom/mbridge/msdk/video/bt/module/a/b;

    if-eqz p2, :cond_13

    .line 1468
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->t:Lcom/mbridge/msdk/video/bt/module/a/b;

    invoke-interface {p2}, Lcom/mbridge/msdk/video/bt/module/a/b;->a()V

    goto :goto_5

    .line 1471
    :cond_10
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/mbridge/msdk/video/module/b/b;->d(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1472
    iget-object p2, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {p2, v1}, Lcom/mbridge/msdk/video/js/c$a;->a(Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception p2

    .line 1477
    :try_start_3
    sget-object v0, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1479
    :cond_11
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/a/j;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_5

    .line 375
    :cond_12
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/js/a/j;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_5

    :catchall_1
    move-exception p1

    .line 396
    sget-object p2, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_13
    :goto_5
    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 3

    .line 142
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->a()V

    const/4 v0, 0x1

    .line 143
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/js/a/j;->a:Z

    .line 144
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 145
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->q()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    goto :goto_0

    .line 147
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "tun"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    .line 149
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/mbridge/msdk/video/js/a/j;->y:Ljava/lang/String;

    return-void
.end method

.method public final d(Z)V
    .locals 0

    .line 102
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/a/j;->z:Z

    return-void
.end method

.method public final e()V
    .locals 3

    .line 576
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/c;->e()V

    .line 578
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 579
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->p:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->finish()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 582
    sget-object v1, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final e(Z)V
    .locals 0

    .line 137
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/js/a/j;->A:Z

    return-void
.end method

.method public final g()V
    .locals 1

    .line 568
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/a/c;->g()V

    .line 569
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    if-eqz v0, :cond_0

    .line 570
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v0}, Lcom/mbridge/msdk/video/js/c$a;->b()V

    :cond_0
    return-void
.end method

.method public final h(I)Ljava/lang/String;
    .locals 0

    packed-switch p1, :pswitch_data_0

    .line 616
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->s()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 613
    :pswitch_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->y()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 610
    :pswitch_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->x()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 607
    :pswitch_2
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->w()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 604
    :pswitch_3
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->v()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 601
    :pswitch_4
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->u()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 598
    :pswitch_5
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/a/j;->t()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    :goto_0
    return-object p1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 1

    .line 522
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/c;->handlerH5Exception(ILjava/lang/String;)V

    .line 524
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->m:Lcom/mbridge/msdk/video/js/c$a;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/c$a;->a(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 526
    sget-object p2, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final j()Ljava/lang/String;
    .locals 2

    .line 811
    sget-object v0, Lcom/mbridge/msdk/video/js/a/j;->o:Ljava/lang/String;

    const-string v1, "getNotchArea"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 812
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final j(I)V
    .locals 0

    .line 133
    iput p1, p0, Lcom/mbridge/msdk/video/js/a/j;->w:I

    return-void
.end method

.method public final o()V
    .locals 1

    const-string v0, ""

    .line 117
    iput-object v0, p0, Lcom/mbridge/msdk/video/js/a/j;->q:Ljava/lang/String;

    return-void
.end method

.method public final p()I
    .locals 1

    .line 129
    iget v0, p0, Lcom/mbridge/msdk/video/js/a/j;->w:I

    return v0
.end method
