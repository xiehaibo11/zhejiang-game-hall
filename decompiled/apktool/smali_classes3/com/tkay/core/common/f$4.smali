.class final Lcom/tkay/core/common/f$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/lang/String;D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field final synthetic b:D

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;Lcom/tkay/core/api/TYBaseAdAdapter;DLjava/lang/String;)V
    .locals 0

    .line 1364
    iput-object p1, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iput-object p2, p0, Lcom/tkay/core/common/f$4;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-wide p3, p0, Lcom/tkay/core/common/f$4;->b:D

    iput-object p5, p0, Lcom/tkay/core/common/f$4;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 1367
    iget-object v0, p0, Lcom/tkay/core/common/f$4;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 1368
    iget-object v1, p0, Lcom/tkay/core/common/f$4;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v1

    if-eqz v0, :cond_6

    if-nez v1, :cond_0

    goto :goto_0

    .line 1374
    :cond_0
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v2

    if-eqz v2, :cond_1

    return-void

    .line 1379
    :cond_1
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v2

    const-string v3, "2"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v2

    const-string v3, "4"

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_0

    .line 1384
    :cond_2
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-wide v2, v2, Lcom/tkay/core/common/f;->k:D

    iget-wide v4, p0, Lcom/tkay/core/common/f$4;->b:D

    cmpl-double v2, v2, v4

    if-lez v2, :cond_3

    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-object v2, v2, Lcom/tkay/core/common/f;->l:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/f$4;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    return-void

    .line 1388
    :cond_3
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v2

    const/16 v3, 0x23

    if-ne v2, v3, :cond_4

    return-void

    .line 1392
    :cond_4
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-wide v3, p0, Lcom/tkay/core/common/f$4;->b:D

    iput-wide v3, v2, Lcom/tkay/core/common/f;->k:D

    .line 1393
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-object v3, p0, Lcom/tkay/core/common/f$4;->c:Ljava/lang/String;

    iput-object v3, v2, Lcom/tkay/core/common/f;->l:Ljava/lang/String;

    .line 1395
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-object v2, v2, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    if-eqz v2, :cond_5

    .line 1396
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    iget-object v2, v2, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    invoke-virtual {v2}, Lcom/tkay/core/common/g;->cancel()V

    .line 1397
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    const/4 v3, 0x0

    iput-object v3, v2, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    .line 1400
    :cond_5
    iget-object v2, p0, Lcom/tkay/core/common/f$4;->d:Lcom/tkay/core/common/f;

    invoke-static {v2, v1, v0}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V

    :cond_6
    :goto_0
    return-void
.end method
