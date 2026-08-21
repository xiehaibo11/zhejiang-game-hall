.class final Lcom/tkay/interstitial/a/a$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/interstitial/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/interstitial/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/a;)V
    .locals 0

    .line 336
    iput-object p1, p0, Lcom/tkay/interstitial/a/a$4;->a:Lcom/tkay/interstitial/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 338
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$4;->a:Lcom/tkay/interstitial/a/a;

    invoke-virtual {v0}, Lcom/tkay/interstitial/a/a;->j()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 341
    :cond_0
    iget-object v1, p0, Lcom/tkay/interstitial/a/a$4;->a:Lcom/tkay/interstitial/a/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x4

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    return-void
.end method
