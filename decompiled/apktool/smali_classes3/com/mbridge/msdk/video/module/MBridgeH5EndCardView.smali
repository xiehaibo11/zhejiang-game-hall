.class public Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;
.super Lcom/mbridge/msdk/video/module/MBridgeBaseView;
.source "MBridgeH5EndCardView.java"

# interfaces
.implements Lcom/mbridge/msdk/click/h;
.implements Lcom/mbridge/msdk/mbjscommon/mraid/b;
.implements Lcom/mbridge/msdk/video/js/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$c;,
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$b;,
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$f;,
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$e;,
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$d;,
        Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$a;
    }
.end annotation


# instance fields
.field private A:Z

.field private B:I

.field private C:I

.field private D:Z

.field private E:Z

.field private F:I

.field private G:J

.field private H:Z

.field private I:Z

.field private J:Z

.field private K:Z

.field private L:Z

.field private M:Z

.field private N:Z

.field private O:Z

.field private P:Ljava/lang/String;

.field private Q:Lcom/mbridge/msdk/video/js/factory/b;

.field private R:Z

.field private S:Z

.field protected n:Landroid/view/View;

.field protected o:Landroid/widget/RelativeLayout;

.field protected p:Landroid/widget/ImageView;

.field protected q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field protected r:Landroid/os/Handler;

.field protected s:Ljava/lang/String;

.field protected t:Z

.field protected u:Z

.field protected v:Ljava/lang/String;

.field w:Landroid/os/Handler;

.field x:Z

.field private y:Lcom/mbridge/msdk/widget/FeedBackButton;

.field private z:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 194
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 119
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->z:Z

    .line 121
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    .line 123
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    .line 124
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    .line 129
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    const/4 v0, 0x1

    .line 134
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    .line 136
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->C:I

    .line 141
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    .line 143
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->E:Z

    .line 147
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->F:I

    const-wide/16 v0, 0x0

    .line 153
    iput-wide v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    .line 157
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->H:Z

    .line 162
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    .line 166
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    .line 170
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->K:Z

    .line 175
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    .line 180
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    .line 185
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->N:Z

    .line 187
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->O:Z

    const-string v0, ""

    .line 189
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->P:Ljava/lang/String;

    .line 201
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$1;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->w:Landroid/os/Handler;

    .line 578
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->R:Z

    .line 625
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->S:Z

    .line 1158
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2

    .line 198
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 119
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->z:Z

    .line 121
    new-instance p2, Landroid/os/Handler;

    invoke-direct {p2}, Landroid/os/Handler;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    .line 123
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    .line 124
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    .line 129
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    const/4 p2, 0x1

    .line 134
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    .line 136
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->C:I

    .line 141
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    .line 143
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->E:Z

    .line 147
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->F:I

    const-wide/16 v0, 0x0

    .line 153
    iput-wide v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    .line 157
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->H:Z

    .line 162
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    .line 166
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    .line 170
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->K:Z

    .line 175
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    .line 180
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    .line 185
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->N:Z

    .line 187
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->O:Z

    const-string p2, ""

    .line 189
    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->P:Ljava/lang/String;

    .line 201
    new-instance p2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p2, p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$1;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Landroid/os/Looper;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->w:Landroid/os/Handler;

    .line 578
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->R:Z

    .line 625
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->S:Z

    .line 1158
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;I)I
    .locals 0

    .line 79
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->F:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;JZ)V
    .locals 20

    move-object/from16 v1, p0

    move-wide/from16 v2, p1

    const-string v4, "MBridgeBaseView"

    .line 4082
    :try_start_0
    iget-boolean v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    if-eqz v0, :cond_0

    const-string v0, "insertEndCardReadyState hasInsertLoadEndCardReport true return"

    .line 4083
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    :cond_0
    const/4 v5, 0x1

    .line 4086
    iput-boolean v5, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    .line 4088
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v6, "1"

    const-string v7, "2"

    if-eqz v0, :cond_1

    :try_start_1
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    const-string v8, ".zip"

    invoke-virtual {v0, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    move-object v15, v6

    goto :goto_0

    :cond_1
    move-object v15, v7

    :goto_0
    const/16 v0, 0xa

    const-string v8, "ready yes"

    const/4 v9, 0x2

    if-eqz p3, :cond_2

    const/16 v0, 0xc

    const-string v8, "ready timeout"

    :goto_1
    move v14, v0

    move-object v13, v8

    move v12, v9

    goto :goto_2

    .line 4099
    :cond_2
    iget v10, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->F:I

    if-ne v10, v9, :cond_3

    const/4 v9, 0x3

    const/16 v0, 0xb

    const-string v8, "ready no"

    goto :goto_1

    :cond_3
    move v14, v0

    move v12, v5

    move-object v13, v8

    .line 4105
    :goto_2
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    const-string v9, "2000043"

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v8, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v16

    iget-object v8, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v17

    iget-object v10, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    move-object v8, v11

    move-object/from16 v18, v10

    move v10, v14

    move-object v5, v11

    move-object v11, v0

    move-object/from16 v19, v4

    move v4, v12

    move-object/from16 v12, v16

    move-object/from16 p3, v13

    move-object/from16 v13, v17

    move v2, v14

    move-object/from16 v14, v18

    move-object v3, v15

    move-object/from16 v15, p3

    move-object/from16 v16, v3

    :try_start_2
    invoke-direct/range {v8 .. v16}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 4108
    :try_start_3
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v8, 0x11f

    if-ne v0, v8, :cond_4

    const-string v0, "3"

    .line 4109
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_3

    .line 4110
    :cond_4
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v8, 0x5e

    if-ne v0, v8, :cond_5

    .line 4111
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_3

    .line 4112
    :cond_5
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    const/16 v6, 0x2a

    if-ne v0, v6, :cond_6

    .line 4113
    invoke-virtual {v5, v7}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/NullPointerException; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_3

    :catch_0
    move-exception v0

    .line 4116
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/NullPointerException;->printStackTrace()V

    .line 4118
    :cond_6
    :goto_3
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 4119
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 4120
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 4121
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    .line 4123
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->isLoadSuccess()Z

    move-result v0

    if-nez v0, :cond_8

    const/4 v6, 0x1

    if-ne v4, v6, :cond_8

    .line 4124
    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 4125
    invoke-static/range {p1 .. p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->q(Ljava/lang/String;)V

    .line 4126
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    move-object/from16 v8, p3

    .line 4128
    invoke-virtual {v5, v8}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 4130
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_7

    .line 4131
    sget v0, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    goto :goto_4

    .line 4133
    :cond_7
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->f(Ljava/lang/String;)V

    .line 4134
    invoke-virtual {v5, v3}, Lcom/mbridge/msdk/foundation/entity/p;->g(Ljava/lang/String;)V

    .line 4135
    sget v0, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 4137
    :goto_4
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    goto :goto_5

    :cond_8
    move-object/from16 v8, p3

    .line 4139
    :goto_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "insertEndCardReadyState result:"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " endCardLoadTime:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-wide/from16 v4, p1

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, " endcardurl:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "  id:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "  unitid:"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  reason:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "  type:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    move-object/from16 v1, v19

    :try_start_5
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_7

    :catchall_0
    move-exception v0

    goto :goto_6

    :catchall_1
    move-exception v0

    move-object/from16 v1, v19

    goto :goto_6

    :catchall_2
    move-exception v0

    move-object v1, v4

    .line 4141
    :goto_6
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_7
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Ljava/lang/String;)V
    .locals 0

    .line 79
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    .line 1300
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v0

    .line 1302
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1303
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 1304
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b(Ljava/lang/String;)V

    .line 1306
    :cond_0
    new-instance p1, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 1307
    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/h;)V

    .line 1308
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 1309
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 1315
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x7e

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1318
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->H:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->E:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)J
    .locals 2

    .line 79
    iget-wide v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    return-wide v0
.end method

.method private b(Ljava/lang/String;)V
    .locals 8

    .line 1329
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1331
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 1332
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v7

    move-object v6, p1

    invoke-virtual/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->E:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V
    .locals 18

    move-object/from16 v1, p0

    const-string v2, "true"

    .line 4181
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 4182
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    const-string v3, "undefined"

    if-eqz v0, :cond_2

    const/4 v4, 0x1

    if-eq v0, v4, :cond_1

    const/4 v4, 0x2

    if-eq v0, v4, :cond_0

    goto :goto_0

    :cond_0
    const-string v3, "landscape"

    goto :goto_0

    :cond_1
    const-string v3, "portrait"

    .line 4195
    :cond_2
    :goto_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "orientation"

    .line 4197
    invoke-virtual {v4, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "locked"

    .line 4198
    invoke-virtual {v4, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 4200
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 4203
    :goto_1
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v3, "placementType"

    const-string v5, "Interstitial"

    .line 4204
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "state"

    const-string v5, "default"

    .line 4205
    invoke-virtual {v0, v3, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "viewable"

    .line 4206
    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "currentAppOrientation"

    .line 4207
    invoke-virtual {v0, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4209
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    instance-of v2, v2, Landroid/app/Activity;

    if-eqz v2, :cond_3

    .line 4210
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 4211
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v3

    int-to-float v3, v3

    .line 4213
    new-instance v4, Landroid/util/DisplayMetrics;

    invoke-direct {v4}, Landroid/util/DisplayMetrics;-><init>()V

    .line 4214
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v5

    check-cast v5, Landroid/app/Activity;

    invoke-virtual {v5}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v5

    invoke-interface {v5}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/view/Display;->getMetrics(Landroid/util/DisplayMetrics;)V

    .line 4215
    iget v5, v4, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-float v5, v5

    .line 4216
    iget v4, v4, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-float v4, v4

    .line 4218
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v6, v7, v2, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 4219
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v5, v4}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 4222
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v6

    iget-object v7, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 4223
    invoke-virtual {v7}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v8, v2

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v9, v2

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v10, v2

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getHeight()I

    move-result v2

    int-to-float v11, v2

    .line 4222
    invoke-virtual/range {v6 .. v11}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FFFF)V

    .line 4224
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v12

    iget-object v13, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 4225
    invoke-virtual {v13}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getLeft()I

    move-result v2

    int-to-float v14, v2

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getTop()I

    move-result v2

    int-to-float v15, v2

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWidth()I

    move-result v2

    int-to-float v2, v2

    iget-object v3, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getHeight()I

    move-result v3

    int-to-float v3, v3

    move/from16 v16, v2

    move/from16 v17, v3

    .line 4224
    invoke-virtual/range {v12 .. v17}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FFFF)V

    .line 4226
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v2

    iget-object v3, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2, v3, v0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 4227
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    sget-wide v3, Lcom/mbridge/msdk/mbjscommon/mraid/d;->a:D

    invoke-virtual {v0, v2, v3, v4}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;D)V

    .line 4228
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V

    :cond_4
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    return p1
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Ljava/lang/String;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->P:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Z)Z
    .locals 0

    .line 79
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    return p1
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V
    .locals 6

    const-string v0, "_"

    .line 4715
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 4716
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 4717
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x2

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/b/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->y:Lcom/mbridge/msdk/widget/FeedBackButton;

    if-eqz v1, :cond_1

    .line 4719
    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    if-eqz v1, :cond_0

    .line 4721
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->y:Lcom/mbridge/msdk/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 4723
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->o:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->y:Lcom/mbridge/msdk/widget/FeedBackButton;

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 4724
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->o:Landroid/widget/RelativeLayout;

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$5;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$5;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    const-wide/16 v4, 0xc8

    invoke-virtual {v1, v2, v4, v5}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 4731
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 4732
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 4733
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$6;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$6;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    invoke-virtual {v1, v0, v2}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 4788
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Lcom/mbridge/msdk/widget/FeedBackButton;
    .locals 0

    .line 79
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->y:Lcom/mbridge/msdk/widget/FeedBackButton;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->N:Z

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)Z
    .locals 0

    .line 79
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->D:Z

    return p0
.end method


# virtual methods
.method protected a()Ljava/lang/String;
    .locals 7

    .line 869
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x0

    const/4 v2, 0x0

    const-string v3, "MBridgeBaseView"

    if-eqz v0, :cond_8

    const/4 v0, 0x1

    .line 870
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->H:Z

    .line 872
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v4

    const-string v5, "getURL playable=false endscreenurl\u515c\u5e95:"

    if-eqz v4, :cond_3

    .line 873
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    .line 875
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 876
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 879
    :try_start_0
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->canRead()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 880
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Mraid file "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 881
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "file:////"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v1, "Mraid file not found. Will use endcard url."

    .line 883
    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 884
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 887
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_2

    .line 888
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    .line 893
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0

    .line 894
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-object v0

    .line 899
    :cond_3
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    .line 900
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_7

    .line 901
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    .line 902
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v0

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 903
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    const-string v6, "&native_adtype="

    if-eqz v5, :cond_6

    .line 905
    :try_start_1
    invoke-static {v4}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 906
    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    .line 907
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 908
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v5, ".zip"

    invoke-virtual {v0, v5}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 909
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0

    .line 910
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 911
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    .line 912
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->excuteTask()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-object v0

    :cond_4
    return-object v1

    :catchall_1
    move-exception v0

    .line 920
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 923
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getURL playable=true endcard\u672c\u5730\u8d44\u6e90\u5730\u5740\u4e3a\u7a7a\u62ff\u670d\u52a1\u7aef\u5730\u5740:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 924
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 927
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getURL playable=true \u8d44\u6e90\u4e0d\u4e3a\u7a7aendcard\u5730\u5740:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 928
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 932
    :cond_7
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    .line 933
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0

    .line 934
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 939
    :cond_8
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->H:Z

    const-string v0, "getURL playable=false url\u4e3a\u7a7a"

    .line 940
    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method protected b()Landroid/widget/RelativeLayout$LayoutParams;
    .locals 2

    .line 853
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    return-object v0
.end method

.method protected final c()V
    .locals 2

    .line 243
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->c()V

    .line 244
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 245
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$2;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 810
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public close()V
    .locals 2

    const-string v0, "EndCard_MRAID"

    const-string v1, "close"

    .line 1338
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1340
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->onCloseViewClick()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1342
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public defaultShow()V
    .locals 0

    .line 537
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->defaultShow()V

    return-void
.end method

.method protected e()V
    .locals 1

    .line 860
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 861
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setMatchParent()V

    :cond_0
    return-void
.end method

.method public excuteEndCardShowTask(I)V
    .locals 4

    .line 1012
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$c;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$c;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;I)V

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public excuteTask()V
    .locals 4

    .line 976
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    if-nez v0, :cond_0

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    const/4 v1, -0x1

    if-le v0, v1, :cond_0

    .line 977
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$f;

    invoke-direct {v1, p0, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$f;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method public executeEndCardShow(I)V
    .locals 4

    .line 1003
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$b;

    invoke-direct {v1, p0, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$b;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 1354
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public handlerPlayableException(Ljava/lang/String;)V
    .locals 2

    const-string v0, "========"

    const-string v1, "===========handlerPlayableException"

    .line 644
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 646
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 647
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    const/4 v0, 0x0

    .line 648
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    .line 649
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 650
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 651
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 652
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 653
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 654
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 655
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/report/c;->d(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 3

    const-string p1, "mbridge_reward_endcard_h5"

    .line 227
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->c:Landroid/view/LayoutInflater;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->n:Landroid/view/View;

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "mbridge_windwv_close"

    .line 1946
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    const-string v1, "mbridge_windwv_content_rl"

    .line 1947
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout;

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->o:Landroid/widget/RelativeLayout;

    .line 1948
    new-instance p1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1949
    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {p1, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1951
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1952
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->o:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    const/4 p1, 0x2

    new-array p1, p1, [Landroid/view/View;

    .line 1953
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    aput-object v2, p1, v1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    .line 231
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 233
    :catch_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    .line 235
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->n:Landroid/view/View;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b()Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 236
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->c()V

    .line 237
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e()V

    :cond_0
    return-void
.end method

.method public install(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    return-void
.end method

.method public isLoadSuccess()Z
    .locals 1

    .line 814
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->t:Z

    return v0
.end method

.method public isPlayable()Z
    .locals 1

    .line 1146
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    return v0
.end method

.method public notifyCloseBtn(I)V
    .locals 1

    const/4 v0, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 552
    :cond_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->K:Z

    goto :goto_0

    .line 549
    :cond_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    :goto_0
    return-void
.end method

.method public onBackPress()V
    .locals 1

    .line 1150
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->K:Z

    if-nez v0, :cond_2

    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    if-eqz v0, :cond_2

    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    if-eqz v0, :cond_3

    .line 1154
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->onCloseViewClick()V

    :cond_3
    return-void
.end method

.method public onCloseViewClick()V
    .locals 6

    const-string v0, ""

    const/16 v1, 0x77

    const/16 v2, 0x67

    .line 256
    :try_start_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_0

    .line 257
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v5, "onSystemDestory"

    invoke-virtual {v3, v4, v5, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 258
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$a;

    invoke-direct {v4, p0, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$a;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    goto :goto_0

    .line 260
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v3, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 261
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const-string v4, "webview is null when closing webview"

    invoke-interface {v3, v1, v4}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 264
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v4, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "close webview exception"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 266
    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 1393
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1394
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 1395
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 1404
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1405
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 1406
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 221
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 222
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->orientation(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 1385
    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/ViewGroup;)V

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    .line 1251
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onVisibilityChanged(Landroid/view/View;I)V

    if-nez p2, :cond_0

    .line 1252
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->O:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 1253
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->O:Z

    .line 1254
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setFocusableInTouchMode(Z)V

    .line 1255
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->requestFocus()Z

    .line 1256
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->requestFocusFromTouch()Z

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 2

    .line 1239
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onWindowFocusChanged(Z)V

    .line 1240
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 1242
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v1, "true"

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;Ljava/lang/String;)V

    goto :goto_0

    .line 1244
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v1, "false"

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 7

    .line 1263
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "open : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EndCard_MRAID"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1265
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1267
    new-instance v6, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$7;

    invoke-direct {v6, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$7;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Ljava/lang/String;)V

    .line 1282
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    .line 1283
    new-instance p1, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-direct {p1, v0, v1}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 1284
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 1285
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 3621
    sget-object v2, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 1287
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    :cond_0
    return-void

    .line 1292
    :cond_1
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1294
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public orientation(Landroid/content/res/Configuration;)V
    .locals 3

    .line 796
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 797
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_0

    :try_start_1
    const-string p1, "landscape"

    .line 798
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 800
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 802
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 803
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 805
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 9

    const-string v0, "wfr=1"

    const-string v1, "="

    .line 301
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->Q:Lcom/mbridge/msdk/video/js/factory/b;

    .line 303
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->a()Ljava/lang/String;

    move-result-object v3

    .line 304
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    const/4 v8, 0x0

    if-eqz v2, :cond_8

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_8

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 305
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    :try_start_0
    const-string v2, "start"

    .line 307
    invoke-virtual {p0, v2, v8}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 312
    :catch_0
    new-instance v2, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v2, v4}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;-><init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 313
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->setTitle(Ljava/lang/String;)V

    .line 314
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 315
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setCampaignId(Ljava/lang/String;)V

    const/16 v2, 0x8

    .line 316
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setCloseVisible(I)V

    .line 317
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setApiManagerJSFactory(Ljava/lang/Object;)V

    .line 318
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 319
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setMraidObject(Ljava/lang/Object;)V

    .line 321
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$3;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 413
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const-string v2, "MBridgeBaseView"

    if-eqz p1, :cond_6

    .line 2500
    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    .line 2501
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    .line 2502
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v4

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v4

    .line 2503
    iget-boolean v5, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->A:Z

    if-eqz v5, :cond_6

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_6

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    if-eqz v4, :cond_6

    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->o()I

    move-result v5

    if-lez v5, :cond_6

    :cond_1
    const-string v5, "\u9700\u8981\u4e0a\u62a5endcard\u52a0\u8f7d\u65f6\u95f4"

    .line 2504
    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2507
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v5, 0x14

    if-eqz v0, :cond_3

    const-string v0, "&"

    .line 2508
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 2509
    array-length v0, p1

    if-lez v0, :cond_4

    .line 2510
    array-length v0, p1

    move v4, v8

    :goto_0
    if-ge v4, v0, :cond_4

    aget-object v6, p1, v4

    .line 2511
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    const-string v7, "to"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_2

    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_2

    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    array-length v7, v7

    if-lez v7, :cond_2

    .line 2512
    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x1

    .line 2513
    aget-object p1, p1, v0

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Object;)I

    move-result p1

    .line 2514
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4eceurl\u83b7\u53d6\u7684waitingtime:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_3
    if-eqz v4, :cond_4

    .line 2519
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->o()I

    move-result p1

    if-lez p1, :cond_4

    .line 2520
    invoke-virtual {v4}, Lcom/mbridge/msdk/videocommon/d/c;->o()I

    move-result p1

    goto :goto_1

    :cond_4
    move p1, v5

    :goto_1
    if-ltz p1, :cond_5

    .line 2523
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->excuteEndCardShowTask(I)V

    .line 2524
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f00\u542fexcuteEndCardShowTask:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 2526
    :cond_5
    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->excuteEndCardShowTask(I)V

    const-string p1, "\u5f00\u542fexcuteEndCardShowTask: 20s def"

    .line 2527
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 2531
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 418
    :cond_6
    :goto_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object p1

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getHtmlContentFromUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 419
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setHtmlSource(Ljava/lang/String;)V

    .line 422
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->s:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_7

    .line 423
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "load url:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 424
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_3

    :cond_7
    const-string p1, "load html..."

    .line 426
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 427
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->s:Ljava/lang/String;

    const/4 v7, 0x0

    const-string v5, "text/html"

    const-string v6, "UTF-8"

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_8
    const/4 p1, 0x3

    const-string v0, "PL URL IS NULL"

    .line 432
    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->reportRenderResult(Ljava/lang/String;I)V

    .line 433
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x7f

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 434
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x81

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 436
    :goto_3
    iput-boolean v8, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    return-void
.end method

.method public readyStatus(I)V
    .locals 0

    return-void
.end method

.method public release()V
    .locals 2

    .line 1165
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1166
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 1167
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    .line 1169
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->w:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 1170
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    .line 1171
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->w:Landroid/os/Handler;

    .line 1174
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->o:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->removeAllViews()V

    .line 1175
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->release()V

    .line 1176
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-void
.end method

.method public reportRenderResult(Ljava/lang/String;I)V
    .locals 5

    .line 440
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_5

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    if-nez v0, :cond_5

    .line 441
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 442
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 443
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 444
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 445
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->d(I)V

    .line 446
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->G:J

    sub-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->q(Ljava/lang/String;)V

    .line 447
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->p(Ljava/lang/String;)V

    .line 448
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 p2, 0x11f

    const-string v1, "2"

    const-string v2, "1"

    if-ne p1, p2, :cond_0

    const-string p1, "3"

    .line 449
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 450
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 p2, 0x5e

    if-ne p1, p2, :cond_1

    .line 451
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    goto :goto_0

    .line 452
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result p1

    const/16 p2, 0x2a

    if-ne p1, p2, :cond_2

    .line 453
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 456
    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 457
    sget p1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    goto :goto_1

    .line 459
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->f(Ljava/lang/String;)V

    .line 461
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    const-string p2, ".zip"

    invoke-virtual {p1, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    move-object v1, v2

    .line 464
    :cond_4
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/p;->g(Ljava/lang/String;)V

    .line 465
    sget p1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 467
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method public setCloseDelayShowTime(I)V
    .locals 0

    .line 822
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    return-void
.end method

.method public setCloseVisible(I)V
    .locals 1

    .line 834
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    if-eqz v0, :cond_0

    .line 835
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method public setCloseVisibleForMraid(I)V
    .locals 2

    .line 840
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->f:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 841
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->N:Z

    const/4 v0, 0x4

    if-ne p1, v0, :cond_0

    .line 844
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    new-instance v0, Landroid/graphics/drawable/ColorDrawable;

    const/high16 v1, 0xff0000

    invoke-direct {v0, v1}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 846
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    const-string v0, "mbridge_reward_close"

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->findDrawable(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 848
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public setError(Z)V
    .locals 0

    .line 296
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->u:Z

    return-void
.end method

.method public setHtmlSource(Ljava/lang/String;)V
    .locals 0

    .line 830
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->s:Ljava/lang/String;

    return-void
.end method

.method public setLoadPlayable(Z)V
    .locals 0

    .line 1161
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    return-void
.end method

.method public setNotchValue(Ljava/lang/String;IIII)V
    .locals 5

    .line 1372
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    .line 1373
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->P:Ljava/lang/String;

    .line 1374
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "NOTCH H5ENDCARD "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x4

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    const/4 v3, 0x1

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v2, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const/4 v1, 0x3

    invoke-static {p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v2, v1

    const-string v1, "%1s-%2s-%3s-%4s"

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1375
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 1376
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41a00000    # 20.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    add-int/2addr p2, v2

    add-int/2addr p4, v2

    add-int/2addr p3, v2

    add-int/2addr p5, v2

    .line 1377
    invoke-virtual {p1, p2, p4, p3, p5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    .line 1378
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1379
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public setPlayCloseBtnTm(I)V
    .locals 0

    .line 826
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->C:I

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 818
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->v:Ljava/lang/String;

    return-void
.end method

.method public startCounterEndCardShowTimer()V
    .locals 8

    const-string v0, "MBridgeBaseView"

    const-string v1, "="

    .line 473
    :try_start_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0xf

    .line 475
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string v4, "wfl=1"

    invoke-virtual {v2, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string v4, "&"

    .line 476
    invoke-virtual {v2, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 477
    array-length v4, v2

    if-lez v4, :cond_1

    .line 478
    array-length v4, v2

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v4, :cond_1

    aget-object v6, v2, v5

    .line 479
    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_0

    const-string v7, "timeout"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    if-eqz v7, :cond_0

    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    array-length v7, v7

    if-lez v7, :cond_0

    .line 480
    invoke-virtual {v6, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    const/4 v6, 0x1

    .line 481
    aget-object v3, v3, v6

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Object;)I

    move-result v3

    .line 482
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u4eceurl\u83b7\u53d6\u7684wfl timeout :"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 486
    :cond_1
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->executeEndCardShow(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 489
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public toggleCloseBtn(I)V
    .locals 4

    .line 559
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->p:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getVisibility()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq p1, v2, :cond_6

    const/4 v3, 0x2

    if-eq p1, v3, :cond_0

    goto :goto_0

    .line 566
    :cond_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    const/16 v0, 0x8

    .line 568
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->x:Z

    const/4 v3, -0x1

    if-eqz p1, :cond_3

    .line 2628
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->S:Z

    if-nez p1, :cond_7

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    if-eqz p1, :cond_1

    goto :goto_0

    .line 2631
    :cond_1
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->S:Z

    .line 2632
    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->C:I

    if-nez p1, :cond_2

    .line 2633
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    goto :goto_0

    .line 2636
    :cond_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->M:Z

    if-le p1, v3, :cond_7

    .line 2638
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$e;

    invoke-direct {v1, p0, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$e;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->C:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {p1, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 3581
    :cond_3
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->R:Z

    if-nez p1, :cond_7

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->J:Z

    if-eqz p1, :cond_4

    goto :goto_0

    .line 3584
    :cond_4
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->R:Z

    .line 3585
    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    if-nez p1, :cond_5

    .line 3586
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    goto :goto_0

    .line 3589
    :cond_5
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->L:Z

    if-le p1, v3, :cond_7

    .line 3591
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->r:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$d;

    invoke-direct {v1, p0, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$d;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->B:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {p1, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_0

    .line 563
    :cond_6
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->I:Z

    move v0, v1

    .line 575
    :cond_7
    :goto_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setCloseVisible(I)V

    return-void
.end method

.method public unload()V
    .locals 2

    const-string v0, "EndCard_MRAID"

    const-string v1, "unload"

    .line 1348
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1349
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 2

    .line 1359
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "useCustomClose : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EndCard_MRAID"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 1361
    :goto_0
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->setCloseVisibleForMraid(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1363
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public volumeChange(D)V
    .locals 2

    .line 1234
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;D)V

    return-void
.end method

.method public webviewshow()V
    .locals 2

    .line 668
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;->q:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 671
    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$4;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView$4;-><init>(Lcom/mbridge/msdk/video/module/MBridgeH5EndCardView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
