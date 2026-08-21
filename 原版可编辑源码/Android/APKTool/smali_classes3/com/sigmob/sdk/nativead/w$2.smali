.class Lcom/sigmob/sdk/nativead/w$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/ViewGroup;Lcom/sigmob/windad/natives/WindNativeAdData$NativeADMediaListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/ViewGroup;

.field final synthetic b:Lcom/sigmob/sdk/nativead/n;

.field final synthetic c:Lcom/sigmob/sdk/nativead/w;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/w;Landroid/view/ViewGroup;Lcom/sigmob/sdk/nativead/n;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w$2;->c:Lcom/sigmob/sdk/nativead/w;

    iput-object p2, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    iput-object p3, p0, Lcom/sigmob/sdk/nativead/w$2;->b:Lcom/sigmob/sdk/nativead/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getHeight()I

    move-result v1

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/w$2;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v2}, Lcom/sigmob/sdk/nativead/w;->p()I

    move-result v2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v3

    iget v4, v3, Landroid/util/DisplayMetrics;->widthPixels:I

    iget v3, v3, Landroid/util/DisplayMetrics;->heightPixels:I

    invoke-static {v4, v3}, Ljava/lang/Math;->max(II)I

    move-result v3

    div-int/lit8 v3, v3, 0x2

    iget-object v4, p0, Lcom/sigmob/sdk/nativead/w$2;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {v4}, Lcom/sigmob/sdk/nativead/w;->u()I

    move-result v4

    invoke-static {}, Lcom/sigmob/sdk/nativead/w;->G()Ljava/util/Map;

    move-result-object v5

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {v6}, Ljava/lang/Object;->hashCode()I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v5, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    if-eqz v5, :cond_0

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v1

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/nativead/w;->G()Ljava/util/Map;

    move-result-object v5

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {v6}, Ljava/lang/Object;->hashCode()I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    iget-object v7, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    invoke-virtual {v7}, Landroid/view/ViewGroup;->getHeight()I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {v5, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    if-nez v1, :cond_1

    invoke-static {v4, v3}, Ljava/lang/Math;->min(II)I

    move-result v1

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    int-to-double v4, v0

    int-to-double v6, v2

    int-to-double v1, v1

    div-double/2addr v6, v1

    div-double/2addr v4, v6

    double-to-int v1, v4

    invoke-static {v3, v0, v1}, Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/View;II)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$2;->b:Lcom/sigmob/sdk/nativead/n;

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$2;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/sdk/nativead/n;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/w$2;->a:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/w$2;->c:Lcom/sigmob/sdk/nativead/w;

    invoke-static {v1}, Lcom/sigmob/sdk/nativead/w;->a(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/sdk/nativead/n;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    :cond_2
    return-void
.end method
