.class final Lcom/tkay/interstitial/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/a;->a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/a;

.field final synthetic b:Landroid/app/Activity;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/util/Map;

.field final synthetic e:I

.field final synthetic f:Lcom/tkay/core/api/TYEventInterface;

.field final synthetic g:Lcom/tkay/interstitial/api/TYInterstitialListener;

.field final synthetic h:Lcom/tkay/interstitial/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/a;Lcom/tkay/core/common/f/a;Landroid/app/Activity;Ljava/lang/String;Ljava/util/Map;ILcom/tkay/core/api/TYEventInterface;Lcom/tkay/interstitial/api/TYInterstitialListener;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    iput-object p2, p0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    iput-object p3, p0, Lcom/tkay/interstitial/a/a$1;->b:Landroid/app/Activity;

    iput-object p4, p0, Lcom/tkay/interstitial/a/a$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/interstitial/a/a$1;->d:Ljava/util/Map;

    iput p6, p0, Lcom/tkay/interstitial/a/a$1;->e:I

    iput-object p7, p0, Lcom/tkay/interstitial/a/a$1;->f:Lcom/tkay/core/api/TYEventInterface;

    iput-object p8, p0, Lcom/tkay/interstitial/a/a$1;->g:Lcom/tkay/interstitial/api/TYInterstitialListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 129
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    check-cast v0, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    .line 130
    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1;->b:Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 131
    invoke-virtual {v0, v1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;->refreshActivityContext(Landroid/app/Activity;)V

    .line 134
    :cond_0
    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 136
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-eqz v1, :cond_1

    .line 139
    iget-object v2, p0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v2}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/interstitial/a/a;)Ljava/lang/String;

    move-result-object v2

    .line 1578
    iput-object v2, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    .line 140
    iget-object v2, p0, Lcom/tkay/interstitial/a/a$1;->c:Ljava/lang/String;

    .line 2406
    iput-object v2, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 141
    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v6, v7}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 144
    iget-object v2, p0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v2}, Lcom/tkay/interstitial/a/a;->b(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/tkay/core/common/l/s;->a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V

    .line 146
    iget-object v2, p0, Lcom/tkay/interstitial/a/a$1;->d:Ljava/util/Map;

    invoke-static {v2, v1}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 150
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v3}, Lcom/tkay/interstitial/a/a;->c(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V

    .line 153
    iget-object v2, p0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    invoke-static {v2}, Lcom/tkay/interstitial/a/a;->d(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    const/16 v3, 0xd

    iget-object v4, p0, Lcom/tkay/interstitial/a/a$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v5

    move-object v4, v1

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V

    .line 156
    iget v2, p0, Lcom/tkay/interstitial/a/a$1;->e:I

    if-lez v2, :cond_2

    .line 157
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    new-instance v3, Lcom/tkay/interstitial/a/a$1$1;

    invoke-direct {v3, p0}, Lcom/tkay/interstitial/a/a$1$1;-><init>(Lcom/tkay/interstitial/a/a$1;)V

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 166
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    new-instance v3, Lcom/tkay/interstitial/a/a$1$2;

    invoke-direct {v3, p0, v0, v1}, Lcom/tkay/interstitial/a/a$1$2;-><init>(Lcom/tkay/interstitial/a/a$1;Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;Lcom/tkay/core/common/f/d;)V

    iget v0, p0, Lcom/tkay/interstitial/a/a$1;->e:I

    int-to-long v0, v0

    invoke-virtual {v2, v3, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method
