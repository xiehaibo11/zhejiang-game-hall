.class public final Lcom/tkay/splashad/a/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/splashad/unitgroup/api/CustomSplashEventListener;


# instance fields
.field a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

.field b:Lcom/tkay/splashad/a/a;

.field c:J

.field private d:Ljava/util/Timer;

.field private e:Z

.field private f:I


# direct methods
.method public constructor <init>(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/splashad/a/a;)V
    .locals 1

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 46
    iput-boolean v0, p0, Lcom/tkay/splashad/a/f;->e:Z

    .line 47
    iput v0, p0, Lcom/tkay/splashad/a/f;->f:I

    .line 50
    iput-object p1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    .line 51
    iput-object p2, p0, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    return-void
.end method

.method private a()V
    .locals 1

    .line 243
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 244
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    const/4 v0, 0x0

    .line 245
    iput-object v0, p0, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V
    .locals 17

    move-object/from16 v9, p0

    .line 198
    iget-object v0, v9, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    if-nez v0, :cond_0

    .line 199
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getCallbackInterval()J

    move-result-wide v10

    .line 200
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getCountDownDuration()J

    move-result-wide v12

    .line 201
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getContainer()Landroid/view/ViewGroup;

    move-result-object v2

    .line 202
    new-instance v3, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v3}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    .line 204
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getTYSplashSkipAdListener()Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    move-result-object v14

    .line 205
    iput-wide v12, v9, Lcom/tkay/splashad/a/f;->c:J

    .line 207
    new-instance v15, Ljava/util/Timer;

    invoke-direct {v15}, Ljava/util/Timer;-><init>()V

    iput-object v15, v9, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    .line 208
    new-instance v16, Lcom/tkay/splashad/a/f$1;

    move-object/from16 v0, v16

    move-object/from16 v1, p0

    move-object v4, v14

    move-wide v5, v12

    move-wide v7, v10

    invoke-direct/range {v0 .. v8}, Lcom/tkay/splashad/a/f$1;-><init>(Lcom/tkay/splashad/a/f;Landroid/view/ViewGroup;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V

    move-object v1, v15

    move-object/from16 v2, v16

    move-wide v3, v10

    move-wide v5, v10

    invoke-virtual/range {v1 .. v6}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 230
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    new-instance v8, Lcom/tkay/splashad/a/f$2;

    move-object v0, v8

    move-object/from16 v1, p0

    move-object v2, v14

    move-wide v3, v12

    invoke-direct/range {v0 .. v6}, Lcom/tkay/splashad/a/f$2;-><init>(Lcom/tkay/splashad/a/f;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V

    invoke-virtual {v7, v8}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;)V
    .locals 3

    .line 256
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 259
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 261
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/tkay/core/common/v;->d(Ljava/lang/String;)V

    .line 262
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p0}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/splashad/a/c;

    move-result-object v1

    .line 263
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p0, v0}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/tkay/splashad/a/c;->d(Ljava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method final a(I)V
    .locals 0

    .line 250
    iput p1, p0, Lcom/tkay/splashad/a/f;->f:I

    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 3

    .line 163
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    if-eqz v0, :cond_0

    .line 164
    iget-object v1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/splashad/a/a;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    .line 166
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_2

    .line 167
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz p1, :cond_1

    .line 168
    sget-object p1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    .line 169
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->i:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v0, v1, p1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 175
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    if-eqz v0, :cond_0

    .line 176
    iget-object v1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-virtual {v0, p1, v1, p2}, Lcom/tkay/splashad/a/a;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    .line 178
    :cond_0
    iget-object p1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz p1, :cond_1

    .line 179
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p1

    .line 180
    sget-object p2, Lcom/tkay/core/common/b/f$i;->j:Ljava/lang/String;

    sget-object v0, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onSplashAdClicked()V
    .locals 4

    .line 84
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_0

    .line 85
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 87
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x6

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 89
    sget-object v1, Lcom/tkay/core/common/b/f$i;->d:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    if-eqz v0, :cond_1

    .line 94
    iget-object v1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/splashad/a/a;->onAdClick(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onSplashAdDismiss()V
    .locals 8

    .line 100
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 104
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_9

    .line 105
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 108
    iget v1, p0, Lcom/tkay/splashad/a/f;->f:I

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    .line 110
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->y(I)V

    goto :goto_0

    .line 112
    :cond_1
    iget-object v1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getDismissType()I

    move-result v1

    if-nez v1, :cond_2

    move v1, v2

    .line 116
    :cond_2
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->y(I)V

    :goto_0
    const/4 v3, 0x0

    .line 119
    invoke-static {v0, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Z)V

    .line 122
    iget-object v3, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v3}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getSplashSkipInfo()Lcom/tkay/splashad/api/TYSplashSkipInfo;

    move-result-object v3

    const/4 v4, 0x0

    if-eqz v3, :cond_4

    .line 123
    invoke-virtual {v3}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->canUseCustomSkipView()Z

    move-result v5

    if-eqz v5, :cond_4

    .line 124
    iget-object v5, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v5}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->startSplashCustomSkipViewClickEye()V

    .line 1243
    iget-object v5, p0, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    if-eqz v5, :cond_3

    .line 1244
    invoke-virtual {v5}, Ljava/util/Timer;->cancel()V

    .line 1245
    iput-object v4, p0, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    .line 129
    :cond_3
    invoke-virtual {v3}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->destroy()V

    .line 130
    iget-object v3, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v3, v4}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->setSplashSkipInfo(Lcom/tkay/splashad/api/TYSplashSkipInfo;)V

    .line 133
    :cond_4
    sget-object v3, Lcom/tkay/core/common/b/f$i;->e:Ljava/lang/String;

    sget-object v5, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v6, ""

    invoke-static {v0, v3, v5, v6}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 135
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v3

    .line 1256
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 1259
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v5

    invoke-virtual {v5, v3}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v5

    if-eqz v5, :cond_5

    .line 1261
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v6

    invoke-virtual {v6, v3}, Lcom/tkay/core/common/v;->d(Ljava/lang/String;)V

    .line 1262
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v3}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/splashad/a/c;

    move-result-object v6

    .line 1263
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v7

    invoke-virtual {v5}, Lcom/tkay/core/common/f/c;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v3, v5}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v6, v3}, Lcom/tkay/splashad/a/c;->d(Ljava/lang/String;)V

    .line 138
    :cond_5
    iget-object v3, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    instance-of v5, v3, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v5, :cond_6

    .line 139
    invoke-virtual {v3}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getSplashEyeAd()Lcom/tkay/splashad/api/ITYSplashEyeAd;

    move-result-object v4

    .line 142
    :cond_6
    iget-object v3, p0, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    if-eqz v3, :cond_7

    iget-boolean v5, p0, Lcom/tkay/splashad/a/f;->e:Z

    if-nez v5, :cond_7

    .line 143
    iput-boolean v2, p0, Lcom/tkay/splashad/a/f;->e:Z

    .line 144
    iget-object v2, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    new-instance v2, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;

    invoke-direct {v2, v1, v4}, Lcom/tkay/splashad/api/TYSplashAdExtraInfo;-><init>(ILcom/tkay/splashad/api/ITYSplashEyeAd;)V

    invoke-virtual {v3, v0, v2}, Lcom/tkay/splashad/a/a;->onCallbackAdDismiss(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/splashad/api/TYSplashAdExtraInfo;)V

    :cond_7
    if-nez v4, :cond_9

    .line 148
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_8

    .line 149
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->cleanImpressionListener()V

    .line 152
    :cond_8
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_9

    .line 153
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->destory()V

    :cond_9
    return-void
.end method

.method public final onSplashAdShow()V
    .locals 19

    move-object/from16 v9, p0

    .line 56
    iget-object v0, v9, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v10

    .line 57
    iget-object v0, v9, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_1

    .line 58
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v11

    .line 60
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/4 v1, 0x4

    iget-object v2, v9, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v2}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-virtual {v0, v1, v11, v2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 62
    sget-object v0, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v11, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    iget-object v0, v9, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getSplashSkipInfo()Lcom/tkay/splashad/api/TYSplashSkipInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 66
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->canUseCustomSkipView()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, v9, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->isSupportCustomSkipView()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1198
    iget-object v1, v9, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    if-nez v1, :cond_0

    .line 1199
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getCallbackInterval()J

    move-result-wide v12

    .line 1200
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getCountDownDuration()J

    move-result-wide v14

    .line 1201
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getContainer()Landroid/view/ViewGroup;

    move-result-object v2

    .line 1202
    new-instance v3, Lcom/tkay/core/common/l/a/f$b;

    invoke-direct {v3}, Lcom/tkay/core/common/l/a/f$b;-><init>()V

    .line 1204
    invoke-virtual {v0}, Lcom/tkay/splashad/api/TYSplashSkipInfo;->getTYSplashSkipAdListener()Lcom/tkay/splashad/api/TYSplashSkipAdListener;

    move-result-object v16

    .line 1205
    iput-wide v14, v9, Lcom/tkay/splashad/a/f;->c:J

    .line 1207
    new-instance v7, Ljava/util/Timer;

    invoke-direct {v7}, Ljava/util/Timer;-><init>()V

    iput-object v7, v9, Lcom/tkay/splashad/a/f;->d:Ljava/util/Timer;

    .line 1208
    new-instance v17, Lcom/tkay/splashad/a/f$1;

    move-object/from16 v0, v17

    move-object/from16 v1, p0

    move-object/from16 v4, v16

    move-wide v5, v14

    move-object/from16 v18, v7

    move-wide v7, v12

    invoke-direct/range {v0 .. v8}, Lcom/tkay/splashad/a/f$1;-><init>(Lcom/tkay/splashad/a/f;Landroid/view/ViewGroup;Lcom/tkay/core/common/l/a/f$b;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V

    move-object/from16 v2, v18

    move-object/from16 v3, v17

    move-wide v4, v12

    move-wide v6, v12

    invoke-virtual/range {v2 .. v7}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;JJ)V

    .line 1230
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    new-instance v8, Lcom/tkay/splashad/a/f$2;

    move-object v0, v8

    move-object/from16 v2, v16

    move-wide v3, v14

    move-wide v5, v12

    invoke-direct/range {v0 .. v6}, Lcom/tkay/splashad/a/f$2;-><init>(Lcom/tkay/splashad/a/f;Lcom/tkay/splashad/api/TYSplashSkipAdListener;JJ)V

    invoke-virtual {v7, v8}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_0
    if-eqz v11, :cond_1

    .line 71
    invoke-virtual {v11}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    .line 72
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, v0, v10}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Lcom/tkay/core/api/TYAdInfo;)V

    .line 76
    :cond_1
    iget-object v0, v9, Lcom/tkay/splashad/a/f;->b:Lcom/tkay/splashad/a/a;

    if-eqz v0, :cond_2

    .line 77
    invoke-virtual {v0, v10}, Lcom/tkay/splashad/a/a;->onAdShow(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_2
    return-void
.end method

.method public final onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 186
    iget-object v0, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_1

    .line 187
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 188
    iget-object v1, p0, Lcom/tkay/splashad/a/f;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-virtual {v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;Ljava/util/Map;)V

    if-eqz p1, :cond_0

    .line 190
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 191
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->k:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-static {v0, v1, v2, p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
