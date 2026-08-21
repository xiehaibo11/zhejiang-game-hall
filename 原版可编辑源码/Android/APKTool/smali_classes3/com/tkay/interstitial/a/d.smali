.class public final Lcom/tkay/interstitial/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;


# instance fields
.field a:Lcom/tkay/interstitial/api/TYInterstitialListener;

.field b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

.field c:J

.field d:J

.field e:I

.field f:Z


# direct methods
.method public constructor <init>(Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;Lcom/tkay/interstitial/api/TYInterstitialListener;)V
    .locals 1

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 41
    iput v0, p0, Lcom/tkay/interstitial/a/d;->e:I

    .line 46
    iput-object p2, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    .line 47
    iput-object p1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    const/4 p1, 0x1

    .line 49
    iput-boolean p1, p0, Lcom/tkay/interstitial/a/d;->f:Z

    return-void
.end method

.method private static a(Ljava/lang/String;)V
    .locals 3

    .line 242
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 245
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 247
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/tkay/core/common/v;->d(Ljava/lang/String;)V

    .line 248
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p0}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v1

    .line 249
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p0, v0}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/tkay/interstitial/a/a;->d(Ljava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final onDeeplinkCallback(Z)V
    .locals 3

    .line 219
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    if-eqz v1, :cond_0

    .line 220
    check-cast v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Lcom/tkay/interstitial/api/TYInterstitialExListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    .line 222
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_2

    .line 223
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz p1, :cond_1

    .line 224
    sget-object p1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    .line 225
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->i:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v0, v1, p1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 231
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    if-eqz v1, :cond_0

    .line 232
    check-cast v0, Lcom/tkay/interstitial/api/TYInterstitialExListener;

    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, p1, v1, p2}, Lcom/tkay/interstitial/api/TYInterstitialExListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    .line 234
    :cond_0
    iget-object p1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz p1, :cond_1

    .line 235
    invoke-virtual {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p1

    .line 236
    sget-object p2, Lcom/tkay/core/common/b/f$i;->j:Ljava/lang/String;

    sget-object v0, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onInterstitialAdClicked()V
    .locals 4

    .line 167
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_0

    .line 168
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 169
    sget-object v1, Lcom/tkay/core/common/b/f$i;->d:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x6

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 173
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_1

    .line 174
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdClicked(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onInterstitialAdClose()V
    .locals 11

    .line 124
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_4

    .line 125
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 127
    iget v1, p0, Lcom/tkay/interstitial/a/d;->e:I

    if-nez v1, :cond_0

    .line 129
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getDismissType()I

    move-result v1

    :cond_0
    if-nez v1, :cond_1

    const/4 v1, 0x1

    .line 135
    :cond_1
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->y(I)V

    .line 137
    sget-object v1, Lcom/tkay/core/common/b/f$i;->e:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 139
    iget-wide v3, p0, Lcom/tkay/interstitial/a/d;->c:J

    const-wide/16 v1, 0x0

    cmp-long v1, v3, v1

    if-eqz v1, :cond_2

    const/4 v2, 0x0

    .line 140
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v7

    iget-wide v9, p0, Lcom/tkay/interstitial/a/d;->d:J

    sub-long/2addr v7, v9

    move-object v1, v0

    invoke-static/range {v1 .. v8}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZJJJ)V

    :cond_2
    const/4 v1, 0x0

    .line 143
    invoke-static {v0, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Z)V

    .line 146
    :try_start_0
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->clearImpressionListener()V

    .line 147
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->destory()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 152
    :catchall_0
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v1, :cond_3

    .line 153
    iget-object v2, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdClose(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_3
    if-eqz v0, :cond_4

    .line 157
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/interstitial/a/d;->a(Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method public final onInterstitialAdShow()V
    .locals 11

    .line 181
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/interstitial/a/d;->c:J

    .line 182
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/interstitial/a/d;->d:J

    .line 183
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    .line 184
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v1, :cond_2

    .line 185
    invoke-virtual {v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 187
    iget-object v2, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v2}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getILRD()Ljava/lang/String;

    move-result-object v2

    .line 188
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 189
    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->a(Ljava/lang/String;)V

    .line 192
    :cond_0
    sget-object v2, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v1, v2, v3, v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 194
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    const/4 v3, 0x4

    iget-object v5, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v5}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v5

    invoke-virtual {v2, v3, v1, v5}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    if-eqz v1, :cond_1

    .line 198
    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v4

    .line 199
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, v4, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Lcom/tkay/core/api/TYAdInfo;)V

    .line 205
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 206
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v4}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v5

    const/4 v1, 0x0

    .line 207
    invoke-virtual {v5, v1}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 208
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v6

    const/4 v7, 0x6

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual/range {v5 .. v10}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    .line 212
    :cond_2
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v1, :cond_3

    .line 213
    invoke-interface {v1, v0}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_3
    return-void
.end method

.method public final onInterstitialAdVideoEnd()V
    .locals 4

    .line 68
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_2

    .line 70
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getDismissType()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x3

    .line 71
    iput v0, p0, Lcom/tkay/interstitial/a/d;->e:I

    .line 74
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 75
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0x9

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 76
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v1, :cond_1

    .line 77
    iget-object v2, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V

    .line 80
    :cond_1
    sget-object v1, Lcom/tkay/core/common/b/f$i;->f:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    const/16 v0, 0x63

    .line 86
    iput v0, p0, Lcom/tkay/interstitial/a/d;->e:I

    const-string v0, "4006"

    .line 88
    invoke-static {v0, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 89
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_3

    .line 90
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 92
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v1

    const/16 v2, 0x42

    if-ne v1, v2, :cond_0

    const/4 v1, 0x0

    .line 95
    iput-boolean v1, p0, Lcom/tkay/interstitial/a/d;->f:Z

    .line 98
    :cond_0
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v1

    invoke-static {v0, p1, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;Ljava/util/Map;)V

    if-eqz v0, :cond_1

    .line 101
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    .line 102
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/interstitial/a/d;->a(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v1, ""

    .line 108
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 109
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;

    move-result-object v3

    const/4 v1, 0x0

    .line 110
    invoke-virtual {v3, v1}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 111
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v4

    const/4 v5, 0x7

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    .line 115
    :cond_2
    sget-object v1, Lcom/tkay/core/common/b/f$i;->g:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-static {v0, v1, v2, p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 117
    :cond_3
    iget-object p2, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz p2, :cond_4

    .line 118
    invoke-interface {p2, p1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V

    :cond_4
    return-void
.end method

.method public final onInterstitialAdVideoStart()V
    .locals 3

    .line 54
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_0

    .line 55
    invoke-virtual {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 57
    iget-boolean v1, p0, Lcom/tkay/interstitial/a/d;->f:Z

    if-eqz v1, :cond_0

    .line 58
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0x8

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 59
    iget-object v0, p0, Lcom/tkay/interstitial/a/d;->a:Lcom/tkay/interstitial/api/TYInterstitialListener;

    if-eqz v0, :cond_0

    .line 60
    iget-object v1, p0, Lcom/tkay/interstitial/a/d;->b:Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialListener;->onInterstitialAdVideoStart(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_0
    return-void
.end method
