.class final Lcom/tkay/splashad/a/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/c;->a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/a;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;Ljava/util/Map;)V
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

.field final synthetic e:Lcom/tkay/core/api/TYEventInterface;

.field final synthetic f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

.field final synthetic g:Landroid/view/ViewGroup;

.field final synthetic h:Lcom/tkay/splashad/a/a;

.field final synthetic i:Lcom/tkay/splashad/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/c;Lcom/tkay/core/common/f/a;Landroid/app/Activity;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/splashad/api/TYSplashSkipInfo;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/a;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    iput-object p2, p0, Lcom/tkay/splashad/a/c$1;->a:Lcom/tkay/core/common/f/a;

    iput-object p3, p0, Lcom/tkay/splashad/a/c$1;->b:Landroid/app/Activity;

    iput-object p4, p0, Lcom/tkay/splashad/a/c$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/splashad/a/c$1;->d:Ljava/util/Map;

    iput-object p6, p0, Lcom/tkay/splashad/a/c$1;->e:Lcom/tkay/core/api/TYEventInterface;

    iput-object p7, p0, Lcom/tkay/splashad/a/c$1;->f:Lcom/tkay/splashad/api/TYSplashSkipInfo;

    iput-object p8, p0, Lcom/tkay/splashad/a/c$1;->g:Landroid/view/ViewGroup;

    iput-object p9, p0, Lcom/tkay/splashad/a/c$1;->h:Lcom/tkay/splashad/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    .line 156
    iget-object v0, p0, Lcom/tkay/splashad/a/c$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    check-cast v0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    .line 157
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1;->b:Landroid/app/Activity;

    if-eqz v1, :cond_0

    .line 158
    invoke-virtual {v0, v1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->refreshActivityContext(Landroid/app/Activity;)V

    .line 161
    :cond_0
    iget-object v1, p0, Lcom/tkay/splashad/a/c$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 163
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    if-eqz v1, :cond_1

    .line 166
    iget-object v2, p0, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    invoke-static {v2}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/splashad/a/c;)Ljava/lang/String;

    move-result-object v2

    .line 1578
    iput-object v2, v1, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    .line 168
    iget-object v2, p0, Lcom/tkay/splashad/a/c$1;->c:Ljava/lang/String;

    .line 2406
    iput-object v2, v1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 169
    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v6, v7}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 172
    iget-object v2, p0, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    invoke-static {v2}, Lcom/tkay/splashad/a/c;->b(Lcom/tkay/splashad/a/c;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/tkay/core/common/l/s;->a(Landroid/content/Context;Lcom/tkay/core/common/f/d;)V

    .line 174
    iget-object v2, p0, Lcom/tkay/splashad/a/c$1;->d:Ljava/util/Map;

    invoke-static {v2, v1}, Lcom/tkay/core/common/l/s;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 188
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    invoke-static {v3}, Lcom/tkay/splashad/a/c;->c(Lcom/tkay/splashad/a/c;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/splashad/a/c$1;->a:Lcom/tkay/core/common/f/a;

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V

    .line 192
    iget-object v2, p0, Lcom/tkay/splashad/a/c$1;->i:Lcom/tkay/splashad/a/c;

    invoke-static {v2}, Lcom/tkay/splashad/a/c;->d(Lcom/tkay/splashad/a/c;)Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v2

    const/16 v3, 0xd

    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v5

    move-object v4, v1

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V

    .line 193
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    new-instance v3, Lcom/tkay/splashad/a/c$1$1;

    invoke-direct {v3, p0, v0, v1}, Lcom/tkay/splashad/a/c$1$1;-><init>(Lcom/tkay/splashad/a/c$1;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/common/f/d;)V

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
