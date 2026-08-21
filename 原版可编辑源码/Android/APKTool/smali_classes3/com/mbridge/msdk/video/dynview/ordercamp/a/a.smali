.class public final Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;
.super Landroid/widget/BaseAdapter;
.source "OrderCampAdapter.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;
    }
.end annotation


# instance fields
.field private a:Z

.field private b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 72
    invoke-direct {p0}, Landroid/widget/BaseAdapter;-><init>()V

    const/4 v0, 0x0

    .line 50
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a:Z

    .line 73
    iput-object p1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    return-void
.end method

.method private a(Ljava/lang/String;)I
    .locals 2

    .line 330
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method private a()Landroid/view/View;
    .locals 3

    .line 260
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    const-string v1, "mbridge_order_layout_item"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    .line 261
    new-instance v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    invoke-direct {v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v2, "mbridge_lv_iv"

    .line 262
    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    iput-object v2, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->c:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    .line 263
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v2, "mbridge_lv_iv_burl"

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    iput-object v2, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    .line 264
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v2, "mbridge_lv_icon_iv"

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    iput-object v2, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->d:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    .line 265
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v2, "mbridge_lv_sv_starlevel"

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    iput-object v2, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->i:Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    .line 266
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v2, "mbridge_lv_ration"

    invoke-direct {p0, v2}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    iput-object v2, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->b:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    .line 267
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    invoke-virtual {v0, v1}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    return-object v0
.end method

.method private a(I)Landroid/view/View;
    .locals 5

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, ""

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 126
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_tplid()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 127
    iget-object v1, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :cond_0
    const-string v0, "501"

    .line 129
    :goto_0
    :try_start_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 130
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a()Landroid/view/View;

    move-result-object p1

    return-object p1

    .line 132
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v2

    const/4 v3, 0x0

    .line 133
    invoke-static {v3, v0, v1}, Lcom/mbridge/msdk/foundation/tools/i;->a(ILjava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 134
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 135
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a()Landroid/view/View;

    move-result-object p1

    return-object p1

    .line 138
    :cond_2
    new-instance v1, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "template_config.json"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 143
    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_3

    goto/16 :goto_1

    .line 148
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "template_"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "_item"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/x;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_4

    .line 150
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a()Landroid/view/View;

    move-result-object p1

    return-object p1

    .line 4234
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->t(Landroid/content/Context;)I

    move-result v1

    .line 4235
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    .line 4236
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    .line 4237
    new-instance v3, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;

    invoke-direct {v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    .line 4238
    invoke-interface {v4, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;->campaignEx(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object p1

    .line 4239
    invoke-interface {p1, v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->fileDirs(Ljava/util/List;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object p1

    sget-object v0, Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;->REWARD:Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;

    .line 4240
    invoke-interface {p1, v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->dyAdType(Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object p1

    .line 4241
    invoke-interface {p1, v1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->orientation(I)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object p1

    .line 4242
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->az()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->adChoiceLink(Ljava/lang/String;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object p1

    .line 4243
    invoke-interface {p1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->build()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object p1

    .line 4244
    invoke-static {}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->getInstance()Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->createDynamicView(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_6

    const/4 v0, 0x1

    .line 4246
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a:Z

    .line 4247
    new-instance v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v1, "mbridge_lv_iv"

    .line 4248
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->l:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    .line 4249
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v1, "mbridge_lv_iv_burl"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    .line 4250
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v1, "mbridge_lv_icon_iv"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->m:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    .line 4251
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v1, "mbridge_lv_sv_starlevel"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->n:Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    .line 4252
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v1, "mbridge_lv_ration"

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/MBFrameLayout;

    iput-object v1, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->p:Lcom/mbridge/msdk/dycreator/baseview/MBFrameLayout;

    .line 4253
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    invoke-virtual {p1, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_2

    .line 145
    :cond_5
    :goto_1
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a()Landroid/view/View;

    move-result-object p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 154
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "OrderCampAdapter"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 156
    :cond_6
    :goto_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a:Z

    if-eqz v0, :cond_7

    goto :goto_3

    :cond_7
    invoke-direct {p0}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a()Landroid/view/View;

    move-result-object p1

    :goto_3
    return-object p1
.end method

.method private a(Landroid/widget/ImageView;Ljava/lang/String;Z)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 285
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    if-eqz p3, :cond_1

    const/16 p2, 0x8

    .line 287
    invoke-virtual {p1, p2}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void

    .line 291
    :cond_2
    invoke-virtual {p1}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$1;

    invoke-direct {v1, p0, p1, p3}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$1;-><init>(Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;Landroid/widget/ImageView;Z)V

    invoke-virtual {v0, p2, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method private b(Ljava/lang/String;)I
    .locals 2

    .line 334
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method private c(Ljava/lang/String;)I
    .locals 1

    .line 338
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 339
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p1

    return p1

    :cond_0
    const/4 p1, -0x1

    return p1
.end method

.method private d(Ljava/lang/String;)I
    .locals 1

    .line 400
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a:Z

    if-eqz v0, :cond_0

    .line 401
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c(Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    .line 403
    :cond_0
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b(Ljava/lang/String;)I

    move-result p1

    :goto_0
    return p1
.end method


# virtual methods
.method public final getCount()I
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 80
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getItem(I)Ljava/lang/Object;
    .locals 1

    .line 87
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 88
    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final getItemId(I)J
    .locals 2

    int-to-long v0, p1

    return-wide v0
.end method

.method public final getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 18

    move-object/from16 v1, p0

    move/from16 v0, p1

    const-string v2, "OrderCampAdapter"

    if-nez p2, :cond_0

    .line 103
    :try_start_0
    invoke-direct/range {p0 .. p1}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(I)Landroid/view/View;

    move-result-object v3

    goto :goto_0

    .line 105
    :cond_0
    invoke-virtual/range {p2 .. p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iput-object v3, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    move-object/from16 v3, p2

    .line 1272
    :goto_0
    :try_start_1
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_lv_item_rl"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/RelativeLayout;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->a:Landroid/widget/RelativeLayout;

    .line 1273
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_lv_title_tv"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    .line 1274
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_lv_tv_install"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    .line 1275
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_lv_sv_heat_level"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->o:Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    .line 1276
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_lv_desc_tv"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    .line 1277
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_iv_flag"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/ImageView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    .line 1278
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    const-string v5, "mbridge_order_viewed_tv"

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->d(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    iput-object v5, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    .line 108
    iget-boolean v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a:Z

    const/4 v5, 0x1

    const-wide/high16 v6, 0x4014000000000000L    # 5.0

    const-wide/16 v8, 0x0

    const/4 v10, 0x0

    if-eqz v4, :cond_8

    .line 2199
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    if-eqz v4, :cond_11

    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    if-nez v4, :cond_1

    goto/16 :goto_3

    .line 2202
    :cond_1
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-nez v4, :cond_2

    goto/16 :goto_3

    .line 2205
    :cond_2
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->l:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    if-eqz v4, :cond_3

    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->l:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    instance-of v4, v4, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    if-eqz v4, :cond_3

    .line 2206
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v11, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->l:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    const/16 v12, 0x1e

    const/16 v13, 0x1e

    const/16 v14, 0x1e

    const/16 v15, 0x1e

    const/16 v16, 0xa

    const/high16 v17, -0x67000000

    invoke-virtual/range {v11 .. v17}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;->setCustomBorder(IIIIII)V

    .line 2207
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->l:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v10}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 2210
    :cond_3
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    if-eqz v4, :cond_4

    .line 2211
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v10}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 2214
    :cond_4
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->m:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    if-eqz v4, :cond_5

    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->m:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    instance-of v4, v4, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    if-eqz v4, :cond_5

    .line 2215
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->m:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    const/16 v11, 0x32

    const/16 v12, 0x14

    const/4 v13, -0x1

    invoke-virtual {v4, v11, v12, v13}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;->setBorder(III)V

    .line 2216
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->m:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBCusRoundImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 2218
    :cond_5
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v4

    cmpg-double v8, v4, v8

    if-gtz v8, :cond_6

    goto :goto_1

    :cond_6
    move-wide v6, v4

    .line 2222
    :goto_1
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->n:Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    if-eqz v4, :cond_7

    .line 2223
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->n:Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    double-to-int v5, v6

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;->setRating(I)V

    .line 2224
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->n:Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    invoke-virtual {v4, v10}, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;->setOrientation(I)V

    .line 2226
    :cond_7
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->o:Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    if-eqz v4, :cond_11

    .line 2227
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->o:Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;->setHeatCount(I)V

    goto/16 :goto_3

    .line 3161
    :cond_8
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    if-eqz v4, :cond_11

    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    if-nez v4, :cond_9

    goto/16 :goto_3

    .line 3164
    :cond_9
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-nez v4, :cond_a

    goto/16 :goto_3

    .line 3167
    :cond_a
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->c:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    if-eqz v4, :cond_b

    .line 3168
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->c:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v10}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 3171
    :cond_b
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    if-eqz v4, :cond_c

    .line 3172
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->k:Landroid/widget/ImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v10}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 3175
    :cond_c
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->d:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    if-eqz v4, :cond_d

    .line 3176
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->d:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    const/16 v11, 0x19

    invoke-virtual {v4, v11}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 3177
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->d:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    iget-object v11, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v11, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v11}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v1, v4, v11, v5}, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->a(Landroid/widget/ImageView;Ljava/lang/String;Z)V

    .line 3179
    :cond_d
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v4

    cmpg-double v8, v4, v8

    if-gtz v8, :cond_e

    goto :goto_2

    :cond_e
    move-wide v6, v4

    .line 3183
    :goto_2
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->i:Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    if-eqz v4, :cond_f

    .line 3184
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->i:Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v5, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v5

    invoke-virtual {v4, v6, v7, v5}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;->setRatingAndUser(DI)V

    .line 3185
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->i:Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    invoke-virtual {v4, v10}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;->setOrientation(I)V

    .line 3187
    :cond_f
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->b:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    if-eqz v4, :cond_10

    .line 3188
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->b:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setWidthRatio(F)V

    .line 3189
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->b:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setHeightRatio(F)V

    .line 3190
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->b:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;

    invoke-virtual {v4, v10}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBRotationView;->setAutoscroll(Z)V

    .line 3192
    :cond_10
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->c:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    if-eqz v4, :cond_11

    .line 3193
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v11, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->c:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;

    const/16 v12, 0x1e

    const/16 v13, 0x1e

    const/16 v14, 0x1e

    const/16 v15, 0x1e

    const/16 v16, 0xa

    const/high16 v17, -0x67000000

    invoke-virtual/range {v11 .. v17}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeImageView;->setCustomBorder(IIIIII)V

    .line 3345
    :cond_11
    :goto_3
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    if-eqz v4, :cond_18

    .line 3346
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    if-eqz v4, :cond_12

    .line 3347
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v4

    .line 3348
    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v5, v5, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->e:Landroid/widget/TextView;

    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3350
    :cond_12
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    if-eqz v4, :cond_13

    .line 3351
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v4

    .line 3352
    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v5, v5, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->f:Landroid/widget/TextView;

    invoke-virtual {v5, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3354
    :cond_13
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    if-eqz v4, :cond_15

    .line 3355
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->c:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v0

    .line 3356
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    instance-of v4, v4, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeTextView;

    if-eqz v4, :cond_14

    .line 3357
    new-instance v4, Lcom/mbridge/msdk/video/dynview/h/b;

    invoke-direct {v4}, Lcom/mbridge/msdk/video/dynview/h/b;-><init>()V

    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v5, v5, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/video/dynview/h/b;->c(Landroid/view/View;)Landroid/animation/ObjectAnimator;

    move-result-object v4

    .line 3358
    iget-object v5, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v5, v5, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    check-cast v5, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeTextView;

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeTextView;->setObjectAnimator(Landroid/animation/ObjectAnimator;)V

    .line 3360
    :cond_14
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->g:Landroid/widget/TextView;

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3363
    :cond_15
    iget-object v0, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    if-eqz v0, :cond_17

    .line 3365
    :try_start_2
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 3366
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    if-eqz v4, :cond_17

    .line 3368
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v6, "drawable"

    if-nez v5, :cond_16

    :try_start_3
    const-string v5, "zh"

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_16

    .line 3369
    iget-object v0, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v7, "mbridge_reward_flag_cn"

    .line 3370
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v8

    .line 3369
    invoke-virtual {v4, v7, v6, v8}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v5, v4}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_4

    .line 3372
    :cond_16
    iget-object v0, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->j:Landroid/widget/ImageView;

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v7, "mbridge_reward_flag_en"

    .line 3373
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v8

    .line 3372
    invoke-virtual {v4, v7, v6, v8}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v5, v4}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-virtual {v0, v4}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_4

    :catch_0
    move-exception v0

    .line 3377
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3380
    :cond_17
    :goto_4
    iget-object v0, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    if-eqz v0, :cond_18

    .line 3382
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 3383
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "mbridge_reward_viewed_text_str"

    const-string v6, "string"

    invoke-virtual {v4, v5, v6, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 3384
    iget-object v4, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v4, v4, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 3385
    iget-object v0, v1, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a;->b:Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;

    iget-object v0, v0, Lcom/mbridge/msdk/video/dynview/ordercamp/a/a$a;->h:Landroid/widget/TextView;

    invoke-virtual {v0, v10}, Landroid/widget/TextView;->setVisibility(I)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_6

    :catch_1
    move-exception v0

    .line 3387
    :try_start_6
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2

    goto :goto_6

    :catch_2
    move-exception v0

    goto :goto_5

    :catch_3
    move-exception v0

    move-object/from16 v3, p2

    .line 115
    :goto_5
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_18
    :goto_6
    return-object v3
.end method
