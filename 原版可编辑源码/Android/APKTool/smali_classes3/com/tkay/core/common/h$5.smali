.class final Lcom/tkay/core/common/h$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/m/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/f/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 908
    iput-object p1, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 1

    .line 925
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 912
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 914
    sget-object v0, Lcom/tkay/core/common/b/f$i;->a:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 1

    .line 935
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-static {v0, p1, p2, p3}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method public final varargs a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V
    .locals 4

    .line 940
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    iget-object v1, v1, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->o(Ljava/lang/String;)Lcom/tkay/core/api/ITYAdFilter;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz p3, :cond_0

    .line 942
    array-length v2, p3

    if-lez v2, :cond_0

    const/4 v2, 0x0

    .line 943
    aget-object v2, p3, v2

    goto :goto_0

    :cond_0
    move-object v2, v1

    :goto_0
    if-eqz v0, :cond_1

    .line 945
    invoke-static {p2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v3

    invoke-interface {v0, v3, v2}, Lcom/tkay/core/api/ITYAdFilter;->isAdFilter(Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/IATThirdPartyMaterial;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 946
    new-instance p3, Lcom/tkay/core/common/m/a;

    invoke-direct {p3}, Lcom/tkay/core/common/m/a;-><init>()V

    const/16 v0, 0x8

    .line 947
    iput v0, p3, Lcom/tkay/core/common/m/a;->a:I

    .line 948
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->K()J

    move-result-wide v0

    iput-wide v0, p3, Lcom/tkay/core/common/m/a;->c:J

    const-string v0, ""

    const-string v1, "4008"

    .line 949
    invoke-static {v1, v0, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    iput-object v0, p3, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 950
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    iput-object v0, p3, Lcom/tkay/core/common/m/a;->d:Lcom/tkay/core/common/f/d;

    .line 951
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object p2

    iput-object p2, p3, Lcom/tkay/core/common/m/a;->e:Lcom/tkay/core/common/f/aj;

    .line 953
    iget-object p2, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-virtual {p2, p1, p3}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V

    return-void

    .line 955
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    if-eqz p3, :cond_2

    invoke-static {p3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    :cond_2
    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V
    .locals 1

    .line 961
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 930
    iget-object p2, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-static {p2, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Ljava/lang/String;)V

    return-void
.end method

.method public final b(Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 920
    iget-object v0, p0, Lcom/tkay/core/common/h$5;->a:Lcom/tkay/core/common/h;

    invoke-static {v0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/d;)V

    return-void
.end method
