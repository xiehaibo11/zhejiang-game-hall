.class Lcom/sigmob/sdk/mraid2/e$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid2/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/e;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid2/e$b;->a(Lcom/sigmob/sdk/mraid2/e;)V

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lorg/json/JSONObject;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-interface {v0, v1, p1, p2}, Lcom/sigmob/sdk/mraid2/e$b;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lorg/json/JSONObject;)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v1, v2}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVid()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/common/f;->d(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/common/f;->c(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public a(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " onVpaidEvent :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v0, "uniqueId"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    sget-object v2, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/mraid/i;

    instance-of v3, v2, Lcom/sigmob/sdk/mraid/n;

    if-eqz v3, :cond_1

    move-object v1, v2

    check-cast v1, Lcom/sigmob/sdk/mraid/n;

    :cond_1
    const/4 v2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v3

    sparse-switch v3, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v3, "pause"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x4

    goto :goto_0

    :sswitch_1
    const-string v3, "muted"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x6

    goto :goto_0

    :sswitch_2
    const-string v3, "frame"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/16 v2, 0x8

    goto :goto_0

    :sswitch_3
    const-string v3, "stop"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x5

    goto :goto_0

    :sswitch_4
    const-string v3, "seek"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x7

    goto :goto_0

    :sswitch_5
    const-string v3, "play"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x2

    goto :goto_0

    :sswitch_6
    const-string v3, "init"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x0

    goto :goto_0

    :sswitch_7
    const-string v3, "assetURL"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x1

    goto :goto_0

    :sswitch_8
    const-string v3, "replay"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v2, 0x3

    :cond_2
    :goto_0
    packed-switch v2, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->h(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_1
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->g(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_2
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->f(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_3
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->e(Lorg/json/JSONObject;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/n;->c()V

    sget-object p1, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :pswitch_4
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->d(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_5
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->c(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_6
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->b(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_7
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->a(Lorg/json/JSONObject;)V

    goto :goto_1

    :pswitch_8
    new-instance p1, Lcom/sigmob/sdk/mraid/n;

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/mraid/n;-><init>(Ljava/lang/String;)V

    new-instance v1, Lcom/sigmob/sdk/mraid2/e$3$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid2/e$3$1;-><init>(Lcom/sigmob/sdk/mraid2/e$3;)V

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n$a;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p1, v1, p2}, Lcom/sigmob/sdk/mraid/n;->a(Landroid/content/Context;Lorg/json/JSONObject;)V

    sget-object p2, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {p2, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x37b3b819 -> :sswitch_8
        -0x163ec7a1 -> :sswitch_7
        0x316510 -> :sswitch_6
        0x348b34 -> :sswitch_5
        0x35ce78 -> :sswitch_4
        0x360802 -> :sswitch_3
        0x5d2a96d -> :sswitch_2
        0x636f16b -> :sswitch_1
        0x65825f6 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
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

.method public a(Lorg/json/JSONObject;)V
    .locals 28

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    invoke-static {}, Lcom/sigmob/sdk/mraid2/e;->g()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "----------onAnimationEvent-------------"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v2, "event"

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "uniqueId"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "duration"

    invoke-virtual {v1, v4}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v4

    const-string v6, "from"

    invoke-virtual {v1, v6}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    const-string v7, "to"

    invoke-virtual {v1, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    const-string v7, "h"

    const-string v8, "w"

    const-string v9, "y"

    const-string v10, "x"

    if-eqz v6, :cond_0

    invoke-virtual {v6, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v12

    int-to-float v12, v12

    iget-object v13, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v13}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v13

    invoke-static {v12, v13}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v12

    invoke-virtual {v6, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v13

    int-to-float v13, v13

    iget-object v14, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v14}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v14

    invoke-static {v13, v14}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v13

    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v14

    int-to-float v14, v14

    iget-object v15, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v15}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v15

    invoke-static {v14, v15}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v14

    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    int-to-float v6, v6

    iget-object v15, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v15}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v15

    invoke-static {v6, v15}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v6

    goto :goto_0

    :cond_0
    const/4 v6, 0x0

    const/4 v12, 0x0

    const/4 v13, 0x0

    const/4 v14, 0x0

    :goto_0
    if-eqz v1, :cond_1

    invoke-virtual {v1, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v10

    int-to-float v10, v10

    iget-object v15, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v15}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v15

    invoke-static {v10, v15}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v10

    invoke-virtual {v1, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    int-to-float v9, v9

    iget-object v15, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v15}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v15

    invoke-static {v9, v15}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v9

    invoke-virtual {v1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v8

    int-to-float v8, v8

    iget-object v15, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v15}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v15

    invoke-static {v8, v15}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v8

    invoke-virtual {v1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    int-to-float v1, v1

    iget-object v7, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {v7}, Lcom/sigmob/sdk/mraid2/e;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-static {v1, v7}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v1

    goto :goto_1

    :cond_1
    const/4 v1, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    :goto_1
    new-instance v7, Lcom/sigmob/sdk/mraid2/e$3$2;

    invoke-direct {v7, v0, v2}, Lcom/sigmob/sdk/mraid2/e$3$2;-><init>(Lcom/sigmob/sdk/mraid2/e$3;Ljava/lang/String;)V

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    sget-object v2, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/mraid/i;

    const-string v15, "height"

    const/16 v16, 0x3

    const-string v11, "width"

    move-object/from16 v19, v3

    const-string v3, "translationY"

    move-wide/from16 v20, v4

    const-string v4, "translationX"

    const/16 v22, 0x1

    if-eqz v2, :cond_2

    iget-object v5, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v5}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Lcom/sigmob/sdk/mraid/i;->a(Ljava/lang/String;)V

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid/i;->b()Landroid/view/View;

    move-result-object v2

    if-eqz v2, :cond_2

    new-instance v5, Landroid/animation/AnimatorSet;

    invoke-direct {v5}, Landroid/animation/AnimatorSet;-><init>()V

    new-instance v0, Lcom/sigmob/sdk/mraid2/e$d;

    invoke-direct {v0, v2}, Lcom/sigmob/sdk/mraid2/e$d;-><init>(Landroid/view/View;)V

    move-object/from16 v25, v5

    move-object/from16 v24, v7

    const/4 v7, 0x4

    new-array v5, v7, [Landroid/animation/Animator;

    move-object/from16 v26, v15

    const/4 v7, 0x2

    new-array v15, v7, [F

    int-to-float v7, v12

    const/16 v27, 0x0

    aput v7, v15, v27

    int-to-float v7, v10

    aput v7, v15, v22

    invoke-static {v2, v4, v15}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v7

    aput-object v7, v5, v27

    const/4 v7, 0x2

    new-array v15, v7, [F

    int-to-float v7, v13

    aput v7, v15, v27

    int-to-float v7, v9

    aput v7, v15, v22

    invoke-static {v2, v3, v15}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    aput-object v2, v5, v22

    const/4 v2, 0x2

    new-array v7, v2, [I

    aput v14, v7, v27

    aput v8, v7, v22

    invoke-static {v0, v11, v7}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v7

    aput-object v7, v5, v2

    new-array v7, v2, [I

    aput v6, v7, v27

    aput v1, v7, v22

    move-object/from16 v2, v26

    invoke-static {v0, v2, v7}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v0

    aput-object v0, v5, v16

    move-object/from16 v0, v25

    invoke-virtual {v0, v5}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    move-object/from16 v5, v24

    invoke-virtual {v0, v5}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    move v7, v1

    const-wide v17, 0x408f400000000000L    # 1000.0

    mul-double v1, v20, v17

    double-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->start()V

    goto :goto_2

    :cond_2
    move-object v5, v7

    move-object/from16 v26, v15

    move v7, v1

    :goto_2
    move-object/from16 v0, p0

    iget-object v1, v0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v1

    move-object/from16 v2, v19

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid2/e;

    if-eqz v1, :cond_3

    new-instance v2, Landroid/animation/AnimatorSet;

    invoke-direct {v2}, Landroid/animation/AnimatorSet;-><init>()V

    new-instance v15, Lcom/sigmob/sdk/mraid2/e$d;

    invoke-direct {v15, v1}, Lcom/sigmob/sdk/mraid2/e$d;-><init>(Landroid/view/View;)V

    const/4 v0, 0x4

    new-array v0, v0, [Landroid/animation/Animator;

    move-object/from16 v19, v2

    move-object/from16 v24, v5

    const/4 v5, 0x2

    new-array v2, v5, [F

    int-to-float v12, v12

    const/16 v23, 0x0

    aput v12, v2, v23

    int-to-float v10, v10

    aput v10, v2, v22

    invoke-static {v1, v4, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    aput-object v2, v0, v23

    new-array v2, v5, [F

    int-to-float v4, v13

    aput v4, v2, v23

    int-to-float v4, v9

    aput v4, v2, v22

    invoke-static {v1, v3, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    aput-object v1, v0, v22

    new-array v1, v5, [I

    aput v14, v1, v23

    aput v8, v1, v22

    invoke-static {v15, v11, v1}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v1

    aput-object v1, v0, v5

    new-array v1, v5, [I

    aput v6, v1, v23

    aput v7, v1, v22

    move-object/from16 v2, v26

    invoke-static {v15, v2, v1}, Landroid/animation/ObjectAnimator;->ofInt(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;

    move-result-object v1

    aput-object v1, v0, v16

    move-object/from16 v1, v19

    invoke-virtual {v1, v0}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    move-object/from16 v0, v24

    invoke-virtual {v1, v0}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    const-wide v2, 0x408f400000000000L    # 1000.0

    mul-double v4, v20, v2

    double-to-long v2, v4

    invoke-virtual {v1, v2, v3}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->start()V

    :cond_3
    return-void
.end method

.method public b()V
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid/i;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->a()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->b()Landroid/view/View;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/i;->c()V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashMap;->size()I

    move-result v0

    if-lez v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid2/k;

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/k;->c()V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    :cond_4
    return-void
.end method

.method public b(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " onTimerEvent :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v0, "uniqueId"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid2/k;

    const/4 v2, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v3

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    sparse-switch v3, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v3, "pause"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v5

    goto :goto_0

    :sswitch_1
    const-string v3, "init"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 v2, 0x0

    goto :goto_0

    :sswitch_2
    const-string v3, "fire"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v6

    goto :goto_0

    :sswitch_3
    const-string v3, "invalidate"

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move v2, v4

    :cond_1
    :goto_0
    if-eqz v2, :cond_6

    if-eq v2, v6, :cond_5

    if-eq v2, v5, :cond_4

    if-eq v2, v4, :cond_2

    goto :goto_1

    :cond_2
    if-eqz v1, :cond_3

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/k;->c()V

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object p1

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_4
    if-eqz v1, :cond_7

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/k;->a()V

    goto :goto_1

    :cond_5
    if-eqz v1, :cond_7

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/k;->b()V

    goto :goto_1

    :cond_6
    new-instance p1, Lcom/sigmob/sdk/mraid2/k;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;

    move-result-object v1

    invoke-direct {p1, v1, p2}, Lcom/sigmob/sdk/mraid2/k;-><init>(Lcom/sigmob/sdk/mraid2/b;Lorg/json/JSONObject;)V

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object p2

    invoke-virtual {p2, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_7
    :goto_1
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x6d2fcec5 -> :sswitch_3
        0x2ff636 -> :sswitch_2
        0x316510 -> :sswitch_1
        0x65825f6 -> :sswitch_0
    .end sparse-switch
.end method

.method public b(Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "uniqueId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/mraid/i;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/i;->a(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/i;->b()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->l(Lcom/sigmob/sdk/mraid2/e;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setX(F)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setY(F)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/mraid2/e;

    if-eqz p1, :cond_2

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    :cond_2
    return-void
.end method

.method public c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/mraid2/e$b;->b(Lcom/sigmob/sdk/mraid2/e;)V

    :cond_0
    return-void
.end method

.method public c(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " onWebViewEvent :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v0, "uniqueId"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid2/e;

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const-string v3, "frame"

    const/4 v4, 0x0

    const/4 v5, -0x1

    sparse-switch v2, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v2, "loadURLByPackage"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x5

    goto :goto_1

    :sswitch_1
    const-string v2, "loadURL"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    goto :goto_1

    :sswitch_2
    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x2

    goto :goto_1

    :sswitch_3
    const-string v2, "init"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    move p1, v4

    goto :goto_1

    :sswitch_4
    const-string v2, "reload"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x6

    goto :goto_1

    :sswitch_5
    const-string v2, "stopLoading"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x7

    goto :goto_1

    :sswitch_6
    const-string v2, "loadId"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x4

    goto :goto_1

    :sswitch_7
    const-string v2, "loadHTMLString"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x3

    goto :goto_1

    :cond_1
    :goto_0
    move p1, v5

    :goto_1
    packed-switch p1, :pswitch_data_0

    goto/16 :goto_2

    :pswitch_0
    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->stopLoading()V

    goto/16 :goto_2

    :pswitch_1
    if-eqz v1, :cond_4

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->reload()V

    goto/16 :goto_2

    :pswitch_2
    const-string p1, "URL"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz v1, :cond_4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-static {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->b(Lcom/sigmob/sdk/mraid2/e;Ljava/lang/String;)V

    goto/16 :goto_2

    :pswitch_3
    const-string p1, "id"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz v1, :cond_4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-static {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;Ljava/lang/String;)V

    goto/16 :goto_2

    :pswitch_4
    const-string p1, "html"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz v1, :cond_4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->b(Ljava/lang/String;)V

    goto/16 :goto_2

    :pswitch_5
    if-eqz v1, :cond_4

    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    const-string p2, "x"

    invoke-virtual {p1, p2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v0, "y"

    invoke-virtual {p1, v0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const-string v2, "w"

    invoke-virtual {p1, v2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v3, "h"

    invoke-virtual {p1, v3, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    if-lez v2, :cond_2

    int-to-float v2, v2

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result v2

    :cond_2
    if-lez p1, :cond_3

    int-to-float p1, p1

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    :cond_3
    new-instance v3, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v3, v2, p1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v1, v3}, Lcom/sigmob/sdk/mraid2/e;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    int-to-float p1, p2

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->setX(F)V

    int-to-float p1, v0

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Dips;->dipsToIntPixels(FLandroid/content/Context;)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->setY(F)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid2/e;->requestLayout()V

    goto :goto_2

    :pswitch_6
    const-string p1, "url"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-eqz v1, :cond_4

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/mraid2/e;->c(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_7
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-interface {p1, v1, p2}, Lcom/sigmob/sdk/mraid2/e$b;->a(Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid2/e;->j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object p2

    invoke-virtual {p2, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    :goto_2
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x558f02fe -> :sswitch_7
        -0x416ad35f -> :sswitch_6
        -0x38833526 -> :sswitch_5
        -0x37b57e67 -> :sswitch_4
        0x316510 -> :sswitch_3
        0x5d2a96d -> :sswitch_2
        0x141092a9 -> :sswitch_1
        0x2b1ffb46 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
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

.method public c(Lorg/json/JSONObject;)V
    .locals 2

    const-string v0, "uniqueId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    sget-object v0, Lcom/sigmob/sdk/mraid2/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/mraid/i;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/i;->a(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/i;->b()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->l(Lcom/sigmob/sdk/mraid2/e;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setX(F)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setY(F)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->bringChildToFront(Landroid/view/View;)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/mraid2/e;

    if-eqz p1, :cond_2

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/FrameLayout;->bringChildToFront(Landroid/view/View;)V

    :cond_2
    return-void
.end method

.method public d(Lorg/json/JSONObject;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid2/e;->b(Lcom/sigmob/sdk/mraid2/e;Z)Z

    const-string v0, "flag"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v2

    invoke-interface {v1, v2, p1}, Lcom/sigmob/sdk/mraid2/e$b;->a(Lcom/sigmob/sdk/mraid2/e;I)Landroid/widget/LinearLayout;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/sigmob/sdk/mraid2/e;->a(Lcom/sigmob/sdk/mraid2/e;Landroid/widget/LinearLayout;)Landroid/widget/LinearLayout;

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2}, Landroid/widget/FrameLayout;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid2/e;->n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/FrameLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    instance-of v3, v2, Lcom/sigmob/sdk/mraid/l;

    if-eqz v3, :cond_0

    check-cast v2, Lcom/sigmob/sdk/mraid/l;

    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/mraid2/e;->g()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "-------------onUseScrollView----------"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/mraid/l;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/l;->setX(F)V

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/mraid/l;->setY(F)V

    invoke-static {v1}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v2, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid2/e;->m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    :cond_2
    return-void
.end method

.method public e(Lorg/json/JSONObject;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid2/e;->k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e$3;->a:Lcom/sigmob/sdk/mraid2/e;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid2/e;->h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Lcom/sigmob/sdk/mraid2/e$b;->b(Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)V

    :cond_0
    return-void
.end method
